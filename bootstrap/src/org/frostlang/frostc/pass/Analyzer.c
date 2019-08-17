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
#include "frost/collections/CollectionView.h"
#include "frost/core/Weak.h"
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
typedef frost$core$Bit (*$fn103)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn111)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn125)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn133)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn136)(frost$core$Object*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn150)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn207)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn219)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$Type* (*$fn246)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn277)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn290)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn303)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn316)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn340)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn362)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn375)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn388)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn401)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn425)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn481)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn491)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn535)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn587)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn614)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn623)(frost$core$Object*);
typedef frost$core$String* (*$fn631)(frost$core$Object*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn652)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn668)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn671)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn710)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn754)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn798)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn818)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn856)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn868)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$String* (*$fn888)(frost$core$Object*);
typedef frost$core$Int (*$fn946)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1013)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$String* (*$fn1031)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1060)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn1074)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1077)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1088)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1093)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1102)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1105)(org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn1121)(org$frostlang$frostc$LinkedList*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1142)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn1155)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1159)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1164)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1206)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1244)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1266)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1319)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1405)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1478)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1486)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1492)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1501)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1506)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1544)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn1554)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1630)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1653)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1683)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef void (*$fn1689)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*, frost$core$Int, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn1704)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn1728)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1753)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1764)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Object* (*$fn1788)(org$frostlang$frostc$LinkedList*);
typedef frost$core$String* (*$fn1791)(frost$core$Object*);
typedef frost$core$Int (*$fn1808)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1830)(frost$core$Object*);
typedef frost$core$Int (*$fn1849)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1865)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1896)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1900)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1905)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1913)(frost$core$Object*);
typedef frost$core$String* (*$fn1936)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1946)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1954)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1960)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1969)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1973)(frost$core$Object*);
typedef frost$core$Object* (*$fn1979)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1982)(frost$core$Object*);
typedef frost$core$Int (*$fn2002)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2059)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2084)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2088)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2093)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2108)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn2116)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2122)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2133)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2139)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2159)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2183)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2195)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2199)(frost$collections$Iterator*);
typedef void (*$fn2209)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2218)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2222)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2227)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2244)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2266)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2279)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn2298)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Object* (*$fn2318)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2321)(org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn2331)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2337)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2340)(org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2345)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2351)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn2355)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2362)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Int (*$fn2375)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2403)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2407)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2412)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2420)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2431)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2456)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn2477)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72", 34, -7908766228797686597, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -6163429507827714296, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6d\x61\x79\x20\x62\x65\x20\x6e\x75\x6c\x6c", 13, -372519665545753491, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20", 6, 2389068132842847038, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64", 25, 6096059661963607284, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x3a\x20", 23, 7177047828670113807, NULL };
static frost$core$String $s893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s894 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s954 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x27", 19, 3303349432046188092, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 4880269855066615229, NULL };
static frost$core$String $s1795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s1835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s1857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1916 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1939 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s2067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 2495389199813969088, NULL };
static frost$core$String $s2323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s2383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp93 = &$tmp92->typeKind;
org$frostlang$frostc$Type$Kind $tmp94 = *$tmp93;
org$frostlang$frostc$Type$Kind$wrapper* $tmp95;
$tmp95 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp95->value = $tmp94;
frost$core$Int $tmp96 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:401:31
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp115 = &$tmp114->typeKind;
org$frostlang$frostc$Type$Kind $tmp116 = *$tmp115;
org$frostlang$frostc$Type$Kind$wrapper* $tmp117;
$tmp117 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp117->value = $tmp116;
frost$core$Int $tmp118 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:401:31
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
org$frostlang$frostc$Compiler$warn$org$frostlang$frostc$Position$frost$core$String($tmp129, $tmp130, $tmp140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:160
frost$core$Bit $tmp142 = *(&local7);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:161
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp144 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp145 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp144, $tmp145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$Type* $tmp146 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp147 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp144;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:164
org$frostlang$frostc$IR$Value* $tmp148 = *(&local5);
$fn150 $tmp149 = ($fn150) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp151 = $tmp149(param0, $tmp148, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
org$frostlang$frostc$Type* $tmp152 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp153 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp151;
block21:;
org$frostlang$frostc$Type* $tmp154 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp155 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block6:;
frost$core$Int $tmp156 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:167:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp157 = $tmp38.value;
int64_t $tmp158 = $tmp156.value;
bool $tmp159 = $tmp157 == $tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp162 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp163 = *$tmp162;
org$frostlang$frostc$ClassDecl** $tmp164 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp165 = *$tmp164;
*(&local12) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
org$frostlang$frostc$ClassDecl* $tmp166 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local12) = $tmp165;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:168
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp167 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp168 = *(&local12);
org$frostlang$frostc$Type** $tmp169 = &$tmp168->type;
org$frostlang$frostc$Type* $tmp170 = *$tmp169;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp167, $tmp170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
org$frostlang$frostc$ClassDecl* $tmp171 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local12) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp167;
block24:;
frost$core$Int $tmp172 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:170:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp173 = $tmp38.value;
int64_t $tmp174 = $tmp172.value;
bool $tmp175 = $tmp173 == $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp178 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp179 = *$tmp178;
org$frostlang$frostc$ClassDecl** $tmp180 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp181 = *$tmp180;
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
org$frostlang$frostc$ClassDecl* $tmp182 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local13) = $tmp181;
org$frostlang$frostc$FixedArray** $tmp183 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp184 = *$tmp183;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
org$frostlang$frostc$FixedArray* $tmp185 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local14) = $tmp184;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:171
org$frostlang$frostc$ClassDecl* $tmp186 = *(&local13);
org$frostlang$frostc$Type** $tmp187 = &$tmp186->type;
org$frostlang$frostc$Type* $tmp188 = *$tmp187;
org$frostlang$frostc$Compiler** $tmp189 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp190 = *$tmp189;
org$frostlang$frostc$Type** $tmp191 = &$tmp190->BIT_TYPE;
org$frostlang$frostc$Type* $tmp192 = *$tmp191;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:171:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp193 = &((org$frostlang$frostc$Symbol*) $tmp188)->name;
frost$core$String* $tmp194 = *$tmp193;
frost$core$String** $tmp195 = &((org$frostlang$frostc$Symbol*) $tmp192)->name;
frost$core$String* $tmp196 = *$tmp195;
frost$core$Bit $tmp197 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp194, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Type$Kind* $tmp199 = &$tmp188->typeKind;
org$frostlang$frostc$Type$Kind $tmp200 = *$tmp199;
org$frostlang$frostc$Type$Kind$wrapper* $tmp201;
$tmp201 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp201->value = $tmp200;
org$frostlang$frostc$Type$Kind* $tmp202 = &$tmp192->typeKind;
org$frostlang$frostc$Type$Kind $tmp203 = *$tmp202;
org$frostlang$frostc$Type$Kind$wrapper* $tmp204;
$tmp204 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp204->value = $tmp203;
ITable* $tmp205 = ((frost$core$Equatable*) $tmp201)->$class->itable;
while ($tmp205->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp205 = $tmp205->next;
}
$fn207 $tmp206 = $tmp205->methods[0];
frost$core$Bit $tmp208 = $tmp206(((frost$core$Equatable*) $tmp201), ((frost$core$Equatable*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp204)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp201)));
*(&local15) = $tmp208;
goto block34;
block33:;
*(&local15) = $tmp197;
goto block34;
block34:;
frost$core$Bit $tmp209 = *(&local15);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:172
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp211 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp212 = *(&local13);
org$frostlang$frostc$Type** $tmp213 = &$tmp212->type;
org$frostlang$frostc$Type* $tmp214 = *$tmp213;
org$frostlang$frostc$FixedArray* $tmp215 = *(&local14);
frost$core$Int $tmp216 = (frost$core$Int) {0u};
frost$core$Object* $tmp217 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp215, $tmp216);
$fn219 $tmp218 = ($fn219) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp220 = $tmp218(param0, ((org$frostlang$frostc$IR$Value*) $tmp217), param2);
frost$collections$ListView** $tmp221 = &$tmp220->nonNullImplications;
frost$collections$ListView* $tmp222 = *$tmp221;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp211, $tmp214, $tmp222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q($tmp217);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlang$frostc$FixedArray* $tmp223 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp224 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp211;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:174
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp225 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp226 = *(&local13);
org$frostlang$frostc$Type** $tmp227 = &$tmp226->type;
org$frostlang$frostc$Type* $tmp228 = *$tmp227;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp225, $tmp228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
org$frostlang$frostc$FixedArray* $tmp229 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp230 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp225;
block27:;
frost$core$Int $tmp231 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:176:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp232 = $tmp38.value;
int64_t $tmp233 = $tmp231.value;
bool $tmp234 = $tmp232 == $tmp233;
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp237 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp238 = *$tmp237;
org$frostlang$frostc$IR$Value** $tmp239 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp240 = *$tmp239;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
org$frostlang$frostc$IR$Value* $tmp241 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local16) = $tmp240;
org$frostlang$frostc$FixedArray** $tmp242 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp243 = *$tmp242;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:177
org$frostlang$frostc$IR$Value* $tmp244 = *(&local16);
$fn246 $tmp245 = ($fn246) $tmp244->$class->vtable[2];
org$frostlang$frostc$Type* $tmp247 = $tmp245($tmp244);
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
org$frostlang$frostc$Type* $tmp248 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local17) = $tmp247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:178
org$frostlang$frostc$Type* $tmp249 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:178:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp250 = &((org$frostlang$frostc$Symbol*) $tmp249)->name;
frost$core$String* $tmp251 = *$tmp250;
frost$core$Bit $tmp252 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp251, &$s253);
bool $tmp254 = $tmp252.value;
if ($tmp254) goto block38; else goto block40;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:179
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp255 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp256 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:179:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp257 = &$tmp256->_subtypes;
org$frostlang$frostc$FixedArray* $tmp258 = *$tmp257;
frost$core$Bit $tmp259 = (frost$core$Bit) {$tmp258 != NULL};
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block43; else goto block44;
block44:;
frost$core$Int $tmp261 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s262, $tmp261);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp263 = &$tmp256->_subtypes;
org$frostlang$frostc$FixedArray* $tmp264 = *$tmp263;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Int $tmp265 = (frost$core$Int) {1u};
frost$core$Object* $tmp266 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp264, $tmp265);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:179:58
org$frostlang$frostc$Type$Kind* $tmp267 = &((org$frostlang$frostc$Type*) $tmp266)->typeKind;
org$frostlang$frostc$Type$Kind $tmp268 = *$tmp267;
org$frostlang$frostc$Type$Kind$wrapper* $tmp269;
$tmp269 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp269->value = $tmp268;
frost$core$Int $tmp270 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp271 = &(&local19)->$rawValue;
*$tmp271 = $tmp270;
org$frostlang$frostc$Type$Kind $tmp272 = *(&local19);
*(&local18) = $tmp272;
org$frostlang$frostc$Type$Kind $tmp273 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp274;
$tmp274 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp274->value = $tmp273;
ITable* $tmp275 = ((frost$core$Equatable*) $tmp269)->$class->itable;
while ($tmp275->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[0];
frost$core$Bit $tmp278 = $tmp276(((frost$core$Equatable*) $tmp269), ((frost$core$Equatable*) $tmp274));
bool $tmp279 = $tmp278.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp274)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp269)));
if ($tmp279) goto block46; else goto block50;
block50:;
org$frostlang$frostc$Type$Kind* $tmp280 = &((org$frostlang$frostc$Type*) $tmp266)->typeKind;
org$frostlang$frostc$Type$Kind $tmp281 = *$tmp280;
org$frostlang$frostc$Type$Kind$wrapper* $tmp282;
$tmp282 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp282->value = $tmp281;
frost$core$Int $tmp283 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp284 = &(&local21)->$rawValue;
*$tmp284 = $tmp283;
org$frostlang$frostc$Type$Kind $tmp285 = *(&local21);
*(&local20) = $tmp285;
org$frostlang$frostc$Type$Kind $tmp286 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp287;
$tmp287 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp287->value = $tmp286;
ITable* $tmp288 = ((frost$core$Equatable*) $tmp282)->$class->itable;
while ($tmp288->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp288 = $tmp288->next;
}
$fn290 $tmp289 = $tmp288->methods[0];
frost$core$Bit $tmp291 = $tmp289(((frost$core$Equatable*) $tmp282), ((frost$core$Equatable*) $tmp287));
bool $tmp292 = $tmp291.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp287)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp282)));
if ($tmp292) goto block46; else goto block49;
block49:;
org$frostlang$frostc$Type$Kind* $tmp293 = &((org$frostlang$frostc$Type*) $tmp266)->typeKind;
org$frostlang$frostc$Type$Kind $tmp294 = *$tmp293;
org$frostlang$frostc$Type$Kind$wrapper* $tmp295;
$tmp295 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp295->value = $tmp294;
frost$core$Int $tmp296 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp297 = &(&local23)->$rawValue;
*$tmp297 = $tmp296;
org$frostlang$frostc$Type$Kind $tmp298 = *(&local23);
*(&local22) = $tmp298;
org$frostlang$frostc$Type$Kind $tmp299 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp300;
$tmp300 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp300->value = $tmp299;
ITable* $tmp301 = ((frost$core$Equatable*) $tmp295)->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[0];
frost$core$Bit $tmp304 = $tmp302(((frost$core$Equatable*) $tmp295), ((frost$core$Equatable*) $tmp300));
bool $tmp305 = $tmp304.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp300)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp295)));
if ($tmp305) goto block46; else goto block48;
block48:;
org$frostlang$frostc$Type$Kind* $tmp306 = &((org$frostlang$frostc$Type*) $tmp266)->typeKind;
org$frostlang$frostc$Type$Kind $tmp307 = *$tmp306;
org$frostlang$frostc$Type$Kind$wrapper* $tmp308;
$tmp308 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp308->value = $tmp307;
frost$core$Int $tmp309 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp310 = &(&local25)->$rawValue;
*$tmp310 = $tmp309;
org$frostlang$frostc$Type$Kind $tmp311 = *(&local25);
*(&local24) = $tmp311;
org$frostlang$frostc$Type$Kind $tmp312 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp313;
$tmp313 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp313->value = $tmp312;
ITable* $tmp314 = ((frost$core$Equatable*) $tmp308)->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$core$Bit $tmp317 = $tmp315(((frost$core$Equatable*) $tmp308), ((frost$core$Equatable*) $tmp313));
bool $tmp318 = $tmp317.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp313)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp308)));
if ($tmp318) goto block46; else goto block47;
block47:;
frost$core$Int $tmp319 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s320, $tmp319, &$s321);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp322 = &((org$frostlang$frostc$Type*) $tmp266)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp323 = *$tmp322;
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323 != NULL};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block56; else goto block57;
block57:;
frost$core$Int $tmp326 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s327, $tmp326);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp328 = &((org$frostlang$frostc$Type*) $tmp266)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp329 = *$tmp328;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp330 = &((org$frostlang$frostc$Type*) $tmp266)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp331 = *$tmp330;
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331 != NULL};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block59; else goto block60;
block60:;
frost$core$Int $tmp334 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s335, $tmp334);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp336 = &((org$frostlang$frostc$Type*) $tmp266)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp337 = *$tmp336;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
ITable* $tmp338 = ((frost$collections$CollectionView*) $tmp337)->$class->itable;
while ($tmp338->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp338 = $tmp338->next;
}
$fn340 $tmp339 = $tmp338->methods[0];
frost$core$Int $tmp341 = $tmp339(((frost$collections$CollectionView*) $tmp337));
frost$core$Int $tmp342 = (frost$core$Int) {1u};
int64_t $tmp343 = $tmp341.value;
int64_t $tmp344 = $tmp342.value;
int64_t $tmp345 = $tmp343 - $tmp344;
frost$core$Int $tmp346 = (frost$core$Int) {$tmp345};
frost$core$Object* $tmp347 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp329, $tmp346);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp347)));
frost$core$Frost$unref$frost$core$Object$Q($tmp347);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp255, ((org$frostlang$frostc$Type*) $tmp347));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp347)));
frost$core$Frost$unref$frost$core$Object$Q($tmp266);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$Type* $tmp348 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp349 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp255;
block40:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:182
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp350 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp351 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:182:46
org$frostlang$frostc$Type$Kind* $tmp352 = &$tmp351->typeKind;
org$frostlang$frostc$Type$Kind $tmp353 = *$tmp352;
org$frostlang$frostc$Type$Kind$wrapper* $tmp354;
$tmp354 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp354->value = $tmp353;
frost$core$Int $tmp355 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp356 = &(&local27)->$rawValue;
*$tmp356 = $tmp355;
org$frostlang$frostc$Type$Kind $tmp357 = *(&local27);
*(&local26) = $tmp357;
org$frostlang$frostc$Type$Kind $tmp358 = *(&local26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp359;
$tmp359 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp359->value = $tmp358;
ITable* $tmp360 = ((frost$core$Equatable*) $tmp354)->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[0];
frost$core$Bit $tmp363 = $tmp361(((frost$core$Equatable*) $tmp354), ((frost$core$Equatable*) $tmp359));
bool $tmp364 = $tmp363.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp359)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp354)));
if ($tmp364) goto block62; else goto block66;
block66:;
org$frostlang$frostc$Type$Kind* $tmp365 = &$tmp351->typeKind;
org$frostlang$frostc$Type$Kind $tmp366 = *$tmp365;
org$frostlang$frostc$Type$Kind$wrapper* $tmp367;
$tmp367 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp367->value = $tmp366;
frost$core$Int $tmp368 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp369 = &(&local29)->$rawValue;
*$tmp369 = $tmp368;
org$frostlang$frostc$Type$Kind $tmp370 = *(&local29);
*(&local28) = $tmp370;
org$frostlang$frostc$Type$Kind $tmp371 = *(&local28);
org$frostlang$frostc$Type$Kind$wrapper* $tmp372;
$tmp372 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp372->value = $tmp371;
ITable* $tmp373 = ((frost$core$Equatable*) $tmp367)->$class->itable;
while ($tmp373->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp373 = $tmp373->next;
}
$fn375 $tmp374 = $tmp373->methods[0];
frost$core$Bit $tmp376 = $tmp374(((frost$core$Equatable*) $tmp367), ((frost$core$Equatable*) $tmp372));
bool $tmp377 = $tmp376.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp372)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp367)));
if ($tmp377) goto block62; else goto block65;
block65:;
org$frostlang$frostc$Type$Kind* $tmp378 = &$tmp351->typeKind;
org$frostlang$frostc$Type$Kind $tmp379 = *$tmp378;
org$frostlang$frostc$Type$Kind$wrapper* $tmp380;
$tmp380 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp380->value = $tmp379;
frost$core$Int $tmp381 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp382 = &(&local31)->$rawValue;
*$tmp382 = $tmp381;
org$frostlang$frostc$Type$Kind $tmp383 = *(&local31);
*(&local30) = $tmp383;
org$frostlang$frostc$Type$Kind $tmp384 = *(&local30);
org$frostlang$frostc$Type$Kind$wrapper* $tmp385;
$tmp385 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp385->value = $tmp384;
ITable* $tmp386 = ((frost$core$Equatable*) $tmp380)->$class->itable;
while ($tmp386->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp386 = $tmp386->next;
}
$fn388 $tmp387 = $tmp386->methods[0];
frost$core$Bit $tmp389 = $tmp387(((frost$core$Equatable*) $tmp380), ((frost$core$Equatable*) $tmp385));
bool $tmp390 = $tmp389.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp385)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp380)));
if ($tmp390) goto block62; else goto block64;
block64:;
org$frostlang$frostc$Type$Kind* $tmp391 = &$tmp351->typeKind;
org$frostlang$frostc$Type$Kind $tmp392 = *$tmp391;
org$frostlang$frostc$Type$Kind$wrapper* $tmp393;
$tmp393 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp393->value = $tmp392;
frost$core$Int $tmp394 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp395 = &(&local33)->$rawValue;
*$tmp395 = $tmp394;
org$frostlang$frostc$Type$Kind $tmp396 = *(&local33);
*(&local32) = $tmp396;
org$frostlang$frostc$Type$Kind $tmp397 = *(&local32);
org$frostlang$frostc$Type$Kind$wrapper* $tmp398;
$tmp398 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp398->value = $tmp397;
ITable* $tmp399 = ((frost$core$Equatable*) $tmp393)->$class->itable;
while ($tmp399->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp399 = $tmp399->next;
}
$fn401 $tmp400 = $tmp399->methods[0];
frost$core$Bit $tmp402 = $tmp400(((frost$core$Equatable*) $tmp393), ((frost$core$Equatable*) $tmp398));
bool $tmp403 = $tmp402.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp398)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp393)));
if ($tmp403) goto block62; else goto block63;
block63:;
frost$core$Int $tmp404 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s405, $tmp404, &$s406);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp407 = &$tmp351->_subtypes;
org$frostlang$frostc$FixedArray* $tmp408 = *$tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408 != NULL};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block72; else goto block73;
block73:;
frost$core$Int $tmp411 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s412, $tmp411);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp413 = &$tmp351->_subtypes;
org$frostlang$frostc$FixedArray* $tmp414 = *$tmp413;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp415 = &$tmp351->_subtypes;
org$frostlang$frostc$FixedArray* $tmp416 = *$tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416 != NULL};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block75; else goto block76;
block76:;
frost$core$Int $tmp419 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s420, $tmp419);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp421 = &$tmp351->_subtypes;
org$frostlang$frostc$FixedArray* $tmp422 = *$tmp421;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
ITable* $tmp423 = ((frost$collections$CollectionView*) $tmp422)->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[0];
frost$core$Int $tmp426 = $tmp424(((frost$collections$CollectionView*) $tmp422));
frost$core$Int $tmp427 = (frost$core$Int) {1u};
int64_t $tmp428 = $tmp426.value;
int64_t $tmp429 = $tmp427.value;
int64_t $tmp430 = $tmp428 - $tmp429;
frost$core$Int $tmp431 = (frost$core$Int) {$tmp430};
frost$core$Object* $tmp432 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp414, $tmp431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp432)));
frost$core$Frost$unref$frost$core$Object$Q($tmp432);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp350, ((org$frostlang$frostc$Type*) $tmp432));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp432)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
org$frostlang$frostc$Type* $tmp433 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp434 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp350;
block39:;
org$frostlang$frostc$Type* $tmp435 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp436 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block36:;
frost$core$Int $tmp437 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:185:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp438 = $tmp38.value;
int64_t $tmp439 = $tmp437.value;
bool $tmp440 = $tmp438 == $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Position* $tmp443 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp444 = *$tmp443;
org$frostlang$frostc$IR$Value** $tmp445 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp446 = *$tmp445;
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
org$frostlang$frostc$IR$Value* $tmp447 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local34) = $tmp446;
org$frostlang$frostc$FieldDecl** $tmp448 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp449 = *$tmp448;
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
org$frostlang$frostc$FieldDecl* $tmp450 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local35) = $tmp449;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:186
org$frostlang$frostc$FieldDecl* $tmp451 = *(&local35);
frost$core$Weak** $tmp452 = &$tmp451->owner;
frost$core$Weak* $tmp453 = *$tmp452;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:186:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp454 = &$tmp453->_valid;
frost$core$Bit $tmp455 = *$tmp454;
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block85; else goto block86;
block86:;
frost$core$Int $tmp457 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s458, $tmp457);
abort(); // unreachable
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp459 = &$tmp453->value;
frost$core$Object* $tmp460 = *$tmp459;
frost$core$Frost$ref$frost$core$Object$Q($tmp460);
org$frostlang$frostc$Type** $tmp461 = &((org$frostlang$frostc$ClassDecl*) $tmp460)->type;
org$frostlang$frostc$Type* $tmp462 = *$tmp461;
org$frostlang$frostc$Compiler** $tmp463 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp464 = *$tmp463;
org$frostlang$frostc$Type** $tmp465 = &$tmp464->BIT_TYPE;
org$frostlang$frostc$Type* $tmp466 = *$tmp465;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:186:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp467 = &((org$frostlang$frostc$Symbol*) $tmp462)->name;
frost$core$String* $tmp468 = *$tmp467;
frost$core$String** $tmp469 = &((org$frostlang$frostc$Symbol*) $tmp466)->name;
frost$core$String* $tmp470 = *$tmp469;
frost$core$Bit $tmp471 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp468, $tmp470);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Type$Kind* $tmp473 = &$tmp462->typeKind;
org$frostlang$frostc$Type$Kind $tmp474 = *$tmp473;
org$frostlang$frostc$Type$Kind$wrapper* $tmp475;
$tmp475 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp475->value = $tmp474;
org$frostlang$frostc$Type$Kind* $tmp476 = &$tmp466->typeKind;
org$frostlang$frostc$Type$Kind $tmp477 = *$tmp476;
org$frostlang$frostc$Type$Kind$wrapper* $tmp478;
$tmp478 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp478->value = $tmp477;
ITable* $tmp479 = ((frost$core$Equatable*) $tmp475)->$class->itable;
while ($tmp479->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp479 = $tmp479->next;
}
$fn481 $tmp480 = $tmp479->methods[0];
frost$core$Bit $tmp482 = $tmp480(((frost$core$Equatable*) $tmp475), ((frost$core$Equatable*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp478)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp475)));
*(&local36) = $tmp482;
goto block90;
block89:;
*(&local36) = $tmp471;
goto block90;
block90:;
frost$core$Bit $tmp483 = *(&local36);
bool $tmp484 = $tmp483.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp460);
if ($tmp484) goto block80; else goto block82;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:187
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp485 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp486 = *(&local35);
org$frostlang$frostc$Type** $tmp487 = &$tmp486->type;
org$frostlang$frostc$Type* $tmp488 = *$tmp487;
org$frostlang$frostc$IR$Value* $tmp489 = *(&local34);
$fn491 $tmp490 = ($fn491) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp492 = $tmp490(param0, $tmp489, param2);
frost$collections$ListView** $tmp493 = &$tmp492->nonNullImplications;
frost$collections$ListView* $tmp494 = *$tmp493;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp485, $tmp488, $tmp494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
org$frostlang$frostc$FieldDecl* $tmp495 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp496 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp485;
block82:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:190
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp497 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp498 = *(&local35);
org$frostlang$frostc$Type** $tmp499 = &$tmp498->type;
org$frostlang$frostc$Type* $tmp500 = *$tmp499;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp497, $tmp500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
org$frostlang$frostc$FieldDecl* $tmp501 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp502 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp497;
block81:;
org$frostlang$frostc$FieldDecl* $tmp503 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp504 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block78:;
frost$core$Int $tmp505 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:193:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp506 = $tmp38.value;
int64_t $tmp507 = $tmp505.value;
bool $tmp508 = $tmp506 == $tmp507;
frost$core$Bit $tmp509 = (frost$core$Bit) {$tmp508};
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Position* $tmp511 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp512 = *$tmp511;
org$frostlang$frostc$IR$Value** $tmp513 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp514 = *$tmp513;
org$frostlang$frostc$ChoiceCase** $tmp515 = (org$frostlang$frostc$ChoiceCase**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp516 = *$tmp515;
*(&local37) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
org$frostlang$frostc$ChoiceCase* $tmp517 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local37) = $tmp516;
frost$core$Int* $tmp518 = (frost$core$Int*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
frost$core$Int $tmp519 = *$tmp518;
*(&local38) = $tmp519;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:194
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp520 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp521 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp522 = *$tmp521;
org$frostlang$frostc$ChoiceCase* $tmp523 = *(&local37);
frost$collections$Array** $tmp524 = &$tmp523->fields;
frost$collections$Array* $tmp525 = *$tmp524;
frost$core$Int $tmp526 = *(&local38);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:194:72
frost$core$Int $tmp527 = (frost$core$Int) {0u};
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527.value;
bool $tmp530 = $tmp528 >= $tmp529;
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block97; else goto block96;
block97:;
ITable* $tmp533 = ((frost$collections$CollectionView*) $tmp525)->$class->itable;
while ($tmp533->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp533 = $tmp533->next;
}
$fn535 $tmp534 = $tmp533->methods[0];
frost$core$Int $tmp536 = $tmp534(((frost$collections$CollectionView*) $tmp525));
int64_t $tmp537 = $tmp526.value;
int64_t $tmp538 = $tmp536.value;
bool $tmp539 = $tmp537 < $tmp538;
frost$core$Bit $tmp540 = (frost$core$Bit) {$tmp539};
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block95; else goto block96;
block96:;
frost$core$Int $tmp542 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s543, $tmp542, &$s544);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp545 = &$tmp525->data;
frost$core$Object** $tmp546 = *$tmp545;
frost$core$Int64 $tmp547 = frost$core$Int64$init$frost$core$Int($tmp526);
int64_t $tmp548 = $tmp547.value;
frost$core$Object* $tmp549 = $tmp546[$tmp548];
frost$core$Frost$ref$frost$core$Object$Q($tmp549);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:194:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp550 = &$tmp522->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp551 = *$tmp550;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp552 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp553 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp552, $tmp553);
frost$collections$Array$add$frost$collections$Array$T($tmp552, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp549)));
org$frostlang$frostc$Type* $tmp554 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp551, ((frost$collections$ListView*) $tmp552));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp520, $tmp554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q($tmp549);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
org$frostlang$frostc$ChoiceCase* $tmp555 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local37) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp520;
block92:;
frost$core$Int $tmp556 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:196:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp557 = $tmp38.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 == $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp562 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp563 = *$tmp562;
org$frostlang$frostc$IR$Value** $tmp564 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp565 = *$tmp564;
org$frostlang$frostc$FieldDecl** $tmp566 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp567 = *$tmp566;
*(&local39) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
org$frostlang$frostc$FieldDecl* $tmp568 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local39) = $tmp567;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp569 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp570 = *(&local39);
org$frostlang$frostc$Type** $tmp571 = &$tmp570->type;
org$frostlang$frostc$Type* $tmp572 = *$tmp571;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp569, $tmp572);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
org$frostlang$frostc$FieldDecl* $tmp573 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local39) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp569;
block100:;
frost$core$Int $tmp574 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:199:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp575 = $tmp38.value;
int64_t $tmp576 = $tmp574.value;
bool $tmp577 = $tmp575 == $tmp576;
frost$core$Bit $tmp578 = (frost$core$Bit) {$tmp577};
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp580 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp581 = *$tmp580;
*(&local40) = $tmp581;
org$frostlang$frostc$IR$Value** $tmp582 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp583 = *$tmp582;
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
org$frostlang$frostc$IR$Value* $tmp584 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local41) = $tmp583;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:200
org$frostlang$frostc$IR$Value* $tmp585 = *(&local41);
$fn587 $tmp586 = ($fn587) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp588 = $tmp586(param0, $tmp585, param2);
*(&local42) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp589 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local42) = $tmp588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:201
frost$core$Bit* $tmp590 = &param0->reportErrors;
frost$core$Bit $tmp591 = *$tmp590;
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block107; else goto block106;
block107:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp593 = *(&local42);
org$frostlang$frostc$Type** $tmp594 = &$tmp593->type;
org$frostlang$frostc$Type* $tmp595 = *$tmp594;
org$frostlang$frostc$Compiler** $tmp596 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp597 = *$tmp596;
org$frostlang$frostc$Type** $tmp598 = &$tmp597->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp599 = *$tmp598;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:201:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp600 = &((org$frostlang$frostc$Symbol*) $tmp595)->name;
frost$core$String* $tmp601 = *$tmp600;
frost$core$String** $tmp602 = &((org$frostlang$frostc$Symbol*) $tmp599)->name;
frost$core$String* $tmp603 = *$tmp602;
frost$core$Bit $tmp604 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp601, $tmp603);
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block109; else goto block110;
block109:;
org$frostlang$frostc$Type$Kind* $tmp606 = &$tmp595->typeKind;
org$frostlang$frostc$Type$Kind $tmp607 = *$tmp606;
org$frostlang$frostc$Type$Kind$wrapper* $tmp608;
$tmp608 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp608->value = $tmp607;
org$frostlang$frostc$Type$Kind* $tmp609 = &$tmp599->typeKind;
org$frostlang$frostc$Type$Kind $tmp610 = *$tmp609;
org$frostlang$frostc$Type$Kind$wrapper* $tmp611;
$tmp611 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp611->value = $tmp610;
ITable* $tmp612 = ((frost$core$Equatable*) $tmp608)->$class->itable;
while ($tmp612->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp612 = $tmp612->next;
}
$fn614 $tmp613 = $tmp612->methods[0];
frost$core$Bit $tmp615 = $tmp613(((frost$core$Equatable*) $tmp608), ((frost$core$Equatable*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp611)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp608)));
*(&local43) = $tmp615;
goto block111;
block110:;
*(&local43) = $tmp604;
goto block111;
block111:;
frost$core$Bit $tmp616 = *(&local43);
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block105; else goto block106;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:202
org$frostlang$frostc$Compiler** $tmp618 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp619 = *$tmp618;
org$frostlang$frostc$Position $tmp620 = *(&local40);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp621;
$tmp621 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp621->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:202:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn623 $tmp622 = ($fn623) ((frost$core$Object*) $tmp621)->$class->vtable[0];
frost$core$String* $tmp624 = $tmp622(((frost$core$Object*) $tmp621));
frost$core$String* $tmp625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s626, $tmp624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$String* $tmp627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp625, &$s628);
org$frostlang$frostc$IR$Value* $tmp629 = *(&local41);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:202:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn631 $tmp630 = ($fn631) ((frost$core$Object*) $tmp629)->$class->vtable[0];
frost$core$String* $tmp632 = $tmp630(((frost$core$Object*) $tmp629));
frost$core$String* $tmp633 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp627, $tmp632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$String* $tmp634 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp633, &$s635);
org$frostlang$frostc$Compiler$warn$org$frostlang$frostc$Position$frost$core$String($tmp619, $tmp620, $tmp634);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
goto block106;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:204
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp636 = *(&local42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp637 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local42) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp638 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp636;
block103:;
frost$core$Int $tmp639 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:206:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp640 = $tmp38.value;
int64_t $tmp641 = $tmp639.value;
bool $tmp642 = $tmp640 == $tmp641;
frost$core$Bit $tmp643 = (frost$core$Bit) {$tmp642};
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block114; else goto block115;
block114:;
org$frostlang$frostc$Position* $tmp645 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp646 = *$tmp645;
org$frostlang$frostc$IR$Value** $tmp647 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp648 = *$tmp647;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
org$frostlang$frostc$IR$Value* $tmp649 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local44) = $tmp648;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:207
org$frostlang$frostc$IR$Value* $tmp650 = *(&local44);
$fn652 $tmp651 = ($fn652) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp653 = $tmp651(param0, $tmp650, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
org$frostlang$frostc$IR$Value* $tmp654 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp653;
block115:;
frost$core$Int $tmp655 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:209:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp656 = $tmp38.value;
int64_t $tmp657 = $tmp655.value;
bool $tmp658 = $tmp656 == $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block117; else goto block118;
block117:;
org$frostlang$frostc$Position* $tmp661 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp662 = *$tmp661;
org$frostlang$frostc$IR$Value** $tmp663 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp664 = *$tmp663;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
org$frostlang$frostc$IR$Value* $tmp665 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local45) = $tmp664;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:210
org$frostlang$frostc$IR$Value* $tmp666 = *(&local45);
$fn668 $tmp667 = ($fn668) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp669 = $tmp667(param0, $tmp666, param2);
$fn671 $tmp670 = ($fn671) $tmp669->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp672 = $tmp670($tmp669);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
org$frostlang$frostc$IR$Value* $tmp673 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp672;
block118:;
frost$core$Int $tmp674 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:212:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp675 = $tmp38.value;
int64_t $tmp676 = $tmp674.value;
bool $tmp677 = $tmp675 == $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block120; else goto block121;
block120:;
org$frostlang$frostc$Position* $tmp680 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp681 = *$tmp680;
org$frostlang$frostc$IR$Value** $tmp682 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp683 = *$tmp682;
org$frostlang$frostc$Type** $tmp684 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$Type* $tmp685 = *$tmp684;
*(&local46) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
org$frostlang$frostc$Type* $tmp686 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local46) = $tmp685;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:213
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp687 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp688 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp689 = *$tmp688;
org$frostlang$frostc$Type* $tmp690 = *(&local46);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:213:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp691 = &$tmp689->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp692 = *$tmp691;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp693 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp694 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp693, $tmp694);
frost$collections$Array$add$frost$collections$Array$T($tmp693, ((frost$core$Object*) $tmp690));
org$frostlang$frostc$Type* $tmp695 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp692, ((frost$collections$ListView*) $tmp693));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp687, $tmp695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
org$frostlang$frostc$Type* $tmp696 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local46) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp687;
block121:;
frost$core$Int $tmp697 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:215:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp698 = $tmp38.value;
int64_t $tmp699 = $tmp697.value;
bool $tmp700 = $tmp698 == $tmp699;
frost$core$Bit $tmp701 = (frost$core$Bit) {$tmp700};
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block124; else goto block125;
block124:;
org$frostlang$frostc$Position* $tmp703 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp704 = *$tmp703;
org$frostlang$frostc$IR$Value** $tmp705 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp706 = *$tmp705;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
org$frostlang$frostc$IR$Value* $tmp707 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local47) = $tmp706;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:216
org$frostlang$frostc$IR$Value* $tmp708 = *(&local47);
$fn710 $tmp709 = ($fn710) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp711 = $tmp709(param0, $tmp708, param2);
*(&local48) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp712 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local48) = $tmp711;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:217
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp713 = *(&local48);
org$frostlang$frostc$Type** $tmp714 = &$tmp713->type;
org$frostlang$frostc$Type* $tmp715 = *$tmp714;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:217:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp716 = &((org$frostlang$frostc$Symbol*) $tmp715)->name;
frost$core$String* $tmp717 = *$tmp716;
frost$core$Bit $tmp718 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp717, &$s719);
bool $tmp720 = $tmp718.value;
if ($tmp720) goto block128; else goto block129;
block129:;
frost$core$Int $tmp721 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s722, $tmp721);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:218
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp723 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp724 = *(&local48);
org$frostlang$frostc$Type** $tmp725 = &$tmp724->type;
org$frostlang$frostc$Type* $tmp726 = *$tmp725;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:218:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp727 = &$tmp726->_subtypes;
org$frostlang$frostc$FixedArray* $tmp728 = *$tmp727;
frost$core$Bit $tmp729 = (frost$core$Bit) {$tmp728 != NULL};
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block131; else goto block132;
block132:;
frost$core$Int $tmp731 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s732, $tmp731);
abort(); // unreachable
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp733 = &$tmp726->_subtypes;
org$frostlang$frostc$FixedArray* $tmp734 = *$tmp733;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Int $tmp735 = (frost$core$Int) {1u};
frost$core$Object* $tmp736 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp734, $tmp735);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp723, ((org$frostlang$frostc$Type*) $tmp736));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$Frost$unref$frost$core$Object$Q($tmp736);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp737 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local48) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp738 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp723;
block125:;
frost$core$Int $tmp739 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:220:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp740 = $tmp38.value;
int64_t $tmp741 = $tmp739.value;
bool $tmp742 = $tmp740 == $tmp741;
frost$core$Bit $tmp743 = (frost$core$Bit) {$tmp742};
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block133; else goto block134;
block133:;
org$frostlang$frostc$Position* $tmp745 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp746 = *$tmp745;
org$frostlang$frostc$IR$Value** $tmp747 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp748 = *$tmp747;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
org$frostlang$frostc$IR$Value* $tmp749 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local49) = $tmp748;
org$frostlang$frostc$IR$Value** $tmp750 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp751 = *$tmp750;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:221
org$frostlang$frostc$IR$Value* $tmp752 = *(&local49);
$fn754 $tmp753 = ($fn754) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp755 = $tmp753(param0, $tmp752, param2);
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp756 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local50) = $tmp755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:222
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp757 = *(&local50);
org$frostlang$frostc$Type** $tmp758 = &$tmp757->type;
org$frostlang$frostc$Type* $tmp759 = *$tmp758;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:222:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp760 = &((org$frostlang$frostc$Symbol*) $tmp759)->name;
frost$core$String* $tmp761 = *$tmp760;
frost$core$Bit $tmp762 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp761, &$s763);
bool $tmp764 = $tmp762.value;
if ($tmp764) goto block137; else goto block138;
block138:;
frost$core$Int $tmp765 = (frost$core$Int) {222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s766, $tmp765);
abort(); // unreachable
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:223
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp767 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp768 = *(&local50);
org$frostlang$frostc$Type** $tmp769 = &$tmp768->type;
org$frostlang$frostc$Type* $tmp770 = *$tmp769;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:223:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp771 = &$tmp770->_subtypes;
org$frostlang$frostc$FixedArray* $tmp772 = *$tmp771;
frost$core$Bit $tmp773 = (frost$core$Bit) {$tmp772 != NULL};
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block140; else goto block141;
block141:;
frost$core$Int $tmp775 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s776, $tmp775);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp777 = &$tmp770->_subtypes;
org$frostlang$frostc$FixedArray* $tmp778 = *$tmp777;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Int $tmp779 = (frost$core$Int) {1u};
frost$core$Object* $tmp780 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp778, $tmp779);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp767, ((org$frostlang$frostc$Type*) $tmp780));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q($tmp780);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp781 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp782 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp767;
block134:;
frost$core$Int $tmp783 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:225:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp784 = $tmp38.value;
int64_t $tmp785 = $tmp783.value;
bool $tmp786 = $tmp784 == $tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp789 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp790 = *$tmp789;
org$frostlang$frostc$IR$Value** $tmp791 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp792 = *$tmp791;
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
org$frostlang$frostc$IR$Value* $tmp793 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local51) = $tmp792;
org$frostlang$frostc$IR$Value** $tmp794 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp795 = *$tmp794;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:226
org$frostlang$frostc$IR$Value* $tmp796 = *(&local51);
$fn798 $tmp797 = ($fn798) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp799 = $tmp797(param0, $tmp796, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
org$frostlang$frostc$IR$Value* $tmp800 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp799;
block143:;
frost$core$Int $tmp801 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:228:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp802 = $tmp38.value;
int64_t $tmp803 = $tmp801.value;
bool $tmp804 = $tmp802 == $tmp803;
frost$core$Bit $tmp805 = (frost$core$Bit) {$tmp804};
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block145; else goto block146;
block145:;
org$frostlang$frostc$Position* $tmp807 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp808 = *$tmp807;
org$frostlang$frostc$IR$Value** $tmp809 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp810 = *$tmp809;
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
org$frostlang$frostc$IR$Value* $tmp811 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local52) = $tmp810;
org$frostlang$frostc$IR$Value** $tmp812 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp813 = *$tmp812;
org$frostlang$frostc$IR$Value** $tmp814 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp815 = *$tmp814;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:229
org$frostlang$frostc$IR$Value* $tmp816 = *(&local52);
$fn818 $tmp817 = ($fn818) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp819 = $tmp817(param0, $tmp816, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
org$frostlang$frostc$IR$Value* $tmp820 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp819;
block146:;
frost$core$Int $tmp821 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:231:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp822 = $tmp38.value;
int64_t $tmp823 = $tmp821.value;
bool $tmp824 = $tmp822 == $tmp823;
frost$core$Bit $tmp825 = (frost$core$Bit) {$tmp824};
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block148; else goto block149;
block148:;
org$frostlang$frostc$Position* $tmp827 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp828 = *$tmp827;
org$frostlang$frostc$MethodDecl** $tmp829 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp830 = *$tmp829;
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
org$frostlang$frostc$MethodDecl* $tmp831 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local53) = $tmp830;
org$frostlang$frostc$FixedArray** $tmp832 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp833 = *$tmp832;
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
org$frostlang$frostc$FixedArray* $tmp834 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local54) = $tmp833;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:232
org$frostlang$frostc$MethodDecl* $tmp835 = *(&local53);
org$frostlang$frostc$Type** $tmp836 = &$tmp835->returnType;
org$frostlang$frostc$Type* $tmp837 = *$tmp836;
org$frostlang$frostc$Compiler** $tmp838 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp839 = *$tmp838;
org$frostlang$frostc$Type** $tmp840 = &$tmp839->BIT_TYPE;
org$frostlang$frostc$Type* $tmp841 = *$tmp840;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:232:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp842 = &((org$frostlang$frostc$Symbol*) $tmp837)->name;
frost$core$String* $tmp843 = *$tmp842;
frost$core$String** $tmp844 = &((org$frostlang$frostc$Symbol*) $tmp841)->name;
frost$core$String* $tmp845 = *$tmp844;
frost$core$Bit $tmp846 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp843, $tmp845);
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block155; else goto block156;
block155:;
org$frostlang$frostc$Type$Kind* $tmp848 = &$tmp837->typeKind;
org$frostlang$frostc$Type$Kind $tmp849 = *$tmp848;
org$frostlang$frostc$Type$Kind$wrapper* $tmp850;
$tmp850 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp850->value = $tmp849;
org$frostlang$frostc$Type$Kind* $tmp851 = &$tmp841->typeKind;
org$frostlang$frostc$Type$Kind $tmp852 = *$tmp851;
org$frostlang$frostc$Type$Kind$wrapper* $tmp853;
$tmp853 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp853->value = $tmp852;
ITable* $tmp854 = ((frost$core$Equatable*) $tmp850)->$class->itable;
while ($tmp854->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp854 = $tmp854->next;
}
$fn856 $tmp855 = $tmp854->methods[0];
frost$core$Bit $tmp857 = $tmp855(((frost$core$Equatable*) $tmp850), ((frost$core$Equatable*) $tmp853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp853)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp850)));
*(&local55) = $tmp857;
goto block157;
block156:;
*(&local55) = $tmp846;
goto block157;
block157:;
frost$core$Bit $tmp858 = *(&local55);
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block151; else goto block153;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:233
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp860 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp861 = *(&local53);
org$frostlang$frostc$Type** $tmp862 = &$tmp861->returnType;
org$frostlang$frostc$Type* $tmp863 = *$tmp862;
org$frostlang$frostc$FixedArray* $tmp864 = *(&local54);
frost$core$Int $tmp865 = (frost$core$Int) {0u};
frost$core$Object* $tmp866 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp864, $tmp865);
$fn868 $tmp867 = ($fn868) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp869 = $tmp867(param0, ((org$frostlang$frostc$IR$Value*) $tmp866), param2);
frost$collections$ListView** $tmp870 = &$tmp869->nonNullImplications;
frost$collections$ListView* $tmp871 = *$tmp870;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp860, $tmp863, $tmp871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q($tmp866);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
org$frostlang$frostc$FixedArray* $tmp872 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp873 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp860;
block153:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:236
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp874 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp875 = *(&local53);
org$frostlang$frostc$Type** $tmp876 = &$tmp875->returnType;
org$frostlang$frostc$Type* $tmp877 = *$tmp876;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp874, $tmp877);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
org$frostlang$frostc$FixedArray* $tmp878 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp879 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp874;
block152:;
org$frostlang$frostc$FixedArray* $tmp880 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp881 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:240
frost$core$Int $tmp882 = (frost$core$Int) {240u};
frost$collections$HashMap** $tmp883 = &param0->statements;
frost$collections$HashMap* $tmp884 = *$tmp883;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp885;
$tmp885 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp885->value = param1;
frost$core$Object* $tmp886 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp884, ((frost$collections$Key*) $tmp885));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:240:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn888 $tmp887 = ($fn888) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp886))->$class->vtable[0];
frost$core$String* $tmp889 = $tmp887(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp886)));
frost$core$String* $tmp890 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s891, $tmp889);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$core$String* $tmp892 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp890, &$s893);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s894, $tmp882, $tmp892);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q($tmp886);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp885)));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
goto block159;
block159:;

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
frost$core$Int* $tmp895 = &param1->$rawValue;
frost$core$Int $tmp896 = *$tmp895;
frost$core$Int $tmp897 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:247:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp898 = $tmp896.value;
int64_t $tmp899 = $tmp897.value;
bool $tmp900 = $tmp898 == $tmp899;
frost$core$Bit $tmp901 = (frost$core$Bit) {$tmp900};
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp903 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp904 = *$tmp903;
org$frostlang$frostc$Type** $tmp905 = (org$frostlang$frostc$Type**) (param1->$data + 1);
org$frostlang$frostc$Type* $tmp906 = *$tmp905;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
org$frostlang$frostc$Type* $tmp907 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local0) = $tmp906;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:248
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp908 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp909 = *(&local0);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp908, $tmp909);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
org$frostlang$frostc$Type* $tmp910 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp908;
block3:;
frost$core$Int $tmp911 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:250:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp912 = $tmp896.value;
int64_t $tmp913 = $tmp911.value;
bool $tmp914 = $tmp912 == $tmp913;
frost$core$Bit $tmp915 = (frost$core$Bit) {$tmp914};
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp917 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp918 = *$tmp917;
org$frostlang$frostc$Type** $tmp919 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp920 = *$tmp919;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
org$frostlang$frostc$Type* $tmp921 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local1) = $tmp920;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:251
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp922 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp923 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp922, $tmp923);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
org$frostlang$frostc$Type* $tmp924 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp922;
block6:;
frost$core$Int $tmp925 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:253:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp926 = $tmp896.value;
int64_t $tmp927 = $tmp925.value;
bool $tmp928 = $tmp926 == $tmp927;
frost$core$Bit $tmp929 = (frost$core$Bit) {$tmp928};
bool $tmp930 = $tmp929.value;
if ($tmp930) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp931 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp932 = *$tmp931;
*(&local2) = $tmp932;
org$frostlang$frostc$Type** $tmp933 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp934 = *$tmp933;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:254
frost$collections$Array** $tmp935 = &param2->locals;
frost$collections$Array* $tmp936 = *$tmp935;
frost$core$Int $tmp937 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:254:32
frost$core$Int $tmp938 = (frost$core$Int) {0u};
int64_t $tmp939 = $tmp937.value;
int64_t $tmp940 = $tmp938.value;
bool $tmp941 = $tmp939 >= $tmp940;
frost$core$Bit $tmp942 = (frost$core$Bit) {$tmp941};
bool $tmp943 = $tmp942.value;
if ($tmp943) goto block14; else goto block13;
block14:;
ITable* $tmp944 = ((frost$collections$CollectionView*) $tmp936)->$class->itable;
while ($tmp944->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp944 = $tmp944->next;
}
$fn946 $tmp945 = $tmp944->methods[0];
frost$core$Int $tmp947 = $tmp945(((frost$collections$CollectionView*) $tmp936));
int64_t $tmp948 = $tmp937.value;
int64_t $tmp949 = $tmp947.value;
bool $tmp950 = $tmp948 < $tmp949;
frost$core$Bit $tmp951 = (frost$core$Bit) {$tmp950};
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block12; else goto block13;
block13:;
frost$core$Int $tmp953 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s954, $tmp953, &$s955);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp956 = &$tmp936->data;
frost$core$Object** $tmp957 = *$tmp956;
frost$core$Int64 $tmp958 = frost$core$Int64$init$frost$core$Int($tmp937);
int64_t $tmp959 = $tmp958.value;
frost$core$Object* $tmp960 = $tmp957[$tmp959];
frost$core$Frost$ref$frost$core$Object$Q($tmp960);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp960)));
frost$core$Frost$unref$frost$core$Object$Q($tmp960);
return ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp960);
block9:;
frost$core$Int $tmp961 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:256:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp962 = $tmp896.value;
int64_t $tmp963 = $tmp961.value;
bool $tmp964 = $tmp962 == $tmp963;
frost$core$Bit $tmp965 = (frost$core$Bit) {$tmp964};
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type** $tmp967 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp968 = *$tmp967;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
org$frostlang$frostc$Type* $tmp969 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local3) = $tmp968;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:257
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp970 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp971 = *(&local3);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp970, $tmp971);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
org$frostlang$frostc$Type* $tmp972 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp970;
block16:;
frost$core$Int $tmp973 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:259:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp974 = $tmp896.value;
int64_t $tmp975 = $tmp973.value;
bool $tmp976 = $tmp974 == $tmp975;
frost$core$Bit $tmp977 = (frost$core$Bit) {$tmp976};
bool $tmp978 = $tmp977.value;
if ($tmp978) goto block18; else goto block19;
block18:;
frost$core$Int* $tmp979 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp980 = *$tmp979;
org$frostlang$frostc$Type** $tmp981 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp982 = *$tmp981;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
org$frostlang$frostc$Type* $tmp983 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local4) = $tmp982;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:260
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp984 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp985 = *(&local4);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp984, $tmp985);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
org$frostlang$frostc$Type* $tmp986 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp984;
block19:;
frost$core$Int $tmp987 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:262:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp988 = $tmp896.value;
int64_t $tmp989 = $tmp987.value;
bool $tmp990 = $tmp988 == $tmp989;
frost$core$Bit $tmp991 = (frost$core$Bit) {$tmp990};
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block21; else goto block22;
block21:;
frost$core$Real64* $tmp993 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp994 = *$tmp993;
org$frostlang$frostc$Type** $tmp995 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp996 = *$tmp995;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
org$frostlang$frostc$Type* $tmp997 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local5) = $tmp996;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:263
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp998 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp999 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp998, $tmp999);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
org$frostlang$frostc$Type* $tmp1000 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp998;
block22:;
frost$core$Int $tmp1001 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:265:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1002 = $tmp896.value;
int64_t $tmp1003 = $tmp1001.value;
bool $tmp1004 = $tmp1002 == $tmp1003;
frost$core$Bit $tmp1005 = (frost$core$Bit) {$tmp1004};
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Statement$ID* $tmp1007 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1008 = *$tmp1007;
*(&local6) = $tmp1008;
org$frostlang$frostc$Type** $tmp1009 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1010 = *$tmp1009;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:266
org$frostlang$frostc$IR$Statement$ID $tmp1011 = *(&local6);
$fn1013 $tmp1012 = ($fn1013) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1014 = $tmp1012(param0, $tmp1011, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
return $tmp1014;
block25:;
frost$core$Int $tmp1015 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:268:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1016 = $tmp896.value;
int64_t $tmp1017 = $tmp1015.value;
bool $tmp1018 = $tmp1016 == $tmp1017;
frost$core$Bit $tmp1019 = (frost$core$Bit) {$tmp1018};
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block27; else goto block28;
block27:;
frost$core$String** $tmp1021 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp1022 = *$tmp1021;
org$frostlang$frostc$Type** $tmp1023 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1024 = *$tmp1023;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
org$frostlang$frostc$Type* $tmp1025 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local7) = $tmp1024;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:269
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1026 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1027 = *(&local7);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1026, $tmp1027);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
org$frostlang$frostc$Type* $tmp1028 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1026;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:272
frost$core$Int $tmp1029 = (frost$core$Int) {272u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:272:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1031 $tmp1030 = ($fn1031) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1032 = $tmp1030(((frost$core$Object*) param1));
frost$core$String* $tmp1033 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1034, $tmp1032);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$String* $tmp1035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1033, &$s1036);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1037, $tmp1029, $tmp1035);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
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
frost$collections$HashMap** $tmp1038 = &param0->predecessors;
frost$collections$HashMap* $tmp1039 = *$tmp1038;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1040;
$tmp1040 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1040->value = param2;
frost$core$Object* $tmp1041 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1039, ((frost$collections$Key*) $tmp1040));
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp1041)));
frost$collections$HashSet* $tmp1042 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local0) = ((frost$collections$HashSet*) $tmp1041);
frost$core$Frost$unref$frost$core$Object$Q($tmp1041);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1040)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:279
frost$collections$HashSet* $tmp1043 = *(&local0);
frost$core$Bit $tmp1044 = (frost$core$Bit) {$tmp1043 == NULL};
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:280
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp1046 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1046);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$collections$HashSet* $tmp1047 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local0) = $tmp1046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:281
frost$collections$HashMap** $tmp1048 = &param0->predecessors;
frost$collections$HashMap* $tmp1049 = *$tmp1048;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1050;
$tmp1050 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1050->value = param2;
frost$collections$HashSet* $tmp1051 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1049, ((frost$collections$Key*) $tmp1050), ((frost$core$Object*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1050)));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:283
frost$collections$HashSet* $tmp1052 = *(&local0);
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper* $tmp1053;
$tmp1053 = (org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass);
$tmp1053->value = param1;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:283:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1054 = &$tmp1052->contents;
frost$collections$HashMap* $tmp1055 = *$tmp1054;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1055, ((frost$collections$Key*) $tmp1053), ((frost$core$Object*) ((frost$collections$Key*) $tmp1053)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1053)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:284
frost$core$Bit $tmp1056 = (frost$core$Bit) {false};
*(&local1) = $tmp1056;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:285
frost$collections$HashSet* $tmp1057 = *(&local0);
ITable* $tmp1058 = ((frost$collections$Iterable*) $tmp1057)->$class->itable;
while ($tmp1058->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1058 = $tmp1058->next;
}
$fn1060 $tmp1059 = $tmp1058->methods[0];
frost$collections$Iterator* $tmp1061 = $tmp1059(((frost$collections$Iterable*) $tmp1057));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$collections$Iterator* $tmp1062 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local2) = $tmp1061;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:286
frost$collections$HashMap** $tmp1063 = &param0->entryStates;
frost$collections$HashMap* $tmp1064 = *$tmp1063;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1065;
$tmp1065 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1065->value = param2;
frost$core$Object* $tmp1066 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1064, ((frost$collections$Key*) $tmp1065));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1066)));
org$frostlang$frostc$pass$Analyzer$State* $tmp1067 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1066);
frost$core$Frost$unref$frost$core$Object$Q($tmp1066);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1065)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:287
org$frostlang$frostc$pass$Analyzer$State* $tmp1068 = *(&local3);
frost$core$Bit $tmp1069 = (frost$core$Bit) {$tmp1068 == NULL};
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:288
frost$collections$Iterator* $tmp1071 = *(&local2);
ITable* $tmp1072 = $tmp1071->$class->itable;
while ($tmp1072->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1072 = $tmp1072->next;
}
$fn1074 $tmp1073 = $tmp1072->methods[1];
frost$core$Object* $tmp1075 = $tmp1073($tmp1071);
$fn1077 $tmp1076 = ($fn1077) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp1078 = $tmp1076(param0, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1075)->value);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
org$frostlang$frostc$pass$Analyzer$State* $tmp1079 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local3) = $tmp1078;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$Frost$unref$frost$core$Object$Q($tmp1075);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:289
frost$collections$HashMap** $tmp1080 = &param0->entryStates;
frost$collections$HashMap* $tmp1081 = *$tmp1080;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1082;
$tmp1082 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1082->value = param2;
org$frostlang$frostc$pass$Analyzer$State* $tmp1083 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1081, ((frost$collections$Key*) $tmp1082), ((frost$core$Object*) $tmp1083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1082)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:290
frost$core$Bit $tmp1084 = (frost$core$Bit) {true};
*(&local1) = $tmp1084;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:292
frost$collections$Iterator* $tmp1085 = *(&local2);
goto block6;
block6:;
ITable* $tmp1086 = $tmp1085->$class->itable;
while ($tmp1086->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1086 = $tmp1086->next;
}
$fn1088 $tmp1087 = $tmp1086->methods[0];
frost$core$Bit $tmp1089 = $tmp1087($tmp1085);
bool $tmp1090 = $tmp1089.value;
if ($tmp1090) goto block8; else goto block7;
block7:;
ITable* $tmp1091 = $tmp1085->$class->itable;
while ($tmp1091->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1091 = $tmp1091->next;
}
$fn1093 $tmp1092 = $tmp1091->methods[1];
frost$core$Object* $tmp1094 = $tmp1092($tmp1085);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1094)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:293
frost$core$Bit $tmp1095 = *(&local1);
bool $tmp1096 = $tmp1095.value;
if ($tmp1096) goto block9; else goto block10;
block9:;
*(&local5) = $tmp1095;
goto block11;
block10:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1097 = *(&local3);
org$frostlang$frostc$Compiler** $tmp1098 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1099 = *$tmp1098;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1100 = *(&local4);
$fn1102 $tmp1101 = ($fn1102) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp1103 = $tmp1101(param0, $tmp1100);
$fn1105 $tmp1104 = ($fn1105) $tmp1097->$class->vtable[2];
frost$core$Bit $tmp1106 = $tmp1104($tmp1097, $tmp1099, $tmp1103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local5) = $tmp1106;
goto block11;
block11:;
frost$core$Bit $tmp1107 = *(&local5);
*(&local1) = $tmp1107;
frost$core$Frost$unref$frost$core$Object$Q($tmp1094);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:295
frost$core$Bit $tmp1108 = *(&local1);
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:296
frost$collections$HashSet** $tmp1110 = &param0->worklist;
frost$collections$HashSet* $tmp1111 = *$tmp1110;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1112;
$tmp1112 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1112->value = param2;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:296:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1113 = &$tmp1111->contents;
frost$collections$HashMap* $tmp1114 = *$tmp1113;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1114, ((frost$collections$Key*) $tmp1112), ((frost$core$Object*) ((frost$collections$Key*) $tmp1112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1112)));
goto block13;
block13:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1115 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$collections$Iterator* $tmp1116 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$collections$HashSet* $tmp1117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
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
org$frostlang$frostc$LinkedList** $tmp1118 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp1119 = *$tmp1118;
$fn1121 $tmp1120 = ($fn1121) $tmp1119->$class->vtable[6];
frost$core$Object* $tmp1122 = $tmp1120($tmp1119);
frost$core$Int* $tmp1123 = &((org$frostlang$frostc$IR$Statement*) $tmp1122)->$rawValue;
frost$core$Int $tmp1124 = *$tmp1123;
frost$core$Int $tmp1125 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:314:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1126 = $tmp1124.value;
int64_t $tmp1127 = $tmp1125.value;
bool $tmp1128 = $tmp1126 == $tmp1127;
frost$core$Bit $tmp1129 = (frost$core$Bit) {$tmp1128};
bool $tmp1130 = $tmp1129.value;
if ($tmp1130) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1131 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1122)->$data + 0);
org$frostlang$frostc$Position $tmp1132 = *$tmp1131;
org$frostlang$frostc$IR$Value** $tmp1133 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1122)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1134 = *$tmp1133;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
org$frostlang$frostc$IR$Value* $tmp1135 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local0) = $tmp1134;
org$frostlang$frostc$IR$Block$ID* $tmp1136 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1122)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1137 = *$tmp1136;
org$frostlang$frostc$IR$Block$ID* $tmp1138 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1122)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1139 = *$tmp1138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:315
org$frostlang$frostc$IR$Value* $tmp1140 = *(&local0);
$fn1142 $tmp1141 = ($fn1142) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1143 = $tmp1141(param0, $tmp1140, param3);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1144 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local1) = $tmp1143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:316
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1145 = *(&local1);
frost$collections$ListView** $tmp1146 = &$tmp1145->nonNullImplications;
frost$collections$ListView* $tmp1147 = *$tmp1146;
frost$core$Bit $tmp1148 = (frost$core$Bit) {$tmp1147 != NULL};
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:317
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1150 = *(&local1);
frost$collections$ListView** $tmp1151 = &$tmp1150->nonNullImplications;
frost$collections$ListView* $tmp1152 = *$tmp1151;
ITable* $tmp1153 = ((frost$collections$Iterable*) $tmp1152)->$class->itable;
while ($tmp1153->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1153 = $tmp1153->next;
}
$fn1155 $tmp1154 = $tmp1153->methods[0];
frost$collections$Iterator* $tmp1156 = $tmp1154(((frost$collections$Iterable*) $tmp1152));
goto block7;
block7:;
ITable* $tmp1157 = $tmp1156->$class->itable;
while ($tmp1157->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1157 = $tmp1157->next;
}
$fn1159 $tmp1158 = $tmp1157->methods[0];
frost$core$Bit $tmp1160 = $tmp1158($tmp1156);
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block9; else goto block8;
block8:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp1162 = $tmp1156->$class->itable;
while ($tmp1162->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1162 = $tmp1162->next;
}
$fn1164 $tmp1163 = $tmp1162->methods[1];
frost$core$Object* $tmp1165 = $tmp1163($tmp1156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp1165)));
org$frostlang$frostc$Pair* $tmp1166 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp1165);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:318
org$frostlang$frostc$Pair* $tmp1167 = *(&local2);
frost$core$Object** $tmp1168 = &$tmp1167->second;
frost$core$Object* $tmp1169 = *$tmp1168;
frost$core$Int $tmp1170 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:318:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1171 = param2.value;
int64_t $tmp1172 = $tmp1170.value;
bool $tmp1173 = $tmp1171 == $tmp1172;
frost$core$Bit $tmp1174 = (frost$core$Bit) {$tmp1173};
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Analyzer.frost:318:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
bool $tmp1175 = ((frost$core$Bit$wrapper*) $tmp1169)->value.value;
bool $tmp1176 = $tmp1174.value;
bool $tmp1177 = $tmp1175 == $tmp1176;
frost$core$Bit $tmp1178 = (frost$core$Bit) {$tmp1177};
bool $tmp1179 = $tmp1178.value;
if ($tmp1179) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:319
org$frostlang$frostc$Pair* $tmp1180 = *(&local2);
frost$core$Object** $tmp1181 = &$tmp1180->first;
frost$core$Object* $tmp1182 = *$tmp1181;
frost$core$Int* $tmp1183 = &((org$frostlang$frostc$IR$Value*) $tmp1182)->$rawValue;
frost$core$Int $tmp1184 = *$tmp1183;
frost$core$Int $tmp1185 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:320:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1186 = $tmp1184.value;
int64_t $tmp1187 = $tmp1185.value;
bool $tmp1188 = $tmp1186 == $tmp1187;
frost$core$Bit $tmp1189 = (frost$core$Bit) {$tmp1188};
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block15; else goto block14;
block15:;
frost$core$Int* $tmp1191 = (frost$core$Int*) (((org$frostlang$frostc$IR$Value*) $tmp1182)->$data + 0);
frost$core$Int $tmp1192 = *$tmp1191;
*(&local3) = $tmp1192;
org$frostlang$frostc$Type** $tmp1193 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Value*) $tmp1182)->$data + 8);
org$frostlang$frostc$Type* $tmp1194 = *$tmp1193;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:321
frost$collections$Array** $tmp1195 = &param3->locals;
frost$collections$Array* $tmp1196 = *$tmp1195;
frost$core$Int $tmp1197 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:321:60
frost$core$Int $tmp1198 = (frost$core$Int) {0u};
int64_t $tmp1199 = $tmp1197.value;
int64_t $tmp1200 = $tmp1198.value;
bool $tmp1201 = $tmp1199 >= $tmp1200;
frost$core$Bit $tmp1202 = (frost$core$Bit) {$tmp1201};
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block20; else goto block19;
block20:;
ITable* $tmp1204 = ((frost$collections$CollectionView*) $tmp1196)->$class->itable;
while ($tmp1204->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1204 = $tmp1204->next;
}
$fn1206 $tmp1205 = $tmp1204->methods[0];
frost$core$Int $tmp1207 = $tmp1205(((frost$collections$CollectionView*) $tmp1196));
int64_t $tmp1208 = $tmp1197.value;
int64_t $tmp1209 = $tmp1207.value;
bool $tmp1210 = $tmp1208 < $tmp1209;
frost$core$Bit $tmp1211 = (frost$core$Bit) {$tmp1210};
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1213 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1214, $tmp1213, &$s1215);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1216 = &$tmp1196->data;
frost$core$Object** $tmp1217 = *$tmp1216;
frost$core$Int64 $tmp1218 = frost$core$Int64$init$frost$core$Int($tmp1197);
int64_t $tmp1219 = $tmp1218.value;
frost$core$Object* $tmp1220 = $tmp1217[$tmp1219];
frost$core$Frost$ref$frost$core$Object$Q($tmp1220);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1220)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1221 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1220);
frost$core$Frost$unref$frost$core$Object$Q($tmp1220);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:322
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1222 = *(&local4);
frost$core$Bit $tmp1223 = (frost$core$Bit) {true};
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block21; else goto block22;
block22:;
frost$core$Int $tmp1225 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1226, $tmp1225);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:323
frost$collections$Array** $tmp1227 = &param3->locals;
frost$collections$Array* $tmp1228 = *$tmp1227;
frost$core$Int $tmp1229 = *(&local3);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1230 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1231 = *(&local4);
org$frostlang$frostc$Type** $tmp1232 = &$tmp1231->type;
org$frostlang$frostc$Type* $tmp1233 = *$tmp1232;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:323:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1234 = &$tmp1233->typeKind;
org$frostlang$frostc$Type$Kind $tmp1235 = *$tmp1234;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1236;
$tmp1236 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1236->value = $tmp1235;
frost$core$Int $tmp1237 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1238 = &(&local7)->$rawValue;
*$tmp1238 = $tmp1237;
org$frostlang$frostc$Type$Kind $tmp1239 = *(&local7);
*(&local6) = $tmp1239;
org$frostlang$frostc$Type$Kind $tmp1240 = *(&local6);
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
if ($tmp1246) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local5) = $tmp1233;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
goto block23;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1247 = &$tmp1233->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1248 = *$tmp1247;
frost$core$Bit $tmp1249 = (frost$core$Bit) {$tmp1248 != NULL};
bool $tmp1250 = $tmp1249.value;
if ($tmp1250) goto block28; else goto block29;
block29:;
frost$core$Int $tmp1251 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1252, $tmp1251);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1253 = &$tmp1233->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1254 = *$tmp1253;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Int $tmp1255 = (frost$core$Int) {0u};
frost$core$Object* $tmp1256 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1254, $tmp1255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1256)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp1256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1256)));
goto block23;
block23:;
org$frostlang$frostc$Type* $tmp1257 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1230, $tmp1257);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:323:49
frost$core$Int $tmp1258 = (frost$core$Int) {0u};
int64_t $tmp1259 = $tmp1229.value;
int64_t $tmp1260 = $tmp1258.value;
bool $tmp1261 = $tmp1259 >= $tmp1260;
frost$core$Bit $tmp1262 = (frost$core$Bit) {$tmp1261};
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block33; else goto block32;
block33:;
ITable* $tmp1264 = ((frost$collections$CollectionView*) $tmp1228)->$class->itable;
while ($tmp1264->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1264 = $tmp1264->next;
}
$fn1266 $tmp1265 = $tmp1264->methods[0];
frost$core$Int $tmp1267 = $tmp1265(((frost$collections$CollectionView*) $tmp1228));
int64_t $tmp1268 = $tmp1229.value;
int64_t $tmp1269 = $tmp1267.value;
bool $tmp1270 = $tmp1268 < $tmp1269;
frost$core$Bit $tmp1271 = (frost$core$Bit) {$tmp1270};
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block31; else goto block32;
block32:;
frost$core$Int $tmp1273 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1274, $tmp1273, &$s1275);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1276 = &$tmp1228->data;
frost$core$Object** $tmp1277 = *$tmp1276;
frost$core$Int64 $tmp1278 = frost$core$Int64$init$frost$core$Int($tmp1229);
int64_t $tmp1279 = $tmp1278.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$Object* $tmp1280 = $tmp1277[$tmp1279];
frost$core$Frost$unref$frost$core$Object$Q($tmp1280);
$tmp1277[$tmp1279] = ((frost$core$Object*) $tmp1230);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
org$frostlang$frostc$Type* $tmp1281 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1282 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block14;
block14:;
goto block11;
block11:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1165);
org$frostlang$frostc$Pair* $tmp1283 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
goto block6;
block6:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1122);
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:331
frost$core$Frost$unref$frost$core$Object$Q($tmp1122);
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
frost$core$Int $tmp1286 = param2.$rawValue;
frost$core$Int $tmp1287 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:339:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1288 = $tmp1286.value;
int64_t $tmp1289 = $tmp1287.value;
bool $tmp1290 = $tmp1288 == $tmp1289;
frost$core$Bit $tmp1291 = (frost$core$Bit) {$tmp1290};
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:340
frost$core$Int* $tmp1293 = &param3->$rawValue;
frost$core$Int $tmp1294 = *$tmp1293;
frost$core$Int $tmp1295 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:341:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1296 = $tmp1294.value;
int64_t $tmp1297 = $tmp1295.value;
bool $tmp1298 = $tmp1296 == $tmp1297;
frost$core$Bit $tmp1299 = (frost$core$Bit) {$tmp1298};
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block6; else goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:342
org$frostlang$frostc$Compiler** $tmp1301 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1302 = *$tmp1301;
org$frostlang$frostc$Type** $tmp1303 = &$tmp1302->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1304 = *$tmp1303;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:342:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1305 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1306 = *$tmp1305;
frost$core$String** $tmp1307 = &((org$frostlang$frostc$Symbol*) $tmp1304)->name;
frost$core$String* $tmp1308 = *$tmp1307;
frost$core$Bit $tmp1309 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1306, $tmp1308);
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1311 = &param5->typeKind;
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
*(&local0) = $tmp1320;
goto block11;
block10:;
*(&local0) = $tmp1309;
goto block11;
block11:;
frost$core$Bit $tmp1321 = *(&local0);
bool $tmp1322 = $tmp1321.value;
if ($tmp1322) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1323 = (frost$core$Int) {342u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1324, $tmp1323);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:343
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1325 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1326 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1325, $tmp1326);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1327 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1328 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1329;
$tmp1329 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1329->value = $tmp1328;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1327, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1329));
frost$collections$Array$add$frost$collections$Array$T($tmp1325, ((frost$core$Object*) $tmp1327));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$collections$Array* $tmp1330 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local1) = $tmp1325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:344
frost$core$Int* $tmp1331 = &param1->$rawValue;
frost$core$Int $tmp1332 = *$tmp1331;
frost$core$Int $tmp1333 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:345:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1334 = $tmp1332.value;
int64_t $tmp1335 = $tmp1333.value;
bool $tmp1336 = $tmp1334 == $tmp1335;
frost$core$Bit $tmp1337 = (frost$core$Bit) {$tmp1336};
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block15; else goto block14;
block15:;
org$frostlang$frostc$IR$Statement$ID* $tmp1339 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1340 = *$tmp1339;
*(&local2) = $tmp1340;
org$frostlang$frostc$Type** $tmp1341 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1342 = *$tmp1341;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:346
frost$collections$HashMap** $tmp1343 = &param0->statements;
frost$collections$HashMap* $tmp1344 = *$tmp1343;
org$frostlang$frostc$IR$Statement$ID $tmp1345 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1346;
$tmp1346 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1346->value = $tmp1345;
frost$core$Object* $tmp1347 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1344, ((frost$collections$Key*) $tmp1346));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1347)));
org$frostlang$frostc$IR$Statement* $tmp1348 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp1347);
frost$core$Frost$unref$frost$core$Object$Q($tmp1347);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1346)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:347
org$frostlang$frostc$IR$Statement* $tmp1349 = *(&local3);
frost$core$Int* $tmp1350 = &$tmp1349->$rawValue;
frost$core$Int $tmp1351 = *$tmp1350;
frost$core$Int $tmp1352 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:348:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1353 = $tmp1351.value;
int64_t $tmp1354 = $tmp1352.value;
bool $tmp1355 = $tmp1353 == $tmp1354;
frost$core$Bit $tmp1356 = (frost$core$Bit) {$tmp1355};
bool $tmp1357 = $tmp1356.value;
if ($tmp1357) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Position* $tmp1358 = (org$frostlang$frostc$Position*) ($tmp1349->$data + 0);
org$frostlang$frostc$Position $tmp1359 = *$tmp1358;
org$frostlang$frostc$IR$Value** $tmp1360 = (org$frostlang$frostc$IR$Value**) ($tmp1349->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1361 = *$tmp1360;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
org$frostlang$frostc$IR$Value* $tmp1362 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local4) = $tmp1361;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:349
frost$collections$Array* $tmp1363 = *(&local1);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1364 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp1365 = *(&local4);
frost$core$Bit $tmp1366 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1367;
$tmp1367 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1367->value = $tmp1366;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1364, ((frost$core$Object*) $tmp1365), ((frost$core$Object*) $tmp1367));
frost$collections$Array$add$frost$collections$Array$T($tmp1363, ((frost$core$Object*) $tmp1364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
org$frostlang$frostc$IR$Value* $tmp1368 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block17;
block17:;
org$frostlang$frostc$IR$Statement* $tmp1369 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:354
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1370 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp1371 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1370, param5, ((frost$collections$ListView*) $tmp1371));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$collections$Array* $tmp1372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1370;
block5:;
goto block1;
block3:;
frost$core$Int $tmp1373 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:358:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1374 = $tmp1286.value;
int64_t $tmp1375 = $tmp1373.value;
bool $tmp1376 = $tmp1374 == $tmp1375;
frost$core$Bit $tmp1377 = (frost$core$Bit) {$tmp1376};
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block20; else goto block1;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:359
frost$core$Int* $tmp1379 = &param3->$rawValue;
frost$core$Int $tmp1380 = *$tmp1379;
frost$core$Int $tmp1381 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:360:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1382 = $tmp1380.value;
int64_t $tmp1383 = $tmp1381.value;
bool $tmp1384 = $tmp1382 == $tmp1383;
frost$core$Bit $tmp1385 = (frost$core$Bit) {$tmp1384};
bool $tmp1386 = $tmp1385.value;
if ($tmp1386) goto block23; else goto block22;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:361
org$frostlang$frostc$Compiler** $tmp1387 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1388 = *$tmp1387;
org$frostlang$frostc$Type** $tmp1389 = &$tmp1388->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1390 = *$tmp1389;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:361:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1391 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1392 = *$tmp1391;
frost$core$String** $tmp1393 = &((org$frostlang$frostc$Symbol*) $tmp1390)->name;
frost$core$String* $tmp1394 = *$tmp1393;
frost$core$Bit $tmp1395 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1392, $tmp1394);
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp1397 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1398 = *$tmp1397;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1399;
$tmp1399 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1399->value = $tmp1398;
org$frostlang$frostc$Type$Kind* $tmp1400 = &$tmp1390->typeKind;
org$frostlang$frostc$Type$Kind $tmp1401 = *$tmp1400;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1402;
$tmp1402 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1402->value = $tmp1401;
ITable* $tmp1403 = ((frost$core$Equatable*) $tmp1399)->$class->itable;
while ($tmp1403->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1403 = $tmp1403->next;
}
$fn1405 $tmp1404 = $tmp1403->methods[0];
frost$core$Bit $tmp1406 = $tmp1404(((frost$core$Equatable*) $tmp1399), ((frost$core$Equatable*) $tmp1402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1402)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1399)));
*(&local5) = $tmp1406;
goto block28;
block27:;
*(&local5) = $tmp1395;
goto block28;
block28:;
frost$core$Bit $tmp1407 = *(&local5);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1409 = (frost$core$Int) {361u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1410, $tmp1409);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:362
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1411 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1412 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1411, $tmp1412);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1413 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1414 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1415;
$tmp1415 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1415->value = $tmp1414;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1413, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1415));
frost$collections$Array$add$frost$collections$Array$T($tmp1411, ((frost$core$Object*) $tmp1413));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
frost$collections$Array* $tmp1416 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local6) = $tmp1411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:363
frost$core$Int* $tmp1417 = &param1->$rawValue;
frost$core$Int $tmp1418 = *$tmp1417;
frost$core$Int $tmp1419 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:364:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1420 = $tmp1418.value;
int64_t $tmp1421 = $tmp1419.value;
bool $tmp1422 = $tmp1420 == $tmp1421;
frost$core$Bit $tmp1423 = (frost$core$Bit) {$tmp1422};
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block32; else goto block31;
block32:;
org$frostlang$frostc$IR$Statement$ID* $tmp1425 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1426 = *$tmp1425;
*(&local7) = $tmp1426;
org$frostlang$frostc$Type** $tmp1427 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1428 = *$tmp1427;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:365
frost$collections$HashMap** $tmp1429 = &param0->statements;
frost$collections$HashMap* $tmp1430 = *$tmp1429;
org$frostlang$frostc$IR$Statement$ID $tmp1431 = *(&local7);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1432;
$tmp1432 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1432->value = $tmp1431;
frost$core$Object* $tmp1433 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1430, ((frost$collections$Key*) $tmp1432));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1433)));
org$frostlang$frostc$IR$Statement* $tmp1434 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) $tmp1433);
frost$core$Frost$unref$frost$core$Object$Q($tmp1433);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1432)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:366
org$frostlang$frostc$IR$Statement* $tmp1435 = *(&local8);
frost$core$Int* $tmp1436 = &$tmp1435->$rawValue;
frost$core$Int $tmp1437 = *$tmp1436;
frost$core$Int $tmp1438 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:367:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1439 = $tmp1437.value;
int64_t $tmp1440 = $tmp1438.value;
bool $tmp1441 = $tmp1439 == $tmp1440;
frost$core$Bit $tmp1442 = (frost$core$Bit) {$tmp1441};
bool $tmp1443 = $tmp1442.value;
if ($tmp1443) goto block35; else goto block34;
block35:;
org$frostlang$frostc$Position* $tmp1444 = (org$frostlang$frostc$Position*) ($tmp1435->$data + 0);
org$frostlang$frostc$Position $tmp1445 = *$tmp1444;
org$frostlang$frostc$IR$Value** $tmp1446 = (org$frostlang$frostc$IR$Value**) ($tmp1435->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1447 = *$tmp1446;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
org$frostlang$frostc$IR$Value* $tmp1448 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
*(&local9) = $tmp1447;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:368
frost$collections$Array* $tmp1449 = *(&local6);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1450 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp1451 = *(&local9);
frost$core$Bit $tmp1452 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1453;
$tmp1453 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1453->value = $tmp1452;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1450, ((frost$core$Object*) $tmp1451), ((frost$core$Object*) $tmp1453));
frost$collections$Array$add$frost$collections$Array$T($tmp1449, ((frost$core$Object*) $tmp1450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
org$frostlang$frostc$IR$Value* $tmp1454 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block34;
block34:;
org$frostlang$frostc$IR$Statement* $tmp1455 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:373
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1456 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp1457 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1456, param5, ((frost$collections$ListView*) $tmp1457));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
frost$collections$Array* $tmp1458 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp1456;
block22:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:379
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1459 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1459, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
return $tmp1459;

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
org$frostlang$frostc$pass$Analyzer$State* $tmp1460 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
frost$collections$HashMap** $tmp1461 = &param0->entryStates;
frost$collections$HashMap* $tmp1462 = *$tmp1461;
org$frostlang$frostc$IR$Block$ID $tmp1463 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1464;
$tmp1464 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1464->value = $tmp1463;
frost$core$Object* $tmp1465 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1462, ((frost$collections$Key*) $tmp1464));
org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State($tmp1460, ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1465));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
org$frostlang$frostc$pass$Analyzer$State* $tmp1466 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local0) = $tmp1460;
frost$core$Frost$unref$frost$core$Object$Q($tmp1465);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1464)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:384
frost$collections$HashMap** $tmp1467 = &param0->blocks;
frost$collections$HashMap* $tmp1468 = *$tmp1467;
org$frostlang$frostc$IR$Block$ID $tmp1469 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1470;
$tmp1470 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1470->value = $tmp1469;
frost$core$Object* $tmp1471 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1468, ((frost$collections$Key*) $tmp1470));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1471)));
org$frostlang$frostc$IR$Block* $tmp1472 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1471);
frost$core$Frost$unref$frost$core$Object$Q($tmp1471);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1470)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:385
org$frostlang$frostc$IR$Block* $tmp1473 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1474 = &$tmp1473->ids;
org$frostlang$frostc$LinkedList* $tmp1475 = *$tmp1474;
ITable* $tmp1476 = ((frost$collections$Iterable*) $tmp1475)->$class->itable;
while ($tmp1476->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1476 = $tmp1476->next;
}
$fn1478 $tmp1477 = $tmp1476->methods[0];
frost$collections$Iterator* $tmp1479 = $tmp1477(((frost$collections$Iterable*) $tmp1475));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
frost$collections$Iterator* $tmp1480 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local2) = $tmp1479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:386
org$frostlang$frostc$IR$Block* $tmp1481 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1482 = &$tmp1481->statements;
org$frostlang$frostc$LinkedList* $tmp1483 = *$tmp1482;
ITable* $tmp1484 = ((frost$collections$Iterable*) $tmp1483)->$class->itable;
while ($tmp1484->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1484 = $tmp1484->next;
}
$fn1486 $tmp1485 = $tmp1484->methods[0];
frost$collections$Iterator* $tmp1487 = $tmp1485(((frost$collections$Iterable*) $tmp1483));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
frost$collections$Iterator* $tmp1488 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
*(&local3) = $tmp1487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:387
goto block1;
block1:;
frost$collections$Iterator* $tmp1489 = *(&local2);
ITable* $tmp1490 = $tmp1489->$class->itable;
while ($tmp1490->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1490 = $tmp1490->next;
}
$fn1492 $tmp1491 = $tmp1490->methods[0];
frost$core$Bit $tmp1493 = $tmp1491($tmp1489);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:387:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1494 = $tmp1493.value;
bool $tmp1495 = !$tmp1494;
frost$core$Bit $tmp1496 = (frost$core$Bit) {$tmp1495};
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:388
frost$collections$Iterator* $tmp1498 = *(&local2);
ITable* $tmp1499 = $tmp1498->$class->itable;
while ($tmp1499->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1499 = $tmp1499->next;
}
$fn1501 $tmp1500 = $tmp1499->methods[1];
frost$core$Object* $tmp1502 = $tmp1500($tmp1498);
*(&local4) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1502)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1502);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:389
frost$collections$Iterator* $tmp1503 = *(&local3);
ITable* $tmp1504 = $tmp1503->$class->itable;
while ($tmp1504->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1504 = $tmp1504->next;
}
$fn1506 $tmp1505 = $tmp1504->methods[1];
frost$core$Object* $tmp1507 = $tmp1505($tmp1503);
frost$core$Int* $tmp1508 = &((org$frostlang$frostc$IR$Statement*) $tmp1507)->$rawValue;
frost$core$Int $tmp1509 = *$tmp1508;
frost$core$Int $tmp1510 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:390:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1511 = $tmp1509.value;
int64_t $tmp1512 = $tmp1510.value;
bool $tmp1513 = $tmp1511 == $tmp1512;
frost$core$Bit $tmp1514 = (frost$core$Bit) {$tmp1513};
bool $tmp1515 = $tmp1514.value;
if ($tmp1515) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1516 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1507)->$data + 0);
org$frostlang$frostc$Position $tmp1517 = *$tmp1516;
org$frostlang$frostc$IR$Value** $tmp1518 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1507)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1519 = *$tmp1518;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
org$frostlang$frostc$IR$Value* $tmp1520 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
*(&local5) = $tmp1519;
org$frostlang$frostc$IR$Value** $tmp1521 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1507)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1522 = *$tmp1521;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
org$frostlang$frostc$IR$Value* $tmp1523 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
*(&local6) = $tmp1522;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:391
org$frostlang$frostc$IR$Value* $tmp1524 = *(&local6);
frost$core$Int* $tmp1525 = &$tmp1524->$rawValue;
frost$core$Int $tmp1526 = *$tmp1525;
frost$core$Int $tmp1527 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:392:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1528 = $tmp1526.value;
int64_t $tmp1529 = $tmp1527.value;
bool $tmp1530 = $tmp1528 == $tmp1529;
frost$core$Bit $tmp1531 = (frost$core$Bit) {$tmp1530};
bool $tmp1532 = $tmp1531.value;
if ($tmp1532) goto block10; else goto block11;
block10:;
frost$core$Int* $tmp1533 = (frost$core$Int*) ($tmp1524->$data + 0);
frost$core$Int $tmp1534 = *$tmp1533;
*(&local7) = $tmp1534;
org$frostlang$frostc$Type** $tmp1535 = (org$frostlang$frostc$Type**) ($tmp1524->$data + 8);
org$frostlang$frostc$Type* $tmp1536 = *$tmp1535;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:393
org$frostlang$frostc$pass$Analyzer$State* $tmp1537 = *(&local0);
frost$collections$Array** $tmp1538 = &$tmp1537->locals;
frost$collections$Array* $tmp1539 = *$tmp1538;
frost$core$Int $tmp1540 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1541 = *(&local5);
org$frostlang$frostc$pass$Analyzer$State* $tmp1542 = *(&local0);
$fn1544 $tmp1543 = ($fn1544) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1545 = $tmp1543(param0, $tmp1541, $tmp1542);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:393:42
frost$core$Int $tmp1546 = (frost$core$Int) {0u};
int64_t $tmp1547 = $tmp1540.value;
int64_t $tmp1548 = $tmp1546.value;
bool $tmp1549 = $tmp1547 >= $tmp1548;
frost$core$Bit $tmp1550 = (frost$core$Bit) {$tmp1549};
bool $tmp1551 = $tmp1550.value;
if ($tmp1551) goto block16; else goto block15;
block16:;
ITable* $tmp1552 = ((frost$collections$CollectionView*) $tmp1539)->$class->itable;
while ($tmp1552->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1552 = $tmp1552->next;
}
$fn1554 $tmp1553 = $tmp1552->methods[0];
frost$core$Int $tmp1555 = $tmp1553(((frost$collections$CollectionView*) $tmp1539));
int64_t $tmp1556 = $tmp1540.value;
int64_t $tmp1557 = $tmp1555.value;
bool $tmp1558 = $tmp1556 < $tmp1557;
frost$core$Bit $tmp1559 = (frost$core$Bit) {$tmp1558};
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1561 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1562, $tmp1561, &$s1563);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1564 = &$tmp1539->data;
frost$core$Object** $tmp1565 = *$tmp1564;
frost$core$Int64 $tmp1566 = frost$core$Int64$init$frost$core$Int($tmp1540);
int64_t $tmp1567 = $tmp1566.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
frost$core$Object* $tmp1568 = $tmp1565[$tmp1567];
frost$core$Frost$unref$frost$core$Object$Q($tmp1568);
$tmp1565[$tmp1567] = ((frost$core$Object*) $tmp1545);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
goto block9;
block11:;
frost$core$Int $tmp1569 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:395:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1570 = $tmp1526.value;
int64_t $tmp1571 = $tmp1569.value;
bool $tmp1572 = $tmp1570 == $tmp1571;
frost$core$Bit $tmp1573 = (frost$core$Bit) {$tmp1572};
bool $tmp1574 = $tmp1573.value;
if ($tmp1574) goto block17; else goto block9;
block17:;
org$frostlang$frostc$IR$Statement$ID* $tmp1575 = (org$frostlang$frostc$IR$Statement$ID*) ($tmp1524->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1576 = *$tmp1575;
*(&local8) = $tmp1576;
org$frostlang$frostc$Type** $tmp1577 = (org$frostlang$frostc$Type**) ($tmp1524->$data + 8);
org$frostlang$frostc$Type* $tmp1578 = *$tmp1577;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:396
frost$collections$HashMap** $tmp1579 = &param0->statements;
frost$collections$HashMap* $tmp1580 = *$tmp1579;
org$frostlang$frostc$IR$Statement$ID $tmp1581 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1582;
$tmp1582 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1582->value = $tmp1581;
frost$core$Object* $tmp1583 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1580, ((frost$collections$Key*) $tmp1582));
frost$core$Int* $tmp1584 = &((org$frostlang$frostc$IR$Statement*) $tmp1583)->$rawValue;
frost$core$Int $tmp1585 = *$tmp1584;
frost$core$Int $tmp1586 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:397:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1587 = $tmp1585.value;
int64_t $tmp1588 = $tmp1586.value;
bool $tmp1589 = $tmp1587 == $tmp1588;
frost$core$Bit $tmp1590 = (frost$core$Bit) {$tmp1589};
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Position* $tmp1592 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1583)->$data + 0);
org$frostlang$frostc$Position $tmp1593 = *$tmp1592;
org$frostlang$frostc$IR$Value** $tmp1594 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1583)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1595 = *$tmp1594;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
org$frostlang$frostc$IR$Value* $tmp1596 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local9) = $tmp1595;
org$frostlang$frostc$FieldDecl** $tmp1597 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp1583)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1598 = *$tmp1597;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:398
org$frostlang$frostc$IR$Value* $tmp1599 = *(&local9);
frost$core$Int* $tmp1600 = &$tmp1599->$rawValue;
frost$core$Int $tmp1601 = *$tmp1600;
frost$core$Int $tmp1602 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:399:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1603 = $tmp1601.value;
int64_t $tmp1604 = $tmp1602.value;
bool $tmp1605 = $tmp1603 == $tmp1604;
frost$core$Bit $tmp1606 = (frost$core$Bit) {$tmp1605};
bool $tmp1607 = $tmp1606.value;
if ($tmp1607) goto block23; else goto block22;
block23:;
frost$core$Int* $tmp1608 = (frost$core$Int*) ($tmp1599->$data + 0);
frost$core$Int $tmp1609 = *$tmp1608;
*(&local10) = $tmp1609;
org$frostlang$frostc$Type** $tmp1610 = (org$frostlang$frostc$Type**) ($tmp1599->$data + 8);
org$frostlang$frostc$Type* $tmp1611 = *$tmp1610;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:400
org$frostlang$frostc$pass$Analyzer$State* $tmp1612 = *(&local0);
frost$collections$Array** $tmp1613 = &$tmp1612->locals;
frost$collections$Array* $tmp1614 = *$tmp1613;
frost$core$Int $tmp1615 = *(&local10);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1616 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR** $tmp1617 = &param0->ir;
org$frostlang$frostc$IR* $tmp1618 = *$tmp1617;
frost$collections$Array** $tmp1619 = &$tmp1618->locals;
frost$collections$Array* $tmp1620 = *$tmp1619;
frost$core$Int $tmp1621 = *(&local10);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:400:91
frost$core$Int $tmp1622 = (frost$core$Int) {0u};
int64_t $tmp1623 = $tmp1621.value;
int64_t $tmp1624 = $tmp1622.value;
bool $tmp1625 = $tmp1623 >= $tmp1624;
frost$core$Bit $tmp1626 = (frost$core$Bit) {$tmp1625};
bool $tmp1627 = $tmp1626.value;
if ($tmp1627) goto block28; else goto block27;
block28:;
ITable* $tmp1628 = ((frost$collections$CollectionView*) $tmp1620)->$class->itable;
while ($tmp1628->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1628 = $tmp1628->next;
}
$fn1630 $tmp1629 = $tmp1628->methods[0];
frost$core$Int $tmp1631 = $tmp1629(((frost$collections$CollectionView*) $tmp1620));
int64_t $tmp1632 = $tmp1621.value;
int64_t $tmp1633 = $tmp1631.value;
bool $tmp1634 = $tmp1632 < $tmp1633;
frost$core$Bit $tmp1635 = (frost$core$Bit) {$tmp1634};
bool $tmp1636 = $tmp1635.value;
if ($tmp1636) goto block26; else goto block27;
block27:;
frost$core$Int $tmp1637 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1638, $tmp1637, &$s1639);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1640 = &$tmp1620->data;
frost$core$Object** $tmp1641 = *$tmp1640;
frost$core$Int64 $tmp1642 = frost$core$Int64$init$frost$core$Int($tmp1621);
int64_t $tmp1643 = $tmp1642.value;
frost$core$Object* $tmp1644 = $tmp1641[$tmp1643];
frost$core$Frost$ref$frost$core$Object$Q($tmp1644);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1616, ((org$frostlang$frostc$Type*) $tmp1644));
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:400:58
frost$core$Int $tmp1645 = (frost$core$Int) {0u};
int64_t $tmp1646 = $tmp1615.value;
int64_t $tmp1647 = $tmp1645.value;
bool $tmp1648 = $tmp1646 >= $tmp1647;
frost$core$Bit $tmp1649 = (frost$core$Bit) {$tmp1648};
bool $tmp1650 = $tmp1649.value;
if ($tmp1650) goto block32; else goto block31;
block32:;
ITable* $tmp1651 = ((frost$collections$CollectionView*) $tmp1614)->$class->itable;
while ($tmp1651->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1651 = $tmp1651->next;
}
$fn1653 $tmp1652 = $tmp1651->methods[0];
frost$core$Int $tmp1654 = $tmp1652(((frost$collections$CollectionView*) $tmp1614));
int64_t $tmp1655 = $tmp1615.value;
int64_t $tmp1656 = $tmp1654.value;
bool $tmp1657 = $tmp1655 < $tmp1656;
frost$core$Bit $tmp1658 = (frost$core$Bit) {$tmp1657};
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block30; else goto block31;
block31:;
frost$core$Int $tmp1660 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1661, $tmp1660, &$s1662);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1663 = &$tmp1614->data;
frost$core$Object** $tmp1664 = *$tmp1663;
frost$core$Int64 $tmp1665 = frost$core$Int64$init$frost$core$Int($tmp1615);
int64_t $tmp1666 = $tmp1665.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
frost$core$Object* $tmp1667 = $tmp1664[$tmp1666];
frost$core$Frost$unref$frost$core$Object$Q($tmp1667);
$tmp1664[$tmp1666] = ((frost$core$Object*) $tmp1616);
frost$core$Frost$unref$frost$core$Object$Q($tmp1644);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
goto block22;
block22:;
org$frostlang$frostc$IR$Value* $tmp1668 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1583);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1582)));
goto block9;
block9:;
org$frostlang$frostc$IR$Value* $tmp1669 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1670 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block5;
block7:;
frost$core$Int $tmp1671 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:408:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1672 = $tmp1509.value;
int64_t $tmp1673 = $tmp1671.value;
bool $tmp1674 = $tmp1672 == $tmp1673;
frost$core$Bit $tmp1675 = (frost$core$Bit) {$tmp1674};
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block33; else goto block5;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:409
frost$core$Bit* $tmp1677 = &param0->reportErrors;
frost$core$Bit $tmp1678 = *$tmp1677;
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:410
org$frostlang$frostc$IR$Statement$ID $tmp1680 = *(&local4);
org$frostlang$frostc$pass$Analyzer$State* $tmp1681 = *(&local0);
$fn1683 $tmp1682 = ($fn1683) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1684 = $tmp1682(param0, $tmp1680, $tmp1681);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
goto block36;
block36:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1507);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:415
org$frostlang$frostc$IR$Block* $tmp1685 = *(&local1);
frost$core$Int $tmp1686 = param1.exit;
org$frostlang$frostc$pass$Analyzer$State* $tmp1687 = *(&local0);
$fn1689 $tmp1688 = ($fn1689) param0->$class->vtable[5];
$tmp1688(param0, $tmp1685, $tmp1686, $tmp1687);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:416
org$frostlang$frostc$pass$Analyzer$State* $tmp1690 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
frost$collections$Iterator* $tmp1691 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp1692 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local2) = ((frost$collections$Iterator*) NULL);
org$frostlang$frostc$IR$Block* $tmp1693 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$pass$Analyzer$State* $tmp1694 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
return $tmp1690;

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
frost$collections$HashMap** $tmp1695 = &param0->blocks;
frost$collections$HashMap* $tmp1696 = *$tmp1695;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1697;
$tmp1697 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1697->value = param1;
frost$core$Object* $tmp1698 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1696, ((frost$collections$Key*) $tmp1697));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1698)));
org$frostlang$frostc$IR$Block* $tmp1699 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp1698);
frost$core$Frost$unref$frost$core$Object$Q($tmp1698);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1697)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:421
org$frostlang$frostc$IR$Block* $tmp1700 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp1701 = &$tmp1700->statements;
org$frostlang$frostc$LinkedList* $tmp1702 = *$tmp1701;
$fn1704 $tmp1703 = ($fn1704) $tmp1702->$class->vtable[6];
frost$core$Object* $tmp1705 = $tmp1703($tmp1702);
frost$core$Int* $tmp1706 = &((org$frostlang$frostc$IR$Statement*) $tmp1705)->$rawValue;
frost$core$Int $tmp1707 = *$tmp1706;
frost$core$Int $tmp1708 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:422:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1709 = $tmp1707.value;
int64_t $tmp1710 = $tmp1708.value;
bool $tmp1711 = $tmp1709 == $tmp1710;
frost$core$Bit $tmp1712 = (frost$core$Bit) {$tmp1711};
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1714 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1705)->$data + 0);
org$frostlang$frostc$Position $tmp1715 = *$tmp1714;
org$frostlang$frostc$IR$Block$ID* $tmp1716 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1705)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp1717 = *$tmp1716;
*(&local1) = $tmp1717;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:423
org$frostlang$frostc$IR$Block* $tmp1718 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1719 = &$tmp1718->id;
org$frostlang$frostc$IR$Block$ID $tmp1720 = *$tmp1719;
frost$core$Int $tmp1721 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:423:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1722 = &(&local3)->id;
*$tmp1722 = $tmp1720;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1723 = &(&local3)->exit;
*$tmp1723 = $tmp1721;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1724 = *(&local3);
*(&local2) = $tmp1724;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1725 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp1726 = *(&local1);
$fn1728 $tmp1727 = ($fn1728) param0->$class->vtable[4];
$tmp1727(param0, $tmp1725, $tmp1726);
goto block1;
block3:;
frost$core$Int $tmp1729 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:425:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1730 = $tmp1707.value;
int64_t $tmp1731 = $tmp1729.value;
bool $tmp1732 = $tmp1730 == $tmp1731;
frost$core$Bit $tmp1733 = (frost$core$Bit) {$tmp1732};
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1735 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1705)->$data + 0);
org$frostlang$frostc$Position $tmp1736 = *$tmp1735;
org$frostlang$frostc$IR$Value** $tmp1737 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1705)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1738 = *$tmp1737;
org$frostlang$frostc$IR$Block$ID* $tmp1739 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1705)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1740 = *$tmp1739;
*(&local4) = $tmp1740;
org$frostlang$frostc$IR$Block$ID* $tmp1741 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1705)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1742 = *$tmp1741;
*(&local5) = $tmp1742;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:426
org$frostlang$frostc$IR$Block* $tmp1743 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1744 = &$tmp1743->id;
org$frostlang$frostc$IR$Block$ID $tmp1745 = *$tmp1744;
frost$core$Int $tmp1746 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:426:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1747 = &(&local7)->id;
*$tmp1747 = $tmp1745;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1748 = &(&local7)->exit;
*$tmp1748 = $tmp1746;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1749 = *(&local7);
*(&local6) = $tmp1749;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1750 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp1751 = *(&local4);
$fn1753 $tmp1752 = ($fn1753) param0->$class->vtable[4];
$tmp1752(param0, $tmp1750, $tmp1751);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:427
org$frostlang$frostc$IR$Block* $tmp1754 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1755 = &$tmp1754->id;
org$frostlang$frostc$IR$Block$ID $tmp1756 = *$tmp1755;
frost$core$Int $tmp1757 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:427:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1758 = &(&local9)->id;
*$tmp1758 = $tmp1756;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1759 = &(&local9)->exit;
*$tmp1759 = $tmp1757;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1760 = *(&local9);
*(&local8) = $tmp1760;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1761 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp1762 = *(&local5);
$fn1764 $tmp1763 = ($fn1764) param0->$class->vtable[4];
$tmp1763(param0, $tmp1761, $tmp1762);
goto block1;
block7:;
frost$core$Int $tmp1765 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:429:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1766 = $tmp1707.value;
int64_t $tmp1767 = $tmp1765.value;
bool $tmp1768 = $tmp1766 == $tmp1767;
frost$core$Bit $tmp1769 = (frost$core$Bit) {$tmp1768};
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block11; else goto block12;
block11:;
goto block1;
block12:;
frost$core$Int $tmp1771 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:431:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1772 = $tmp1707.value;
int64_t $tmp1773 = $tmp1771.value;
bool $tmp1774 = $tmp1772 == $tmp1773;
frost$core$Bit $tmp1775 = (frost$core$Bit) {$tmp1774};
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int $tmp1777 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:433:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1778 = $tmp1707.value;
int64_t $tmp1779 = $tmp1777.value;
bool $tmp1780 = $tmp1778 == $tmp1779;
frost$core$Bit $tmp1781 = (frost$core$Bit) {$tmp1780};
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block17; else goto block18;
block17:;
goto block1;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:436
frost$core$Int $tmp1783 = (frost$core$Int) {436u};
org$frostlang$frostc$IR$Block* $tmp1784 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp1785 = &$tmp1784->statements;
org$frostlang$frostc$LinkedList* $tmp1786 = *$tmp1785;
$fn1788 $tmp1787 = ($fn1788) $tmp1786->$class->vtable[6];
frost$core$Object* $tmp1789 = $tmp1787($tmp1786);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:436:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1791 $tmp1790 = ($fn1791) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1789))->$class->vtable[0];
frost$core$String* $tmp1792 = $tmp1790(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1789)));
frost$core$String* $tmp1793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1794, $tmp1792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1795, $tmp1783, $tmp1793);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
frost$core$Frost$unref$frost$core$Object$Q($tmp1789);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1705);
org$frostlang$frostc$IR$Block* $tmp1796 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* param0) {

frost$core$Int local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$collections$Iterator* local2 = NULL;
frost$collections$Iterator* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:442
org$frostlang$frostc$MethodDecl** $tmp1797 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp1798 = *$tmp1797;
frost$core$String* $tmp1799 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1798);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:442:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1799);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1800);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:443
frost$core$Int $tmp1801 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp1802 = &param0->ir;
org$frostlang$frostc$IR* $tmp1803 = *$tmp1802;
frost$collections$Array** $tmp1804 = &$tmp1803->locals;
frost$collections$Array* $tmp1805 = *$tmp1804;
ITable* $tmp1806 = ((frost$collections$CollectionView*) $tmp1805)->$class->itable;
while ($tmp1806->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1806 = $tmp1806->next;
}
$fn1808 $tmp1807 = $tmp1806->methods[0];
frost$core$Int $tmp1809 = $tmp1807(((frost$collections$CollectionView*) $tmp1805));
frost$core$Bit $tmp1810 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1811 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1801, $tmp1809, $tmp1810);
frost$core$Int $tmp1812 = $tmp1811.min;
*(&local0) = $tmp1812;
frost$core$Int $tmp1813 = $tmp1811.max;
frost$core$Bit $tmp1814 = $tmp1811.inclusive;
bool $tmp1815 = $tmp1814.value;
frost$core$Int $tmp1816 = (frost$core$Int) {1u};
if ($tmp1815) goto block6; else goto block7;
block6:;
int64_t $tmp1817 = $tmp1812.value;
int64_t $tmp1818 = $tmp1813.value;
bool $tmp1819 = $tmp1817 <= $tmp1818;
frost$core$Bit $tmp1820 = (frost$core$Bit) {$tmp1819};
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block3; else goto block4;
block7:;
int64_t $tmp1822 = $tmp1812.value;
int64_t $tmp1823 = $tmp1813.value;
bool $tmp1824 = $tmp1822 < $tmp1823;
frost$core$Bit $tmp1825 = (frost$core$Bit) {$tmp1824};
bool $tmp1826 = $tmp1825.value;
if ($tmp1826) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:444
frost$core$Int $tmp1827 = *(&local0);
frost$core$Int$wrapper* $tmp1828;
$tmp1828 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1828->value = $tmp1827;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:444:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1830 $tmp1829 = ($fn1830) ((frost$core$Object*) $tmp1828)->$class->vtable[0];
frost$core$String* $tmp1831 = $tmp1829(((frost$core$Object*) $tmp1828));
frost$core$String* $tmp1832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1833, $tmp1831);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$String* $tmp1834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1832, &$s1835);
org$frostlang$frostc$IR** $tmp1836 = &param0->ir;
org$frostlang$frostc$IR* $tmp1837 = *$tmp1836;
frost$collections$Array** $tmp1838 = &$tmp1837->locals;
frost$collections$Array* $tmp1839 = *$tmp1838;
frost$core$Int $tmp1840 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:444:54
frost$core$Int $tmp1841 = (frost$core$Int) {0u};
int64_t $tmp1842 = $tmp1840.value;
int64_t $tmp1843 = $tmp1841.value;
bool $tmp1844 = $tmp1842 >= $tmp1843;
frost$core$Bit $tmp1845 = (frost$core$Bit) {$tmp1844};
bool $tmp1846 = $tmp1845.value;
if ($tmp1846) goto block12; else goto block11;
block12:;
ITable* $tmp1847 = ((frost$collections$CollectionView*) $tmp1839)->$class->itable;
while ($tmp1847->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1847 = $tmp1847->next;
}
$fn1849 $tmp1848 = $tmp1847->methods[0];
frost$core$Int $tmp1850 = $tmp1848(((frost$collections$CollectionView*) $tmp1839));
int64_t $tmp1851 = $tmp1840.value;
int64_t $tmp1852 = $tmp1850.value;
bool $tmp1853 = $tmp1851 < $tmp1852;
frost$core$Bit $tmp1854 = (frost$core$Bit) {$tmp1853};
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block10; else goto block11;
block11:;
frost$core$Int $tmp1856 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1857, $tmp1856, &$s1858);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1859 = &$tmp1839->data;
frost$core$Object** $tmp1860 = *$tmp1859;
frost$core$Int64 $tmp1861 = frost$core$Int64$init$frost$core$Int($tmp1840);
int64_t $tmp1862 = $tmp1861.value;
frost$core$Object* $tmp1863 = $tmp1860[$tmp1862];
frost$core$Frost$ref$frost$core$Object$Q($tmp1863);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:444:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1865 $tmp1864 = ($fn1865) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1863))->$class->vtable[0];
frost$core$String* $tmp1866 = $tmp1864(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1863)));
frost$core$String* $tmp1867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1834, $tmp1866);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
frost$core$String* $tmp1868 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1867, &$s1869);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:444:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1868);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1870);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q($tmp1863);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$Int $tmp1871 = *(&local0);
int64_t $tmp1872 = $tmp1813.value;
int64_t $tmp1873 = $tmp1871.value;
int64_t $tmp1874 = $tmp1872 - $tmp1873;
frost$core$Int $tmp1875 = (frost$core$Int) {$tmp1874};
if ($tmp1815) goto block17; else goto block18;
block17:;
int64_t $tmp1876 = $tmp1875.value;
int64_t $tmp1877 = $tmp1816.value;
bool $tmp1878 = $tmp1876 >= $tmp1877;
frost$core$Bit $tmp1879 = (frost$core$Bit) {$tmp1878};
bool $tmp1880 = $tmp1879.value;
if ($tmp1880) goto block16; else goto block4;
block18:;
int64_t $tmp1881 = $tmp1875.value;
int64_t $tmp1882 = $tmp1816.value;
bool $tmp1883 = $tmp1881 > $tmp1882;
frost$core$Bit $tmp1884 = (frost$core$Bit) {$tmp1883};
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block16; else goto block4;
block16:;
int64_t $tmp1886 = $tmp1871.value;
int64_t $tmp1887 = $tmp1816.value;
int64_t $tmp1888 = $tmp1886 + $tmp1887;
frost$core$Int $tmp1889 = (frost$core$Int) {$tmp1888};
*(&local0) = $tmp1889;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:446
org$frostlang$frostc$IR** $tmp1890 = &param0->ir;
org$frostlang$frostc$IR* $tmp1891 = *$tmp1890;
frost$collections$Array** $tmp1892 = &$tmp1891->blocks;
frost$collections$Array* $tmp1893 = *$tmp1892;
ITable* $tmp1894 = ((frost$collections$Iterable*) $tmp1893)->$class->itable;
while ($tmp1894->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1894 = $tmp1894->next;
}
$fn1896 $tmp1895 = $tmp1894->methods[0];
frost$collections$Iterator* $tmp1897 = $tmp1895(((frost$collections$Iterable*) $tmp1893));
goto block19;
block19:;
ITable* $tmp1898 = $tmp1897->$class->itable;
while ($tmp1898->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1898 = $tmp1898->next;
}
$fn1900 $tmp1899 = $tmp1898->methods[0];
frost$core$Bit $tmp1901 = $tmp1899($tmp1897);
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block21; else goto block20;
block20:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp1903 = $tmp1897->$class->itable;
while ($tmp1903->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1903 = $tmp1903->next;
}
$fn1905 $tmp1904 = $tmp1903->methods[1];
frost$core$Object* $tmp1906 = $tmp1904($tmp1897);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1906)));
org$frostlang$frostc$IR$Block* $tmp1907 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1906);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:447
org$frostlang$frostc$IR$Block* $tmp1908 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1909 = &$tmp1908->id;
org$frostlang$frostc$IR$Block$ID $tmp1910 = *$tmp1909;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1911;
$tmp1911 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1911->value = $tmp1910;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:447:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1913 $tmp1912 = ($fn1913) ((frost$core$Object*) $tmp1911)->$class->vtable[0];
frost$core$String* $tmp1914 = $tmp1912(((frost$core$Object*) $tmp1911));
frost$core$String* $tmp1915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1916, $tmp1914);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
frost$core$String* $tmp1917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1915, &$s1918);
frost$io$Console$print$frost$core$String($tmp1917);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:448
frost$collections$HashMap** $tmp1919 = &param0->entryStates;
frost$collections$HashMap* $tmp1920 = *$tmp1919;
org$frostlang$frostc$IR$Block* $tmp1921 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1922 = &$tmp1921->id;
org$frostlang$frostc$IR$Block$ID $tmp1923 = *$tmp1922;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1924;
$tmp1924 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1924->value = $tmp1923;
frost$core$Object* $tmp1925 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1920, ((frost$collections$Key*) $tmp1924));
frost$core$Bit $tmp1926 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp1925) != NULL};
bool $tmp1927 = $tmp1926.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1925);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1924)));
if ($tmp1927) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:449
frost$collections$HashMap** $tmp1928 = &param0->entryStates;
frost$collections$HashMap* $tmp1929 = *$tmp1928;
org$frostlang$frostc$IR$Block* $tmp1930 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1931 = &$tmp1930->id;
org$frostlang$frostc$IR$Block$ID $tmp1932 = *$tmp1931;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1933;
$tmp1933 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1933->value = $tmp1932;
frost$core$Object* $tmp1934 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1929, ((frost$collections$Key*) $tmp1933));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:449:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1936 $tmp1935 = ($fn1936) ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1934))->$class->vtable[0];
frost$core$String* $tmp1937 = $tmp1935(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1934)));
frost$core$String* $tmp1938 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1939, $tmp1937);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
frost$io$Console$print$frost$core$String($tmp1938);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$Frost$unref$frost$core$Object$Q($tmp1934);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1933)));
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:451
// begin inline call to method frost.io.Console.printLine() from Analyzer.frost:451:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1940);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:452
org$frostlang$frostc$IR$Block* $tmp1941 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1942 = &$tmp1941->ids;
org$frostlang$frostc$LinkedList* $tmp1943 = *$tmp1942;
ITable* $tmp1944 = ((frost$collections$Iterable*) $tmp1943)->$class->itable;
while ($tmp1944->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1944 = $tmp1944->next;
}
$fn1946 $tmp1945 = $tmp1944->methods[0];
frost$collections$Iterator* $tmp1947 = $tmp1945(((frost$collections$Iterable*) $tmp1943));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
frost$collections$Iterator* $tmp1948 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
*(&local2) = $tmp1947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:453
org$frostlang$frostc$IR$Block* $tmp1949 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1950 = &$tmp1949->statements;
org$frostlang$frostc$LinkedList* $tmp1951 = *$tmp1950;
ITable* $tmp1952 = ((frost$collections$Iterable*) $tmp1951)->$class->itable;
while ($tmp1952->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1952 = $tmp1952->next;
}
$fn1954 $tmp1953 = $tmp1952->methods[0];
frost$collections$Iterator* $tmp1955 = $tmp1953(((frost$collections$Iterable*) $tmp1951));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
frost$collections$Iterator* $tmp1956 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
*(&local3) = $tmp1955;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:454
goto block27;
block27:;
frost$collections$Iterator* $tmp1957 = *(&local2);
ITable* $tmp1958 = $tmp1957->$class->itable;
while ($tmp1958->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1958 = $tmp1958->next;
}
$fn1960 $tmp1959 = $tmp1958->methods[0];
frost$core$Bit $tmp1961 = $tmp1959($tmp1957);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:454:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1962 = $tmp1961.value;
bool $tmp1963 = !$tmp1962;
frost$core$Bit $tmp1964 = (frost$core$Bit) {$tmp1963};
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:455
frost$collections$Iterator* $tmp1966 = *(&local2);
ITable* $tmp1967 = $tmp1966->$class->itable;
while ($tmp1967->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1967 = $tmp1967->next;
}
$fn1969 $tmp1968 = $tmp1967->methods[1];
frost$core$Object* $tmp1970 = $tmp1968($tmp1966);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1971;
$tmp1971 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1971->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1970)->value;
// begin inline call to method frost.io.Console.print(o:frost.core.Object) from Analyzer.frost:455:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:54
$fn1973 $tmp1972 = ($fn1973) ((frost$core$Object*) $tmp1971)->$class->vtable[0];
frost$core$String* $tmp1974 = $tmp1972(((frost$core$Object*) $tmp1971));
frost$io$Console$print$frost$core$String($tmp1974);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
frost$core$Frost$unref$frost$core$Object$Q($tmp1970);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:456
frost$io$Console$print$frost$core$String(&$s1975);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:457
frost$collections$Iterator* $tmp1976 = *(&local3);
ITable* $tmp1977 = $tmp1976->$class->itable;
while ($tmp1977->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1977 = $tmp1977->next;
}
$fn1979 $tmp1978 = $tmp1977->methods[1];
frost$core$Object* $tmp1980 = $tmp1978($tmp1976);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Analyzer.frost:457:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1982 $tmp1981 = ($fn1982) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1980))->$class->vtable[0];
frost$core$String* $tmp1983 = $tmp1981(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1980)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1983);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
frost$core$Frost$unref$frost$core$Object$Q($tmp1980);
goto block27;
block29:;
frost$collections$Iterator* $tmp1984 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp1985 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1906);
org$frostlang$frostc$IR$Block* $tmp1986 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
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
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1987 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp1988 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1989 = *$tmp1988;
org$frostlang$frostc$Type** $tmp1990 = &$tmp1989->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1991 = *$tmp1990;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1987, $tmp1991);
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1992 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
*(&local0) = $tmp1987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:464
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp1993 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
org$frostlang$frostc$pass$Analyzer$State$init($tmp1993);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
org$frostlang$frostc$pass$Analyzer$State* $tmp1994 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
*(&local1) = $tmp1993;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:465
frost$core$Int $tmp1995 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp1996 = &param0->ir;
org$frostlang$frostc$IR* $tmp1997 = *$tmp1996;
frost$collections$Array** $tmp1998 = &$tmp1997->locals;
frost$collections$Array* $tmp1999 = *$tmp1998;
ITable* $tmp2000 = ((frost$collections$CollectionView*) $tmp1999)->$class->itable;
while ($tmp2000->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2000 = $tmp2000->next;
}
$fn2002 $tmp2001 = $tmp2000->methods[0];
frost$core$Int $tmp2003 = $tmp2001(((frost$collections$CollectionView*) $tmp1999));
frost$core$Bit $tmp2004 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2005 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1995, $tmp2003, $tmp2004);
frost$core$Int $tmp2006 = $tmp2005.min;
*(&local2) = $tmp2006;
frost$core$Int $tmp2007 = $tmp2005.max;
frost$core$Bit $tmp2008 = $tmp2005.inclusive;
bool $tmp2009 = $tmp2008.value;
frost$core$Int $tmp2010 = (frost$core$Int) {1u};
if ($tmp2009) goto block4; else goto block5;
block4:;
int64_t $tmp2011 = $tmp2006.value;
int64_t $tmp2012 = $tmp2007.value;
bool $tmp2013 = $tmp2011 <= $tmp2012;
frost$core$Bit $tmp2014 = (frost$core$Bit) {$tmp2013};
bool $tmp2015 = $tmp2014.value;
if ($tmp2015) goto block1; else goto block2;
block5:;
int64_t $tmp2016 = $tmp2006.value;
int64_t $tmp2017 = $tmp2007.value;
bool $tmp2018 = $tmp2016 < $tmp2017;
frost$core$Bit $tmp2019 = (frost$core$Bit) {$tmp2018};
bool $tmp2020 = $tmp2019.value;
if ($tmp2020) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:466
org$frostlang$frostc$pass$Analyzer$State* $tmp2021 = *(&local1);
frost$collections$Array** $tmp2022 = &$tmp2021->locals;
frost$collections$Array* $tmp2023 = *$tmp2022;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2024 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp2023, ((frost$core$Object*) $tmp2024));
frost$core$Int $tmp2025 = *(&local2);
int64_t $tmp2026 = $tmp2007.value;
int64_t $tmp2027 = $tmp2025.value;
int64_t $tmp2028 = $tmp2026 - $tmp2027;
frost$core$Int $tmp2029 = (frost$core$Int) {$tmp2028};
if ($tmp2009) goto block7; else goto block8;
block7:;
int64_t $tmp2030 = $tmp2029.value;
int64_t $tmp2031 = $tmp2010.value;
bool $tmp2032 = $tmp2030 >= $tmp2031;
frost$core$Bit $tmp2033 = (frost$core$Bit) {$tmp2032};
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block6; else goto block2;
block8:;
int64_t $tmp2035 = $tmp2029.value;
int64_t $tmp2036 = $tmp2010.value;
bool $tmp2037 = $tmp2035 > $tmp2036;
frost$core$Bit $tmp2038 = (frost$core$Bit) {$tmp2037};
bool $tmp2039 = $tmp2038.value;
if ($tmp2039) goto block6; else goto block2;
block6:;
int64_t $tmp2040 = $tmp2025.value;
int64_t $tmp2041 = $tmp2010.value;
int64_t $tmp2042 = $tmp2040 + $tmp2041;
frost$core$Int $tmp2043 = (frost$core$Int) {$tmp2042};
*(&local2) = $tmp2043;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:468
frost$collections$HashMap** $tmp2044 = &param0->entryStates;
frost$collections$HashMap* $tmp2045 = *$tmp2044;
org$frostlang$frostc$IR** $tmp2046 = &param0->ir;
org$frostlang$frostc$IR* $tmp2047 = *$tmp2046;
frost$collections$Array** $tmp2048 = &$tmp2047->blocks;
frost$collections$Array* $tmp2049 = *$tmp2048;
frost$core$Int $tmp2050 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:468:30
frost$core$Int $tmp2051 = (frost$core$Int) {0u};
int64_t $tmp2052 = $tmp2050.value;
int64_t $tmp2053 = $tmp2051.value;
bool $tmp2054 = $tmp2052 >= $tmp2053;
frost$core$Bit $tmp2055 = (frost$core$Bit) {$tmp2054};
bool $tmp2056 = $tmp2055.value;
if ($tmp2056) goto block12; else goto block11;
block12:;
ITable* $tmp2057 = ((frost$collections$CollectionView*) $tmp2049)->$class->itable;
while ($tmp2057->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2057 = $tmp2057->next;
}
$fn2059 $tmp2058 = $tmp2057->methods[0];
frost$core$Int $tmp2060 = $tmp2058(((frost$collections$CollectionView*) $tmp2049));
int64_t $tmp2061 = $tmp2050.value;
int64_t $tmp2062 = $tmp2060.value;
bool $tmp2063 = $tmp2061 < $tmp2062;
frost$core$Bit $tmp2064 = (frost$core$Bit) {$tmp2063};
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block10; else goto block11;
block11:;
frost$core$Int $tmp2066 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2067, $tmp2066, &$s2068);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2069 = &$tmp2049->data;
frost$core$Object** $tmp2070 = *$tmp2069;
frost$core$Int64 $tmp2071 = frost$core$Int64$init$frost$core$Int($tmp2050);
int64_t $tmp2072 = $tmp2071.value;
frost$core$Object* $tmp2073 = $tmp2070[$tmp2072];
frost$core$Frost$ref$frost$core$Object$Q($tmp2073);
org$frostlang$frostc$IR$Block$ID* $tmp2074 = &((org$frostlang$frostc$IR$Block*) $tmp2073)->id;
org$frostlang$frostc$IR$Block$ID $tmp2075 = *$tmp2074;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2076;
$tmp2076 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2076->value = $tmp2075;
org$frostlang$frostc$pass$Analyzer$State* $tmp2077 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2045, ((frost$collections$Key*) $tmp2076), ((frost$core$Object*) $tmp2077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2076)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2073);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:469
org$frostlang$frostc$IR** $tmp2078 = &param0->ir;
org$frostlang$frostc$IR* $tmp2079 = *$tmp2078;
frost$collections$Array** $tmp2080 = &$tmp2079->blocks;
frost$collections$Array* $tmp2081 = *$tmp2080;
ITable* $tmp2082 = ((frost$collections$Iterable*) $tmp2081)->$class->itable;
while ($tmp2082->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2082 = $tmp2082->next;
}
$fn2084 $tmp2083 = $tmp2082->methods[0];
frost$collections$Iterator* $tmp2085 = $tmp2083(((frost$collections$Iterable*) $tmp2081));
goto block13;
block13:;
ITable* $tmp2086 = $tmp2085->$class->itable;
while ($tmp2086->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2086 = $tmp2086->next;
}
$fn2088 $tmp2087 = $tmp2086->methods[0];
frost$core$Bit $tmp2089 = $tmp2087($tmp2085);
bool $tmp2090 = $tmp2089.value;
if ($tmp2090) goto block15; else goto block14;
block14:;
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2091 = $tmp2085->$class->itable;
while ($tmp2091->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2091 = $tmp2091->next;
}
$fn2093 $tmp2092 = $tmp2091->methods[1];
frost$core$Object* $tmp2094 = $tmp2092($tmp2085);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2094)));
org$frostlang$frostc$IR$Block* $tmp2095 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
*(&local3) = ((org$frostlang$frostc$IR$Block*) $tmp2094);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:470
frost$collections$HashMap** $tmp2096 = &param0->blocks;
frost$collections$HashMap* $tmp2097 = *$tmp2096;
org$frostlang$frostc$IR$Block* $tmp2098 = *(&local3);
org$frostlang$frostc$IR$Block$ID* $tmp2099 = &$tmp2098->id;
org$frostlang$frostc$IR$Block$ID $tmp2100 = *$tmp2099;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2101;
$tmp2101 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2101->value = $tmp2100;
org$frostlang$frostc$IR$Block* $tmp2102 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2097, ((frost$collections$Key*) $tmp2101), ((frost$core$Object*) $tmp2102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2101)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:471
org$frostlang$frostc$IR$Block* $tmp2103 = *(&local3);
org$frostlang$frostc$LinkedList** $tmp2104 = &$tmp2103->ids;
org$frostlang$frostc$LinkedList* $tmp2105 = *$tmp2104;
ITable* $tmp2106 = ((frost$collections$Iterable*) $tmp2105)->$class->itable;
while ($tmp2106->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2106 = $tmp2106->next;
}
$fn2108 $tmp2107 = $tmp2106->methods[0];
frost$collections$Iterator* $tmp2109 = $tmp2107(((frost$collections$Iterable*) $tmp2105));
*(&local4) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
frost$collections$Iterator* $tmp2110 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
*(&local4) = $tmp2109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:472
org$frostlang$frostc$IR$Block* $tmp2111 = *(&local3);
org$frostlang$frostc$LinkedList** $tmp2112 = &$tmp2111->statements;
org$frostlang$frostc$LinkedList* $tmp2113 = *$tmp2112;
ITable* $tmp2114 = ((frost$collections$Iterable*) $tmp2113)->$class->itable;
while ($tmp2114->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2114 = $tmp2114->next;
}
$fn2116 $tmp2115 = $tmp2114->methods[0];
frost$collections$Iterator* $tmp2117 = $tmp2115(((frost$collections$Iterable*) $tmp2113));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$collections$Iterator* $tmp2118 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
*(&local5) = $tmp2117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:473
goto block16;
block16:;
frost$collections$Iterator* $tmp2119 = *(&local4);
ITable* $tmp2120 = $tmp2119->$class->itable;
while ($tmp2120->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2120 = $tmp2120->next;
}
$fn2122 $tmp2121 = $tmp2120->methods[0];
frost$core$Bit $tmp2123 = $tmp2121($tmp2119);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:473:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2124 = $tmp2123.value;
bool $tmp2125 = !$tmp2124;
frost$core$Bit $tmp2126 = (frost$core$Bit) {$tmp2125};
bool $tmp2127 = $tmp2126.value;
if ($tmp2127) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:474
frost$collections$HashMap** $tmp2128 = &param0->statements;
frost$collections$HashMap* $tmp2129 = *$tmp2128;
frost$collections$Iterator* $tmp2130 = *(&local4);
ITable* $tmp2131 = $tmp2130->$class->itable;
while ($tmp2131->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2131 = $tmp2131->next;
}
$fn2133 $tmp2132 = $tmp2131->methods[1];
frost$core$Object* $tmp2134 = $tmp2132($tmp2130);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2135;
$tmp2135 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2135->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2134)->value;
frost$collections$Iterator* $tmp2136 = *(&local5);
ITable* $tmp2137 = $tmp2136->$class->itable;
while ($tmp2137->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2137 = $tmp2137->next;
}
$fn2139 $tmp2138 = $tmp2137->methods[1];
frost$core$Object* $tmp2140 = $tmp2138($tmp2136);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2129, ((frost$collections$Key*) $tmp2135), ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2140)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2135)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2134);
goto block16;
block18:;
frost$collections$Iterator* $tmp2141 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2142 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
*(&local4) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2094);
org$frostlang$frostc$IR$Block* $tmp2143 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:477
frost$collections$HashSet** $tmp2144 = &param0->worklist;
frost$collections$HashSet* $tmp2145 = *$tmp2144;
org$frostlang$frostc$IR** $tmp2146 = &param0->ir;
org$frostlang$frostc$IR* $tmp2147 = *$tmp2146;
frost$collections$Array** $tmp2148 = &$tmp2147->blocks;
frost$collections$Array* $tmp2149 = *$tmp2148;
frost$core$Int $tmp2150 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:477:31
frost$core$Int $tmp2151 = (frost$core$Int) {0u};
int64_t $tmp2152 = $tmp2150.value;
int64_t $tmp2153 = $tmp2151.value;
bool $tmp2154 = $tmp2152 >= $tmp2153;
frost$core$Bit $tmp2155 = (frost$core$Bit) {$tmp2154};
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block23; else goto block22;
block23:;
ITable* $tmp2157 = ((frost$collections$CollectionView*) $tmp2149)->$class->itable;
while ($tmp2157->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2157 = $tmp2157->next;
}
$fn2159 $tmp2158 = $tmp2157->methods[0];
frost$core$Int $tmp2160 = $tmp2158(((frost$collections$CollectionView*) $tmp2149));
int64_t $tmp2161 = $tmp2150.value;
int64_t $tmp2162 = $tmp2160.value;
bool $tmp2163 = $tmp2161 < $tmp2162;
frost$core$Bit $tmp2164 = (frost$core$Bit) {$tmp2163};
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block21; else goto block22;
block22:;
frost$core$Int $tmp2166 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2167, $tmp2166, &$s2168);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2169 = &$tmp2149->data;
frost$core$Object** $tmp2170 = *$tmp2169;
frost$core$Int64 $tmp2171 = frost$core$Int64$init$frost$core$Int($tmp2150);
int64_t $tmp2172 = $tmp2171.value;
frost$core$Object* $tmp2173 = $tmp2170[$tmp2172];
frost$core$Frost$ref$frost$core$Object$Q($tmp2173);
org$frostlang$frostc$IR$Block$ID* $tmp2174 = &((org$frostlang$frostc$IR$Block*) $tmp2173)->id;
org$frostlang$frostc$IR$Block$ID $tmp2175 = *$tmp2174;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2176;
$tmp2176 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2176->value = $tmp2175;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:477:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp2177 = &$tmp2145->contents;
frost$collections$HashMap* $tmp2178 = *$tmp2177;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2178, ((frost$collections$Key*) $tmp2176), ((frost$core$Object*) ((frost$collections$Key*) $tmp2176)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2176)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2173);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:478
goto block25;
block25:;
frost$collections$HashSet** $tmp2179 = &param0->worklist;
frost$collections$HashSet* $tmp2180 = *$tmp2179;
ITable* $tmp2181 = ((frost$collections$CollectionView*) $tmp2180)->$class->itable;
while ($tmp2181->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2181 = $tmp2181->next;
}
$fn2183 $tmp2182 = $tmp2181->methods[0];
frost$core$Int $tmp2184 = $tmp2182(((frost$collections$CollectionView*) $tmp2180));
frost$core$Int $tmp2185 = (frost$core$Int) {0u};
int64_t $tmp2186 = $tmp2184.value;
int64_t $tmp2187 = $tmp2185.value;
bool $tmp2188 = $tmp2186 > $tmp2187;
frost$core$Bit $tmp2189 = (frost$core$Bit) {$tmp2188};
bool $tmp2190 = $tmp2189.value;
if ($tmp2190) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:479
frost$collections$HashSet** $tmp2191 = &param0->worklist;
frost$collections$HashSet* $tmp2192 = *$tmp2191;
ITable* $tmp2193 = ((frost$collections$Iterable*) $tmp2192)->$class->itable;
while ($tmp2193->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2193 = $tmp2193->next;
}
$fn2195 $tmp2194 = $tmp2193->methods[0];
frost$collections$Iterator* $tmp2196 = $tmp2194(((frost$collections$Iterable*) $tmp2192));
ITable* $tmp2197 = $tmp2196->$class->itable;
while ($tmp2197->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2197 = $tmp2197->next;
}
$fn2199 $tmp2198 = $tmp2197->methods[1];
frost$core$Object* $tmp2200 = $tmp2198($tmp2196);
*(&local6) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2200)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2200);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:480
frost$collections$HashSet** $tmp2201 = &param0->worklist;
frost$collections$HashSet* $tmp2202 = *$tmp2201;
org$frostlang$frostc$IR$Block$ID $tmp2203 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2204;
$tmp2204 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2204->value = $tmp2203;
// begin inline call to method frost.collections.HashSet.remove(value:frost.collections.HashSet.T) from Analyzer.frost:480:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:30
frost$collections$HashMap** $tmp2205 = &$tmp2202->contents;
frost$collections$HashMap* $tmp2206 = *$tmp2205;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp2206, ((frost$collections$Key*) $tmp2204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2204)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:481
org$frostlang$frostc$IR$Block$ID $tmp2207 = *(&local6);
$fn2209 $tmp2208 = ($fn2209) param0->$class->vtable[8];
$tmp2208(param0, $tmp2207);
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:483
frost$core$Bit $tmp2210 = (frost$core$Bit) {true};
frost$core$Bit* $tmp2211 = &param0->reportErrors;
*$tmp2211 = $tmp2210;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:484
org$frostlang$frostc$IR** $tmp2212 = &param0->ir;
org$frostlang$frostc$IR* $tmp2213 = *$tmp2212;
frost$collections$Array** $tmp2214 = &$tmp2213->blocks;
frost$collections$Array* $tmp2215 = *$tmp2214;
ITable* $tmp2216 = ((frost$collections$Iterable*) $tmp2215)->$class->itable;
while ($tmp2216->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2216 = $tmp2216->next;
}
$fn2218 $tmp2217 = $tmp2216->methods[0];
frost$collections$Iterator* $tmp2219 = $tmp2217(((frost$collections$Iterable*) $tmp2215));
goto block29;
block29:;
ITable* $tmp2220 = $tmp2219->$class->itable;
while ($tmp2220->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2220 = $tmp2220->next;
}
$fn2222 $tmp2221 = $tmp2220->methods[0];
frost$core$Bit $tmp2223 = $tmp2221($tmp2219);
bool $tmp2224 = $tmp2223.value;
if ($tmp2224) goto block31; else goto block30;
block30:;
*(&local7) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2225 = $tmp2219->$class->itable;
while ($tmp2225->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2225 = $tmp2225->next;
}
$fn2227 $tmp2226 = $tmp2225->methods[1];
frost$core$Object* $tmp2228 = $tmp2226($tmp2219);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2228)));
org$frostlang$frostc$IR$Block* $tmp2229 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
*(&local7) = ((org$frostlang$frostc$IR$Block*) $tmp2228);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:485
frost$collections$HashMap** $tmp2230 = &param0->entryStates;
frost$collections$HashMap* $tmp2231 = *$tmp2230;
org$frostlang$frostc$IR$Block* $tmp2232 = *(&local7);
org$frostlang$frostc$IR$Block$ID* $tmp2233 = &$tmp2232->id;
org$frostlang$frostc$IR$Block$ID $tmp2234 = *$tmp2233;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2235;
$tmp2235 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2235->value = $tmp2234;
frost$core$Object* $tmp2236 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2231, ((frost$collections$Key*) $tmp2235));
frost$core$Bit $tmp2237 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2236) != NULL};
bool $tmp2238 = $tmp2237.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2235)));
if ($tmp2238) goto block32; else goto block34;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:486
org$frostlang$frostc$IR$Block* $tmp2239 = *(&local7);
org$frostlang$frostc$LinkedList** $tmp2240 = &$tmp2239->statements;
org$frostlang$frostc$LinkedList* $tmp2241 = *$tmp2240;
ITable* $tmp2242 = ((frost$collections$CollectionView*) $tmp2241)->$class->itable;
while ($tmp2242->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2242 = $tmp2242->next;
}
$fn2244 $tmp2243 = $tmp2242->methods[1];
frost$core$Object* $tmp2245 = $tmp2243(((frost$collections$CollectionView*) $tmp2241));
frost$core$Int* $tmp2246 = &((org$frostlang$frostc$IR$Statement*) $tmp2245)->$rawValue;
frost$core$Int $tmp2247 = *$tmp2246;
frost$core$Int $tmp2248 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:487:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2249 = $tmp2247.value;
int64_t $tmp2250 = $tmp2248.value;
bool $tmp2251 = $tmp2249 == $tmp2250;
frost$core$Bit $tmp2252 = (frost$core$Bit) {$tmp2251};
bool $tmp2253 = $tmp2252.value;
if ($tmp2253) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:488
org$frostlang$frostc$MethodDecl** $tmp2254 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2255 = *$tmp2254;
org$frostlang$frostc$MethodDecl$Kind* $tmp2256 = &$tmp2255->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2257 = *$tmp2256;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2258;
$tmp2258 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2258->value = $tmp2257;
frost$core$Int $tmp2259 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Analyzer.frost:488:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2260 = &(&local9)->$rawValue;
*$tmp2260 = $tmp2259;
org$frostlang$frostc$MethodDecl$Kind $tmp2261 = *(&local9);
*(&local8) = $tmp2261;
org$frostlang$frostc$MethodDecl$Kind $tmp2262 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2263;
$tmp2263 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2263->value = $tmp2262;
ITable* $tmp2264 = ((frost$core$Equatable*) $tmp2258)->$class->itable;
while ($tmp2264->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2264 = $tmp2264->next;
}
$fn2266 $tmp2265 = $tmp2264->methods[1];
frost$core$Bit $tmp2267 = $tmp2265(((frost$core$Equatable*) $tmp2258), ((frost$core$Equatable*) $tmp2263));
bool $tmp2268 = $tmp2267.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2263)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2258)));
if ($tmp2268) goto block41; else goto block40;
block41:;
org$frostlang$frostc$MethodDecl** $tmp2269 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2270 = *$tmp2269;
org$frostlang$frostc$Type** $tmp2271 = &$tmp2270->returnType;
org$frostlang$frostc$Type* $tmp2272 = *$tmp2271;
org$frostlang$frostc$Compiler** $tmp2273 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2274 = *$tmp2273;
org$frostlang$frostc$Type** $tmp2275 = &$tmp2274->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2276 = *$tmp2275;
ITable* $tmp2277 = ((frost$core$Equatable*) $tmp2272)->$class->itable;
while ($tmp2277->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2277 = $tmp2277->next;
}
$fn2279 $tmp2278 = $tmp2277->methods[1];
frost$core$Bit $tmp2280 = $tmp2278(((frost$core$Equatable*) $tmp2272), ((frost$core$Equatable*) $tmp2276));
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:490
org$frostlang$frostc$Compiler** $tmp2282 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2283 = *$tmp2282;
org$frostlang$frostc$MethodDecl** $tmp2284 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2285 = *$tmp2284;
org$frostlang$frostc$Position* $tmp2286 = &((org$frostlang$frostc$Symbol*) $tmp2285)->position;
org$frostlang$frostc$Position $tmp2287 = *$tmp2286;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2283, $tmp2287, &$s2288);
goto block40;
block40:;
goto block35;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:494
org$frostlang$frostc$IR$Block* $tmp2289 = *(&local7);
org$frostlang$frostc$IR$Block$ID* $tmp2290 = &$tmp2289->id;
org$frostlang$frostc$IR$Block$ID $tmp2291 = *$tmp2290;
frost$core$Int $tmp2292 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:494:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp2293 = &(&local11)->id;
*$tmp2293 = $tmp2291;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp2294 = &(&local11)->exit;
*$tmp2294 = $tmp2292;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2295 = *(&local11);
*(&local10) = $tmp2295;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2296 = *(&local10);
$fn2298 $tmp2297 = ($fn2298) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp2299 = $tmp2297(param0, $tmp2296);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
goto block35;
block35:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2245);
goto block33;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:498
org$frostlang$frostc$IR$Block* $tmp2300 = *(&local7);
frost$core$Bit* $tmp2301 = &$tmp2300->containsExplicitCode;
frost$core$Bit $tmp2302 = *$tmp2301;
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block46; else goto block45;
block46:;
org$frostlang$frostc$IR$Block* $tmp2304 = *(&local7);
frost$core$Bit* $tmp2305 = &$tmp2304->forceReachable;
frost$core$Bit $tmp2306 = *$tmp2305;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:498:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2307 = $tmp2306.value;
bool $tmp2308 = !$tmp2307;
frost$core$Bit $tmp2309 = (frost$core$Bit) {$tmp2308};
bool $tmp2310 = $tmp2309.value;
if ($tmp2310) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:499
org$frostlang$frostc$Compiler** $tmp2311 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2312 = *$tmp2311;
org$frostlang$frostc$IR$Block* $tmp2313 = *(&local7);
org$frostlang$frostc$LinkedList** $tmp2314 = &$tmp2313->statements;
org$frostlang$frostc$LinkedList* $tmp2315 = *$tmp2314;
ITable* $tmp2316 = ((frost$collections$CollectionView*) $tmp2315)->$class->itable;
while ($tmp2316->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2316 = $tmp2316->next;
}
$fn2318 $tmp2317 = $tmp2316->methods[1];
frost$core$Object* $tmp2319 = $tmp2317(((frost$collections$CollectionView*) $tmp2315));
$fn2321 $tmp2320 = ($fn2321) ((org$frostlang$frostc$IR$Statement*) $tmp2319)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2322 = $tmp2320(((org$frostlang$frostc$IR$Statement*) $tmp2319));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2312, $tmp2322, &$s2323);
frost$core$Frost$unref$frost$core$Object$Q($tmp2319);
goto block45;
block45:;
goto block33;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2228);
org$frostlang$frostc$IR$Block* $tmp2324 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
*(&local7) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
org$frostlang$frostc$pass$Analyzer$State* $tmp2325 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$Position local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:505
org$frostlang$frostc$LinkedList** $tmp2327 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2328 = *$tmp2327;
ITable* $tmp2329 = ((frost$collections$CollectionView*) $tmp2328)->$class->itable;
while ($tmp2329->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2329 = $tmp2329->next;
}
$fn2331 $tmp2330 = $tmp2329->methods[1];
frost$core$Object* $tmp2332 = $tmp2330(((frost$collections$CollectionView*) $tmp2328));
*(&local0) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2332)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2332);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:506
org$frostlang$frostc$LinkedList** $tmp2333 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2334 = *$tmp2333;
ITable* $tmp2335 = ((frost$collections$CollectionView*) $tmp2334)->$class->itable;
while ($tmp2335->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2335 = $tmp2335->next;
}
$fn2337 $tmp2336 = $tmp2335->methods[1];
frost$core$Object* $tmp2338 = $tmp2336(((frost$collections$CollectionView*) $tmp2334));
$fn2340 $tmp2339 = ($fn2340) ((org$frostlang$frostc$IR$Statement*) $tmp2338)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2341 = $tmp2339(((org$frostlang$frostc$IR$Statement*) $tmp2338));
*(&local1) = $tmp2341;
frost$core$Frost$unref$frost$core$Object$Q($tmp2338);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:507
org$frostlang$frostc$LinkedList** $tmp2342 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2343 = *$tmp2342;
$fn2345 $tmp2344 = ($fn2345) $tmp2343->$class->vtable[8];
$tmp2344($tmp2343);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:508
org$frostlang$frostc$LinkedList** $tmp2346 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2347 = *$tmp2346;
org$frostlang$frostc$IR$Statement$ID $tmp2348 = *(&local0);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2349;
$tmp2349 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2349->value = $tmp2348;
$fn2351 $tmp2350 = ($fn2351) $tmp2347->$class->vtable[4];
$tmp2350($tmp2347, ((frost$core$Object*) $tmp2349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:509
org$frostlang$frostc$LinkedList** $tmp2352 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2353 = *$tmp2352;
$fn2355 $tmp2354 = ($fn2355) $tmp2353->$class->vtable[8];
$tmp2354($tmp2353);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:510
org$frostlang$frostc$LinkedList** $tmp2356 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2357 = *$tmp2356;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2358 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2359 = (frost$core$Int) {28u};
org$frostlang$frostc$Position $tmp2360 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position($tmp2358, $tmp2359, $tmp2360);
$fn2362 $tmp2361 = ($fn2362) $tmp2357->$class->vtable[4];
$tmp2361($tmp2357, ((frost$core$Object*) $tmp2358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
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
org$frostlang$frostc$IR** $tmp2363 = &param0->ir;
org$frostlang$frostc$IR* $tmp2364 = *$tmp2363;
frost$collections$Array** $tmp2365 = &$tmp2364->blocks;
frost$collections$Array* $tmp2366 = *$tmp2365;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:514:33
frost$core$Int $tmp2367 = (frost$core$Int) {0u};
int64_t $tmp2368 = param1.value;
int64_t $tmp2369 = $tmp2367.value;
bool $tmp2370 = $tmp2368 >= $tmp2369;
frost$core$Bit $tmp2371 = (frost$core$Bit) {$tmp2370};
bool $tmp2372 = $tmp2371.value;
if ($tmp2372) goto block4; else goto block3;
block4:;
ITable* $tmp2373 = ((frost$collections$CollectionView*) $tmp2366)->$class->itable;
while ($tmp2373->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2373 = $tmp2373->next;
}
$fn2375 $tmp2374 = $tmp2373->methods[0];
frost$core$Int $tmp2376 = $tmp2374(((frost$collections$CollectionView*) $tmp2366));
int64_t $tmp2377 = param1.value;
int64_t $tmp2378 = $tmp2376.value;
bool $tmp2379 = $tmp2377 < $tmp2378;
frost$core$Bit $tmp2380 = (frost$core$Bit) {$tmp2379};
bool $tmp2381 = $tmp2380.value;
if ($tmp2381) goto block2; else goto block3;
block3:;
frost$core$Int $tmp2382 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2383, $tmp2382, &$s2384);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2385 = &$tmp2366->data;
frost$core$Object** $tmp2386 = *$tmp2385;
frost$core$Int64 $tmp2387 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp2388 = $tmp2387.value;
frost$core$Object* $tmp2389 = $tmp2386[$tmp2388];
frost$core$Frost$ref$frost$core$Object$Q($tmp2389);
org$frostlang$frostc$IR$Block$ID* $tmp2390 = &((org$frostlang$frostc$IR$Block*) $tmp2389)->id;
org$frostlang$frostc$IR$Block$ID $tmp2391 = *$tmp2390;
*(&local0) = $tmp2391;
frost$core$Frost$unref$frost$core$Object$Q($tmp2389);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:515
org$frostlang$frostc$IR** $tmp2392 = &param0->ir;
org$frostlang$frostc$IR* $tmp2393 = *$tmp2392;
frost$collections$Array** $tmp2394 = &$tmp2393->blocks;
frost$collections$Array* $tmp2395 = *$tmp2394;
frost$core$Object* $tmp2396 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp2395, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2396);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:516
org$frostlang$frostc$IR** $tmp2397 = &param0->ir;
org$frostlang$frostc$IR* $tmp2398 = *$tmp2397;
frost$collections$Array** $tmp2399 = &$tmp2398->blocks;
frost$collections$Array* $tmp2400 = *$tmp2399;
ITable* $tmp2401 = ((frost$collections$Iterable*) $tmp2400)->$class->itable;
while ($tmp2401->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2401 = $tmp2401->next;
}
$fn2403 $tmp2402 = $tmp2401->methods[0];
frost$collections$Iterator* $tmp2404 = $tmp2402(((frost$collections$Iterable*) $tmp2400));
goto block5;
block5:;
ITable* $tmp2405 = $tmp2404->$class->itable;
while ($tmp2405->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2405 = $tmp2405->next;
}
$fn2407 $tmp2406 = $tmp2405->methods[0];
frost$core$Bit $tmp2408 = $tmp2406($tmp2404);
bool $tmp2409 = $tmp2408.value;
if ($tmp2409) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2410 = $tmp2404->$class->itable;
while ($tmp2410->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2410 = $tmp2410->next;
}
$fn2412 $tmp2411 = $tmp2410->methods[1];
frost$core$Object* $tmp2413 = $tmp2411($tmp2404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2413)));
org$frostlang$frostc$IR$Block* $tmp2414 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2413);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:517
org$frostlang$frostc$IR$Block* $tmp2415 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2416 = &$tmp2415->statements;
org$frostlang$frostc$LinkedList* $tmp2417 = *$tmp2416;
ITable* $tmp2418 = ((frost$collections$CollectionView*) $tmp2417)->$class->itable;
while ($tmp2418->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2418 = $tmp2418->next;
}
$fn2420 $tmp2419 = $tmp2418->methods[0];
frost$core$Int $tmp2421 = $tmp2419(((frost$collections$CollectionView*) $tmp2417));
frost$core$Int $tmp2422 = (frost$core$Int) {1u};
int64_t $tmp2423 = $tmp2421.value;
int64_t $tmp2424 = $tmp2422.value;
int64_t $tmp2425 = $tmp2423 - $tmp2424;
frost$core$Int $tmp2426 = (frost$core$Int) {$tmp2425};
*(&local2) = $tmp2426;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:518
org$frostlang$frostc$IR$Block* $tmp2427 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2428 = &$tmp2427->statements;
org$frostlang$frostc$LinkedList* $tmp2429 = *$tmp2428;
$fn2431 $tmp2430 = ($fn2431) $tmp2429->$class->vtable[6];
frost$core$Object* $tmp2432 = $tmp2430($tmp2429);
frost$core$Int* $tmp2433 = &((org$frostlang$frostc$IR$Statement*) $tmp2432)->$rawValue;
frost$core$Int $tmp2434 = *$tmp2433;
frost$core$Int $tmp2435 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:519:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2436 = $tmp2434.value;
int64_t $tmp2437 = $tmp2435.value;
bool $tmp2438 = $tmp2436 == $tmp2437;
frost$core$Bit $tmp2439 = (frost$core$Bit) {$tmp2438};
bool $tmp2440 = $tmp2439.value;
if ($tmp2440) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2441 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2432)->$data + 0);
org$frostlang$frostc$Position $tmp2442 = *$tmp2441;
org$frostlang$frostc$IR$Block$ID* $tmp2443 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2432)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2444 = *$tmp2443;
*(&local3) = $tmp2444;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:520
org$frostlang$frostc$IR$Block$ID $tmp2445 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2446 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:520:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2447 = $tmp2445.value;
frost$core$Int $tmp2448 = $tmp2446.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2449 = $tmp2447.value;
int64_t $tmp2450 = $tmp2448.value;
bool $tmp2451 = $tmp2449 == $tmp2450;
frost$core$Bit $tmp2452 = (frost$core$Bit) {$tmp2451};
bool $tmp2453 = $tmp2452.value;
if ($tmp2453) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:521
org$frostlang$frostc$IR$Block* $tmp2454 = *(&local1);
$fn2456 $tmp2455 = ($fn2456) param0->$class->vtable[11];
$tmp2455(param0, $tmp2454);
goto block13;
block13:;
goto block8;
block10:;
frost$core$Int $tmp2457 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:524:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2458 = $tmp2434.value;
int64_t $tmp2459 = $tmp2457.value;
bool $tmp2460 = $tmp2458 == $tmp2459;
frost$core$Bit $tmp2461 = (frost$core$Bit) {$tmp2460};
bool $tmp2462 = $tmp2461.value;
if ($tmp2462) goto block16; else goto block8;
block16:;
org$frostlang$frostc$Position* $tmp2463 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2432)->$data + 0);
org$frostlang$frostc$Position $tmp2464 = *$tmp2463;
*(&local4) = $tmp2464;
org$frostlang$frostc$IR$Value** $tmp2465 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2432)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2466 = *$tmp2465;
org$frostlang$frostc$IR$Block$ID* $tmp2467 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2432)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2468 = *$tmp2467;
*(&local5) = $tmp2468;
org$frostlang$frostc$IR$Block$ID* $tmp2469 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2432)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2470 = *$tmp2469;
*(&local6) = $tmp2470;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:525
org$frostlang$frostc$IR$Block$ID $tmp2471 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2472;
$tmp2472 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2472->value = $tmp2471;
org$frostlang$frostc$IR$Block$ID $tmp2473 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2474;
$tmp2474 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2474->value = $tmp2473;
ITable* $tmp2475 = ((frost$core$Equatable*) $tmp2472)->$class->itable;
while ($tmp2475->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2475 = $tmp2475->next;
}
$fn2477 $tmp2476 = $tmp2475->methods[1];
frost$core$Bit $tmp2478 = $tmp2476(((frost$core$Equatable*) $tmp2472), ((frost$core$Equatable*) $tmp2474));
bool $tmp2479 = $tmp2478.value;
if ($tmp2479) goto block18; else goto block19;
block19:;
frost$core$Int $tmp2480 = (frost$core$Int) {525u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2481, $tmp2480);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2474)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2472)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:526
org$frostlang$frostc$IR$Block$ID $tmp2482 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp2483 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:526:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2484 = $tmp2482.value;
frost$core$Int $tmp2485 = $tmp2483.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2486 = $tmp2484.value;
int64_t $tmp2487 = $tmp2485.value;
bool $tmp2488 = $tmp2486 == $tmp2487;
frost$core$Bit $tmp2489 = (frost$core$Bit) {$tmp2488};
bool $tmp2490 = $tmp2489.value;
if ($tmp2490) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:528
frost$core$System$crash();
goto block21;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:530
org$frostlang$frostc$IR$Block$ID $tmp2491 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2492 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:530:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2493 = $tmp2491.value;
frost$core$Int $tmp2494 = $tmp2492.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2495 = $tmp2493.value;
int64_t $tmp2496 = $tmp2494.value;
bool $tmp2497 = $tmp2495 == $tmp2496;
frost$core$Bit $tmp2498 = (frost$core$Bit) {$tmp2497};
bool $tmp2499 = $tmp2498.value;
if ($tmp2499) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:532
frost$core$System$crash();
goto block26;
block26:;
goto block21;
block21:;
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2432);
frost$core$Frost$unref$frost$core$Object$Q($tmp2413);
org$frostlang$frostc$IR$Block* $tmp2500 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
return;

}
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp2501 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2502 = *$tmp2501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
org$frostlang$frostc$MethodDecl** $tmp2503 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2504 = *$tmp2503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
org$frostlang$frostc$IR** $tmp2505 = &param0->ir;
org$frostlang$frostc$IR* $tmp2506 = *$tmp2505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
frost$collections$HashMap** $tmp2507 = &param0->blocks;
frost$collections$HashMap* $tmp2508 = *$tmp2507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
frost$collections$HashMap** $tmp2509 = &param0->predecessors;
frost$collections$HashMap* $tmp2510 = *$tmp2509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
frost$collections$HashMap** $tmp2511 = &param0->entryStates;
frost$collections$HashMap* $tmp2512 = *$tmp2511;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
frost$collections$HashSet** $tmp2513 = &param0->worklist;
frost$collections$HashSet* $tmp2514 = *$tmp2513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
frost$collections$HashMap** $tmp2515 = &param0->statements;
frost$collections$HashMap* $tmp2516 = *$tmp2515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
return;

}

