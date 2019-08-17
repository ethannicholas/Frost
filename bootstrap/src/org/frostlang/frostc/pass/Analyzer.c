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
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn150)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn207)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn219)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$Type* (*$fn246)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn271)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn284)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn297)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn310)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn320)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn336)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn349)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn362)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn375)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn385)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn435)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn445)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn489)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn541)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn568)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn577)(frost$core$Object*);
typedef frost$core$String* (*$fn585)(frost$core$Object*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn606)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn622)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn625)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn664)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn702)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn740)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn760)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn798)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn810)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$String* (*$fn830)(frost$core$Object*);
typedef frost$core$Int (*$fn888)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn955)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$String* (*$fn973)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1002)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn1016)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1019)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1030)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1035)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1044)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1047)(org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn1063)(org$frostlang$frostc$LinkedList*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1084)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn1097)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1101)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1106)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1148)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1186)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1202)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1255)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1341)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1414)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1422)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1428)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1437)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1442)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1480)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn1490)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1566)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1589)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1619)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef void (*$fn1625)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*, frost$core$Int, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn1640)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn1664)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1689)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1700)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Object* (*$fn1724)(org$frostlang$frostc$LinkedList*);
typedef frost$core$String* (*$fn1727)(frost$core$Object*);
typedef frost$core$Int (*$fn1744)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1766)(frost$core$Object*);
typedef frost$core$Int (*$fn1785)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1801)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1832)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1836)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1841)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1849)(frost$core$Object*);
typedef frost$core$String* (*$fn1872)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1882)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1890)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1896)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1905)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1909)(frost$core$Object*);
typedef frost$core$Object* (*$fn1915)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1918)(frost$core$Object*);
typedef frost$core$Int (*$fn1938)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1995)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2020)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2024)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2029)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2044)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn2052)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2058)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2069)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2075)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2095)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2119)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2131)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2135)(frost$collections$Iterator*);
typedef void (*$fn2145)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2154)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2158)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2163)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2180)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2202)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2215)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn2234)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Object* (*$fn2254)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2257)(org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn2267)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2273)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2276)(org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2281)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2287)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn2291)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2298)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Int (*$fn2311)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2339)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2343)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2348)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2356)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2367)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2392)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn2413)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72", 34, -7908766228797686597, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -6163429507827714296, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6d\x61\x79\x20\x62\x65\x20\x6e\x75\x6c\x6c", 13, -372519665545753491, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20", 6, 2389068132842847038, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64", 25, 6096059661963607284, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x3a\x20", 23, 7177047828670113807, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x27", 19, 3303349432046188092, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 4880269855066615229, NULL };
static frost$core$String $s1731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s1771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s1793 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1806 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s2003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 2495389199813969088, NULL };
static frost$core$String $s2259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Int $tmp259 = (frost$core$Int) {1u};
frost$core$Object* $tmp260 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp258, $tmp259);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:179:58
org$frostlang$frostc$Type$Kind* $tmp261 = &((org$frostlang$frostc$Type*) $tmp260)->typeKind;
org$frostlang$frostc$Type$Kind $tmp262 = *$tmp261;
org$frostlang$frostc$Type$Kind$wrapper* $tmp263;
$tmp263 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp263->value = $tmp262;
frost$core$Int $tmp264 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp265 = &(&local19)->$rawValue;
*$tmp265 = $tmp264;
org$frostlang$frostc$Type$Kind $tmp266 = *(&local19);
*(&local18) = $tmp266;
org$frostlang$frostc$Type$Kind $tmp267 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp268;
$tmp268 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp268->value = $tmp267;
ITable* $tmp269 = ((frost$core$Equatable*) $tmp263)->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
frost$core$Bit $tmp272 = $tmp270(((frost$core$Equatable*) $tmp263), ((frost$core$Equatable*) $tmp268));
bool $tmp273 = $tmp272.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp268)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp263)));
if ($tmp273) goto block44; else goto block48;
block48:;
org$frostlang$frostc$Type$Kind* $tmp274 = &((org$frostlang$frostc$Type*) $tmp260)->typeKind;
org$frostlang$frostc$Type$Kind $tmp275 = *$tmp274;
org$frostlang$frostc$Type$Kind$wrapper* $tmp276;
$tmp276 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp276->value = $tmp275;
frost$core$Int $tmp277 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp278 = &(&local21)->$rawValue;
*$tmp278 = $tmp277;
org$frostlang$frostc$Type$Kind $tmp279 = *(&local21);
*(&local20) = $tmp279;
org$frostlang$frostc$Type$Kind $tmp280 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp281;
$tmp281 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp281->value = $tmp280;
ITable* $tmp282 = ((frost$core$Equatable*) $tmp276)->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[0];
frost$core$Bit $tmp285 = $tmp283(((frost$core$Equatable*) $tmp276), ((frost$core$Equatable*) $tmp281));
bool $tmp286 = $tmp285.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp281)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp276)));
if ($tmp286) goto block44; else goto block47;
block47:;
org$frostlang$frostc$Type$Kind* $tmp287 = &((org$frostlang$frostc$Type*) $tmp260)->typeKind;
org$frostlang$frostc$Type$Kind $tmp288 = *$tmp287;
org$frostlang$frostc$Type$Kind$wrapper* $tmp289;
$tmp289 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp289->value = $tmp288;
frost$core$Int $tmp290 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp291 = &(&local23)->$rawValue;
*$tmp291 = $tmp290;
org$frostlang$frostc$Type$Kind $tmp292 = *(&local23);
*(&local22) = $tmp292;
org$frostlang$frostc$Type$Kind $tmp293 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp294;
$tmp294 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp294->value = $tmp293;
ITable* $tmp295 = ((frost$core$Equatable*) $tmp289)->$class->itable;
while ($tmp295->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp295 = $tmp295->next;
}
$fn297 $tmp296 = $tmp295->methods[0];
frost$core$Bit $tmp298 = $tmp296(((frost$core$Equatable*) $tmp289), ((frost$core$Equatable*) $tmp294));
bool $tmp299 = $tmp298.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp294)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp289)));
if ($tmp299) goto block44; else goto block46;
block46:;
org$frostlang$frostc$Type$Kind* $tmp300 = &((org$frostlang$frostc$Type*) $tmp260)->typeKind;
org$frostlang$frostc$Type$Kind $tmp301 = *$tmp300;
org$frostlang$frostc$Type$Kind$wrapper* $tmp302;
$tmp302 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp302->value = $tmp301;
frost$core$Int $tmp303 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp304 = &(&local25)->$rawValue;
*$tmp304 = $tmp303;
org$frostlang$frostc$Type$Kind $tmp305 = *(&local25);
*(&local24) = $tmp305;
org$frostlang$frostc$Type$Kind $tmp306 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp307;
$tmp307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp307->value = $tmp306;
ITable* $tmp308 = ((frost$core$Equatable*) $tmp302)->$class->itable;
while ($tmp308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp308 = $tmp308->next;
}
$fn310 $tmp309 = $tmp308->methods[0];
frost$core$Bit $tmp311 = $tmp309(((frost$core$Equatable*) $tmp302), ((frost$core$Equatable*) $tmp307));
bool $tmp312 = $tmp311.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp307)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp302)));
if ($tmp312) goto block44; else goto block45;
block45:;
frost$core$Int $tmp313 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s314, $tmp313, &$s315);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp316 = &((org$frostlang$frostc$Type*) $tmp260)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp317 = *$tmp316;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
ITable* $tmp318 = ((frost$collections$ListView*) $tmp317)->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[5];
frost$core$Object* $tmp321 = $tmp319(((frost$collections$ListView*) $tmp317));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp321)));
frost$core$Frost$unref$frost$core$Object$Q($tmp321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp255, ((org$frostlang$frostc$Type*) $tmp321));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp321)));
frost$core$Frost$unref$frost$core$Object$Q($tmp260);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$Type* $tmp322 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp323 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp255;
block40:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:182
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp324 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp325 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:182:46
org$frostlang$frostc$Type$Kind* $tmp326 = &$tmp325->typeKind;
org$frostlang$frostc$Type$Kind $tmp327 = *$tmp326;
org$frostlang$frostc$Type$Kind$wrapper* $tmp328;
$tmp328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp328->value = $tmp327;
frost$core$Int $tmp329 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp330 = &(&local27)->$rawValue;
*$tmp330 = $tmp329;
org$frostlang$frostc$Type$Kind $tmp331 = *(&local27);
*(&local26) = $tmp331;
org$frostlang$frostc$Type$Kind $tmp332 = *(&local26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp333;
$tmp333 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp333->value = $tmp332;
ITable* $tmp334 = ((frost$core$Equatable*) $tmp328)->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
frost$core$Bit $tmp337 = $tmp335(((frost$core$Equatable*) $tmp328), ((frost$core$Equatable*) $tmp333));
bool $tmp338 = $tmp337.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp333)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp328)));
if ($tmp338) goto block55; else goto block59;
block59:;
org$frostlang$frostc$Type$Kind* $tmp339 = &$tmp325->typeKind;
org$frostlang$frostc$Type$Kind $tmp340 = *$tmp339;
org$frostlang$frostc$Type$Kind$wrapper* $tmp341;
$tmp341 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp341->value = $tmp340;
frost$core$Int $tmp342 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp343 = &(&local29)->$rawValue;
*$tmp343 = $tmp342;
org$frostlang$frostc$Type$Kind $tmp344 = *(&local29);
*(&local28) = $tmp344;
org$frostlang$frostc$Type$Kind $tmp345 = *(&local28);
org$frostlang$frostc$Type$Kind$wrapper* $tmp346;
$tmp346 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp346->value = $tmp345;
ITable* $tmp347 = ((frost$core$Equatable*) $tmp341)->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp347 = $tmp347->next;
}
$fn349 $tmp348 = $tmp347->methods[0];
frost$core$Bit $tmp350 = $tmp348(((frost$core$Equatable*) $tmp341), ((frost$core$Equatable*) $tmp346));
bool $tmp351 = $tmp350.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp346)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp341)));
if ($tmp351) goto block55; else goto block58;
block58:;
org$frostlang$frostc$Type$Kind* $tmp352 = &$tmp325->typeKind;
org$frostlang$frostc$Type$Kind $tmp353 = *$tmp352;
org$frostlang$frostc$Type$Kind$wrapper* $tmp354;
$tmp354 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp354->value = $tmp353;
frost$core$Int $tmp355 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp356 = &(&local31)->$rawValue;
*$tmp356 = $tmp355;
org$frostlang$frostc$Type$Kind $tmp357 = *(&local31);
*(&local30) = $tmp357;
org$frostlang$frostc$Type$Kind $tmp358 = *(&local30);
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
if ($tmp364) goto block55; else goto block57;
block57:;
org$frostlang$frostc$Type$Kind* $tmp365 = &$tmp325->typeKind;
org$frostlang$frostc$Type$Kind $tmp366 = *$tmp365;
org$frostlang$frostc$Type$Kind$wrapper* $tmp367;
$tmp367 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp367->value = $tmp366;
frost$core$Int $tmp368 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp369 = &(&local33)->$rawValue;
*$tmp369 = $tmp368;
org$frostlang$frostc$Type$Kind $tmp370 = *(&local33);
*(&local32) = $tmp370;
org$frostlang$frostc$Type$Kind $tmp371 = *(&local32);
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
if ($tmp377) goto block55; else goto block56;
block56:;
frost$core$Int $tmp378 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp381 = &$tmp325->_subtypes;
org$frostlang$frostc$FixedArray* $tmp382 = *$tmp381;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
ITable* $tmp383 = ((frost$collections$ListView*) $tmp382)->$class->itable;
while ($tmp383->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp383 = $tmp383->next;
}
$fn385 $tmp384 = $tmp383->methods[5];
frost$core$Object* $tmp386 = $tmp384(((frost$collections$ListView*) $tmp382));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp386)));
frost$core$Frost$unref$frost$core$Object$Q($tmp386);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp324, ((org$frostlang$frostc$Type*) $tmp386));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp386)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlang$frostc$Type* $tmp387 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp388 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp324;
block39:;
org$frostlang$frostc$Type* $tmp389 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp390 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block36:;
frost$core$Int $tmp391 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:185:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp392 = $tmp38.value;
int64_t $tmp393 = $tmp391.value;
bool $tmp394 = $tmp392 == $tmp393;
frost$core$Bit $tmp395 = (frost$core$Bit) {$tmp394};
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Position* $tmp397 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp398 = *$tmp397;
org$frostlang$frostc$IR$Value** $tmp399 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp400 = *$tmp399;
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
org$frostlang$frostc$IR$Value* $tmp401 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local34) = $tmp400;
org$frostlang$frostc$FieldDecl** $tmp402 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp403 = *$tmp402;
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
org$frostlang$frostc$FieldDecl* $tmp404 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local35) = $tmp403;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:186
org$frostlang$frostc$FieldDecl* $tmp405 = *(&local35);
frost$core$Weak** $tmp406 = &$tmp405->owner;
frost$core$Weak* $tmp407 = *$tmp406;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:186:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp408 = &$tmp407->_valid;
frost$core$Bit $tmp409 = *$tmp408;
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block73; else goto block74;
block74:;
frost$core$Int $tmp411 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s412, $tmp411);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp413 = &$tmp407->value;
frost$core$Object* $tmp414 = *$tmp413;
frost$core$Frost$ref$frost$core$Object$Q($tmp414);
org$frostlang$frostc$Type** $tmp415 = &((org$frostlang$frostc$ClassDecl*) $tmp414)->type;
org$frostlang$frostc$Type* $tmp416 = *$tmp415;
org$frostlang$frostc$Compiler** $tmp417 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp418 = *$tmp417;
org$frostlang$frostc$Type** $tmp419 = &$tmp418->BIT_TYPE;
org$frostlang$frostc$Type* $tmp420 = *$tmp419;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:186:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp421 = &((org$frostlang$frostc$Symbol*) $tmp416)->name;
frost$core$String* $tmp422 = *$tmp421;
frost$core$String** $tmp423 = &((org$frostlang$frostc$Symbol*) $tmp420)->name;
frost$core$String* $tmp424 = *$tmp423;
frost$core$Bit $tmp425 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp422, $tmp424);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Type$Kind* $tmp427 = &$tmp416->typeKind;
org$frostlang$frostc$Type$Kind $tmp428 = *$tmp427;
org$frostlang$frostc$Type$Kind$wrapper* $tmp429;
$tmp429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp429->value = $tmp428;
org$frostlang$frostc$Type$Kind* $tmp430 = &$tmp420->typeKind;
org$frostlang$frostc$Type$Kind $tmp431 = *$tmp430;
org$frostlang$frostc$Type$Kind$wrapper* $tmp432;
$tmp432 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp432->value = $tmp431;
ITable* $tmp433 = ((frost$core$Equatable*) $tmp429)->$class->itable;
while ($tmp433->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp433 = $tmp433->next;
}
$fn435 $tmp434 = $tmp433->methods[0];
frost$core$Bit $tmp436 = $tmp434(((frost$core$Equatable*) $tmp429), ((frost$core$Equatable*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp432)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp429)));
*(&local36) = $tmp436;
goto block78;
block77:;
*(&local36) = $tmp425;
goto block78;
block78:;
frost$core$Bit $tmp437 = *(&local36);
bool $tmp438 = $tmp437.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp414);
if ($tmp438) goto block68; else goto block70;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:187
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp439 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp440 = *(&local35);
org$frostlang$frostc$Type** $tmp441 = &$tmp440->type;
org$frostlang$frostc$Type* $tmp442 = *$tmp441;
org$frostlang$frostc$IR$Value* $tmp443 = *(&local34);
$fn445 $tmp444 = ($fn445) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp446 = $tmp444(param0, $tmp443, param2);
frost$collections$ListView** $tmp447 = &$tmp446->nonNullImplications;
frost$collections$ListView* $tmp448 = *$tmp447;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp439, $tmp442, $tmp448);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
org$frostlang$frostc$FieldDecl* $tmp449 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp450 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp439;
block70:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:190
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp451 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp452 = *(&local35);
org$frostlang$frostc$Type** $tmp453 = &$tmp452->type;
org$frostlang$frostc$Type* $tmp454 = *$tmp453;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp451, $tmp454);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
org$frostlang$frostc$FieldDecl* $tmp455 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp456 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp451;
block69:;
org$frostlang$frostc$FieldDecl* $tmp457 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp458 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block66:;
frost$core$Int $tmp459 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:193:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp460 = $tmp38.value;
int64_t $tmp461 = $tmp459.value;
bool $tmp462 = $tmp460 == $tmp461;
frost$core$Bit $tmp463 = (frost$core$Bit) {$tmp462};
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block79; else goto block80;
block79:;
org$frostlang$frostc$Position* $tmp465 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp466 = *$tmp465;
org$frostlang$frostc$IR$Value** $tmp467 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp468 = *$tmp467;
org$frostlang$frostc$ChoiceCase** $tmp469 = (org$frostlang$frostc$ChoiceCase**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp470 = *$tmp469;
*(&local37) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
org$frostlang$frostc$ChoiceCase* $tmp471 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local37) = $tmp470;
frost$core$Int* $tmp472 = (frost$core$Int*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
frost$core$Int $tmp473 = *$tmp472;
*(&local38) = $tmp473;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:194
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp474 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp475 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp476 = *$tmp475;
org$frostlang$frostc$ChoiceCase* $tmp477 = *(&local37);
frost$collections$Array** $tmp478 = &$tmp477->fields;
frost$collections$Array* $tmp479 = *$tmp478;
frost$core$Int $tmp480 = *(&local38);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:194:72
frost$core$Int $tmp481 = (frost$core$Int) {0u};
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481.value;
bool $tmp484 = $tmp482 >= $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block85; else goto block84;
block85:;
ITable* $tmp487 = ((frost$collections$CollectionView*) $tmp479)->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
frost$core$Int $tmp490 = $tmp488(((frost$collections$CollectionView*) $tmp479));
int64_t $tmp491 = $tmp480.value;
int64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 < $tmp492;
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block83; else goto block84;
block84:;
frost$core$Int $tmp496 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s497, $tmp496, &$s498);
abort(); // unreachable
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp499 = &$tmp479->data;
frost$core$Object** $tmp500 = *$tmp499;
frost$core$Int64 $tmp501 = frost$core$Int64$init$frost$core$Int($tmp480);
int64_t $tmp502 = $tmp501.value;
frost$core$Object* $tmp503 = $tmp500[$tmp502];
frost$core$Frost$ref$frost$core$Object$Q($tmp503);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:194:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp504 = &$tmp476->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp505 = *$tmp504;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp506 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp507 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp506, $tmp507);
frost$collections$Array$add$frost$collections$Array$T($tmp506, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp503)));
org$frostlang$frostc$Type* $tmp508 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp505, ((frost$collections$ListView*) $tmp506));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp474, $tmp508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q($tmp503);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
org$frostlang$frostc$ChoiceCase* $tmp509 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local37) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp474;
block80:;
frost$core$Int $tmp510 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:196:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp511 = $tmp38.value;
int64_t $tmp512 = $tmp510.value;
bool $tmp513 = $tmp511 == $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block87; else goto block88;
block87:;
org$frostlang$frostc$Position* $tmp516 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp517 = *$tmp516;
org$frostlang$frostc$IR$Value** $tmp518 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp519 = *$tmp518;
org$frostlang$frostc$FieldDecl** $tmp520 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp521 = *$tmp520;
*(&local39) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
org$frostlang$frostc$FieldDecl* $tmp522 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local39) = $tmp521;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp523 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp524 = *(&local39);
org$frostlang$frostc$Type** $tmp525 = &$tmp524->type;
org$frostlang$frostc$Type* $tmp526 = *$tmp525;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp523, $tmp526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
org$frostlang$frostc$FieldDecl* $tmp527 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local39) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp523;
block88:;
frost$core$Int $tmp528 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:199:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp529 = $tmp38.value;
int64_t $tmp530 = $tmp528.value;
bool $tmp531 = $tmp529 == $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp534 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp535 = *$tmp534;
*(&local40) = $tmp535;
org$frostlang$frostc$IR$Value** $tmp536 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp537 = *$tmp536;
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
org$frostlang$frostc$IR$Value* $tmp538 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local41) = $tmp537;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:200
org$frostlang$frostc$IR$Value* $tmp539 = *(&local41);
$fn541 $tmp540 = ($fn541) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp542 = $tmp540(param0, $tmp539, param2);
*(&local42) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp543 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local42) = $tmp542;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:201
frost$core$Bit* $tmp544 = &param0->reportErrors;
frost$core$Bit $tmp545 = *$tmp544;
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block95; else goto block94;
block95:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp547 = *(&local42);
org$frostlang$frostc$Type** $tmp548 = &$tmp547->type;
org$frostlang$frostc$Type* $tmp549 = *$tmp548;
org$frostlang$frostc$Compiler** $tmp550 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp551 = *$tmp550;
org$frostlang$frostc$Type** $tmp552 = &$tmp551->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp553 = *$tmp552;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:201:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp554 = &((org$frostlang$frostc$Symbol*) $tmp549)->name;
frost$core$String* $tmp555 = *$tmp554;
frost$core$String** $tmp556 = &((org$frostlang$frostc$Symbol*) $tmp553)->name;
frost$core$String* $tmp557 = *$tmp556;
frost$core$Bit $tmp558 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp555, $tmp557);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Type$Kind* $tmp560 = &$tmp549->typeKind;
org$frostlang$frostc$Type$Kind $tmp561 = *$tmp560;
org$frostlang$frostc$Type$Kind$wrapper* $tmp562;
$tmp562 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp562->value = $tmp561;
org$frostlang$frostc$Type$Kind* $tmp563 = &$tmp553->typeKind;
org$frostlang$frostc$Type$Kind $tmp564 = *$tmp563;
org$frostlang$frostc$Type$Kind$wrapper* $tmp565;
$tmp565 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp565->value = $tmp564;
ITable* $tmp566 = ((frost$core$Equatable*) $tmp562)->$class->itable;
while ($tmp566->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp566 = $tmp566->next;
}
$fn568 $tmp567 = $tmp566->methods[0];
frost$core$Bit $tmp569 = $tmp567(((frost$core$Equatable*) $tmp562), ((frost$core$Equatable*) $tmp565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp565)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp562)));
*(&local43) = $tmp569;
goto block99;
block98:;
*(&local43) = $tmp558;
goto block99;
block99:;
frost$core$Bit $tmp570 = *(&local43);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:202
org$frostlang$frostc$Compiler** $tmp572 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp573 = *$tmp572;
org$frostlang$frostc$Position $tmp574 = *(&local40);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp575;
$tmp575 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp575->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:202:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn577 $tmp576 = ($fn577) ((frost$core$Object*) $tmp575)->$class->vtable[0];
frost$core$String* $tmp578 = $tmp576(((frost$core$Object*) $tmp575));
frost$core$String* $tmp579 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s580, $tmp578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$String* $tmp581 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp579, &$s582);
org$frostlang$frostc$IR$Value* $tmp583 = *(&local41);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:202:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn585 $tmp584 = ($fn585) ((frost$core$Object*) $tmp583)->$class->vtable[0];
frost$core$String* $tmp586 = $tmp584(((frost$core$Object*) $tmp583));
frost$core$String* $tmp587 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp581, $tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$String* $tmp588 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp587, &$s589);
org$frostlang$frostc$Compiler$warn$org$frostlang$frostc$Position$frost$core$String($tmp573, $tmp574, $tmp588);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
goto block94;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:204
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp590 = *(&local42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp591 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local42) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp592 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp590;
block91:;
frost$core$Int $tmp593 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:206:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp594 = $tmp38.value;
int64_t $tmp595 = $tmp593.value;
bool $tmp596 = $tmp594 == $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp599 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp600 = *$tmp599;
org$frostlang$frostc$IR$Value** $tmp601 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp602 = *$tmp601;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
org$frostlang$frostc$IR$Value* $tmp603 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local44) = $tmp602;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:207
org$frostlang$frostc$IR$Value* $tmp604 = *(&local44);
$fn606 $tmp605 = ($fn606) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp607 = $tmp605(param0, $tmp604, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
org$frostlang$frostc$IR$Value* $tmp608 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp607;
block103:;
frost$core$Int $tmp609 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:209:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp610 = $tmp38.value;
int64_t $tmp611 = $tmp609.value;
bool $tmp612 = $tmp610 == $tmp611;
frost$core$Bit $tmp613 = (frost$core$Bit) {$tmp612};
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block105; else goto block106;
block105:;
org$frostlang$frostc$Position* $tmp615 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp616 = *$tmp615;
org$frostlang$frostc$IR$Value** $tmp617 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp618 = *$tmp617;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
org$frostlang$frostc$IR$Value* $tmp619 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local45) = $tmp618;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:210
org$frostlang$frostc$IR$Value* $tmp620 = *(&local45);
$fn622 $tmp621 = ($fn622) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp623 = $tmp621(param0, $tmp620, param2);
$fn625 $tmp624 = ($fn625) $tmp623->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp626 = $tmp624($tmp623);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
org$frostlang$frostc$IR$Value* $tmp627 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp626;
block106:;
frost$core$Int $tmp628 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:212:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp629 = $tmp38.value;
int64_t $tmp630 = $tmp628.value;
bool $tmp631 = $tmp629 == $tmp630;
frost$core$Bit $tmp632 = (frost$core$Bit) {$tmp631};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block108; else goto block109;
block108:;
org$frostlang$frostc$Position* $tmp634 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp635 = *$tmp634;
org$frostlang$frostc$IR$Value** $tmp636 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp637 = *$tmp636;
org$frostlang$frostc$Type** $tmp638 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$Type* $tmp639 = *$tmp638;
*(&local46) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
org$frostlang$frostc$Type* $tmp640 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local46) = $tmp639;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:213
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp641 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp642 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp643 = *$tmp642;
org$frostlang$frostc$Type* $tmp644 = *(&local46);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:213:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp645 = &$tmp643->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp646 = *$tmp645;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp647 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp648 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp647, $tmp648);
frost$collections$Array$add$frost$collections$Array$T($tmp647, ((frost$core$Object*) $tmp644));
org$frostlang$frostc$Type* $tmp649 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp646, ((frost$collections$ListView*) $tmp647));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp641, $tmp649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
org$frostlang$frostc$Type* $tmp650 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local46) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp641;
block109:;
frost$core$Int $tmp651 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:215:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp652 = $tmp38.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 == $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp657 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp658 = *$tmp657;
org$frostlang$frostc$IR$Value** $tmp659 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp660 = *$tmp659;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
org$frostlang$frostc$IR$Value* $tmp661 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local47) = $tmp660;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:216
org$frostlang$frostc$IR$Value* $tmp662 = *(&local47);
$fn664 $tmp663 = ($fn664) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp665 = $tmp663(param0, $tmp662, param2);
*(&local48) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp666 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local48) = $tmp665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:217
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp667 = *(&local48);
org$frostlang$frostc$Type** $tmp668 = &$tmp667->type;
org$frostlang$frostc$Type* $tmp669 = *$tmp668;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:217:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp670 = &((org$frostlang$frostc$Symbol*) $tmp669)->name;
frost$core$String* $tmp671 = *$tmp670;
frost$core$Bit $tmp672 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp671, &$s673);
bool $tmp674 = $tmp672.value;
if ($tmp674) goto block116; else goto block117;
block117:;
frost$core$Int $tmp675 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s676, $tmp675);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:218
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp677 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp678 = *(&local48);
org$frostlang$frostc$Type** $tmp679 = &$tmp678->type;
org$frostlang$frostc$Type* $tmp680 = *$tmp679;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:218:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp681 = &$tmp680->_subtypes;
org$frostlang$frostc$FixedArray* $tmp682 = *$tmp681;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Int $tmp683 = (frost$core$Int) {1u};
frost$core$Object* $tmp684 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp682, $tmp683);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp677, ((org$frostlang$frostc$Type*) $tmp684));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q($tmp684);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp685 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local48) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp686 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp677;
block113:;
frost$core$Int $tmp687 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:220:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp688 = $tmp38.value;
int64_t $tmp689 = $tmp687.value;
bool $tmp690 = $tmp688 == $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp693 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp694 = *$tmp693;
org$frostlang$frostc$IR$Value** $tmp695 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp696 = *$tmp695;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
org$frostlang$frostc$IR$Value* $tmp697 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local49) = $tmp696;
org$frostlang$frostc$IR$Value** $tmp698 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp699 = *$tmp698;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:221
org$frostlang$frostc$IR$Value* $tmp700 = *(&local49);
$fn702 $tmp701 = ($fn702) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp703 = $tmp701(param0, $tmp700, param2);
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp704 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local50) = $tmp703;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:222
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp705 = *(&local50);
org$frostlang$frostc$Type** $tmp706 = &$tmp705->type;
org$frostlang$frostc$Type* $tmp707 = *$tmp706;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:222:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp708 = &((org$frostlang$frostc$Symbol*) $tmp707)->name;
frost$core$String* $tmp709 = *$tmp708;
frost$core$Bit $tmp710 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp709, &$s711);
bool $tmp712 = $tmp710.value;
if ($tmp712) goto block123; else goto block124;
block124:;
frost$core$Int $tmp713 = (frost$core$Int) {222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s714, $tmp713);
abort(); // unreachable
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:223
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp715 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp716 = *(&local50);
org$frostlang$frostc$Type** $tmp717 = &$tmp716->type;
org$frostlang$frostc$Type* $tmp718 = *$tmp717;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:223:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp719 = &$tmp718->_subtypes;
org$frostlang$frostc$FixedArray* $tmp720 = *$tmp719;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Int $tmp721 = (frost$core$Int) {1u};
frost$core$Object* $tmp722 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp720, $tmp721);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp715, ((org$frostlang$frostc$Type*) $tmp722));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q($tmp722);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp723 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp724 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp715;
block120:;
frost$core$Int $tmp725 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:225:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp726 = $tmp38.value;
int64_t $tmp727 = $tmp725.value;
bool $tmp728 = $tmp726 == $tmp727;
frost$core$Bit $tmp729 = (frost$core$Bit) {$tmp728};
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block126; else goto block127;
block126:;
org$frostlang$frostc$Position* $tmp731 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp732 = *$tmp731;
org$frostlang$frostc$IR$Value** $tmp733 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp734 = *$tmp733;
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
org$frostlang$frostc$IR$Value* $tmp735 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local51) = $tmp734;
org$frostlang$frostc$IR$Value** $tmp736 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp737 = *$tmp736;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:226
org$frostlang$frostc$IR$Value* $tmp738 = *(&local51);
$fn740 $tmp739 = ($fn740) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp741 = $tmp739(param0, $tmp738, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlang$frostc$IR$Value* $tmp742 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp741;
block127:;
frost$core$Int $tmp743 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:228:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp744 = $tmp38.value;
int64_t $tmp745 = $tmp743.value;
bool $tmp746 = $tmp744 == $tmp745;
frost$core$Bit $tmp747 = (frost$core$Bit) {$tmp746};
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block129; else goto block130;
block129:;
org$frostlang$frostc$Position* $tmp749 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp750 = *$tmp749;
org$frostlang$frostc$IR$Value** $tmp751 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp752 = *$tmp751;
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
org$frostlang$frostc$IR$Value* $tmp753 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local52) = $tmp752;
org$frostlang$frostc$IR$Value** $tmp754 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp755 = *$tmp754;
org$frostlang$frostc$IR$Value** $tmp756 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp757 = *$tmp756;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:229
org$frostlang$frostc$IR$Value* $tmp758 = *(&local52);
$fn760 $tmp759 = ($fn760) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp761 = $tmp759(param0, $tmp758, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
org$frostlang$frostc$IR$Value* $tmp762 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp761;
block130:;
frost$core$Int $tmp763 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:231:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp764 = $tmp38.value;
int64_t $tmp765 = $tmp763.value;
bool $tmp766 = $tmp764 == $tmp765;
frost$core$Bit $tmp767 = (frost$core$Bit) {$tmp766};
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block132; else goto block133;
block132:;
org$frostlang$frostc$Position* $tmp769 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp770 = *$tmp769;
org$frostlang$frostc$MethodDecl** $tmp771 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp772 = *$tmp771;
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
org$frostlang$frostc$MethodDecl* $tmp773 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local53) = $tmp772;
org$frostlang$frostc$FixedArray** $tmp774 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp775 = *$tmp774;
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
org$frostlang$frostc$FixedArray* $tmp776 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local54) = $tmp775;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:232
org$frostlang$frostc$MethodDecl* $tmp777 = *(&local53);
org$frostlang$frostc$Type** $tmp778 = &$tmp777->returnType;
org$frostlang$frostc$Type* $tmp779 = *$tmp778;
org$frostlang$frostc$Compiler** $tmp780 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp781 = *$tmp780;
org$frostlang$frostc$Type** $tmp782 = &$tmp781->BIT_TYPE;
org$frostlang$frostc$Type* $tmp783 = *$tmp782;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:232:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp784 = &((org$frostlang$frostc$Symbol*) $tmp779)->name;
frost$core$String* $tmp785 = *$tmp784;
frost$core$String** $tmp786 = &((org$frostlang$frostc$Symbol*) $tmp783)->name;
frost$core$String* $tmp787 = *$tmp786;
frost$core$Bit $tmp788 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp785, $tmp787);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block139; else goto block140;
block139:;
org$frostlang$frostc$Type$Kind* $tmp790 = &$tmp779->typeKind;
org$frostlang$frostc$Type$Kind $tmp791 = *$tmp790;
org$frostlang$frostc$Type$Kind$wrapper* $tmp792;
$tmp792 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp792->value = $tmp791;
org$frostlang$frostc$Type$Kind* $tmp793 = &$tmp783->typeKind;
org$frostlang$frostc$Type$Kind $tmp794 = *$tmp793;
org$frostlang$frostc$Type$Kind$wrapper* $tmp795;
$tmp795 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp795->value = $tmp794;
ITable* $tmp796 = ((frost$core$Equatable*) $tmp792)->$class->itable;
while ($tmp796->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp796 = $tmp796->next;
}
$fn798 $tmp797 = $tmp796->methods[0];
frost$core$Bit $tmp799 = $tmp797(((frost$core$Equatable*) $tmp792), ((frost$core$Equatable*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp795)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp792)));
*(&local55) = $tmp799;
goto block141;
block140:;
*(&local55) = $tmp788;
goto block141;
block141:;
frost$core$Bit $tmp800 = *(&local55);
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block135; else goto block137;
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:233
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp802 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp803 = *(&local53);
org$frostlang$frostc$Type** $tmp804 = &$tmp803->returnType;
org$frostlang$frostc$Type* $tmp805 = *$tmp804;
org$frostlang$frostc$FixedArray* $tmp806 = *(&local54);
frost$core$Int $tmp807 = (frost$core$Int) {0u};
frost$core$Object* $tmp808 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp806, $tmp807);
$fn810 $tmp809 = ($fn810) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp811 = $tmp809(param0, ((org$frostlang$frostc$IR$Value*) $tmp808), param2);
frost$collections$ListView** $tmp812 = &$tmp811->nonNullImplications;
frost$collections$ListView* $tmp813 = *$tmp812;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp802, $tmp805, $tmp813);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q($tmp808);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
org$frostlang$frostc$FixedArray* $tmp814 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp815 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp802;
block137:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:236
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp816 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp817 = *(&local53);
org$frostlang$frostc$Type** $tmp818 = &$tmp817->returnType;
org$frostlang$frostc$Type* $tmp819 = *$tmp818;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp816, $tmp819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
org$frostlang$frostc$FixedArray* $tmp820 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp821 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp816;
block136:;
org$frostlang$frostc$FixedArray* $tmp822 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp823 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:240
frost$core$Int $tmp824 = (frost$core$Int) {240u};
frost$collections$HashMap** $tmp825 = &param0->statements;
frost$collections$HashMap* $tmp826 = *$tmp825;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp827;
$tmp827 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp827->value = param1;
frost$core$Object* $tmp828 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp826, ((frost$collections$Key*) $tmp827));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:240:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn830 $tmp829 = ($fn830) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp828))->$class->vtable[0];
frost$core$String* $tmp831 = $tmp829(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp828)));
frost$core$String* $tmp832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s833, $tmp831);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$String* $tmp834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp832, &$s835);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s836, $tmp824, $tmp834);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q($tmp828);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp827)));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
goto block143;
block143:;

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
frost$core$Int* $tmp837 = &param1->$rawValue;
frost$core$Int $tmp838 = *$tmp837;
frost$core$Int $tmp839 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:247:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp840 = $tmp838.value;
int64_t $tmp841 = $tmp839.value;
bool $tmp842 = $tmp840 == $tmp841;
frost$core$Bit $tmp843 = (frost$core$Bit) {$tmp842};
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp845 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp846 = *$tmp845;
org$frostlang$frostc$Type** $tmp847 = (org$frostlang$frostc$Type**) (param1->$data + 1);
org$frostlang$frostc$Type* $tmp848 = *$tmp847;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
org$frostlang$frostc$Type* $tmp849 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local0) = $tmp848;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:248
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp850 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp851 = *(&local0);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp850, $tmp851);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
org$frostlang$frostc$Type* $tmp852 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp850;
block3:;
frost$core$Int $tmp853 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:250:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp854 = $tmp838.value;
int64_t $tmp855 = $tmp853.value;
bool $tmp856 = $tmp854 == $tmp855;
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp859 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp860 = *$tmp859;
org$frostlang$frostc$Type** $tmp861 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp862 = *$tmp861;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
org$frostlang$frostc$Type* $tmp863 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local1) = $tmp862;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:251
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp864 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp865 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp864, $tmp865);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
org$frostlang$frostc$Type* $tmp866 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp864;
block6:;
frost$core$Int $tmp867 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:253:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp868 = $tmp838.value;
int64_t $tmp869 = $tmp867.value;
bool $tmp870 = $tmp868 == $tmp869;
frost$core$Bit $tmp871 = (frost$core$Bit) {$tmp870};
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp873 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp874 = *$tmp873;
*(&local2) = $tmp874;
org$frostlang$frostc$Type** $tmp875 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp876 = *$tmp875;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:254
frost$collections$Array** $tmp877 = &param2->locals;
frost$collections$Array* $tmp878 = *$tmp877;
frost$core$Int $tmp879 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:254:32
frost$core$Int $tmp880 = (frost$core$Int) {0u};
int64_t $tmp881 = $tmp879.value;
int64_t $tmp882 = $tmp880.value;
bool $tmp883 = $tmp881 >= $tmp882;
frost$core$Bit $tmp884 = (frost$core$Bit) {$tmp883};
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block14; else goto block13;
block14:;
ITable* $tmp886 = ((frost$collections$CollectionView*) $tmp878)->$class->itable;
while ($tmp886->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp886 = $tmp886->next;
}
$fn888 $tmp887 = $tmp886->methods[0];
frost$core$Int $tmp889 = $tmp887(((frost$collections$CollectionView*) $tmp878));
int64_t $tmp890 = $tmp879.value;
int64_t $tmp891 = $tmp889.value;
bool $tmp892 = $tmp890 < $tmp891;
frost$core$Bit $tmp893 = (frost$core$Bit) {$tmp892};
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block12; else goto block13;
block13:;
frost$core$Int $tmp895 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s896, $tmp895, &$s897);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp898 = &$tmp878->data;
frost$core$Object** $tmp899 = *$tmp898;
frost$core$Int64 $tmp900 = frost$core$Int64$init$frost$core$Int($tmp879);
int64_t $tmp901 = $tmp900.value;
frost$core$Object* $tmp902 = $tmp899[$tmp901];
frost$core$Frost$ref$frost$core$Object$Q($tmp902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp902)));
frost$core$Frost$unref$frost$core$Object$Q($tmp902);
return ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp902);
block9:;
frost$core$Int $tmp903 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:256:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp904 = $tmp838.value;
int64_t $tmp905 = $tmp903.value;
bool $tmp906 = $tmp904 == $tmp905;
frost$core$Bit $tmp907 = (frost$core$Bit) {$tmp906};
bool $tmp908 = $tmp907.value;
if ($tmp908) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type** $tmp909 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp910 = *$tmp909;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
org$frostlang$frostc$Type* $tmp911 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local3) = $tmp910;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:257
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp912 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp913 = *(&local3);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp912, $tmp913);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
org$frostlang$frostc$Type* $tmp914 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp912;
block16:;
frost$core$Int $tmp915 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:259:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp916 = $tmp838.value;
int64_t $tmp917 = $tmp915.value;
bool $tmp918 = $tmp916 == $tmp917;
frost$core$Bit $tmp919 = (frost$core$Bit) {$tmp918};
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block18; else goto block19;
block18:;
frost$core$Int* $tmp921 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp922 = *$tmp921;
org$frostlang$frostc$Type** $tmp923 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp924 = *$tmp923;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
org$frostlang$frostc$Type* $tmp925 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local4) = $tmp924;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:260
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp926 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp927 = *(&local4);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp926, $tmp927);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
org$frostlang$frostc$Type* $tmp928 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp926;
block19:;
frost$core$Int $tmp929 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:262:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp930 = $tmp838.value;
int64_t $tmp931 = $tmp929.value;
bool $tmp932 = $tmp930 == $tmp931;
frost$core$Bit $tmp933 = (frost$core$Bit) {$tmp932};
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block21; else goto block22;
block21:;
frost$core$Real64* $tmp935 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp936 = *$tmp935;
org$frostlang$frostc$Type** $tmp937 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp938 = *$tmp937;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
org$frostlang$frostc$Type* $tmp939 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local5) = $tmp938;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:263
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp940 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp941 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp940, $tmp941);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
org$frostlang$frostc$Type* $tmp942 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp940;
block22:;
frost$core$Int $tmp943 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:265:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp944 = $tmp838.value;
int64_t $tmp945 = $tmp943.value;
bool $tmp946 = $tmp944 == $tmp945;
frost$core$Bit $tmp947 = (frost$core$Bit) {$tmp946};
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Statement$ID* $tmp949 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp950 = *$tmp949;
*(&local6) = $tmp950;
org$frostlang$frostc$Type** $tmp951 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp952 = *$tmp951;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:266
org$frostlang$frostc$IR$Statement$ID $tmp953 = *(&local6);
$fn955 $tmp954 = ($fn955) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp956 = $tmp954(param0, $tmp953, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
return $tmp956;
block25:;
frost$core$Int $tmp957 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:268:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp958 = $tmp838.value;
int64_t $tmp959 = $tmp957.value;
bool $tmp960 = $tmp958 == $tmp959;
frost$core$Bit $tmp961 = (frost$core$Bit) {$tmp960};
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block27; else goto block28;
block27:;
frost$core$String** $tmp963 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp964 = *$tmp963;
org$frostlang$frostc$Type** $tmp965 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp966 = *$tmp965;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
org$frostlang$frostc$Type* $tmp967 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local7) = $tmp966;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:269
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp968 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp969 = *(&local7);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp968, $tmp969);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
org$frostlang$frostc$Type* $tmp970 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp968;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:272
frost$core$Int $tmp971 = (frost$core$Int) {272u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:272:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn973 $tmp972 = ($fn973) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp974 = $tmp972(((frost$core$Object*) param1));
frost$core$String* $tmp975 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s976, $tmp974);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$core$String* $tmp977 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp975, &$s978);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s979, $tmp971, $tmp977);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
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
frost$collections$HashMap** $tmp980 = &param0->predecessors;
frost$collections$HashMap* $tmp981 = *$tmp980;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp982;
$tmp982 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp982->value = param2;
frost$core$Object* $tmp983 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp981, ((frost$collections$Key*) $tmp982));
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp983)));
frost$collections$HashSet* $tmp984 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local0) = ((frost$collections$HashSet*) $tmp983);
frost$core$Frost$unref$frost$core$Object$Q($tmp983);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp982)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:279
frost$collections$HashSet* $tmp985 = *(&local0);
frost$core$Bit $tmp986 = (frost$core$Bit) {$tmp985 == NULL};
bool $tmp987 = $tmp986.value;
if ($tmp987) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:280
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp988 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$collections$HashSet* $tmp989 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local0) = $tmp988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:281
frost$collections$HashMap** $tmp990 = &param0->predecessors;
frost$collections$HashMap* $tmp991 = *$tmp990;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp992;
$tmp992 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp992->value = param2;
frost$collections$HashSet* $tmp993 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp991, ((frost$collections$Key*) $tmp992), ((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp992)));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:283
frost$collections$HashSet* $tmp994 = *(&local0);
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper* $tmp995;
$tmp995 = (org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass);
$tmp995->value = param1;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:283:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp996 = &$tmp994->contents;
frost$collections$HashMap* $tmp997 = *$tmp996;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp997, ((frost$collections$Key*) $tmp995), ((frost$core$Object*) ((frost$collections$Key*) $tmp995)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp995)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:284
frost$core$Bit $tmp998 = (frost$core$Bit) {false};
*(&local1) = $tmp998;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:285
frost$collections$HashSet* $tmp999 = *(&local0);
ITable* $tmp1000 = ((frost$collections$Iterable*) $tmp999)->$class->itable;
while ($tmp1000->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1000 = $tmp1000->next;
}
$fn1002 $tmp1001 = $tmp1000->methods[0];
frost$collections$Iterator* $tmp1003 = $tmp1001(((frost$collections$Iterable*) $tmp999));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$collections$Iterator* $tmp1004 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local2) = $tmp1003;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:286
frost$collections$HashMap** $tmp1005 = &param0->entryStates;
frost$collections$HashMap* $tmp1006 = *$tmp1005;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1007;
$tmp1007 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1007->value = param2;
frost$core$Object* $tmp1008 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1006, ((frost$collections$Key*) $tmp1007));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1008)));
org$frostlang$frostc$pass$Analyzer$State* $tmp1009 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1008);
frost$core$Frost$unref$frost$core$Object$Q($tmp1008);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1007)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:287
org$frostlang$frostc$pass$Analyzer$State* $tmp1010 = *(&local3);
frost$core$Bit $tmp1011 = (frost$core$Bit) {$tmp1010 == NULL};
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:288
frost$collections$Iterator* $tmp1013 = *(&local2);
ITable* $tmp1014 = $tmp1013->$class->itable;
while ($tmp1014->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1014 = $tmp1014->next;
}
$fn1016 $tmp1015 = $tmp1014->methods[1];
frost$core$Object* $tmp1017 = $tmp1015($tmp1013);
$fn1019 $tmp1018 = ($fn1019) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp1020 = $tmp1018(param0, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1017)->value);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
org$frostlang$frostc$pass$Analyzer$State* $tmp1021 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local3) = $tmp1020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q($tmp1017);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:289
frost$collections$HashMap** $tmp1022 = &param0->entryStates;
frost$collections$HashMap* $tmp1023 = *$tmp1022;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1024;
$tmp1024 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1024->value = param2;
org$frostlang$frostc$pass$Analyzer$State* $tmp1025 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1023, ((frost$collections$Key*) $tmp1024), ((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1024)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:290
frost$core$Bit $tmp1026 = (frost$core$Bit) {true};
*(&local1) = $tmp1026;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:292
frost$collections$Iterator* $tmp1027 = *(&local2);
goto block6;
block6:;
ITable* $tmp1028 = $tmp1027->$class->itable;
while ($tmp1028->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[0];
frost$core$Bit $tmp1031 = $tmp1029($tmp1027);
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block8; else goto block7;
block7:;
ITable* $tmp1033 = $tmp1027->$class->itable;
while ($tmp1033->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1033 = $tmp1033->next;
}
$fn1035 $tmp1034 = $tmp1033->methods[1];
frost$core$Object* $tmp1036 = $tmp1034($tmp1027);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1036)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:293
frost$core$Bit $tmp1037 = *(&local1);
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block9; else goto block10;
block9:;
*(&local5) = $tmp1037;
goto block11;
block10:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1039 = *(&local3);
org$frostlang$frostc$Compiler** $tmp1040 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1041 = *$tmp1040;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1042 = *(&local4);
$fn1044 $tmp1043 = ($fn1044) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp1045 = $tmp1043(param0, $tmp1042);
$fn1047 $tmp1046 = ($fn1047) $tmp1039->$class->vtable[2];
frost$core$Bit $tmp1048 = $tmp1046($tmp1039, $tmp1041, $tmp1045);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local5) = $tmp1048;
goto block11;
block11:;
frost$core$Bit $tmp1049 = *(&local5);
*(&local1) = $tmp1049;
frost$core$Frost$unref$frost$core$Object$Q($tmp1036);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:295
frost$core$Bit $tmp1050 = *(&local1);
bool $tmp1051 = $tmp1050.value;
if ($tmp1051) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:296
frost$collections$HashSet** $tmp1052 = &param0->worklist;
frost$collections$HashSet* $tmp1053 = *$tmp1052;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1054;
$tmp1054 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1054->value = param2;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:296:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1055 = &$tmp1053->contents;
frost$collections$HashMap* $tmp1056 = *$tmp1055;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1056, ((frost$collections$Key*) $tmp1054), ((frost$core$Object*) ((frost$collections$Key*) $tmp1054)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1054)));
goto block13;
block13:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1057 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$collections$Iterator* $tmp1058 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$collections$HashSet* $tmp1059 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
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
org$frostlang$frostc$LinkedList** $tmp1060 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp1061 = *$tmp1060;
$fn1063 $tmp1062 = ($fn1063) $tmp1061->$class->vtable[6];
frost$core$Object* $tmp1064 = $tmp1062($tmp1061);
frost$core$Int* $tmp1065 = &((org$frostlang$frostc$IR$Statement*) $tmp1064)->$rawValue;
frost$core$Int $tmp1066 = *$tmp1065;
frost$core$Int $tmp1067 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:314:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1068 = $tmp1066.value;
int64_t $tmp1069 = $tmp1067.value;
bool $tmp1070 = $tmp1068 == $tmp1069;
frost$core$Bit $tmp1071 = (frost$core$Bit) {$tmp1070};
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1073 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1064)->$data + 0);
org$frostlang$frostc$Position $tmp1074 = *$tmp1073;
org$frostlang$frostc$IR$Value** $tmp1075 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1064)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1076 = *$tmp1075;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
org$frostlang$frostc$IR$Value* $tmp1077 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local0) = $tmp1076;
org$frostlang$frostc$IR$Block$ID* $tmp1078 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1064)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1079 = *$tmp1078;
org$frostlang$frostc$IR$Block$ID* $tmp1080 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1064)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1081 = *$tmp1080;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:315
org$frostlang$frostc$IR$Value* $tmp1082 = *(&local0);
$fn1084 $tmp1083 = ($fn1084) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1085 = $tmp1083(param0, $tmp1082, param3);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1086 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local1) = $tmp1085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:316
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1087 = *(&local1);
frost$collections$ListView** $tmp1088 = &$tmp1087->nonNullImplications;
frost$collections$ListView* $tmp1089 = *$tmp1088;
frost$core$Bit $tmp1090 = (frost$core$Bit) {$tmp1089 != NULL};
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:317
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1092 = *(&local1);
frost$collections$ListView** $tmp1093 = &$tmp1092->nonNullImplications;
frost$collections$ListView* $tmp1094 = *$tmp1093;
ITable* $tmp1095 = ((frost$collections$Iterable*) $tmp1094)->$class->itable;
while ($tmp1095->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1095 = $tmp1095->next;
}
$fn1097 $tmp1096 = $tmp1095->methods[0];
frost$collections$Iterator* $tmp1098 = $tmp1096(((frost$collections$Iterable*) $tmp1094));
goto block7;
block7:;
ITable* $tmp1099 = $tmp1098->$class->itable;
while ($tmp1099->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1099 = $tmp1099->next;
}
$fn1101 $tmp1100 = $tmp1099->methods[0];
frost$core$Bit $tmp1102 = $tmp1100($tmp1098);
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block9; else goto block8;
block8:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp1104 = $tmp1098->$class->itable;
while ($tmp1104->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1104 = $tmp1104->next;
}
$fn1106 $tmp1105 = $tmp1104->methods[1];
frost$core$Object* $tmp1107 = $tmp1105($tmp1098);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp1107)));
org$frostlang$frostc$Pair* $tmp1108 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp1107);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:318
org$frostlang$frostc$Pair* $tmp1109 = *(&local2);
frost$core$Object** $tmp1110 = &$tmp1109->second;
frost$core$Object* $tmp1111 = *$tmp1110;
frost$core$Int $tmp1112 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:318:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1113 = param2.value;
int64_t $tmp1114 = $tmp1112.value;
bool $tmp1115 = $tmp1113 == $tmp1114;
frost$core$Bit $tmp1116 = (frost$core$Bit) {$tmp1115};
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Analyzer.frost:318:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
bool $tmp1117 = ((frost$core$Bit$wrapper*) $tmp1111)->value.value;
bool $tmp1118 = $tmp1116.value;
bool $tmp1119 = $tmp1117 == $tmp1118;
frost$core$Bit $tmp1120 = (frost$core$Bit) {$tmp1119};
bool $tmp1121 = $tmp1120.value;
if ($tmp1121) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:319
org$frostlang$frostc$Pair* $tmp1122 = *(&local2);
frost$core$Object** $tmp1123 = &$tmp1122->first;
frost$core$Object* $tmp1124 = *$tmp1123;
frost$core$Int* $tmp1125 = &((org$frostlang$frostc$IR$Value*) $tmp1124)->$rawValue;
frost$core$Int $tmp1126 = *$tmp1125;
frost$core$Int $tmp1127 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:320:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1128 = $tmp1126.value;
int64_t $tmp1129 = $tmp1127.value;
bool $tmp1130 = $tmp1128 == $tmp1129;
frost$core$Bit $tmp1131 = (frost$core$Bit) {$tmp1130};
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block15; else goto block14;
block15:;
frost$core$Int* $tmp1133 = (frost$core$Int*) (((org$frostlang$frostc$IR$Value*) $tmp1124)->$data + 0);
frost$core$Int $tmp1134 = *$tmp1133;
*(&local3) = $tmp1134;
org$frostlang$frostc$Type** $tmp1135 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Value*) $tmp1124)->$data + 8);
org$frostlang$frostc$Type* $tmp1136 = *$tmp1135;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:321
frost$collections$Array** $tmp1137 = &param3->locals;
frost$collections$Array* $tmp1138 = *$tmp1137;
frost$core$Int $tmp1139 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:321:60
frost$core$Int $tmp1140 = (frost$core$Int) {0u};
int64_t $tmp1141 = $tmp1139.value;
int64_t $tmp1142 = $tmp1140.value;
bool $tmp1143 = $tmp1141 >= $tmp1142;
frost$core$Bit $tmp1144 = (frost$core$Bit) {$tmp1143};
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block20; else goto block19;
block20:;
ITable* $tmp1146 = ((frost$collections$CollectionView*) $tmp1138)->$class->itable;
while ($tmp1146->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1146 = $tmp1146->next;
}
$fn1148 $tmp1147 = $tmp1146->methods[0];
frost$core$Int $tmp1149 = $tmp1147(((frost$collections$CollectionView*) $tmp1138));
int64_t $tmp1150 = $tmp1139.value;
int64_t $tmp1151 = $tmp1149.value;
bool $tmp1152 = $tmp1150 < $tmp1151;
frost$core$Bit $tmp1153 = (frost$core$Bit) {$tmp1152};
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1155 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1156, $tmp1155, &$s1157);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1158 = &$tmp1138->data;
frost$core$Object** $tmp1159 = *$tmp1158;
frost$core$Int64 $tmp1160 = frost$core$Int64$init$frost$core$Int($tmp1139);
int64_t $tmp1161 = $tmp1160.value;
frost$core$Object* $tmp1162 = $tmp1159[$tmp1161];
frost$core$Frost$ref$frost$core$Object$Q($tmp1162);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1162)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1163 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1162);
frost$core$Frost$unref$frost$core$Object$Q($tmp1162);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:322
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1164 = *(&local4);
frost$core$Bit $tmp1165 = (frost$core$Bit) {true};
bool $tmp1166 = $tmp1165.value;
if ($tmp1166) goto block21; else goto block22;
block22:;
frost$core$Int $tmp1167 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1168, $tmp1167);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:323
frost$collections$Array** $tmp1169 = &param3->locals;
frost$collections$Array* $tmp1170 = *$tmp1169;
frost$core$Int $tmp1171 = *(&local3);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1172 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1173 = *(&local4);
org$frostlang$frostc$Type** $tmp1174 = &$tmp1173->type;
org$frostlang$frostc$Type* $tmp1175 = *$tmp1174;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:323:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1176 = &$tmp1175->typeKind;
org$frostlang$frostc$Type$Kind $tmp1177 = *$tmp1176;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1178;
$tmp1178 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1178->value = $tmp1177;
frost$core$Int $tmp1179 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1180 = &(&local7)->$rawValue;
*$tmp1180 = $tmp1179;
org$frostlang$frostc$Type$Kind $tmp1181 = *(&local7);
*(&local6) = $tmp1181;
org$frostlang$frostc$Type$Kind $tmp1182 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1183;
$tmp1183 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1183->value = $tmp1182;
ITable* $tmp1184 = ((frost$core$Equatable*) $tmp1178)->$class->itable;
while ($tmp1184->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1184 = $tmp1184->next;
}
$fn1186 $tmp1185 = $tmp1184->methods[1];
frost$core$Bit $tmp1187 = $tmp1185(((frost$core$Equatable*) $tmp1178), ((frost$core$Equatable*) $tmp1183));
bool $tmp1188 = $tmp1187.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1183)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1178)));
if ($tmp1188) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local5) = $tmp1175;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
goto block23;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1189 = &$tmp1175->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1190 = *$tmp1189;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Int $tmp1191 = (frost$core$Int) {0u};
frost$core$Object* $tmp1192 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1190, $tmp1191);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1192)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1192);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp1192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1192)));
goto block23;
block23:;
org$frostlang$frostc$Type* $tmp1193 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1172, $tmp1193);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:323:49
frost$core$Int $tmp1194 = (frost$core$Int) {0u};
int64_t $tmp1195 = $tmp1171.value;
int64_t $tmp1196 = $tmp1194.value;
bool $tmp1197 = $tmp1195 >= $tmp1196;
frost$core$Bit $tmp1198 = (frost$core$Bit) {$tmp1197};
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block31; else goto block30;
block31:;
ITable* $tmp1200 = ((frost$collections$CollectionView*) $tmp1170)->$class->itable;
while ($tmp1200->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1200 = $tmp1200->next;
}
$fn1202 $tmp1201 = $tmp1200->methods[0];
frost$core$Int $tmp1203 = $tmp1201(((frost$collections$CollectionView*) $tmp1170));
int64_t $tmp1204 = $tmp1171.value;
int64_t $tmp1205 = $tmp1203.value;
bool $tmp1206 = $tmp1204 < $tmp1205;
frost$core$Bit $tmp1207 = (frost$core$Bit) {$tmp1206};
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1209 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1210, $tmp1209, &$s1211);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1212 = &$tmp1170->data;
frost$core$Object** $tmp1213 = *$tmp1212;
frost$core$Int64 $tmp1214 = frost$core$Int64$init$frost$core$Int($tmp1171);
int64_t $tmp1215 = $tmp1214.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Object* $tmp1216 = $tmp1213[$tmp1215];
frost$core$Frost$unref$frost$core$Object$Q($tmp1216);
$tmp1213[$tmp1215] = ((frost$core$Object*) $tmp1172);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
org$frostlang$frostc$Type* $tmp1217 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1218 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block14;
block14:;
goto block11;
block11:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1107);
org$frostlang$frostc$Pair* $tmp1219 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
goto block6;
block6:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1221 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1064);
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:331
frost$core$Frost$unref$frost$core$Object$Q($tmp1064);
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
frost$core$Int $tmp1222 = param2.$rawValue;
frost$core$Int $tmp1223 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:339:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1224 = $tmp1222.value;
int64_t $tmp1225 = $tmp1223.value;
bool $tmp1226 = $tmp1224 == $tmp1225;
frost$core$Bit $tmp1227 = (frost$core$Bit) {$tmp1226};
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:340
frost$core$Int* $tmp1229 = &param3->$rawValue;
frost$core$Int $tmp1230 = *$tmp1229;
frost$core$Int $tmp1231 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:341:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1232 = $tmp1230.value;
int64_t $tmp1233 = $tmp1231.value;
bool $tmp1234 = $tmp1232 == $tmp1233;
frost$core$Bit $tmp1235 = (frost$core$Bit) {$tmp1234};
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block6; else goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:342
org$frostlang$frostc$Compiler** $tmp1237 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1238 = *$tmp1237;
org$frostlang$frostc$Type** $tmp1239 = &$tmp1238->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1240 = *$tmp1239;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:342:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1241 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1242 = *$tmp1241;
frost$core$String** $tmp1243 = &((org$frostlang$frostc$Symbol*) $tmp1240)->name;
frost$core$String* $tmp1244 = *$tmp1243;
frost$core$Bit $tmp1245 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1242, $tmp1244);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1247 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1248 = *$tmp1247;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1249;
$tmp1249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1249->value = $tmp1248;
org$frostlang$frostc$Type$Kind* $tmp1250 = &$tmp1240->typeKind;
org$frostlang$frostc$Type$Kind $tmp1251 = *$tmp1250;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1252;
$tmp1252 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1252->value = $tmp1251;
ITable* $tmp1253 = ((frost$core$Equatable*) $tmp1249)->$class->itable;
while ($tmp1253->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1253 = $tmp1253->next;
}
$fn1255 $tmp1254 = $tmp1253->methods[0];
frost$core$Bit $tmp1256 = $tmp1254(((frost$core$Equatable*) $tmp1249), ((frost$core$Equatable*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1252)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1249)));
*(&local0) = $tmp1256;
goto block11;
block10:;
*(&local0) = $tmp1245;
goto block11;
block11:;
frost$core$Bit $tmp1257 = *(&local0);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1259 = (frost$core$Int) {342u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1260, $tmp1259);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:343
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1261 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1262 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1261, $tmp1262);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1263 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1264 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1265;
$tmp1265 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1265->value = $tmp1264;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1263, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1265));
frost$collections$Array$add$frost$collections$Array$T($tmp1261, ((frost$core$Object*) $tmp1263));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$collections$Array* $tmp1266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local1) = $tmp1261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:344
frost$core$Int* $tmp1267 = &param1->$rawValue;
frost$core$Int $tmp1268 = *$tmp1267;
frost$core$Int $tmp1269 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:345:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1270 = $tmp1268.value;
int64_t $tmp1271 = $tmp1269.value;
bool $tmp1272 = $tmp1270 == $tmp1271;
frost$core$Bit $tmp1273 = (frost$core$Bit) {$tmp1272};
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block15; else goto block14;
block15:;
org$frostlang$frostc$IR$Statement$ID* $tmp1275 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1276 = *$tmp1275;
*(&local2) = $tmp1276;
org$frostlang$frostc$Type** $tmp1277 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1278 = *$tmp1277;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:346
frost$collections$HashMap** $tmp1279 = &param0->statements;
frost$collections$HashMap* $tmp1280 = *$tmp1279;
org$frostlang$frostc$IR$Statement$ID $tmp1281 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1282;
$tmp1282 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1282->value = $tmp1281;
frost$core$Object* $tmp1283 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1280, ((frost$collections$Key*) $tmp1282));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1283)));
org$frostlang$frostc$IR$Statement* $tmp1284 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp1283);
frost$core$Frost$unref$frost$core$Object$Q($tmp1283);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1282)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:347
org$frostlang$frostc$IR$Statement* $tmp1285 = *(&local3);
frost$core$Int* $tmp1286 = &$tmp1285->$rawValue;
frost$core$Int $tmp1287 = *$tmp1286;
frost$core$Int $tmp1288 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:348:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1289 = $tmp1287.value;
int64_t $tmp1290 = $tmp1288.value;
bool $tmp1291 = $tmp1289 == $tmp1290;
frost$core$Bit $tmp1292 = (frost$core$Bit) {$tmp1291};
bool $tmp1293 = $tmp1292.value;
if ($tmp1293) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Position* $tmp1294 = (org$frostlang$frostc$Position*) ($tmp1285->$data + 0);
org$frostlang$frostc$Position $tmp1295 = *$tmp1294;
org$frostlang$frostc$IR$Value** $tmp1296 = (org$frostlang$frostc$IR$Value**) ($tmp1285->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1297 = *$tmp1296;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
org$frostlang$frostc$IR$Value* $tmp1298 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local4) = $tmp1297;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:349
frost$collections$Array* $tmp1299 = *(&local1);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1300 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp1301 = *(&local4);
frost$core$Bit $tmp1302 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1303;
$tmp1303 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1303->value = $tmp1302;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1300, ((frost$core$Object*) $tmp1301), ((frost$core$Object*) $tmp1303));
frost$collections$Array$add$frost$collections$Array$T($tmp1299, ((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
org$frostlang$frostc$IR$Value* $tmp1304 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block17;
block17:;
org$frostlang$frostc$IR$Statement* $tmp1305 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:354
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1306 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp1307 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1306, param5, ((frost$collections$ListView*) $tmp1307));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$collections$Array* $tmp1308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1306;
block5:;
goto block1;
block3:;
frost$core$Int $tmp1309 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:358:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1310 = $tmp1222.value;
int64_t $tmp1311 = $tmp1309.value;
bool $tmp1312 = $tmp1310 == $tmp1311;
frost$core$Bit $tmp1313 = (frost$core$Bit) {$tmp1312};
bool $tmp1314 = $tmp1313.value;
if ($tmp1314) goto block20; else goto block1;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:359
frost$core$Int* $tmp1315 = &param3->$rawValue;
frost$core$Int $tmp1316 = *$tmp1315;
frost$core$Int $tmp1317 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:360:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1318 = $tmp1316.value;
int64_t $tmp1319 = $tmp1317.value;
bool $tmp1320 = $tmp1318 == $tmp1319;
frost$core$Bit $tmp1321 = (frost$core$Bit) {$tmp1320};
bool $tmp1322 = $tmp1321.value;
if ($tmp1322) goto block23; else goto block22;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:361
org$frostlang$frostc$Compiler** $tmp1323 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1324 = *$tmp1323;
org$frostlang$frostc$Type** $tmp1325 = &$tmp1324->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1326 = *$tmp1325;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:361:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1327 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1328 = *$tmp1327;
frost$core$String** $tmp1329 = &((org$frostlang$frostc$Symbol*) $tmp1326)->name;
frost$core$String* $tmp1330 = *$tmp1329;
frost$core$Bit $tmp1331 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1328, $tmp1330);
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp1333 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1334 = *$tmp1333;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1335;
$tmp1335 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1335->value = $tmp1334;
org$frostlang$frostc$Type$Kind* $tmp1336 = &$tmp1326->typeKind;
org$frostlang$frostc$Type$Kind $tmp1337 = *$tmp1336;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1338;
$tmp1338 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1338->value = $tmp1337;
ITable* $tmp1339 = ((frost$core$Equatable*) $tmp1335)->$class->itable;
while ($tmp1339->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1339 = $tmp1339->next;
}
$fn1341 $tmp1340 = $tmp1339->methods[0];
frost$core$Bit $tmp1342 = $tmp1340(((frost$core$Equatable*) $tmp1335), ((frost$core$Equatable*) $tmp1338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1338)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1335)));
*(&local5) = $tmp1342;
goto block28;
block27:;
*(&local5) = $tmp1331;
goto block28;
block28:;
frost$core$Bit $tmp1343 = *(&local5);
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1345 = (frost$core$Int) {361u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1346, $tmp1345);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:362
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1347 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1348 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1347, $tmp1348);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1349 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1350 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1351;
$tmp1351 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1351->value = $tmp1350;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1349, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1351));
frost$collections$Array$add$frost$collections$Array$T($tmp1347, ((frost$core$Object*) $tmp1349));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
frost$collections$Array* $tmp1352 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local6) = $tmp1347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:363
frost$core$Int* $tmp1353 = &param1->$rawValue;
frost$core$Int $tmp1354 = *$tmp1353;
frost$core$Int $tmp1355 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:364:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1356 = $tmp1354.value;
int64_t $tmp1357 = $tmp1355.value;
bool $tmp1358 = $tmp1356 == $tmp1357;
frost$core$Bit $tmp1359 = (frost$core$Bit) {$tmp1358};
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block32; else goto block31;
block32:;
org$frostlang$frostc$IR$Statement$ID* $tmp1361 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1362 = *$tmp1361;
*(&local7) = $tmp1362;
org$frostlang$frostc$Type** $tmp1363 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1364 = *$tmp1363;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:365
frost$collections$HashMap** $tmp1365 = &param0->statements;
frost$collections$HashMap* $tmp1366 = *$tmp1365;
org$frostlang$frostc$IR$Statement$ID $tmp1367 = *(&local7);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1368;
$tmp1368 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1368->value = $tmp1367;
frost$core$Object* $tmp1369 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1366, ((frost$collections$Key*) $tmp1368));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1369)));
org$frostlang$frostc$IR$Statement* $tmp1370 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) $tmp1369);
frost$core$Frost$unref$frost$core$Object$Q($tmp1369);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1368)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:366
org$frostlang$frostc$IR$Statement* $tmp1371 = *(&local8);
frost$core$Int* $tmp1372 = &$tmp1371->$rawValue;
frost$core$Int $tmp1373 = *$tmp1372;
frost$core$Int $tmp1374 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:367:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1375 = $tmp1373.value;
int64_t $tmp1376 = $tmp1374.value;
bool $tmp1377 = $tmp1375 == $tmp1376;
frost$core$Bit $tmp1378 = (frost$core$Bit) {$tmp1377};
bool $tmp1379 = $tmp1378.value;
if ($tmp1379) goto block35; else goto block34;
block35:;
org$frostlang$frostc$Position* $tmp1380 = (org$frostlang$frostc$Position*) ($tmp1371->$data + 0);
org$frostlang$frostc$Position $tmp1381 = *$tmp1380;
org$frostlang$frostc$IR$Value** $tmp1382 = (org$frostlang$frostc$IR$Value**) ($tmp1371->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1383 = *$tmp1382;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
org$frostlang$frostc$IR$Value* $tmp1384 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local9) = $tmp1383;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:368
frost$collections$Array* $tmp1385 = *(&local6);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1386 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp1387 = *(&local9);
frost$core$Bit $tmp1388 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1389;
$tmp1389 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1389->value = $tmp1388;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1386, ((frost$core$Object*) $tmp1387), ((frost$core$Object*) $tmp1389));
frost$collections$Array$add$frost$collections$Array$T($tmp1385, ((frost$core$Object*) $tmp1386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
org$frostlang$frostc$IR$Value* $tmp1390 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block34;
block34:;
org$frostlang$frostc$IR$Statement* $tmp1391 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:373
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1392 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp1393 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1392, param5, ((frost$collections$ListView*) $tmp1393));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$collections$Array* $tmp1394 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp1392;
block22:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:379
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1395 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1395, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
return $tmp1395;

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
org$frostlang$frostc$pass$Analyzer$State* $tmp1396 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
frost$collections$HashMap** $tmp1397 = &param0->entryStates;
frost$collections$HashMap* $tmp1398 = *$tmp1397;
org$frostlang$frostc$IR$Block$ID $tmp1399 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1400;
$tmp1400 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1400->value = $tmp1399;
frost$core$Object* $tmp1401 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1398, ((frost$collections$Key*) $tmp1400));
org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State($tmp1396, ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1401));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
org$frostlang$frostc$pass$Analyzer$State* $tmp1402 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local0) = $tmp1396;
frost$core$Frost$unref$frost$core$Object$Q($tmp1401);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1400)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:384
frost$collections$HashMap** $tmp1403 = &param0->blocks;
frost$collections$HashMap* $tmp1404 = *$tmp1403;
org$frostlang$frostc$IR$Block$ID $tmp1405 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1406;
$tmp1406 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1406->value = $tmp1405;
frost$core$Object* $tmp1407 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1404, ((frost$collections$Key*) $tmp1406));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1407)));
org$frostlang$frostc$IR$Block* $tmp1408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1407);
frost$core$Frost$unref$frost$core$Object$Q($tmp1407);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1406)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:385
org$frostlang$frostc$IR$Block* $tmp1409 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1410 = &$tmp1409->ids;
org$frostlang$frostc$LinkedList* $tmp1411 = *$tmp1410;
ITable* $tmp1412 = ((frost$collections$Iterable*) $tmp1411)->$class->itable;
while ($tmp1412->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1412 = $tmp1412->next;
}
$fn1414 $tmp1413 = $tmp1412->methods[0];
frost$collections$Iterator* $tmp1415 = $tmp1413(((frost$collections$Iterable*) $tmp1411));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$collections$Iterator* $tmp1416 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local2) = $tmp1415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:386
org$frostlang$frostc$IR$Block* $tmp1417 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1418 = &$tmp1417->statements;
org$frostlang$frostc$LinkedList* $tmp1419 = *$tmp1418;
ITable* $tmp1420 = ((frost$collections$Iterable*) $tmp1419)->$class->itable;
while ($tmp1420->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1420 = $tmp1420->next;
}
$fn1422 $tmp1421 = $tmp1420->methods[0];
frost$collections$Iterator* $tmp1423 = $tmp1421(((frost$collections$Iterable*) $tmp1419));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
frost$collections$Iterator* $tmp1424 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local3) = $tmp1423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:387
goto block1;
block1:;
frost$collections$Iterator* $tmp1425 = *(&local2);
ITable* $tmp1426 = $tmp1425->$class->itable;
while ($tmp1426->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1426 = $tmp1426->next;
}
$fn1428 $tmp1427 = $tmp1426->methods[0];
frost$core$Bit $tmp1429 = $tmp1427($tmp1425);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:387:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1430 = $tmp1429.value;
bool $tmp1431 = !$tmp1430;
frost$core$Bit $tmp1432 = (frost$core$Bit) {$tmp1431};
bool $tmp1433 = $tmp1432.value;
if ($tmp1433) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:388
frost$collections$Iterator* $tmp1434 = *(&local2);
ITable* $tmp1435 = $tmp1434->$class->itable;
while ($tmp1435->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1435 = $tmp1435->next;
}
$fn1437 $tmp1436 = $tmp1435->methods[1];
frost$core$Object* $tmp1438 = $tmp1436($tmp1434);
*(&local4) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1438)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1438);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:389
frost$collections$Iterator* $tmp1439 = *(&local3);
ITable* $tmp1440 = $tmp1439->$class->itable;
while ($tmp1440->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1440 = $tmp1440->next;
}
$fn1442 $tmp1441 = $tmp1440->methods[1];
frost$core$Object* $tmp1443 = $tmp1441($tmp1439);
frost$core$Int* $tmp1444 = &((org$frostlang$frostc$IR$Statement*) $tmp1443)->$rawValue;
frost$core$Int $tmp1445 = *$tmp1444;
frost$core$Int $tmp1446 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:390:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1447 = $tmp1445.value;
int64_t $tmp1448 = $tmp1446.value;
bool $tmp1449 = $tmp1447 == $tmp1448;
frost$core$Bit $tmp1450 = (frost$core$Bit) {$tmp1449};
bool $tmp1451 = $tmp1450.value;
if ($tmp1451) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1452 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1443)->$data + 0);
org$frostlang$frostc$Position $tmp1453 = *$tmp1452;
org$frostlang$frostc$IR$Value** $tmp1454 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1443)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1455 = *$tmp1454;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
org$frostlang$frostc$IR$Value* $tmp1456 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local5) = $tmp1455;
org$frostlang$frostc$IR$Value** $tmp1457 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1443)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1458 = *$tmp1457;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
org$frostlang$frostc$IR$Value* $tmp1459 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
*(&local6) = $tmp1458;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:391
org$frostlang$frostc$IR$Value* $tmp1460 = *(&local6);
frost$core$Int* $tmp1461 = &$tmp1460->$rawValue;
frost$core$Int $tmp1462 = *$tmp1461;
frost$core$Int $tmp1463 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:392:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1464 = $tmp1462.value;
int64_t $tmp1465 = $tmp1463.value;
bool $tmp1466 = $tmp1464 == $tmp1465;
frost$core$Bit $tmp1467 = (frost$core$Bit) {$tmp1466};
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block10; else goto block11;
block10:;
frost$core$Int* $tmp1469 = (frost$core$Int*) ($tmp1460->$data + 0);
frost$core$Int $tmp1470 = *$tmp1469;
*(&local7) = $tmp1470;
org$frostlang$frostc$Type** $tmp1471 = (org$frostlang$frostc$Type**) ($tmp1460->$data + 8);
org$frostlang$frostc$Type* $tmp1472 = *$tmp1471;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:393
org$frostlang$frostc$pass$Analyzer$State* $tmp1473 = *(&local0);
frost$collections$Array** $tmp1474 = &$tmp1473->locals;
frost$collections$Array* $tmp1475 = *$tmp1474;
frost$core$Int $tmp1476 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1477 = *(&local5);
org$frostlang$frostc$pass$Analyzer$State* $tmp1478 = *(&local0);
$fn1480 $tmp1479 = ($fn1480) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1481 = $tmp1479(param0, $tmp1477, $tmp1478);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:393:42
frost$core$Int $tmp1482 = (frost$core$Int) {0u};
int64_t $tmp1483 = $tmp1476.value;
int64_t $tmp1484 = $tmp1482.value;
bool $tmp1485 = $tmp1483 >= $tmp1484;
frost$core$Bit $tmp1486 = (frost$core$Bit) {$tmp1485};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block16; else goto block15;
block16:;
ITable* $tmp1488 = ((frost$collections$CollectionView*) $tmp1475)->$class->itable;
while ($tmp1488->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1488 = $tmp1488->next;
}
$fn1490 $tmp1489 = $tmp1488->methods[0];
frost$core$Int $tmp1491 = $tmp1489(((frost$collections$CollectionView*) $tmp1475));
int64_t $tmp1492 = $tmp1476.value;
int64_t $tmp1493 = $tmp1491.value;
bool $tmp1494 = $tmp1492 < $tmp1493;
frost$core$Bit $tmp1495 = (frost$core$Bit) {$tmp1494};
bool $tmp1496 = $tmp1495.value;
if ($tmp1496) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1497 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1498, $tmp1497, &$s1499);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1500 = &$tmp1475->data;
frost$core$Object** $tmp1501 = *$tmp1500;
frost$core$Int64 $tmp1502 = frost$core$Int64$init$frost$core$Int($tmp1476);
int64_t $tmp1503 = $tmp1502.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Object* $tmp1504 = $tmp1501[$tmp1503];
frost$core$Frost$unref$frost$core$Object$Q($tmp1504);
$tmp1501[$tmp1503] = ((frost$core$Object*) $tmp1481);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
goto block9;
block11:;
frost$core$Int $tmp1505 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:395:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1506 = $tmp1462.value;
int64_t $tmp1507 = $tmp1505.value;
bool $tmp1508 = $tmp1506 == $tmp1507;
frost$core$Bit $tmp1509 = (frost$core$Bit) {$tmp1508};
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block17; else goto block9;
block17:;
org$frostlang$frostc$IR$Statement$ID* $tmp1511 = (org$frostlang$frostc$IR$Statement$ID*) ($tmp1460->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1512 = *$tmp1511;
*(&local8) = $tmp1512;
org$frostlang$frostc$Type** $tmp1513 = (org$frostlang$frostc$Type**) ($tmp1460->$data + 8);
org$frostlang$frostc$Type* $tmp1514 = *$tmp1513;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:396
frost$collections$HashMap** $tmp1515 = &param0->statements;
frost$collections$HashMap* $tmp1516 = *$tmp1515;
org$frostlang$frostc$IR$Statement$ID $tmp1517 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1518;
$tmp1518 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1518->value = $tmp1517;
frost$core$Object* $tmp1519 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1516, ((frost$collections$Key*) $tmp1518));
frost$core$Int* $tmp1520 = &((org$frostlang$frostc$IR$Statement*) $tmp1519)->$rawValue;
frost$core$Int $tmp1521 = *$tmp1520;
frost$core$Int $tmp1522 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:397:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1523 = $tmp1521.value;
int64_t $tmp1524 = $tmp1522.value;
bool $tmp1525 = $tmp1523 == $tmp1524;
frost$core$Bit $tmp1526 = (frost$core$Bit) {$tmp1525};
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Position* $tmp1528 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1519)->$data + 0);
org$frostlang$frostc$Position $tmp1529 = *$tmp1528;
org$frostlang$frostc$IR$Value** $tmp1530 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1519)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1531 = *$tmp1530;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
org$frostlang$frostc$IR$Value* $tmp1532 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
*(&local9) = $tmp1531;
org$frostlang$frostc$FieldDecl** $tmp1533 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp1519)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1534 = *$tmp1533;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:398
org$frostlang$frostc$IR$Value* $tmp1535 = *(&local9);
frost$core$Int* $tmp1536 = &$tmp1535->$rawValue;
frost$core$Int $tmp1537 = *$tmp1536;
frost$core$Int $tmp1538 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:399:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1539 = $tmp1537.value;
int64_t $tmp1540 = $tmp1538.value;
bool $tmp1541 = $tmp1539 == $tmp1540;
frost$core$Bit $tmp1542 = (frost$core$Bit) {$tmp1541};
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block23; else goto block22;
block23:;
frost$core$Int* $tmp1544 = (frost$core$Int*) ($tmp1535->$data + 0);
frost$core$Int $tmp1545 = *$tmp1544;
*(&local10) = $tmp1545;
org$frostlang$frostc$Type** $tmp1546 = (org$frostlang$frostc$Type**) ($tmp1535->$data + 8);
org$frostlang$frostc$Type* $tmp1547 = *$tmp1546;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:400
org$frostlang$frostc$pass$Analyzer$State* $tmp1548 = *(&local0);
frost$collections$Array** $tmp1549 = &$tmp1548->locals;
frost$collections$Array* $tmp1550 = *$tmp1549;
frost$core$Int $tmp1551 = *(&local10);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1552 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR** $tmp1553 = &param0->ir;
org$frostlang$frostc$IR* $tmp1554 = *$tmp1553;
frost$collections$Array** $tmp1555 = &$tmp1554->locals;
frost$collections$Array* $tmp1556 = *$tmp1555;
frost$core$Int $tmp1557 = *(&local10);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:400:91
frost$core$Int $tmp1558 = (frost$core$Int) {0u};
int64_t $tmp1559 = $tmp1557.value;
int64_t $tmp1560 = $tmp1558.value;
bool $tmp1561 = $tmp1559 >= $tmp1560;
frost$core$Bit $tmp1562 = (frost$core$Bit) {$tmp1561};
bool $tmp1563 = $tmp1562.value;
if ($tmp1563) goto block28; else goto block27;
block28:;
ITable* $tmp1564 = ((frost$collections$CollectionView*) $tmp1556)->$class->itable;
while ($tmp1564->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1564 = $tmp1564->next;
}
$fn1566 $tmp1565 = $tmp1564->methods[0];
frost$core$Int $tmp1567 = $tmp1565(((frost$collections$CollectionView*) $tmp1556));
int64_t $tmp1568 = $tmp1557.value;
int64_t $tmp1569 = $tmp1567.value;
bool $tmp1570 = $tmp1568 < $tmp1569;
frost$core$Bit $tmp1571 = (frost$core$Bit) {$tmp1570};
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block26; else goto block27;
block27:;
frost$core$Int $tmp1573 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1574, $tmp1573, &$s1575);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1576 = &$tmp1556->data;
frost$core$Object** $tmp1577 = *$tmp1576;
frost$core$Int64 $tmp1578 = frost$core$Int64$init$frost$core$Int($tmp1557);
int64_t $tmp1579 = $tmp1578.value;
frost$core$Object* $tmp1580 = $tmp1577[$tmp1579];
frost$core$Frost$ref$frost$core$Object$Q($tmp1580);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1552, ((org$frostlang$frostc$Type*) $tmp1580));
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:400:58
frost$core$Int $tmp1581 = (frost$core$Int) {0u};
int64_t $tmp1582 = $tmp1551.value;
int64_t $tmp1583 = $tmp1581.value;
bool $tmp1584 = $tmp1582 >= $tmp1583;
frost$core$Bit $tmp1585 = (frost$core$Bit) {$tmp1584};
bool $tmp1586 = $tmp1585.value;
if ($tmp1586) goto block32; else goto block31;
block32:;
ITable* $tmp1587 = ((frost$collections$CollectionView*) $tmp1550)->$class->itable;
while ($tmp1587->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1587 = $tmp1587->next;
}
$fn1589 $tmp1588 = $tmp1587->methods[0];
frost$core$Int $tmp1590 = $tmp1588(((frost$collections$CollectionView*) $tmp1550));
int64_t $tmp1591 = $tmp1551.value;
int64_t $tmp1592 = $tmp1590.value;
bool $tmp1593 = $tmp1591 < $tmp1592;
frost$core$Bit $tmp1594 = (frost$core$Bit) {$tmp1593};
bool $tmp1595 = $tmp1594.value;
if ($tmp1595) goto block30; else goto block31;
block31:;
frost$core$Int $tmp1596 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1597, $tmp1596, &$s1598);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1599 = &$tmp1550->data;
frost$core$Object** $tmp1600 = *$tmp1599;
frost$core$Int64 $tmp1601 = frost$core$Int64$init$frost$core$Int($tmp1551);
int64_t $tmp1602 = $tmp1601.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
frost$core$Object* $tmp1603 = $tmp1600[$tmp1602];
frost$core$Frost$unref$frost$core$Object$Q($tmp1603);
$tmp1600[$tmp1602] = ((frost$core$Object*) $tmp1552);
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
goto block22;
block22:;
org$frostlang$frostc$IR$Value* $tmp1604 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1519);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1518)));
goto block9;
block9:;
org$frostlang$frostc$IR$Value* $tmp1605 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1606 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block5;
block7:;
frost$core$Int $tmp1607 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:408:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1608 = $tmp1445.value;
int64_t $tmp1609 = $tmp1607.value;
bool $tmp1610 = $tmp1608 == $tmp1609;
frost$core$Bit $tmp1611 = (frost$core$Bit) {$tmp1610};
bool $tmp1612 = $tmp1611.value;
if ($tmp1612) goto block33; else goto block5;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:409
frost$core$Bit* $tmp1613 = &param0->reportErrors;
frost$core$Bit $tmp1614 = *$tmp1613;
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:410
org$frostlang$frostc$IR$Statement$ID $tmp1616 = *(&local4);
org$frostlang$frostc$pass$Analyzer$State* $tmp1617 = *(&local0);
$fn1619 $tmp1618 = ($fn1619) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1620 = $tmp1618(param0, $tmp1616, $tmp1617);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
goto block36;
block36:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1443);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:415
org$frostlang$frostc$IR$Block* $tmp1621 = *(&local1);
frost$core$Int $tmp1622 = param1.exit;
org$frostlang$frostc$pass$Analyzer$State* $tmp1623 = *(&local0);
$fn1625 $tmp1624 = ($fn1625) param0->$class->vtable[5];
$tmp1624(param0, $tmp1621, $tmp1622, $tmp1623);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:416
org$frostlang$frostc$pass$Analyzer$State* $tmp1626 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$collections$Iterator* $tmp1627 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp1628 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
*(&local2) = ((frost$collections$Iterator*) NULL);
org$frostlang$frostc$IR$Block* $tmp1629 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$pass$Analyzer$State* $tmp1630 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
return $tmp1626;

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
frost$collections$HashMap** $tmp1631 = &param0->blocks;
frost$collections$HashMap* $tmp1632 = *$tmp1631;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1633;
$tmp1633 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1633->value = param1;
frost$core$Object* $tmp1634 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1632, ((frost$collections$Key*) $tmp1633));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1634)));
org$frostlang$frostc$IR$Block* $tmp1635 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp1634);
frost$core$Frost$unref$frost$core$Object$Q($tmp1634);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1633)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:421
org$frostlang$frostc$IR$Block* $tmp1636 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp1637 = &$tmp1636->statements;
org$frostlang$frostc$LinkedList* $tmp1638 = *$tmp1637;
$fn1640 $tmp1639 = ($fn1640) $tmp1638->$class->vtable[6];
frost$core$Object* $tmp1641 = $tmp1639($tmp1638);
frost$core$Int* $tmp1642 = &((org$frostlang$frostc$IR$Statement*) $tmp1641)->$rawValue;
frost$core$Int $tmp1643 = *$tmp1642;
frost$core$Int $tmp1644 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:422:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1645 = $tmp1643.value;
int64_t $tmp1646 = $tmp1644.value;
bool $tmp1647 = $tmp1645 == $tmp1646;
frost$core$Bit $tmp1648 = (frost$core$Bit) {$tmp1647};
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1650 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1641)->$data + 0);
org$frostlang$frostc$Position $tmp1651 = *$tmp1650;
org$frostlang$frostc$IR$Block$ID* $tmp1652 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1641)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp1653 = *$tmp1652;
*(&local1) = $tmp1653;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:423
org$frostlang$frostc$IR$Block* $tmp1654 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1655 = &$tmp1654->id;
org$frostlang$frostc$IR$Block$ID $tmp1656 = *$tmp1655;
frost$core$Int $tmp1657 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:423:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1658 = &(&local3)->id;
*$tmp1658 = $tmp1656;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1659 = &(&local3)->exit;
*$tmp1659 = $tmp1657;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1660 = *(&local3);
*(&local2) = $tmp1660;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1661 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp1662 = *(&local1);
$fn1664 $tmp1663 = ($fn1664) param0->$class->vtable[4];
$tmp1663(param0, $tmp1661, $tmp1662);
goto block1;
block3:;
frost$core$Int $tmp1665 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:425:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1666 = $tmp1643.value;
int64_t $tmp1667 = $tmp1665.value;
bool $tmp1668 = $tmp1666 == $tmp1667;
frost$core$Bit $tmp1669 = (frost$core$Bit) {$tmp1668};
bool $tmp1670 = $tmp1669.value;
if ($tmp1670) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1671 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1641)->$data + 0);
org$frostlang$frostc$Position $tmp1672 = *$tmp1671;
org$frostlang$frostc$IR$Value** $tmp1673 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1641)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1674 = *$tmp1673;
org$frostlang$frostc$IR$Block$ID* $tmp1675 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1641)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1676 = *$tmp1675;
*(&local4) = $tmp1676;
org$frostlang$frostc$IR$Block$ID* $tmp1677 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1641)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1678 = *$tmp1677;
*(&local5) = $tmp1678;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:426
org$frostlang$frostc$IR$Block* $tmp1679 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1680 = &$tmp1679->id;
org$frostlang$frostc$IR$Block$ID $tmp1681 = *$tmp1680;
frost$core$Int $tmp1682 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:426:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1683 = &(&local7)->id;
*$tmp1683 = $tmp1681;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1684 = &(&local7)->exit;
*$tmp1684 = $tmp1682;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1685 = *(&local7);
*(&local6) = $tmp1685;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1686 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp1687 = *(&local4);
$fn1689 $tmp1688 = ($fn1689) param0->$class->vtable[4];
$tmp1688(param0, $tmp1686, $tmp1687);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:427
org$frostlang$frostc$IR$Block* $tmp1690 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1691 = &$tmp1690->id;
org$frostlang$frostc$IR$Block$ID $tmp1692 = *$tmp1691;
frost$core$Int $tmp1693 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:427:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1694 = &(&local9)->id;
*$tmp1694 = $tmp1692;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1695 = &(&local9)->exit;
*$tmp1695 = $tmp1693;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1696 = *(&local9);
*(&local8) = $tmp1696;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1697 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp1698 = *(&local5);
$fn1700 $tmp1699 = ($fn1700) param0->$class->vtable[4];
$tmp1699(param0, $tmp1697, $tmp1698);
goto block1;
block7:;
frost$core$Int $tmp1701 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:429:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1702 = $tmp1643.value;
int64_t $tmp1703 = $tmp1701.value;
bool $tmp1704 = $tmp1702 == $tmp1703;
frost$core$Bit $tmp1705 = (frost$core$Bit) {$tmp1704};
bool $tmp1706 = $tmp1705.value;
if ($tmp1706) goto block11; else goto block12;
block11:;
goto block1;
block12:;
frost$core$Int $tmp1707 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:431:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1708 = $tmp1643.value;
int64_t $tmp1709 = $tmp1707.value;
bool $tmp1710 = $tmp1708 == $tmp1709;
frost$core$Bit $tmp1711 = (frost$core$Bit) {$tmp1710};
bool $tmp1712 = $tmp1711.value;
if ($tmp1712) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int $tmp1713 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:433:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1714 = $tmp1643.value;
int64_t $tmp1715 = $tmp1713.value;
bool $tmp1716 = $tmp1714 == $tmp1715;
frost$core$Bit $tmp1717 = (frost$core$Bit) {$tmp1716};
bool $tmp1718 = $tmp1717.value;
if ($tmp1718) goto block17; else goto block18;
block17:;
goto block1;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:436
frost$core$Int $tmp1719 = (frost$core$Int) {436u};
org$frostlang$frostc$IR$Block* $tmp1720 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp1721 = &$tmp1720->statements;
org$frostlang$frostc$LinkedList* $tmp1722 = *$tmp1721;
$fn1724 $tmp1723 = ($fn1724) $tmp1722->$class->vtable[6];
frost$core$Object* $tmp1725 = $tmp1723($tmp1722);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:436:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1727 $tmp1726 = ($fn1727) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1725))->$class->vtable[0];
frost$core$String* $tmp1728 = $tmp1726(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1725)));
frost$core$String* $tmp1729 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1730, $tmp1728);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1731, $tmp1719, $tmp1729);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q($tmp1725);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1641);
org$frostlang$frostc$IR$Block* $tmp1732 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* param0) {

frost$core$Int local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$collections$Iterator* local2 = NULL;
frost$collections$Iterator* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:442
org$frostlang$frostc$MethodDecl** $tmp1733 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp1734 = *$tmp1733;
frost$core$String* $tmp1735 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1734);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:442:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1735);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1736);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:443
frost$core$Int $tmp1737 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp1738 = &param0->ir;
org$frostlang$frostc$IR* $tmp1739 = *$tmp1738;
frost$collections$Array** $tmp1740 = &$tmp1739->locals;
frost$collections$Array* $tmp1741 = *$tmp1740;
ITable* $tmp1742 = ((frost$collections$CollectionView*) $tmp1741)->$class->itable;
while ($tmp1742->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1742 = $tmp1742->next;
}
$fn1744 $tmp1743 = $tmp1742->methods[0];
frost$core$Int $tmp1745 = $tmp1743(((frost$collections$CollectionView*) $tmp1741));
frost$core$Bit $tmp1746 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1747 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1737, $tmp1745, $tmp1746);
frost$core$Int $tmp1748 = $tmp1747.min;
*(&local0) = $tmp1748;
frost$core$Int $tmp1749 = $tmp1747.max;
frost$core$Bit $tmp1750 = $tmp1747.inclusive;
bool $tmp1751 = $tmp1750.value;
frost$core$Int $tmp1752 = (frost$core$Int) {1u};
if ($tmp1751) goto block6; else goto block7;
block6:;
int64_t $tmp1753 = $tmp1748.value;
int64_t $tmp1754 = $tmp1749.value;
bool $tmp1755 = $tmp1753 <= $tmp1754;
frost$core$Bit $tmp1756 = (frost$core$Bit) {$tmp1755};
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block3; else goto block4;
block7:;
int64_t $tmp1758 = $tmp1748.value;
int64_t $tmp1759 = $tmp1749.value;
bool $tmp1760 = $tmp1758 < $tmp1759;
frost$core$Bit $tmp1761 = (frost$core$Bit) {$tmp1760};
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:444
frost$core$Int $tmp1763 = *(&local0);
frost$core$Int$wrapper* $tmp1764;
$tmp1764 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1764->value = $tmp1763;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:444:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1766 $tmp1765 = ($fn1766) ((frost$core$Object*) $tmp1764)->$class->vtable[0];
frost$core$String* $tmp1767 = $tmp1765(((frost$core$Object*) $tmp1764));
frost$core$String* $tmp1768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1769, $tmp1767);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
frost$core$String* $tmp1770 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1768, &$s1771);
org$frostlang$frostc$IR** $tmp1772 = &param0->ir;
org$frostlang$frostc$IR* $tmp1773 = *$tmp1772;
frost$collections$Array** $tmp1774 = &$tmp1773->locals;
frost$collections$Array* $tmp1775 = *$tmp1774;
frost$core$Int $tmp1776 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:444:54
frost$core$Int $tmp1777 = (frost$core$Int) {0u};
int64_t $tmp1778 = $tmp1776.value;
int64_t $tmp1779 = $tmp1777.value;
bool $tmp1780 = $tmp1778 >= $tmp1779;
frost$core$Bit $tmp1781 = (frost$core$Bit) {$tmp1780};
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block12; else goto block11;
block12:;
ITable* $tmp1783 = ((frost$collections$CollectionView*) $tmp1775)->$class->itable;
while ($tmp1783->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1783 = $tmp1783->next;
}
$fn1785 $tmp1784 = $tmp1783->methods[0];
frost$core$Int $tmp1786 = $tmp1784(((frost$collections$CollectionView*) $tmp1775));
int64_t $tmp1787 = $tmp1776.value;
int64_t $tmp1788 = $tmp1786.value;
bool $tmp1789 = $tmp1787 < $tmp1788;
frost$core$Bit $tmp1790 = (frost$core$Bit) {$tmp1789};
bool $tmp1791 = $tmp1790.value;
if ($tmp1791) goto block10; else goto block11;
block11:;
frost$core$Int $tmp1792 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1793, $tmp1792, &$s1794);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1795 = &$tmp1775->data;
frost$core$Object** $tmp1796 = *$tmp1795;
frost$core$Int64 $tmp1797 = frost$core$Int64$init$frost$core$Int($tmp1776);
int64_t $tmp1798 = $tmp1797.value;
frost$core$Object* $tmp1799 = $tmp1796[$tmp1798];
frost$core$Frost$ref$frost$core$Object$Q($tmp1799);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:444:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1801 $tmp1800 = ($fn1801) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1799))->$class->vtable[0];
frost$core$String* $tmp1802 = $tmp1800(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1799)));
frost$core$String* $tmp1803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1770, $tmp1802);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$String* $tmp1804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1803, &$s1805);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:444:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1804);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1806);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q($tmp1799);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
frost$core$Int $tmp1807 = *(&local0);
int64_t $tmp1808 = $tmp1749.value;
int64_t $tmp1809 = $tmp1807.value;
int64_t $tmp1810 = $tmp1808 - $tmp1809;
frost$core$Int $tmp1811 = (frost$core$Int) {$tmp1810};
if ($tmp1751) goto block17; else goto block18;
block17:;
int64_t $tmp1812 = $tmp1811.value;
int64_t $tmp1813 = $tmp1752.value;
bool $tmp1814 = $tmp1812 >= $tmp1813;
frost$core$Bit $tmp1815 = (frost$core$Bit) {$tmp1814};
bool $tmp1816 = $tmp1815.value;
if ($tmp1816) goto block16; else goto block4;
block18:;
int64_t $tmp1817 = $tmp1811.value;
int64_t $tmp1818 = $tmp1752.value;
bool $tmp1819 = $tmp1817 > $tmp1818;
frost$core$Bit $tmp1820 = (frost$core$Bit) {$tmp1819};
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block16; else goto block4;
block16:;
int64_t $tmp1822 = $tmp1807.value;
int64_t $tmp1823 = $tmp1752.value;
int64_t $tmp1824 = $tmp1822 + $tmp1823;
frost$core$Int $tmp1825 = (frost$core$Int) {$tmp1824};
*(&local0) = $tmp1825;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:446
org$frostlang$frostc$IR** $tmp1826 = &param0->ir;
org$frostlang$frostc$IR* $tmp1827 = *$tmp1826;
frost$collections$Array** $tmp1828 = &$tmp1827->blocks;
frost$collections$Array* $tmp1829 = *$tmp1828;
ITable* $tmp1830 = ((frost$collections$Iterable*) $tmp1829)->$class->itable;
while ($tmp1830->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1830 = $tmp1830->next;
}
$fn1832 $tmp1831 = $tmp1830->methods[0];
frost$collections$Iterator* $tmp1833 = $tmp1831(((frost$collections$Iterable*) $tmp1829));
goto block19;
block19:;
ITable* $tmp1834 = $tmp1833->$class->itable;
while ($tmp1834->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1834 = $tmp1834->next;
}
$fn1836 $tmp1835 = $tmp1834->methods[0];
frost$core$Bit $tmp1837 = $tmp1835($tmp1833);
bool $tmp1838 = $tmp1837.value;
if ($tmp1838) goto block21; else goto block20;
block20:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp1839 = $tmp1833->$class->itable;
while ($tmp1839->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1839 = $tmp1839->next;
}
$fn1841 $tmp1840 = $tmp1839->methods[1];
frost$core$Object* $tmp1842 = $tmp1840($tmp1833);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1842)));
org$frostlang$frostc$IR$Block* $tmp1843 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1842);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:447
org$frostlang$frostc$IR$Block* $tmp1844 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1845 = &$tmp1844->id;
org$frostlang$frostc$IR$Block$ID $tmp1846 = *$tmp1845;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1847;
$tmp1847 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1847->value = $tmp1846;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:447:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1849 $tmp1848 = ($fn1849) ((frost$core$Object*) $tmp1847)->$class->vtable[0];
frost$core$String* $tmp1850 = $tmp1848(((frost$core$Object*) $tmp1847));
frost$core$String* $tmp1851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1852, $tmp1850);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$String* $tmp1853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1851, &$s1854);
frost$io$Console$print$frost$core$String($tmp1853);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:448
frost$collections$HashMap** $tmp1855 = &param0->entryStates;
frost$collections$HashMap* $tmp1856 = *$tmp1855;
org$frostlang$frostc$IR$Block* $tmp1857 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1858 = &$tmp1857->id;
org$frostlang$frostc$IR$Block$ID $tmp1859 = *$tmp1858;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1860;
$tmp1860 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1860->value = $tmp1859;
frost$core$Object* $tmp1861 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1856, ((frost$collections$Key*) $tmp1860));
frost$core$Bit $tmp1862 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp1861) != NULL};
bool $tmp1863 = $tmp1862.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1861);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1860)));
if ($tmp1863) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:449
frost$collections$HashMap** $tmp1864 = &param0->entryStates;
frost$collections$HashMap* $tmp1865 = *$tmp1864;
org$frostlang$frostc$IR$Block* $tmp1866 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1867 = &$tmp1866->id;
org$frostlang$frostc$IR$Block$ID $tmp1868 = *$tmp1867;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1869;
$tmp1869 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1869->value = $tmp1868;
frost$core$Object* $tmp1870 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1865, ((frost$collections$Key*) $tmp1869));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:449:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1872 $tmp1871 = ($fn1872) ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1870))->$class->vtable[0];
frost$core$String* $tmp1873 = $tmp1871(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1870)));
frost$core$String* $tmp1874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1875, $tmp1873);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$io$Console$print$frost$core$String($tmp1874);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q($tmp1870);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1869)));
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:451
// begin inline call to method frost.io.Console.printLine() from Analyzer.frost:451:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1876);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:452
org$frostlang$frostc$IR$Block* $tmp1877 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1878 = &$tmp1877->ids;
org$frostlang$frostc$LinkedList* $tmp1879 = *$tmp1878;
ITable* $tmp1880 = ((frost$collections$Iterable*) $tmp1879)->$class->itable;
while ($tmp1880->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1880 = $tmp1880->next;
}
$fn1882 $tmp1881 = $tmp1880->methods[0];
frost$collections$Iterator* $tmp1883 = $tmp1881(((frost$collections$Iterable*) $tmp1879));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
frost$collections$Iterator* $tmp1884 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
*(&local2) = $tmp1883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:453
org$frostlang$frostc$IR$Block* $tmp1885 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1886 = &$tmp1885->statements;
org$frostlang$frostc$LinkedList* $tmp1887 = *$tmp1886;
ITable* $tmp1888 = ((frost$collections$Iterable*) $tmp1887)->$class->itable;
while ($tmp1888->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1888 = $tmp1888->next;
}
$fn1890 $tmp1889 = $tmp1888->methods[0];
frost$collections$Iterator* $tmp1891 = $tmp1889(((frost$collections$Iterable*) $tmp1887));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$collections$Iterator* $tmp1892 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local3) = $tmp1891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:454
goto block27;
block27:;
frost$collections$Iterator* $tmp1893 = *(&local2);
ITable* $tmp1894 = $tmp1893->$class->itable;
while ($tmp1894->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1894 = $tmp1894->next;
}
$fn1896 $tmp1895 = $tmp1894->methods[0];
frost$core$Bit $tmp1897 = $tmp1895($tmp1893);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:454:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1898 = $tmp1897.value;
bool $tmp1899 = !$tmp1898;
frost$core$Bit $tmp1900 = (frost$core$Bit) {$tmp1899};
bool $tmp1901 = $tmp1900.value;
if ($tmp1901) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:455
frost$collections$Iterator* $tmp1902 = *(&local2);
ITable* $tmp1903 = $tmp1902->$class->itable;
while ($tmp1903->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1903 = $tmp1903->next;
}
$fn1905 $tmp1904 = $tmp1903->methods[1];
frost$core$Object* $tmp1906 = $tmp1904($tmp1902);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1907;
$tmp1907 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1907->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1906)->value;
// begin inline call to method frost.io.Console.print(o:frost.core.Object) from Analyzer.frost:455:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:54
$fn1909 $tmp1908 = ($fn1909) ((frost$core$Object*) $tmp1907)->$class->vtable[0];
frost$core$String* $tmp1910 = $tmp1908(((frost$core$Object*) $tmp1907));
frost$io$Console$print$frost$core$String($tmp1910);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q($tmp1906);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:456
frost$io$Console$print$frost$core$String(&$s1911);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:457
frost$collections$Iterator* $tmp1912 = *(&local3);
ITable* $tmp1913 = $tmp1912->$class->itable;
while ($tmp1913->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1913 = $tmp1913->next;
}
$fn1915 $tmp1914 = $tmp1913->methods[1];
frost$core$Object* $tmp1916 = $tmp1914($tmp1912);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Analyzer.frost:457:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1918 $tmp1917 = ($fn1918) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1916))->$class->vtable[0];
frost$core$String* $tmp1919 = $tmp1917(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1916)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1919);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q($tmp1916);
goto block27;
block29:;
frost$collections$Iterator* $tmp1920 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp1921 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1842);
org$frostlang$frostc$IR$Block* $tmp1922 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
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
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1923 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp1924 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1925 = *$tmp1924;
org$frostlang$frostc$Type** $tmp1926 = &$tmp1925->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1927 = *$tmp1926;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1923, $tmp1927);
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1928 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
*(&local0) = $tmp1923;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:464
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp1929 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
org$frostlang$frostc$pass$Analyzer$State$init($tmp1929);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
org$frostlang$frostc$pass$Analyzer$State* $tmp1930 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
*(&local1) = $tmp1929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:465
frost$core$Int $tmp1931 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp1932 = &param0->ir;
org$frostlang$frostc$IR* $tmp1933 = *$tmp1932;
frost$collections$Array** $tmp1934 = &$tmp1933->locals;
frost$collections$Array* $tmp1935 = *$tmp1934;
ITable* $tmp1936 = ((frost$collections$CollectionView*) $tmp1935)->$class->itable;
while ($tmp1936->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1936 = $tmp1936->next;
}
$fn1938 $tmp1937 = $tmp1936->methods[0];
frost$core$Int $tmp1939 = $tmp1937(((frost$collections$CollectionView*) $tmp1935));
frost$core$Bit $tmp1940 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1941 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1931, $tmp1939, $tmp1940);
frost$core$Int $tmp1942 = $tmp1941.min;
*(&local2) = $tmp1942;
frost$core$Int $tmp1943 = $tmp1941.max;
frost$core$Bit $tmp1944 = $tmp1941.inclusive;
bool $tmp1945 = $tmp1944.value;
frost$core$Int $tmp1946 = (frost$core$Int) {1u};
if ($tmp1945) goto block4; else goto block5;
block4:;
int64_t $tmp1947 = $tmp1942.value;
int64_t $tmp1948 = $tmp1943.value;
bool $tmp1949 = $tmp1947 <= $tmp1948;
frost$core$Bit $tmp1950 = (frost$core$Bit) {$tmp1949};
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block1; else goto block2;
block5:;
int64_t $tmp1952 = $tmp1942.value;
int64_t $tmp1953 = $tmp1943.value;
bool $tmp1954 = $tmp1952 < $tmp1953;
frost$core$Bit $tmp1955 = (frost$core$Bit) {$tmp1954};
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:466
org$frostlang$frostc$pass$Analyzer$State* $tmp1957 = *(&local1);
frost$collections$Array** $tmp1958 = &$tmp1957->locals;
frost$collections$Array* $tmp1959 = *$tmp1958;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1960 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1959, ((frost$core$Object*) $tmp1960));
frost$core$Int $tmp1961 = *(&local2);
int64_t $tmp1962 = $tmp1943.value;
int64_t $tmp1963 = $tmp1961.value;
int64_t $tmp1964 = $tmp1962 - $tmp1963;
frost$core$Int $tmp1965 = (frost$core$Int) {$tmp1964};
if ($tmp1945) goto block7; else goto block8;
block7:;
int64_t $tmp1966 = $tmp1965.value;
int64_t $tmp1967 = $tmp1946.value;
bool $tmp1968 = $tmp1966 >= $tmp1967;
frost$core$Bit $tmp1969 = (frost$core$Bit) {$tmp1968};
bool $tmp1970 = $tmp1969.value;
if ($tmp1970) goto block6; else goto block2;
block8:;
int64_t $tmp1971 = $tmp1965.value;
int64_t $tmp1972 = $tmp1946.value;
bool $tmp1973 = $tmp1971 > $tmp1972;
frost$core$Bit $tmp1974 = (frost$core$Bit) {$tmp1973};
bool $tmp1975 = $tmp1974.value;
if ($tmp1975) goto block6; else goto block2;
block6:;
int64_t $tmp1976 = $tmp1961.value;
int64_t $tmp1977 = $tmp1946.value;
int64_t $tmp1978 = $tmp1976 + $tmp1977;
frost$core$Int $tmp1979 = (frost$core$Int) {$tmp1978};
*(&local2) = $tmp1979;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:468
frost$collections$HashMap** $tmp1980 = &param0->entryStates;
frost$collections$HashMap* $tmp1981 = *$tmp1980;
org$frostlang$frostc$IR** $tmp1982 = &param0->ir;
org$frostlang$frostc$IR* $tmp1983 = *$tmp1982;
frost$collections$Array** $tmp1984 = &$tmp1983->blocks;
frost$collections$Array* $tmp1985 = *$tmp1984;
frost$core$Int $tmp1986 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:468:30
frost$core$Int $tmp1987 = (frost$core$Int) {0u};
int64_t $tmp1988 = $tmp1986.value;
int64_t $tmp1989 = $tmp1987.value;
bool $tmp1990 = $tmp1988 >= $tmp1989;
frost$core$Bit $tmp1991 = (frost$core$Bit) {$tmp1990};
bool $tmp1992 = $tmp1991.value;
if ($tmp1992) goto block12; else goto block11;
block12:;
ITable* $tmp1993 = ((frost$collections$CollectionView*) $tmp1985)->$class->itable;
while ($tmp1993->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1993 = $tmp1993->next;
}
$fn1995 $tmp1994 = $tmp1993->methods[0];
frost$core$Int $tmp1996 = $tmp1994(((frost$collections$CollectionView*) $tmp1985));
int64_t $tmp1997 = $tmp1986.value;
int64_t $tmp1998 = $tmp1996.value;
bool $tmp1999 = $tmp1997 < $tmp1998;
frost$core$Bit $tmp2000 = (frost$core$Bit) {$tmp1999};
bool $tmp2001 = $tmp2000.value;
if ($tmp2001) goto block10; else goto block11;
block11:;
frost$core$Int $tmp2002 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2003, $tmp2002, &$s2004);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2005 = &$tmp1985->data;
frost$core$Object** $tmp2006 = *$tmp2005;
frost$core$Int64 $tmp2007 = frost$core$Int64$init$frost$core$Int($tmp1986);
int64_t $tmp2008 = $tmp2007.value;
frost$core$Object* $tmp2009 = $tmp2006[$tmp2008];
frost$core$Frost$ref$frost$core$Object$Q($tmp2009);
org$frostlang$frostc$IR$Block$ID* $tmp2010 = &((org$frostlang$frostc$IR$Block*) $tmp2009)->id;
org$frostlang$frostc$IR$Block$ID $tmp2011 = *$tmp2010;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2012;
$tmp2012 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2012->value = $tmp2011;
org$frostlang$frostc$pass$Analyzer$State* $tmp2013 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1981, ((frost$collections$Key*) $tmp2012), ((frost$core$Object*) $tmp2013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2012)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2009);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:469
org$frostlang$frostc$IR** $tmp2014 = &param0->ir;
org$frostlang$frostc$IR* $tmp2015 = *$tmp2014;
frost$collections$Array** $tmp2016 = &$tmp2015->blocks;
frost$collections$Array* $tmp2017 = *$tmp2016;
ITable* $tmp2018 = ((frost$collections$Iterable*) $tmp2017)->$class->itable;
while ($tmp2018->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2018 = $tmp2018->next;
}
$fn2020 $tmp2019 = $tmp2018->methods[0];
frost$collections$Iterator* $tmp2021 = $tmp2019(((frost$collections$Iterable*) $tmp2017));
goto block13;
block13:;
ITable* $tmp2022 = $tmp2021->$class->itable;
while ($tmp2022->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2022 = $tmp2022->next;
}
$fn2024 $tmp2023 = $tmp2022->methods[0];
frost$core$Bit $tmp2025 = $tmp2023($tmp2021);
bool $tmp2026 = $tmp2025.value;
if ($tmp2026) goto block15; else goto block14;
block14:;
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2027 = $tmp2021->$class->itable;
while ($tmp2027->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2027 = $tmp2027->next;
}
$fn2029 $tmp2028 = $tmp2027->methods[1];
frost$core$Object* $tmp2030 = $tmp2028($tmp2021);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2030)));
org$frostlang$frostc$IR$Block* $tmp2031 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local3) = ((org$frostlang$frostc$IR$Block*) $tmp2030);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:470
frost$collections$HashMap** $tmp2032 = &param0->blocks;
frost$collections$HashMap* $tmp2033 = *$tmp2032;
org$frostlang$frostc$IR$Block* $tmp2034 = *(&local3);
org$frostlang$frostc$IR$Block$ID* $tmp2035 = &$tmp2034->id;
org$frostlang$frostc$IR$Block$ID $tmp2036 = *$tmp2035;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2037;
$tmp2037 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2037->value = $tmp2036;
org$frostlang$frostc$IR$Block* $tmp2038 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2033, ((frost$collections$Key*) $tmp2037), ((frost$core$Object*) $tmp2038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2037)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:471
org$frostlang$frostc$IR$Block* $tmp2039 = *(&local3);
org$frostlang$frostc$LinkedList** $tmp2040 = &$tmp2039->ids;
org$frostlang$frostc$LinkedList* $tmp2041 = *$tmp2040;
ITable* $tmp2042 = ((frost$collections$Iterable*) $tmp2041)->$class->itable;
while ($tmp2042->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2042 = $tmp2042->next;
}
$fn2044 $tmp2043 = $tmp2042->methods[0];
frost$collections$Iterator* $tmp2045 = $tmp2043(((frost$collections$Iterable*) $tmp2041));
*(&local4) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
frost$collections$Iterator* $tmp2046 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
*(&local4) = $tmp2045;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:472
org$frostlang$frostc$IR$Block* $tmp2047 = *(&local3);
org$frostlang$frostc$LinkedList** $tmp2048 = &$tmp2047->statements;
org$frostlang$frostc$LinkedList* $tmp2049 = *$tmp2048;
ITable* $tmp2050 = ((frost$collections$Iterable*) $tmp2049)->$class->itable;
while ($tmp2050->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2050 = $tmp2050->next;
}
$fn2052 $tmp2051 = $tmp2050->methods[0];
frost$collections$Iterator* $tmp2053 = $tmp2051(((frost$collections$Iterable*) $tmp2049));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
frost$collections$Iterator* $tmp2054 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
*(&local5) = $tmp2053;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:473
goto block16;
block16:;
frost$collections$Iterator* $tmp2055 = *(&local4);
ITable* $tmp2056 = $tmp2055->$class->itable;
while ($tmp2056->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2056 = $tmp2056->next;
}
$fn2058 $tmp2057 = $tmp2056->methods[0];
frost$core$Bit $tmp2059 = $tmp2057($tmp2055);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:473:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2060 = $tmp2059.value;
bool $tmp2061 = !$tmp2060;
frost$core$Bit $tmp2062 = (frost$core$Bit) {$tmp2061};
bool $tmp2063 = $tmp2062.value;
if ($tmp2063) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:474
frost$collections$HashMap** $tmp2064 = &param0->statements;
frost$collections$HashMap* $tmp2065 = *$tmp2064;
frost$collections$Iterator* $tmp2066 = *(&local4);
ITable* $tmp2067 = $tmp2066->$class->itable;
while ($tmp2067->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2067 = $tmp2067->next;
}
$fn2069 $tmp2068 = $tmp2067->methods[1];
frost$core$Object* $tmp2070 = $tmp2068($tmp2066);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2071;
$tmp2071 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2071->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2070)->value;
frost$collections$Iterator* $tmp2072 = *(&local5);
ITable* $tmp2073 = $tmp2072->$class->itable;
while ($tmp2073->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2073 = $tmp2073->next;
}
$fn2075 $tmp2074 = $tmp2073->methods[1];
frost$core$Object* $tmp2076 = $tmp2074($tmp2072);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2065, ((frost$collections$Key*) $tmp2071), ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2076)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2076);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2071)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2070);
goto block16;
block18:;
frost$collections$Iterator* $tmp2077 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2078 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
*(&local4) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2030);
org$frostlang$frostc$IR$Block* $tmp2079 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:477
frost$collections$HashSet** $tmp2080 = &param0->worklist;
frost$collections$HashSet* $tmp2081 = *$tmp2080;
org$frostlang$frostc$IR** $tmp2082 = &param0->ir;
org$frostlang$frostc$IR* $tmp2083 = *$tmp2082;
frost$collections$Array** $tmp2084 = &$tmp2083->blocks;
frost$collections$Array* $tmp2085 = *$tmp2084;
frost$core$Int $tmp2086 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:477:31
frost$core$Int $tmp2087 = (frost$core$Int) {0u};
int64_t $tmp2088 = $tmp2086.value;
int64_t $tmp2089 = $tmp2087.value;
bool $tmp2090 = $tmp2088 >= $tmp2089;
frost$core$Bit $tmp2091 = (frost$core$Bit) {$tmp2090};
bool $tmp2092 = $tmp2091.value;
if ($tmp2092) goto block23; else goto block22;
block23:;
ITable* $tmp2093 = ((frost$collections$CollectionView*) $tmp2085)->$class->itable;
while ($tmp2093->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2093 = $tmp2093->next;
}
$fn2095 $tmp2094 = $tmp2093->methods[0];
frost$core$Int $tmp2096 = $tmp2094(((frost$collections$CollectionView*) $tmp2085));
int64_t $tmp2097 = $tmp2086.value;
int64_t $tmp2098 = $tmp2096.value;
bool $tmp2099 = $tmp2097 < $tmp2098;
frost$core$Bit $tmp2100 = (frost$core$Bit) {$tmp2099};
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block21; else goto block22;
block22:;
frost$core$Int $tmp2102 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2103, $tmp2102, &$s2104);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2105 = &$tmp2085->data;
frost$core$Object** $tmp2106 = *$tmp2105;
frost$core$Int64 $tmp2107 = frost$core$Int64$init$frost$core$Int($tmp2086);
int64_t $tmp2108 = $tmp2107.value;
frost$core$Object* $tmp2109 = $tmp2106[$tmp2108];
frost$core$Frost$ref$frost$core$Object$Q($tmp2109);
org$frostlang$frostc$IR$Block$ID* $tmp2110 = &((org$frostlang$frostc$IR$Block*) $tmp2109)->id;
org$frostlang$frostc$IR$Block$ID $tmp2111 = *$tmp2110;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2112;
$tmp2112 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2112->value = $tmp2111;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:477:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp2113 = &$tmp2081->contents;
frost$collections$HashMap* $tmp2114 = *$tmp2113;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2114, ((frost$collections$Key*) $tmp2112), ((frost$core$Object*) ((frost$collections$Key*) $tmp2112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2112)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:478
goto block25;
block25:;
frost$collections$HashSet** $tmp2115 = &param0->worklist;
frost$collections$HashSet* $tmp2116 = *$tmp2115;
ITable* $tmp2117 = ((frost$collections$CollectionView*) $tmp2116)->$class->itable;
while ($tmp2117->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2117 = $tmp2117->next;
}
$fn2119 $tmp2118 = $tmp2117->methods[0];
frost$core$Int $tmp2120 = $tmp2118(((frost$collections$CollectionView*) $tmp2116));
frost$core$Int $tmp2121 = (frost$core$Int) {0u};
int64_t $tmp2122 = $tmp2120.value;
int64_t $tmp2123 = $tmp2121.value;
bool $tmp2124 = $tmp2122 > $tmp2123;
frost$core$Bit $tmp2125 = (frost$core$Bit) {$tmp2124};
bool $tmp2126 = $tmp2125.value;
if ($tmp2126) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:479
frost$collections$HashSet** $tmp2127 = &param0->worklist;
frost$collections$HashSet* $tmp2128 = *$tmp2127;
ITable* $tmp2129 = ((frost$collections$Iterable*) $tmp2128)->$class->itable;
while ($tmp2129->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2129 = $tmp2129->next;
}
$fn2131 $tmp2130 = $tmp2129->methods[0];
frost$collections$Iterator* $tmp2132 = $tmp2130(((frost$collections$Iterable*) $tmp2128));
ITable* $tmp2133 = $tmp2132->$class->itable;
while ($tmp2133->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2133 = $tmp2133->next;
}
$fn2135 $tmp2134 = $tmp2133->methods[1];
frost$core$Object* $tmp2136 = $tmp2134($tmp2132);
*(&local6) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2136)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:480
frost$collections$HashSet** $tmp2137 = &param0->worklist;
frost$collections$HashSet* $tmp2138 = *$tmp2137;
org$frostlang$frostc$IR$Block$ID $tmp2139 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2140;
$tmp2140 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2140->value = $tmp2139;
// begin inline call to method frost.collections.HashSet.remove(value:frost.collections.HashSet.T) from Analyzer.frost:480:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:30
frost$collections$HashMap** $tmp2141 = &$tmp2138->contents;
frost$collections$HashMap* $tmp2142 = *$tmp2141;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp2142, ((frost$collections$Key*) $tmp2140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2140)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:481
org$frostlang$frostc$IR$Block$ID $tmp2143 = *(&local6);
$fn2145 $tmp2144 = ($fn2145) param0->$class->vtable[8];
$tmp2144(param0, $tmp2143);
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:483
frost$core$Bit $tmp2146 = (frost$core$Bit) {true};
frost$core$Bit* $tmp2147 = &param0->reportErrors;
*$tmp2147 = $tmp2146;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:484
org$frostlang$frostc$IR** $tmp2148 = &param0->ir;
org$frostlang$frostc$IR* $tmp2149 = *$tmp2148;
frost$collections$Array** $tmp2150 = &$tmp2149->blocks;
frost$collections$Array* $tmp2151 = *$tmp2150;
ITable* $tmp2152 = ((frost$collections$Iterable*) $tmp2151)->$class->itable;
while ($tmp2152->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2152 = $tmp2152->next;
}
$fn2154 $tmp2153 = $tmp2152->methods[0];
frost$collections$Iterator* $tmp2155 = $tmp2153(((frost$collections$Iterable*) $tmp2151));
goto block29;
block29:;
ITable* $tmp2156 = $tmp2155->$class->itable;
while ($tmp2156->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2156 = $tmp2156->next;
}
$fn2158 $tmp2157 = $tmp2156->methods[0];
frost$core$Bit $tmp2159 = $tmp2157($tmp2155);
bool $tmp2160 = $tmp2159.value;
if ($tmp2160) goto block31; else goto block30;
block30:;
*(&local7) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2161 = $tmp2155->$class->itable;
while ($tmp2161->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2161 = $tmp2161->next;
}
$fn2163 $tmp2162 = $tmp2161->methods[1];
frost$core$Object* $tmp2164 = $tmp2162($tmp2155);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2164)));
org$frostlang$frostc$IR$Block* $tmp2165 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
*(&local7) = ((org$frostlang$frostc$IR$Block*) $tmp2164);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:485
frost$collections$HashMap** $tmp2166 = &param0->entryStates;
frost$collections$HashMap* $tmp2167 = *$tmp2166;
org$frostlang$frostc$IR$Block* $tmp2168 = *(&local7);
org$frostlang$frostc$IR$Block$ID* $tmp2169 = &$tmp2168->id;
org$frostlang$frostc$IR$Block$ID $tmp2170 = *$tmp2169;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2171;
$tmp2171 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2171->value = $tmp2170;
frost$core$Object* $tmp2172 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2167, ((frost$collections$Key*) $tmp2171));
frost$core$Bit $tmp2173 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2172) != NULL};
bool $tmp2174 = $tmp2173.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2172);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2171)));
if ($tmp2174) goto block32; else goto block34;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:486
org$frostlang$frostc$IR$Block* $tmp2175 = *(&local7);
org$frostlang$frostc$LinkedList** $tmp2176 = &$tmp2175->statements;
org$frostlang$frostc$LinkedList* $tmp2177 = *$tmp2176;
ITable* $tmp2178 = ((frost$collections$CollectionView*) $tmp2177)->$class->itable;
while ($tmp2178->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2178 = $tmp2178->next;
}
$fn2180 $tmp2179 = $tmp2178->methods[1];
frost$core$Object* $tmp2181 = $tmp2179(((frost$collections$CollectionView*) $tmp2177));
frost$core$Int* $tmp2182 = &((org$frostlang$frostc$IR$Statement*) $tmp2181)->$rawValue;
frost$core$Int $tmp2183 = *$tmp2182;
frost$core$Int $tmp2184 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:487:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2185 = $tmp2183.value;
int64_t $tmp2186 = $tmp2184.value;
bool $tmp2187 = $tmp2185 == $tmp2186;
frost$core$Bit $tmp2188 = (frost$core$Bit) {$tmp2187};
bool $tmp2189 = $tmp2188.value;
if ($tmp2189) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:488
org$frostlang$frostc$MethodDecl** $tmp2190 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2191 = *$tmp2190;
org$frostlang$frostc$MethodDecl$Kind* $tmp2192 = &$tmp2191->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2193 = *$tmp2192;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2194;
$tmp2194 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2194->value = $tmp2193;
frost$core$Int $tmp2195 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Analyzer.frost:488:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2196 = &(&local9)->$rawValue;
*$tmp2196 = $tmp2195;
org$frostlang$frostc$MethodDecl$Kind $tmp2197 = *(&local9);
*(&local8) = $tmp2197;
org$frostlang$frostc$MethodDecl$Kind $tmp2198 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2199;
$tmp2199 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2199->value = $tmp2198;
ITable* $tmp2200 = ((frost$core$Equatable*) $tmp2194)->$class->itable;
while ($tmp2200->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2200 = $tmp2200->next;
}
$fn2202 $tmp2201 = $tmp2200->methods[1];
frost$core$Bit $tmp2203 = $tmp2201(((frost$core$Equatable*) $tmp2194), ((frost$core$Equatable*) $tmp2199));
bool $tmp2204 = $tmp2203.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2199)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2194)));
if ($tmp2204) goto block41; else goto block40;
block41:;
org$frostlang$frostc$MethodDecl** $tmp2205 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2206 = *$tmp2205;
org$frostlang$frostc$Type** $tmp2207 = &$tmp2206->returnType;
org$frostlang$frostc$Type* $tmp2208 = *$tmp2207;
org$frostlang$frostc$Compiler** $tmp2209 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2210 = *$tmp2209;
org$frostlang$frostc$Type** $tmp2211 = &$tmp2210->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2212 = *$tmp2211;
ITable* $tmp2213 = ((frost$core$Equatable*) $tmp2208)->$class->itable;
while ($tmp2213->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2213 = $tmp2213->next;
}
$fn2215 $tmp2214 = $tmp2213->methods[1];
frost$core$Bit $tmp2216 = $tmp2214(((frost$core$Equatable*) $tmp2208), ((frost$core$Equatable*) $tmp2212));
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:490
org$frostlang$frostc$Compiler** $tmp2218 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2219 = *$tmp2218;
org$frostlang$frostc$MethodDecl** $tmp2220 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2221 = *$tmp2220;
org$frostlang$frostc$Position* $tmp2222 = &((org$frostlang$frostc$Symbol*) $tmp2221)->position;
org$frostlang$frostc$Position $tmp2223 = *$tmp2222;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2219, $tmp2223, &$s2224);
goto block40;
block40:;
goto block35;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:494
org$frostlang$frostc$IR$Block* $tmp2225 = *(&local7);
org$frostlang$frostc$IR$Block$ID* $tmp2226 = &$tmp2225->id;
org$frostlang$frostc$IR$Block$ID $tmp2227 = *$tmp2226;
frost$core$Int $tmp2228 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:494:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp2229 = &(&local11)->id;
*$tmp2229 = $tmp2227;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp2230 = &(&local11)->exit;
*$tmp2230 = $tmp2228;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2231 = *(&local11);
*(&local10) = $tmp2231;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2232 = *(&local10);
$fn2234 $tmp2233 = ($fn2234) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp2235 = $tmp2233(param0, $tmp2232);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
goto block35;
block35:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2181);
goto block33;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:498
org$frostlang$frostc$IR$Block* $tmp2236 = *(&local7);
frost$core$Bit* $tmp2237 = &$tmp2236->containsExplicitCode;
frost$core$Bit $tmp2238 = *$tmp2237;
bool $tmp2239 = $tmp2238.value;
if ($tmp2239) goto block46; else goto block45;
block46:;
org$frostlang$frostc$IR$Block* $tmp2240 = *(&local7);
frost$core$Bit* $tmp2241 = &$tmp2240->forceReachable;
frost$core$Bit $tmp2242 = *$tmp2241;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:498:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2243 = $tmp2242.value;
bool $tmp2244 = !$tmp2243;
frost$core$Bit $tmp2245 = (frost$core$Bit) {$tmp2244};
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:499
org$frostlang$frostc$Compiler** $tmp2247 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2248 = *$tmp2247;
org$frostlang$frostc$IR$Block* $tmp2249 = *(&local7);
org$frostlang$frostc$LinkedList** $tmp2250 = &$tmp2249->statements;
org$frostlang$frostc$LinkedList* $tmp2251 = *$tmp2250;
ITable* $tmp2252 = ((frost$collections$CollectionView*) $tmp2251)->$class->itable;
while ($tmp2252->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2252 = $tmp2252->next;
}
$fn2254 $tmp2253 = $tmp2252->methods[1];
frost$core$Object* $tmp2255 = $tmp2253(((frost$collections$CollectionView*) $tmp2251));
$fn2257 $tmp2256 = ($fn2257) ((org$frostlang$frostc$IR$Statement*) $tmp2255)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2258 = $tmp2256(((org$frostlang$frostc$IR$Statement*) $tmp2255));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2248, $tmp2258, &$s2259);
frost$core$Frost$unref$frost$core$Object$Q($tmp2255);
goto block45;
block45:;
goto block33;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2164);
org$frostlang$frostc$IR$Block* $tmp2260 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local7) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
org$frostlang$frostc$pass$Analyzer$State* $tmp2261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$Position local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:505
org$frostlang$frostc$LinkedList** $tmp2263 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2264 = *$tmp2263;
ITable* $tmp2265 = ((frost$collections$CollectionView*) $tmp2264)->$class->itable;
while ($tmp2265->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2265 = $tmp2265->next;
}
$fn2267 $tmp2266 = $tmp2265->methods[1];
frost$core$Object* $tmp2268 = $tmp2266(((frost$collections$CollectionView*) $tmp2264));
*(&local0) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2268)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2268);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:506
org$frostlang$frostc$LinkedList** $tmp2269 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2270 = *$tmp2269;
ITable* $tmp2271 = ((frost$collections$CollectionView*) $tmp2270)->$class->itable;
while ($tmp2271->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2271 = $tmp2271->next;
}
$fn2273 $tmp2272 = $tmp2271->methods[1];
frost$core$Object* $tmp2274 = $tmp2272(((frost$collections$CollectionView*) $tmp2270));
$fn2276 $tmp2275 = ($fn2276) ((org$frostlang$frostc$IR$Statement*) $tmp2274)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2277 = $tmp2275(((org$frostlang$frostc$IR$Statement*) $tmp2274));
*(&local1) = $tmp2277;
frost$core$Frost$unref$frost$core$Object$Q($tmp2274);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:507
org$frostlang$frostc$LinkedList** $tmp2278 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2279 = *$tmp2278;
$fn2281 $tmp2280 = ($fn2281) $tmp2279->$class->vtable[8];
$tmp2280($tmp2279);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:508
org$frostlang$frostc$LinkedList** $tmp2282 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2283 = *$tmp2282;
org$frostlang$frostc$IR$Statement$ID $tmp2284 = *(&local0);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2285;
$tmp2285 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2285->value = $tmp2284;
$fn2287 $tmp2286 = ($fn2287) $tmp2283->$class->vtable[4];
$tmp2286($tmp2283, ((frost$core$Object*) $tmp2285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:509
org$frostlang$frostc$LinkedList** $tmp2288 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2289 = *$tmp2288;
$fn2291 $tmp2290 = ($fn2291) $tmp2289->$class->vtable[8];
$tmp2290($tmp2289);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:510
org$frostlang$frostc$LinkedList** $tmp2292 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2293 = *$tmp2292;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2294 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2295 = (frost$core$Int) {28u};
org$frostlang$frostc$Position $tmp2296 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position($tmp2294, $tmp2295, $tmp2296);
$fn2298 $tmp2297 = ($fn2298) $tmp2293->$class->vtable[4];
$tmp2297($tmp2293, ((frost$core$Object*) $tmp2294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
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
org$frostlang$frostc$IR** $tmp2299 = &param0->ir;
org$frostlang$frostc$IR* $tmp2300 = *$tmp2299;
frost$collections$Array** $tmp2301 = &$tmp2300->blocks;
frost$collections$Array* $tmp2302 = *$tmp2301;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:514:33
frost$core$Int $tmp2303 = (frost$core$Int) {0u};
int64_t $tmp2304 = param1.value;
int64_t $tmp2305 = $tmp2303.value;
bool $tmp2306 = $tmp2304 >= $tmp2305;
frost$core$Bit $tmp2307 = (frost$core$Bit) {$tmp2306};
bool $tmp2308 = $tmp2307.value;
if ($tmp2308) goto block4; else goto block3;
block4:;
ITable* $tmp2309 = ((frost$collections$CollectionView*) $tmp2302)->$class->itable;
while ($tmp2309->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2309 = $tmp2309->next;
}
$fn2311 $tmp2310 = $tmp2309->methods[0];
frost$core$Int $tmp2312 = $tmp2310(((frost$collections$CollectionView*) $tmp2302));
int64_t $tmp2313 = param1.value;
int64_t $tmp2314 = $tmp2312.value;
bool $tmp2315 = $tmp2313 < $tmp2314;
frost$core$Bit $tmp2316 = (frost$core$Bit) {$tmp2315};
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block2; else goto block3;
block3:;
frost$core$Int $tmp2318 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2319, $tmp2318, &$s2320);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2321 = &$tmp2302->data;
frost$core$Object** $tmp2322 = *$tmp2321;
frost$core$Int64 $tmp2323 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp2324 = $tmp2323.value;
frost$core$Object* $tmp2325 = $tmp2322[$tmp2324];
frost$core$Frost$ref$frost$core$Object$Q($tmp2325);
org$frostlang$frostc$IR$Block$ID* $tmp2326 = &((org$frostlang$frostc$IR$Block*) $tmp2325)->id;
org$frostlang$frostc$IR$Block$ID $tmp2327 = *$tmp2326;
*(&local0) = $tmp2327;
frost$core$Frost$unref$frost$core$Object$Q($tmp2325);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:515
org$frostlang$frostc$IR** $tmp2328 = &param0->ir;
org$frostlang$frostc$IR* $tmp2329 = *$tmp2328;
frost$collections$Array** $tmp2330 = &$tmp2329->blocks;
frost$collections$Array* $tmp2331 = *$tmp2330;
frost$core$Object* $tmp2332 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp2331, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2332);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:516
org$frostlang$frostc$IR** $tmp2333 = &param0->ir;
org$frostlang$frostc$IR* $tmp2334 = *$tmp2333;
frost$collections$Array** $tmp2335 = &$tmp2334->blocks;
frost$collections$Array* $tmp2336 = *$tmp2335;
ITable* $tmp2337 = ((frost$collections$Iterable*) $tmp2336)->$class->itable;
while ($tmp2337->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2337 = $tmp2337->next;
}
$fn2339 $tmp2338 = $tmp2337->methods[0];
frost$collections$Iterator* $tmp2340 = $tmp2338(((frost$collections$Iterable*) $tmp2336));
goto block5;
block5:;
ITable* $tmp2341 = $tmp2340->$class->itable;
while ($tmp2341->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2341 = $tmp2341->next;
}
$fn2343 $tmp2342 = $tmp2341->methods[0];
frost$core$Bit $tmp2344 = $tmp2342($tmp2340);
bool $tmp2345 = $tmp2344.value;
if ($tmp2345) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2346 = $tmp2340->$class->itable;
while ($tmp2346->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2346 = $tmp2346->next;
}
$fn2348 $tmp2347 = $tmp2346->methods[1];
frost$core$Object* $tmp2349 = $tmp2347($tmp2340);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2349)));
org$frostlang$frostc$IR$Block* $tmp2350 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2349);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:517
org$frostlang$frostc$IR$Block* $tmp2351 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2352 = &$tmp2351->statements;
org$frostlang$frostc$LinkedList* $tmp2353 = *$tmp2352;
ITable* $tmp2354 = ((frost$collections$CollectionView*) $tmp2353)->$class->itable;
while ($tmp2354->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2354 = $tmp2354->next;
}
$fn2356 $tmp2355 = $tmp2354->methods[0];
frost$core$Int $tmp2357 = $tmp2355(((frost$collections$CollectionView*) $tmp2353));
frost$core$Int $tmp2358 = (frost$core$Int) {1u};
int64_t $tmp2359 = $tmp2357.value;
int64_t $tmp2360 = $tmp2358.value;
int64_t $tmp2361 = $tmp2359 - $tmp2360;
frost$core$Int $tmp2362 = (frost$core$Int) {$tmp2361};
*(&local2) = $tmp2362;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:518
org$frostlang$frostc$IR$Block* $tmp2363 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2364 = &$tmp2363->statements;
org$frostlang$frostc$LinkedList* $tmp2365 = *$tmp2364;
$fn2367 $tmp2366 = ($fn2367) $tmp2365->$class->vtable[6];
frost$core$Object* $tmp2368 = $tmp2366($tmp2365);
frost$core$Int* $tmp2369 = &((org$frostlang$frostc$IR$Statement*) $tmp2368)->$rawValue;
frost$core$Int $tmp2370 = *$tmp2369;
frost$core$Int $tmp2371 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:519:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2372 = $tmp2370.value;
int64_t $tmp2373 = $tmp2371.value;
bool $tmp2374 = $tmp2372 == $tmp2373;
frost$core$Bit $tmp2375 = (frost$core$Bit) {$tmp2374};
bool $tmp2376 = $tmp2375.value;
if ($tmp2376) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2377 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2368)->$data + 0);
org$frostlang$frostc$Position $tmp2378 = *$tmp2377;
org$frostlang$frostc$IR$Block$ID* $tmp2379 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2368)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2380 = *$tmp2379;
*(&local3) = $tmp2380;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:520
org$frostlang$frostc$IR$Block$ID $tmp2381 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2382 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:520:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2383 = $tmp2381.value;
frost$core$Int $tmp2384 = $tmp2382.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2385 = $tmp2383.value;
int64_t $tmp2386 = $tmp2384.value;
bool $tmp2387 = $tmp2385 == $tmp2386;
frost$core$Bit $tmp2388 = (frost$core$Bit) {$tmp2387};
bool $tmp2389 = $tmp2388.value;
if ($tmp2389) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:521
org$frostlang$frostc$IR$Block* $tmp2390 = *(&local1);
$fn2392 $tmp2391 = ($fn2392) param0->$class->vtable[11];
$tmp2391(param0, $tmp2390);
goto block13;
block13:;
goto block8;
block10:;
frost$core$Int $tmp2393 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:524:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2394 = $tmp2370.value;
int64_t $tmp2395 = $tmp2393.value;
bool $tmp2396 = $tmp2394 == $tmp2395;
frost$core$Bit $tmp2397 = (frost$core$Bit) {$tmp2396};
bool $tmp2398 = $tmp2397.value;
if ($tmp2398) goto block16; else goto block8;
block16:;
org$frostlang$frostc$Position* $tmp2399 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2368)->$data + 0);
org$frostlang$frostc$Position $tmp2400 = *$tmp2399;
*(&local4) = $tmp2400;
org$frostlang$frostc$IR$Value** $tmp2401 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2368)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2402 = *$tmp2401;
org$frostlang$frostc$IR$Block$ID* $tmp2403 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2368)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2404 = *$tmp2403;
*(&local5) = $tmp2404;
org$frostlang$frostc$IR$Block$ID* $tmp2405 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2368)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2406 = *$tmp2405;
*(&local6) = $tmp2406;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:525
org$frostlang$frostc$IR$Block$ID $tmp2407 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2408;
$tmp2408 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2408->value = $tmp2407;
org$frostlang$frostc$IR$Block$ID $tmp2409 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2410;
$tmp2410 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2410->value = $tmp2409;
ITable* $tmp2411 = ((frost$core$Equatable*) $tmp2408)->$class->itable;
while ($tmp2411->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2411 = $tmp2411->next;
}
$fn2413 $tmp2412 = $tmp2411->methods[1];
frost$core$Bit $tmp2414 = $tmp2412(((frost$core$Equatable*) $tmp2408), ((frost$core$Equatable*) $tmp2410));
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block18; else goto block19;
block19:;
frost$core$Int $tmp2416 = (frost$core$Int) {525u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2417, $tmp2416);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2410)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2408)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:526
org$frostlang$frostc$IR$Block$ID $tmp2418 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp2419 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:526:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2420 = $tmp2418.value;
frost$core$Int $tmp2421 = $tmp2419.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2422 = $tmp2420.value;
int64_t $tmp2423 = $tmp2421.value;
bool $tmp2424 = $tmp2422 == $tmp2423;
frost$core$Bit $tmp2425 = (frost$core$Bit) {$tmp2424};
bool $tmp2426 = $tmp2425.value;
if ($tmp2426) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:528
frost$core$System$crash();
goto block21;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:530
org$frostlang$frostc$IR$Block$ID $tmp2427 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2428 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:530:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2429 = $tmp2427.value;
frost$core$Int $tmp2430 = $tmp2428.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2431 = $tmp2429.value;
int64_t $tmp2432 = $tmp2430.value;
bool $tmp2433 = $tmp2431 == $tmp2432;
frost$core$Bit $tmp2434 = (frost$core$Bit) {$tmp2433};
bool $tmp2435 = $tmp2434.value;
if ($tmp2435) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:532
frost$core$System$crash();
goto block26;
block26:;
goto block21;
block21:;
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2368);
frost$core$Frost$unref$frost$core$Object$Q($tmp2349);
org$frostlang$frostc$IR$Block* $tmp2436 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
return;

}
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp2437 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2438 = *$tmp2437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
org$frostlang$frostc$MethodDecl** $tmp2439 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2440 = *$tmp2439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
org$frostlang$frostc$IR** $tmp2441 = &param0->ir;
org$frostlang$frostc$IR* $tmp2442 = *$tmp2441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
frost$collections$HashMap** $tmp2443 = &param0->blocks;
frost$collections$HashMap* $tmp2444 = *$tmp2443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
frost$collections$HashMap** $tmp2445 = &param0->predecessors;
frost$collections$HashMap* $tmp2446 = *$tmp2445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
frost$collections$HashMap** $tmp2447 = &param0->entryStates;
frost$collections$HashMap* $tmp2448 = *$tmp2447;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
frost$collections$HashSet** $tmp2449 = &param0->worklist;
frost$collections$HashSet* $tmp2450 = *$tmp2449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
frost$collections$HashMap** $tmp2451 = &param0->statements;
frost$collections$HashMap* $tmp2452 = *$tmp2451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
return;

}

