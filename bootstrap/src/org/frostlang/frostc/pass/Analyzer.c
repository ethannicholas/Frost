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
#include "org/frostlang/frostc/pass/Analyzer/Definition.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/collections/HashKey.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Tuple2.h"
#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "org/frostlang/frostc/pass/Analyzer/State.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/ListView.h"
#include "frost/core/Weak.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/io/Console.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$class_type org$frostlang$frostc$pass$Analyzer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$cleanup, org$frostlang$frostc$pass$Analyzer$definitionFrom$org$frostlang$frostc$IR$Statement$ID$R$org$frostlang$frostc$pass$Analyzer$Definition, org$frostlang$frostc$pass$Analyzer$definitionFrom$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$pass$Analyzer$Definition, org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$propagate$org$frostlang$frostc$pass$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$pass$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int$org$frostlang$frostc$pass$Analyzer$State, org$frostlang$frostc$pass$Analyzer$binaryValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$org$frostlang$frostc$Type$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$computeExitState$org$frostlang$frostc$pass$Analyzer$BlockExit$R$org$frostlang$frostc$pass$Analyzer$State, org$frostlang$frostc$pass$Analyzer$process$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$pass$Analyzer$dump, org$frostlang$frostc$pass$Analyzer$analyze, org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block, org$frostlang$frostc$pass$Analyzer$removeBlock$frost$core$Int} };

typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn62)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn85)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn107)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn123)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn168)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn216)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn256)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn264)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn278)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn286)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn289)(frost$core$Object*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn300)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn306)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn328)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef frost$core$Bit (*$fn366)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn375)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn381)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn392)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$Type* (*$fn411)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn441)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn454)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn467)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn480)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn495)(frost$collections$ListView*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn498)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef frost$core$Bit (*$fn514)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn527)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn540)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn553)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn568)(frost$collections$ListView*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn571)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef frost$core$Bit (*$fn621)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn630)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn634)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn645)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef frost$core$Int (*$fn679)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn700)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn722)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn739)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn766)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn775)(frost$core$Object*);
typedef frost$core$String* (*$fn783)(frost$core$Object*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn805)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn810)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn826)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn839)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef frost$core$Tuple2* (*$fn849)(frost$core$Tuple2*);
typedef frost$collections$Array* (*$fn857)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn866)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn893)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn909)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn936)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn955)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn982)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1002)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1027)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn1069)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1078)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1084)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1095)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef frost$core$String* (*$fn1112)(frost$core$Object*);
typedef frost$core$Int (*$fn1174)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1225)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1271)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$String* (*$fn1291)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1335)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn1349)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1352)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1368)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1373)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1387)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1390)(org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn1406)(org$frostlang$frostc$LinkedList*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1427)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn1445)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1449)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1454)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1494)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1532)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1556)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1595)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1620)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1641)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1693)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1703)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1749)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1792)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1802)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1848)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1890)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1898)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1904)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1913)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1918)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1957)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn1972)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2054)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2080)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn2111)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef void (*$fn2117)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*, frost$core$Int, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn2137)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2161)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn2186)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn2197)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Object* (*$fn2221)(org$frostlang$frostc$LinkedList*);
typedef frost$core$String* (*$fn2224)(frost$core$Object*);
typedef frost$core$Int (*$fn2241)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2263)(frost$core$Object*);
typedef frost$core$Int (*$fn2282)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2298)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2329)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2333)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2338)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2346)(frost$core$Object*);
typedef frost$core$String* (*$fn2374)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2384)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn2392)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2398)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2407)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2411)(frost$core$Object*);
typedef frost$core$Object* (*$fn2417)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2420)(frost$core$Object*);
typedef frost$core$Int (*$fn2442)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2523)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2527)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2532)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2557)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2582)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2586)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2591)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2606)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn2614)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2620)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2631)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2637)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2657)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2681)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2693)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2697)(frost$collections$Iterator*);
typedef void (*$fn2707)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2716)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2720)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2725)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2742)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2764)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2777)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn2796)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Object* (*$fn2816)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2819)(org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn2829)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2835)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2838)(org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2843)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2849)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn2853)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2860)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Int (*$fn2873)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2901)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2905)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2910)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2918)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2929)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2954)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn2975)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72", 34, -7908766228797686597, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -6163429507827714296, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6d\x61\x79\x20\x62\x65\x20\x6e\x75\x6c\x6c", 13, -372519665545753491, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20", 6, 2389068132842847038, NULL };
static frost$core$String $s780 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64", 25, 6096059661963607284, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 162, 3341668575269265927, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s977 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x3a\x20", 23, 7177047828670113807, NULL };
static frost$core$String $s1117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x27", 19, 3303349432046188092, NULL };
static frost$core$String $s1296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3e", 181, -2207258401665130771, NULL };
static frost$core$String $s1321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74", 135, 3013130644956014564, NULL };
static frost$core$String $s1331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 136, 4083565817121878510, NULL };
static frost$core$String $s1362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 119, -3350841056831834457, NULL };
static frost$core$String $s1381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 119, -3350841056831834457, NULL };
static frost$core$String $s1441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e", 221, -3385342882351386224, NULL };
static frost$core$String $s1502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1564 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1729 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s1797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s1871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 119, -3350841056831834457, NULL };
static frost$core$String $s1882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1883 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s1980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s2005 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2006 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s2062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2088 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2089 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s2130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s2227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 4880269855066615229, NULL };
static frost$core$String $s2228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s2268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s2290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 119, -3350841056831834457, NULL };
static frost$core$String $s2377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s2378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s2512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 2495389199813969088, NULL };
static frost$core$String $s2821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s2881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2991 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s3002 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s3003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

void org$frostlang$frostc$pass$Analyzer$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$IR* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:274
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:276
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:278
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:280
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:282
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:284
frost$core$Bit $tmp22 = (frost$core$Bit) {false};
frost$core$Bit* $tmp23 = &param0->reportErrors;
*$tmp23 = $tmp22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:287
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp24 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
org$frostlang$frostc$Compiler** $tmp26 = &param0->compiler;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:288
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp27 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$MethodDecl** $tmp29 = &param0->m;
*$tmp29 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:289
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR** $tmp30 = &param0->ir;
org$frostlang$frostc$IR* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlang$frostc$IR** $tmp32 = &param0->ir;
*$tmp32 = param3;
return;

}
org$frostlang$frostc$pass$Analyzer$Definition* org$frostlang$frostc$pass$Analyzer$definitionFrom$org$frostlang$frostc$IR$Statement$ID$R$org$frostlang$frostc$pass$Analyzer$Definition(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Statement$ID param1) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$FieldDecl* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:293
frost$collections$HashMap** $tmp33 = &param0->statements;
frost$collections$HashMap* $tmp34 = *$tmp33;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp35->value = param1;
frost$core$Object* $tmp36 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp34, ((frost$collections$HashKey*) $tmp35));
frost$core$Bit $tmp37 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp36) != NULL};
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block1; else goto block2;
block2:;
frost$core$Int $tmp39 = (frost$core$Int) {293u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, $tmp39, &$s41);
abort(); // unreachable
block1:;
frost$core$Int* $tmp42 = &((org$frostlang$frostc$IR$Statement*) $tmp36)->$rawValue;
frost$core$Int $tmp43 = *$tmp42;
frost$core$Int $tmp44 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:294:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 == $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp50 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp51 = *$tmp50;
org$frostlang$frostc$IR$Value** $tmp52 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp53 = *$tmp52;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
org$frostlang$frostc$IR$Value* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local0) = $tmp53;
org$frostlang$frostc$FieldDecl** $tmp55 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp56 = *$tmp55;
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlang$frostc$FieldDecl* $tmp57 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local1) = $tmp56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:295
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp58 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp59 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Value* $tmp60 = *(&local0);
$fn62 $tmp61 = ($fn62) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp63 = $tmp61(param0, $tmp60);
org$frostlang$frostc$FieldDecl* $tmp64 = *(&local1);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$org$frostlang$frostc$pass$Analyzer$Definition$org$frostlang$frostc$FieldDecl($tmp58, $tmp59, $tmp63, $tmp64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
org$frostlang$frostc$FieldDecl* $tmp65 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp66 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp35)));
return $tmp58;
block5:;
frost$core$Int $tmp67 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:297:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp68 = $tmp43.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 == $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp73 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp74 = *$tmp73;
org$frostlang$frostc$IR$Value** $tmp75 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp76 = *$tmp75;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
org$frostlang$frostc$IR$Value* $tmp77 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local2) = $tmp76;
org$frostlang$frostc$FieldDecl** $tmp78 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp79 = *$tmp78;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$FieldDecl* $tmp80 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local3) = $tmp79;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:298
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp81 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp82 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Value* $tmp83 = *(&local2);
$fn85 $tmp84 = ($fn85) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp86 = $tmp84(param0, $tmp83);
org$frostlang$frostc$FieldDecl* $tmp87 = *(&local3);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$org$frostlang$frostc$pass$Analyzer$Definition$org$frostlang$frostc$FieldDecl($tmp81, $tmp82, $tmp86, $tmp87);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
org$frostlang$frostc$FieldDecl* $tmp88 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp89 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp35)));
return $tmp81;
block8:;
frost$core$Int $tmp90 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:300:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp91 = $tmp43.value;
int64_t $tmp92 = $tmp90.value;
bool $tmp93 = $tmp91 == $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp96 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp97 = *$tmp96;
org$frostlang$frostc$IR$Value** $tmp98 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp99 = *$tmp98;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$IR$Value* $tmp100 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local4) = $tmp99;
org$frostlang$frostc$Type** $tmp101 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$Type* $tmp102 = *$tmp101;
frost$core$Bit* $tmp103 = (frost$core$Bit*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
frost$core$Bit $tmp104 = *$tmp103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:301
org$frostlang$frostc$IR$Value* $tmp105 = *(&local4);
$fn107 $tmp106 = ($fn107) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp108 = $tmp106(param0, $tmp105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
org$frostlang$frostc$IR$Value* $tmp109 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp35)));
return $tmp108;
block11:;
frost$core$Int $tmp110 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:303:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp111 = $tmp43.value;
int64_t $tmp112 = $tmp110.value;
bool $tmp113 = $tmp111 == $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp116 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp117 = *$tmp116;
org$frostlang$frostc$IR$Value** $tmp118 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp119 = *$tmp118;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$IR$Value* $tmp120 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local5) = $tmp119;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:304
org$frostlang$frostc$IR$Value* $tmp121 = *(&local5);
$fn123 $tmp122 = ($fn123) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp124 = $tmp122(param0, $tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
org$frostlang$frostc$IR$Value* $tmp125 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp35)));
return $tmp124;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:307
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp126 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp127 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp126, $tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp35)));
return $tmp126;
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp35)));
goto block16;
block16:;

}
org$frostlang$frostc$pass$Analyzer$Definition* org$frostlang$frostc$pass$Analyzer$definitionFrom$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$pass$Analyzer$Definition(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Int local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Statement$ID local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:313
frost$core$Int* $tmp128 = &param1->$rawValue;
frost$core$Int $tmp129 = *$tmp128;
frost$core$Int $tmp130 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:314:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 == $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp136 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp137 = *$tmp136;
*(&local0) = $tmp137;
org$frostlang$frostc$Type** $tmp138 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp139 = *$tmp138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:315
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp140 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp141 = (frost$core$Int) {2u};
frost$core$Int $tmp142 = *(&local0);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int($tmp140, $tmp141, $tmp142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
return $tmp140;
block3:;
frost$core$Int $tmp143 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:317:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp144 = $tmp129.value;
int64_t $tmp145 = $tmp143.value;
bool $tmp146 = $tmp144 == $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block5; else goto block6;
block5:;
frost$core$Int* $tmp149 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp150 = *$tmp149;
*(&local1) = $tmp150;
org$frostlang$frostc$Type** $tmp151 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp152 = *$tmp151;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:318
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp153 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp154 = (frost$core$Int) {3u};
frost$core$Int $tmp155 = *(&local1);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int($tmp153, $tmp154, $tmp155);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
return $tmp153;
block6:;
frost$core$Int $tmp156 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:320:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp157 = $tmp129.value;
int64_t $tmp158 = $tmp156.value;
bool $tmp159 = $tmp157 == $tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Statement$ID* $tmp162 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp163 = *$tmp162;
*(&local2) = $tmp163;
org$frostlang$frostc$Type** $tmp164 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp165 = *$tmp164;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:321
org$frostlang$frostc$IR$Statement$ID $tmp166 = *(&local2);
$fn168 $tmp167 = ($fn168) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp169 = $tmp167(param0, $tmp166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
return $tmp169;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:324
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp170 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp171 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp170, $tmp171);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
return $tmp170;
block1:;
goto block11;
block11:;

}
frost$core$Tuple2* org$frostlang$frostc$pass$Analyzer$$anonymous1$$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$R$$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP(frost$core$Tuple2* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:393
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp172 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
frost$core$Object** $tmp173 = &param0->f0;
frost$core$Object* $tmp174 = *$tmp173;
frost$core$Object** $tmp175 = &param0->f1;
frost$core$Object* $tmp176 = *$tmp175;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:393:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp177 = ((frost$core$Bit$wrapper*) $tmp176)->value.value;
bool $tmp178 = !$tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
frost$core$Bit$wrapper* $tmp180;
$tmp180 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp180->value = $tmp179;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp172, ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$Definition*) $tmp174)), ((frost$core$Object*) $tmp180));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
return $tmp172;

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
org$frostlang$frostc$IR$Value* local39 = NULL;
org$frostlang$frostc$FieldDecl* local40 = NULL;
org$frostlang$frostc$Position local41;
org$frostlang$frostc$IR$Value* local42 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local43 = NULL;
frost$core$Bit local44;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local47 = NULL;
org$frostlang$frostc$Type* local48 = NULL;
org$frostlang$frostc$IR$Value* local49 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local50 = NULL;
org$frostlang$frostc$IR$Value* local51 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local52 = NULL;
org$frostlang$frostc$IR$Value* local53 = NULL;
org$frostlang$frostc$IR$Value* local54 = NULL;
org$frostlang$frostc$MethodDecl* local55 = NULL;
org$frostlang$frostc$FixedArray* local56 = NULL;
frost$core$Bit local57;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:330
frost$collections$HashMap** $tmp181 = &param0->statements;
frost$collections$HashMap* $tmp182 = *$tmp181;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp183;
$tmp183 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp183->value = param1;
frost$core$Object* $tmp184 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp182, ((frost$collections$HashKey*) $tmp183));
frost$core$Bit $tmp185 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp184) != NULL};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block1; else goto block2;
block2:;
frost$core$Int $tmp187 = (frost$core$Int) {330u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s188, $tmp187, &$s189);
abort(); // unreachable
block1:;
frost$core$Int* $tmp190 = &((org$frostlang$frostc$IR$Statement*) $tmp184)->$rawValue;
frost$core$Int $tmp191 = *$tmp190;
frost$core$Int $tmp192 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:331:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp193 = $tmp191.value;
int64_t $tmp194 = $tmp192.value;
bool $tmp195 = $tmp193 == $tmp194;
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195};
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp198 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp199 = *$tmp198;
org$frostlang$frostc$IR$Value** $tmp200 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp201 = *$tmp200;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
org$frostlang$frostc$IR$Value* $tmp202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local0) = $tmp201;
org$frostlang$frostc$expression$Binary$Operator* $tmp203 = (org$frostlang$frostc$expression$Binary$Operator*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp204 = *$tmp203;
*(&local1) = $tmp204;
org$frostlang$frostc$IR$Value** $tmp205 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp206 = *$tmp205;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
org$frostlang$frostc$IR$Value* $tmp207 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local2) = $tmp206;
org$frostlang$frostc$Type** $tmp208 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 48);
org$frostlang$frostc$Type* $tmp209 = *$tmp208;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
org$frostlang$frostc$Type* $tmp210 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local3) = $tmp209;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:332
org$frostlang$frostc$IR$Value* $tmp211 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator $tmp212 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp213 = *(&local2);
org$frostlang$frostc$Type* $tmp214 = *(&local3);
$fn216 $tmp215 = ($fn216) param0->$class->vtable[8];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp217 = $tmp215(param0, $tmp211, $tmp212, $tmp213, param2, $tmp214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
org$frostlang$frostc$Type* $tmp218 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp219 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp217;
block5:;
frost$core$Int $tmp221 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:334:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp222 = $tmp191.value;
int64_t $tmp223 = $tmp221.value;
bool $tmp224 = $tmp222 == $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp227 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp228 = *$tmp227;
*(&local4) = $tmp228;
org$frostlang$frostc$IR$Value** $tmp229 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp230 = *$tmp229;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
org$frostlang$frostc$IR$Value* $tmp231 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local5) = $tmp230;
org$frostlang$frostc$Type** $tmp232 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$Type* $tmp233 = *$tmp232;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
org$frostlang$frostc$Type* $tmp234 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local6) = $tmp233;
frost$core$Bit* $tmp235 = (frost$core$Bit*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 40);
frost$core$Bit $tmp236 = *$tmp235;
*(&local7) = $tmp236;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:335
frost$core$Bit $tmp237 = *(&local7);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:335:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp238 = $tmp237.value;
bool $tmp239 = !$tmp238;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block14; else goto block11;
block14:;
frost$core$Bit* $tmp242 = &param0->reportErrors;
frost$core$Bit $tmp243 = *$tmp242;
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block13; else goto block11;
block13:;
org$frostlang$frostc$Type* $tmp245 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:335:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp246 = &$tmp245->typeKind;
org$frostlang$frostc$Type$Kind $tmp247 = *$tmp246;
org$frostlang$frostc$Type$Kind$wrapper* $tmp248;
$tmp248 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp248->value = $tmp247;
frost$core$Int $tmp249 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp250 = &(&local9)->$rawValue;
*$tmp250 = $tmp249;
org$frostlang$frostc$Type$Kind $tmp251 = *(&local9);
*(&local8) = $tmp251;
org$frostlang$frostc$Type$Kind $tmp252 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp253;
$tmp253 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp253->value = $tmp252;
ITable* $tmp254 = ((frost$core$Equatable*) $tmp248)->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
frost$core$Bit $tmp257 = $tmp255(((frost$core$Equatable*) $tmp248), ((frost$core$Equatable*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp253)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp248)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:335:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp258 = $tmp257.value;
bool $tmp259 = !$tmp258;
frost$core$Bit $tmp260 = (frost$core$Bit) {$tmp259};
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block12; else goto block11;
block12:;
org$frostlang$frostc$IR$Value* $tmp262 = *(&local5);
$fn264 $tmp263 = ($fn264) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp265 = $tmp263(param0, $tmp262, param2);
org$frostlang$frostc$Type** $tmp266 = &$tmp265->type;
org$frostlang$frostc$Type* $tmp267 = *$tmp266;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:336:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp268 = &$tmp267->typeKind;
org$frostlang$frostc$Type$Kind $tmp269 = *$tmp268;
org$frostlang$frostc$Type$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp270->value = $tmp269;
frost$core$Int $tmp271 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp272 = &(&local11)->$rawValue;
*$tmp272 = $tmp271;
org$frostlang$frostc$Type$Kind $tmp273 = *(&local11);
*(&local10) = $tmp273;
org$frostlang$frostc$Type$Kind $tmp274 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp275;
$tmp275 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp275->value = $tmp274;
ITable* $tmp276 = ((frost$core$Equatable*) $tmp270)->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
frost$core$Bit $tmp279 = $tmp277(((frost$core$Equatable*) $tmp270), ((frost$core$Equatable*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp275)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp270)));
bool $tmp280 = $tmp279.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
if ($tmp280) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:337
org$frostlang$frostc$Compiler** $tmp281 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp282 = *$tmp281;
org$frostlang$frostc$Position $tmp283 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp284 = *(&local5);
$fn286 $tmp285 = ($fn286) $tmp284->$class->vtable[2];
org$frostlang$frostc$Type* $tmp287 = $tmp285($tmp284);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:337:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn289 $tmp288 = ($fn289) ((frost$core$Object*) $tmp287)->$class->vtable[0];
frost$core$String* $tmp290 = $tmp288(((frost$core$Object*) $tmp287));
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s292, $tmp290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$String* $tmp293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp291, &$s294);
org$frostlang$frostc$Compiler$warn$org$frostlang$frostc$Position$frost$core$String($tmp282, $tmp283, $tmp293);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:339
frost$core$Bit $tmp295 = *(&local7);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:340
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp297 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp298 = *(&local6);
$fn300 $tmp299 = ($fn300) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp301 = $tmp299(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp297, $tmp298, $tmp301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
org$frostlang$frostc$Type* $tmp302 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp303 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp297;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:343
org$frostlang$frostc$IR$Value* $tmp304 = *(&local5);
$fn306 $tmp305 = ($fn306) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp307 = $tmp305(param0, $tmp304, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
org$frostlang$frostc$Type* $tmp308 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp309 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp307;
block23:;
org$frostlang$frostc$Type* $tmp310 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp311 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block8:;
frost$core$Int $tmp312 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:346:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp313 = $tmp191.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 == $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp318 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp319 = *$tmp318;
org$frostlang$frostc$ClassDecl** $tmp320 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp321 = *$tmp320;
*(&local12) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
org$frostlang$frostc$ClassDecl* $tmp322 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local12) = $tmp321;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:347
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp323 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp324 = *(&local12);
org$frostlang$frostc$Type** $tmp325 = &$tmp324->type;
org$frostlang$frostc$Type* $tmp326 = *$tmp325;
$fn328 $tmp327 = ($fn328) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp329 = $tmp327(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp323, $tmp326, $tmp329);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
org$frostlang$frostc$ClassDecl* $tmp330 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local12) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp323;
block26:;
frost$core$Int $tmp331 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:349:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp332 = $tmp191.value;
int64_t $tmp333 = $tmp331.value;
bool $tmp334 = $tmp332 == $tmp333;
frost$core$Bit $tmp335 = (frost$core$Bit) {$tmp334};
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp337 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp338 = *$tmp337;
org$frostlang$frostc$ClassDecl** $tmp339 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp340 = *$tmp339;
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
org$frostlang$frostc$ClassDecl* $tmp341 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local13) = $tmp340;
org$frostlang$frostc$FixedArray** $tmp342 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp343 = *$tmp342;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
org$frostlang$frostc$FixedArray* $tmp344 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local14) = $tmp343;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:350
org$frostlang$frostc$ClassDecl* $tmp345 = *(&local13);
org$frostlang$frostc$Type** $tmp346 = &$tmp345->type;
org$frostlang$frostc$Type* $tmp347 = *$tmp346;
org$frostlang$frostc$Compiler** $tmp348 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp349 = *$tmp348;
org$frostlang$frostc$Type** $tmp350 = &$tmp349->BIT_TYPE;
org$frostlang$frostc$Type* $tmp351 = *$tmp350;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:350:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp352 = &((org$frostlang$frostc$Symbol*) $tmp347)->name;
frost$core$String* $tmp353 = *$tmp352;
frost$core$String** $tmp354 = &((org$frostlang$frostc$Symbol*) $tmp351)->name;
frost$core$String* $tmp355 = *$tmp354;
frost$core$Bit $tmp356 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp353, $tmp355);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Type$Kind* $tmp358 = &$tmp347->typeKind;
org$frostlang$frostc$Type$Kind $tmp359 = *$tmp358;
org$frostlang$frostc$Type$Kind$wrapper* $tmp360;
$tmp360 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp360->value = $tmp359;
org$frostlang$frostc$Type$Kind* $tmp361 = &$tmp351->typeKind;
org$frostlang$frostc$Type$Kind $tmp362 = *$tmp361;
org$frostlang$frostc$Type$Kind$wrapper* $tmp363;
$tmp363 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp363->value = $tmp362;
ITable* $tmp364 = ((frost$core$Equatable*) $tmp360)->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp364 = $tmp364->next;
}
$fn366 $tmp365 = $tmp364->methods[0];
frost$core$Bit $tmp367 = $tmp365(((frost$core$Equatable*) $tmp360), ((frost$core$Equatable*) $tmp363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp363)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp360)));
*(&local15) = $tmp367;
goto block36;
block35:;
*(&local15) = $tmp356;
goto block36;
block36:;
frost$core$Bit $tmp368 = *(&local15);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:351
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp370 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp371 = *(&local13);
org$frostlang$frostc$Type** $tmp372 = &$tmp371->type;
org$frostlang$frostc$Type* $tmp373 = *$tmp372;
$fn375 $tmp374 = ($fn375) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp376 = $tmp374(param0, param1);
org$frostlang$frostc$FixedArray* $tmp377 = *(&local14);
frost$core$Int $tmp378 = (frost$core$Int) {0u};
frost$core$Object* $tmp379 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp377, $tmp378);
$fn381 $tmp380 = ($fn381) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp382 = $tmp380(param0, ((org$frostlang$frostc$IR$Value*) $tmp379), param2);
frost$collections$ListView** $tmp383 = &$tmp382->nonNullImplications;
frost$collections$ListView* $tmp384 = *$tmp383;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp370, $tmp373, $tmp376, $tmp384);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q($tmp379);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
org$frostlang$frostc$FixedArray* $tmp385 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp386 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp370;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:354
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp387 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp388 = *(&local13);
org$frostlang$frostc$Type** $tmp389 = &$tmp388->type;
org$frostlang$frostc$Type* $tmp390 = *$tmp389;
$fn392 $tmp391 = ($fn392) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp393 = $tmp391(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp387, $tmp390, $tmp393);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
org$frostlang$frostc$FixedArray* $tmp394 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp395 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp387;
block29:;
frost$core$Int $tmp396 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:356:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp397 = $tmp191.value;
int64_t $tmp398 = $tmp396.value;
bool $tmp399 = $tmp397 == $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp402 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp403 = *$tmp402;
org$frostlang$frostc$IR$Value** $tmp404 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp405 = *$tmp404;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
org$frostlang$frostc$IR$Value* $tmp406 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local16) = $tmp405;
org$frostlang$frostc$FixedArray** $tmp407 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp408 = *$tmp407;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:357
org$frostlang$frostc$IR$Value* $tmp409 = *(&local16);
$fn411 $tmp410 = ($fn411) $tmp409->$class->vtable[2];
org$frostlang$frostc$Type* $tmp412 = $tmp410($tmp409);
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
org$frostlang$frostc$Type* $tmp413 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local17) = $tmp412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:358
org$frostlang$frostc$Type* $tmp414 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:358:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp415 = &((org$frostlang$frostc$Symbol*) $tmp414)->name;
frost$core$String* $tmp416 = *$tmp415;
frost$core$Bit $tmp417 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp416, &$s418);
bool $tmp419 = $tmp417.value;
if ($tmp419) goto block40; else goto block42;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:359
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp420 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp421 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:359:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp422 = &$tmp421->_subtypes;
org$frostlang$frostc$FixedArray* $tmp423 = *$tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423 != NULL};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block45; else goto block46;
block46:;
frost$core$Int $tmp426 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s427, $tmp426, &$s428);
abort(); // unreachable
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Int $tmp429 = (frost$core$Int) {1u};
frost$core$Object* $tmp430 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp423, $tmp429);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:359:58
org$frostlang$frostc$Type$Kind* $tmp431 = &((org$frostlang$frostc$Type*) $tmp430)->typeKind;
org$frostlang$frostc$Type$Kind $tmp432 = *$tmp431;
org$frostlang$frostc$Type$Kind$wrapper* $tmp433;
$tmp433 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp433->value = $tmp432;
frost$core$Int $tmp434 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp435 = &(&local19)->$rawValue;
*$tmp435 = $tmp434;
org$frostlang$frostc$Type$Kind $tmp436 = *(&local19);
*(&local18) = $tmp436;
org$frostlang$frostc$Type$Kind $tmp437 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp438;
$tmp438 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp438->value = $tmp437;
ITable* $tmp439 = ((frost$core$Equatable*) $tmp433)->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp439 = $tmp439->next;
}
$fn441 $tmp440 = $tmp439->methods[0];
frost$core$Bit $tmp442 = $tmp440(((frost$core$Equatable*) $tmp433), ((frost$core$Equatable*) $tmp438));
bool $tmp443 = $tmp442.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp438)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp433)));
if ($tmp443) goto block48; else goto block52;
block52:;
org$frostlang$frostc$Type$Kind* $tmp444 = &((org$frostlang$frostc$Type*) $tmp430)->typeKind;
org$frostlang$frostc$Type$Kind $tmp445 = *$tmp444;
org$frostlang$frostc$Type$Kind$wrapper* $tmp446;
$tmp446 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp446->value = $tmp445;
frost$core$Int $tmp447 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp448 = &(&local21)->$rawValue;
*$tmp448 = $tmp447;
org$frostlang$frostc$Type$Kind $tmp449 = *(&local21);
*(&local20) = $tmp449;
org$frostlang$frostc$Type$Kind $tmp450 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp451;
$tmp451 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp451->value = $tmp450;
ITable* $tmp452 = ((frost$core$Equatable*) $tmp446)->$class->itable;
while ($tmp452->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[0];
frost$core$Bit $tmp455 = $tmp453(((frost$core$Equatable*) $tmp446), ((frost$core$Equatable*) $tmp451));
bool $tmp456 = $tmp455.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp451)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp446)));
if ($tmp456) goto block48; else goto block51;
block51:;
org$frostlang$frostc$Type$Kind* $tmp457 = &((org$frostlang$frostc$Type*) $tmp430)->typeKind;
org$frostlang$frostc$Type$Kind $tmp458 = *$tmp457;
org$frostlang$frostc$Type$Kind$wrapper* $tmp459;
$tmp459 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp459->value = $tmp458;
frost$core$Int $tmp460 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp461 = &(&local23)->$rawValue;
*$tmp461 = $tmp460;
org$frostlang$frostc$Type$Kind $tmp462 = *(&local23);
*(&local22) = $tmp462;
org$frostlang$frostc$Type$Kind $tmp463 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp464;
$tmp464 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp464->value = $tmp463;
ITable* $tmp465 = ((frost$core$Equatable*) $tmp459)->$class->itable;
while ($tmp465->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp465 = $tmp465->next;
}
$fn467 $tmp466 = $tmp465->methods[0];
frost$core$Bit $tmp468 = $tmp466(((frost$core$Equatable*) $tmp459), ((frost$core$Equatable*) $tmp464));
bool $tmp469 = $tmp468.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp464)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp459)));
if ($tmp469) goto block48; else goto block50;
block50:;
org$frostlang$frostc$Type$Kind* $tmp470 = &((org$frostlang$frostc$Type*) $tmp430)->typeKind;
org$frostlang$frostc$Type$Kind $tmp471 = *$tmp470;
org$frostlang$frostc$Type$Kind$wrapper* $tmp472;
$tmp472 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp472->value = $tmp471;
frost$core$Int $tmp473 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp474 = &(&local25)->$rawValue;
*$tmp474 = $tmp473;
org$frostlang$frostc$Type$Kind $tmp475 = *(&local25);
*(&local24) = $tmp475;
org$frostlang$frostc$Type$Kind $tmp476 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp477;
$tmp477 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp477->value = $tmp476;
ITable* $tmp478 = ((frost$core$Equatable*) $tmp472)->$class->itable;
while ($tmp478->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp478 = $tmp478->next;
}
$fn480 $tmp479 = $tmp478->methods[0];
frost$core$Bit $tmp481 = $tmp479(((frost$core$Equatable*) $tmp472), ((frost$core$Equatable*) $tmp477));
bool $tmp482 = $tmp481.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp477)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp472)));
if ($tmp482) goto block48; else goto block49;
block49:;
frost$core$Int $tmp483 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s484, $tmp483, &$s485);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp486 = &((org$frostlang$frostc$Type*) $tmp430)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp487 = *$tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487 != NULL};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block58; else goto block59;
block59:;
frost$core$Int $tmp490 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s491, $tmp490, &$s492);
abort(); // unreachable
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
ITable* $tmp493 = ((frost$collections$ListView*) $tmp487)->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[5];
frost$core$Object* $tmp496 = $tmp494(((frost$collections$ListView*) $tmp487));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp496)));
frost$core$Frost$unref$frost$core$Object$Q($tmp496);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
$fn498 $tmp497 = ($fn498) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp499 = $tmp497(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp420, ((org$frostlang$frostc$Type*) $tmp496), $tmp499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp496)));
frost$core$Frost$unref$frost$core$Object$Q($tmp430);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
org$frostlang$frostc$Type* $tmp500 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp501 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp420;
block42:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:362
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp502 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp503 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:362:46
org$frostlang$frostc$Type$Kind* $tmp504 = &$tmp503->typeKind;
org$frostlang$frostc$Type$Kind $tmp505 = *$tmp504;
org$frostlang$frostc$Type$Kind$wrapper* $tmp506;
$tmp506 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp506->value = $tmp505;
frost$core$Int $tmp507 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp508 = &(&local27)->$rawValue;
*$tmp508 = $tmp507;
org$frostlang$frostc$Type$Kind $tmp509 = *(&local27);
*(&local26) = $tmp509;
org$frostlang$frostc$Type$Kind $tmp510 = *(&local26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp511;
$tmp511 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp511->value = $tmp510;
ITable* $tmp512 = ((frost$core$Equatable*) $tmp506)->$class->itable;
while ($tmp512->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp512 = $tmp512->next;
}
$fn514 $tmp513 = $tmp512->methods[0];
frost$core$Bit $tmp515 = $tmp513(((frost$core$Equatable*) $tmp506), ((frost$core$Equatable*) $tmp511));
bool $tmp516 = $tmp515.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp511)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp506)));
if ($tmp516) goto block61; else goto block65;
block65:;
org$frostlang$frostc$Type$Kind* $tmp517 = &$tmp503->typeKind;
org$frostlang$frostc$Type$Kind $tmp518 = *$tmp517;
org$frostlang$frostc$Type$Kind$wrapper* $tmp519;
$tmp519 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp519->value = $tmp518;
frost$core$Int $tmp520 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp521 = &(&local29)->$rawValue;
*$tmp521 = $tmp520;
org$frostlang$frostc$Type$Kind $tmp522 = *(&local29);
*(&local28) = $tmp522;
org$frostlang$frostc$Type$Kind $tmp523 = *(&local28);
org$frostlang$frostc$Type$Kind$wrapper* $tmp524;
$tmp524 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp524->value = $tmp523;
ITable* $tmp525 = ((frost$core$Equatable*) $tmp519)->$class->itable;
while ($tmp525->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp525 = $tmp525->next;
}
$fn527 $tmp526 = $tmp525->methods[0];
frost$core$Bit $tmp528 = $tmp526(((frost$core$Equatable*) $tmp519), ((frost$core$Equatable*) $tmp524));
bool $tmp529 = $tmp528.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp524)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp519)));
if ($tmp529) goto block61; else goto block64;
block64:;
org$frostlang$frostc$Type$Kind* $tmp530 = &$tmp503->typeKind;
org$frostlang$frostc$Type$Kind $tmp531 = *$tmp530;
org$frostlang$frostc$Type$Kind$wrapper* $tmp532;
$tmp532 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp532->value = $tmp531;
frost$core$Int $tmp533 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp534 = &(&local31)->$rawValue;
*$tmp534 = $tmp533;
org$frostlang$frostc$Type$Kind $tmp535 = *(&local31);
*(&local30) = $tmp535;
org$frostlang$frostc$Type$Kind $tmp536 = *(&local30);
org$frostlang$frostc$Type$Kind$wrapper* $tmp537;
$tmp537 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp537->value = $tmp536;
ITable* $tmp538 = ((frost$core$Equatable*) $tmp532)->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp538 = $tmp538->next;
}
$fn540 $tmp539 = $tmp538->methods[0];
frost$core$Bit $tmp541 = $tmp539(((frost$core$Equatable*) $tmp532), ((frost$core$Equatable*) $tmp537));
bool $tmp542 = $tmp541.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp537)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp532)));
if ($tmp542) goto block61; else goto block63;
block63:;
org$frostlang$frostc$Type$Kind* $tmp543 = &$tmp503->typeKind;
org$frostlang$frostc$Type$Kind $tmp544 = *$tmp543;
org$frostlang$frostc$Type$Kind$wrapper* $tmp545;
$tmp545 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp545->value = $tmp544;
frost$core$Int $tmp546 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp547 = &(&local33)->$rawValue;
*$tmp547 = $tmp546;
org$frostlang$frostc$Type$Kind $tmp548 = *(&local33);
*(&local32) = $tmp548;
org$frostlang$frostc$Type$Kind $tmp549 = *(&local32);
org$frostlang$frostc$Type$Kind$wrapper* $tmp550;
$tmp550 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp550->value = $tmp549;
ITable* $tmp551 = ((frost$core$Equatable*) $tmp545)->$class->itable;
while ($tmp551->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp551 = $tmp551->next;
}
$fn553 $tmp552 = $tmp551->methods[0];
frost$core$Bit $tmp554 = $tmp552(((frost$core$Equatable*) $tmp545), ((frost$core$Equatable*) $tmp550));
bool $tmp555 = $tmp554.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp550)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp545)));
if ($tmp555) goto block61; else goto block62;
block62:;
frost$core$Int $tmp556 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s557, $tmp556, &$s558);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp559 = &$tmp503->_subtypes;
org$frostlang$frostc$FixedArray* $tmp560 = *$tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560 != NULL};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block71; else goto block72;
block72:;
frost$core$Int $tmp563 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s564, $tmp563, &$s565);
abort(); // unreachable
block71:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
ITable* $tmp566 = ((frost$collections$ListView*) $tmp560)->$class->itable;
while ($tmp566->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp566 = $tmp566->next;
}
$fn568 $tmp567 = $tmp566->methods[5];
frost$core$Object* $tmp569 = $tmp567(((frost$collections$ListView*) $tmp560));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp569)));
frost$core$Frost$unref$frost$core$Object$Q($tmp569);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
$fn571 $tmp570 = ($fn571) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp572 = $tmp570(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp502, ((org$frostlang$frostc$Type*) $tmp569), $tmp572);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp569)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
org$frostlang$frostc$Type* $tmp573 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp574 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp502;
block41:;
org$frostlang$frostc$Type* $tmp575 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp576 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block38:;
frost$core$Int $tmp577 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:365:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp578 = $tmp191.value;
int64_t $tmp579 = $tmp577.value;
bool $tmp580 = $tmp578 == $tmp579;
frost$core$Bit $tmp581 = (frost$core$Bit) {$tmp580};
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp583 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp584 = *$tmp583;
org$frostlang$frostc$IR$Value** $tmp585 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp586 = *$tmp585;
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
org$frostlang$frostc$IR$Value* $tmp587 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local34) = $tmp586;
org$frostlang$frostc$FieldDecl** $tmp588 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp589 = *$tmp588;
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
org$frostlang$frostc$FieldDecl* $tmp590 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local35) = $tmp589;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:366
org$frostlang$frostc$FieldDecl* $tmp591 = *(&local35);
frost$core$Weak** $tmp592 = &$tmp591->owner;
frost$core$Weak* $tmp593 = *$tmp592;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:366:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp594 = &$tmp593->_valid;
frost$core$Bit $tmp595 = *$tmp594;
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block80; else goto block81;
block81:;
frost$core$Int $tmp597 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s598, $tmp597);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp599 = &$tmp593->value;
frost$core$Object* $tmp600 = *$tmp599;
frost$core$Frost$ref$frost$core$Object$Q($tmp600);
org$frostlang$frostc$Type** $tmp601 = &((org$frostlang$frostc$ClassDecl*) $tmp600)->type;
org$frostlang$frostc$Type* $tmp602 = *$tmp601;
org$frostlang$frostc$Compiler** $tmp603 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp604 = *$tmp603;
org$frostlang$frostc$Type** $tmp605 = &$tmp604->BIT_TYPE;
org$frostlang$frostc$Type* $tmp606 = *$tmp605;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:366:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp607 = &((org$frostlang$frostc$Symbol*) $tmp602)->name;
frost$core$String* $tmp608 = *$tmp607;
frost$core$String** $tmp609 = &((org$frostlang$frostc$Symbol*) $tmp606)->name;
frost$core$String* $tmp610 = *$tmp609;
frost$core$Bit $tmp611 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp608, $tmp610);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Type$Kind* $tmp613 = &$tmp602->typeKind;
org$frostlang$frostc$Type$Kind $tmp614 = *$tmp613;
org$frostlang$frostc$Type$Kind$wrapper* $tmp615;
$tmp615 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp615->value = $tmp614;
org$frostlang$frostc$Type$Kind* $tmp616 = &$tmp606->typeKind;
org$frostlang$frostc$Type$Kind $tmp617 = *$tmp616;
org$frostlang$frostc$Type$Kind$wrapper* $tmp618;
$tmp618 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp618->value = $tmp617;
ITable* $tmp619 = ((frost$core$Equatable*) $tmp615)->$class->itable;
while ($tmp619->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp619 = $tmp619->next;
}
$fn621 $tmp620 = $tmp619->methods[0];
frost$core$Bit $tmp622 = $tmp620(((frost$core$Equatable*) $tmp615), ((frost$core$Equatable*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp618)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp615)));
*(&local36) = $tmp622;
goto block85;
block84:;
*(&local36) = $tmp611;
goto block85;
block85:;
frost$core$Bit $tmp623 = *(&local36);
bool $tmp624 = $tmp623.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp600);
if ($tmp624) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:367
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp625 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp626 = *(&local35);
org$frostlang$frostc$Type** $tmp627 = &$tmp626->type;
org$frostlang$frostc$Type* $tmp628 = *$tmp627;
$fn630 $tmp629 = ($fn630) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp631 = $tmp629(param0, param1);
org$frostlang$frostc$IR$Value* $tmp632 = *(&local34);
$fn634 $tmp633 = ($fn634) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp635 = $tmp633(param0, $tmp632, param2);
frost$collections$ListView** $tmp636 = &$tmp635->nonNullImplications;
frost$collections$ListView* $tmp637 = *$tmp636;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp625, $tmp628, $tmp631, $tmp637);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
org$frostlang$frostc$FieldDecl* $tmp638 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp639 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp625;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:370
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp640 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp641 = *(&local35);
org$frostlang$frostc$Type** $tmp642 = &$tmp641->type;
org$frostlang$frostc$Type* $tmp643 = *$tmp642;
$fn645 $tmp644 = ($fn645) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp646 = $tmp644(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp640, $tmp643, $tmp646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
org$frostlang$frostc$FieldDecl* $tmp647 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp648 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp640;
block74:;
frost$core$Int $tmp649 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:372:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp650 = $tmp191.value;
int64_t $tmp651 = $tmp649.value;
bool $tmp652 = $tmp650 == $tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp655 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp656 = *$tmp655;
org$frostlang$frostc$IR$Value** $tmp657 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp658 = *$tmp657;
org$frostlang$frostc$ChoiceCase** $tmp659 = (org$frostlang$frostc$ChoiceCase**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp660 = *$tmp659;
*(&local37) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
org$frostlang$frostc$ChoiceCase* $tmp661 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local37) = $tmp660;
frost$core$Int* $tmp662 = (frost$core$Int*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 40);
frost$core$Int $tmp663 = *$tmp662;
*(&local38) = $tmp663;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:373
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp664 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp665 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp666 = *$tmp665;
org$frostlang$frostc$ChoiceCase* $tmp667 = *(&local37);
frost$collections$Array** $tmp668 = &$tmp667->fields;
frost$collections$Array* $tmp669 = *$tmp668;
frost$core$Int $tmp670 = *(&local38);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:373:72
frost$core$Int $tmp671 = (frost$core$Int) {0u};
int64_t $tmp672 = $tmp670.value;
int64_t $tmp673 = $tmp671.value;
bool $tmp674 = $tmp672 >= $tmp673;
frost$core$Bit $tmp675 = (frost$core$Bit) {$tmp674};
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block92; else goto block91;
block92:;
ITable* $tmp677 = ((frost$collections$CollectionView*) $tmp669)->$class->itable;
while ($tmp677->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp677 = $tmp677->next;
}
$fn679 $tmp678 = $tmp677->methods[0];
frost$core$Int $tmp680 = $tmp678(((frost$collections$CollectionView*) $tmp669));
int64_t $tmp681 = $tmp670.value;
int64_t $tmp682 = $tmp680.value;
bool $tmp683 = $tmp681 < $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block90; else goto block91;
block91:;
frost$core$Int $tmp686 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s687, $tmp686, &$s688);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp689 = &$tmp669->data;
frost$core$Object** $tmp690 = *$tmp689;
frost$core$Int64 $tmp691 = frost$core$Int64$init$frost$core$Int($tmp670);
int64_t $tmp692 = $tmp691.value;
frost$core$Object* $tmp693 = $tmp690[$tmp692];
frost$core$Frost$ref$frost$core$Object$Q($tmp693);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:373:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp694 = &$tmp666->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp695 = *$tmp694;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp696 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp697 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp696, $tmp697);
frost$collections$Array$add$frost$collections$Array$T($tmp696, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp693)));
org$frostlang$frostc$Type* $tmp698 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp695, ((frost$collections$ListView*) $tmp696));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
$fn700 $tmp699 = ($fn700) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp701 = $tmp699(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp664, $tmp698, $tmp701);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q($tmp693);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
org$frostlang$frostc$ChoiceCase* $tmp702 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local37) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp664;
block87:;
frost$core$Int $tmp703 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:376:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp704 = $tmp191.value;
int64_t $tmp705 = $tmp703.value;
bool $tmp706 = $tmp704 == $tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706};
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp709 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp710 = *$tmp709;
org$frostlang$frostc$IR$Value** $tmp711 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp712 = *$tmp711;
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
org$frostlang$frostc$IR$Value* $tmp713 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local39) = $tmp712;
org$frostlang$frostc$FieldDecl** $tmp714 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp715 = *$tmp714;
*(&local40) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
org$frostlang$frostc$FieldDecl* $tmp716 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local40) = $tmp715;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:377
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp717 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp718 = *(&local40);
org$frostlang$frostc$Type** $tmp719 = &$tmp718->type;
org$frostlang$frostc$Type* $tmp720 = *$tmp719;
$fn722 $tmp721 = ($fn722) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp723 = $tmp721(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp717, $tmp720, $tmp723);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
org$frostlang$frostc$FieldDecl* $tmp724 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local40) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp725 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp717;
block95:;
frost$core$Int $tmp726 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:379:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp727 = $tmp191.value;
int64_t $tmp728 = $tmp726.value;
bool $tmp729 = $tmp727 == $tmp728;
frost$core$Bit $tmp730 = (frost$core$Bit) {$tmp729};
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Position* $tmp732 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp733 = *$tmp732;
*(&local41) = $tmp733;
org$frostlang$frostc$IR$Value** $tmp734 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp735 = *$tmp734;
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
org$frostlang$frostc$IR$Value* $tmp736 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local42) = $tmp735;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:380
org$frostlang$frostc$IR$Value* $tmp737 = *(&local42);
$fn739 $tmp738 = ($fn739) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp740 = $tmp738(param0, $tmp737, param2);
*(&local43) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp741 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local43) = $tmp740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:381
frost$core$Bit* $tmp742 = &param0->reportErrors;
frost$core$Bit $tmp743 = *$tmp742;
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block102; else goto block101;
block102:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp745 = *(&local43);
org$frostlang$frostc$Type** $tmp746 = &$tmp745->type;
org$frostlang$frostc$Type* $tmp747 = *$tmp746;
org$frostlang$frostc$Compiler** $tmp748 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp749 = *$tmp748;
org$frostlang$frostc$Type** $tmp750 = &$tmp749->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp751 = *$tmp750;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:381:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp752 = &((org$frostlang$frostc$Symbol*) $tmp747)->name;
frost$core$String* $tmp753 = *$tmp752;
frost$core$String** $tmp754 = &((org$frostlang$frostc$Symbol*) $tmp751)->name;
frost$core$String* $tmp755 = *$tmp754;
frost$core$Bit $tmp756 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp753, $tmp755);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Type$Kind* $tmp758 = &$tmp747->typeKind;
org$frostlang$frostc$Type$Kind $tmp759 = *$tmp758;
org$frostlang$frostc$Type$Kind$wrapper* $tmp760;
$tmp760 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp760->value = $tmp759;
org$frostlang$frostc$Type$Kind* $tmp761 = &$tmp751->typeKind;
org$frostlang$frostc$Type$Kind $tmp762 = *$tmp761;
org$frostlang$frostc$Type$Kind$wrapper* $tmp763;
$tmp763 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp763->value = $tmp762;
ITable* $tmp764 = ((frost$core$Equatable*) $tmp760)->$class->itable;
while ($tmp764->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp764 = $tmp764->next;
}
$fn766 $tmp765 = $tmp764->methods[0];
frost$core$Bit $tmp767 = $tmp765(((frost$core$Equatable*) $tmp760), ((frost$core$Equatable*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp763)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp760)));
*(&local44) = $tmp767;
goto block106;
block105:;
*(&local44) = $tmp756;
goto block106;
block106:;
frost$core$Bit $tmp768 = *(&local44);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:382
org$frostlang$frostc$Compiler** $tmp770 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp771 = *$tmp770;
org$frostlang$frostc$Position $tmp772 = *(&local41);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp773;
$tmp773 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp773->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:382:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn775 $tmp774 = ($fn775) ((frost$core$Object*) $tmp773)->$class->vtable[0];
frost$core$String* $tmp776 = $tmp774(((frost$core$Object*) $tmp773));
frost$core$String* $tmp777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s778, $tmp776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$String* $tmp779 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp777, &$s780);
org$frostlang$frostc$IR$Value* $tmp781 = *(&local42);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:382:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn783 $tmp782 = ($fn783) ((frost$core$Object*) $tmp781)->$class->vtable[0];
frost$core$String* $tmp784 = $tmp782(((frost$core$Object*) $tmp781));
frost$core$String* $tmp785 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp779, $tmp784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$String* $tmp786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp785, &$s787);
org$frostlang$frostc$Compiler$warn$org$frostlang$frostc$Position$frost$core$String($tmp771, $tmp772, $tmp786);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:384
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp788 = *(&local43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp789 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local43) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp790 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp788;
block98:;
frost$core$Int $tmp791 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:386:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp792 = $tmp191.value;
int64_t $tmp793 = $tmp791.value;
bool $tmp794 = $tmp792 == $tmp793;
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block109; else goto block110;
block109:;
org$frostlang$frostc$Position* $tmp797 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp798 = *$tmp797;
org$frostlang$frostc$IR$Value** $tmp799 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp800 = *$tmp799;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
org$frostlang$frostc$IR$Value* $tmp801 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local45) = $tmp800;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:387
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp802 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR$Value* $tmp803 = *(&local45);
$fn805 $tmp804 = ($fn805) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp806 = $tmp804(param0, $tmp803, param2);
org$frostlang$frostc$Type** $tmp807 = &$tmp806->type;
org$frostlang$frostc$Type* $tmp808 = *$tmp807;
$fn810 $tmp809 = ($fn810) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp811 = $tmp809(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp802, $tmp808, $tmp811);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
org$frostlang$frostc$IR$Value* $tmp812 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp802;
block110:;
frost$core$Int $tmp813 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:389:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp814 = $tmp191.value;
int64_t $tmp815 = $tmp813.value;
bool $tmp816 = $tmp814 == $tmp815;
frost$core$Bit $tmp817 = (frost$core$Bit) {$tmp816};
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp819 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp820 = *$tmp819;
org$frostlang$frostc$IR$Value** $tmp821 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp822 = *$tmp821;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
org$frostlang$frostc$IR$Value* $tmp823 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
*(&local46) = $tmp822;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:390
org$frostlang$frostc$IR$Value* $tmp824 = *(&local46);
$fn826 $tmp825 = ($fn826) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp827 = $tmp825(param0, $tmp824, param2);
*(&local47) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp828 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local47) = $tmp827;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:391
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp829 = *(&local47);
frost$collections$ListView** $tmp830 = &$tmp829->nonNullImplications;
frost$collections$ListView* $tmp831 = *$tmp830;
frost$core$Bit $tmp832 = (frost$core$Bit) {$tmp831 != NULL};
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:392
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp834 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp835 = *(&local47);
org$frostlang$frostc$Type** $tmp836 = &$tmp835->type;
org$frostlang$frostc$Type* $tmp837 = *$tmp836;
$fn839 $tmp838 = ($fn839) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp840 = $tmp838(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp841 = *(&local47);
frost$collections$ListView** $tmp842 = &$tmp841->nonNullImplications;
frost$collections$ListView* $tmp843 = *$tmp842;
frost$core$Bit $tmp844 = (frost$core$Bit) {$tmp843 != NULL};
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block117; else goto block118;
block118:;
frost$core$Int $tmp846 = (frost$core$Int) {393u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s847, $tmp846, &$s848);
abort(); // unreachable
block117:;
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp850 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Analyzer.frost:393:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp851 = &$tmp850->pointer;
*$tmp851 = ((frost$core$Int8*) org$frostlang$frostc$pass$Analyzer$$anonymous1$$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$R$$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp852 = &$tmp850->target;
frost$core$Immutable* $tmp853 = *$tmp852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
frost$core$Immutable** $tmp854 = &$tmp850->target;
*$tmp854 = ((frost$core$Immutable*) NULL);
ITable* $tmp855 = ((frost$collections$CollectionView*) $tmp843)->$class->itable;
while ($tmp855->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp855 = $tmp855->next;
}
$fn857 $tmp856 = $tmp855->methods[9];
frost$collections$Array* $tmp858 = $tmp856(((frost$collections$CollectionView*) $tmp843), ((frost$core$MutableMethod*) $tmp850));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp834, $tmp837, $tmp840, ((frost$collections$ListView*) $tmp858));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp859 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local47) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp860 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp834;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:395
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp861 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp862 = *(&local47);
org$frostlang$frostc$Type** $tmp863 = &$tmp862->type;
org$frostlang$frostc$Type* $tmp864 = *$tmp863;
$fn866 $tmp865 = ($fn866) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp867 = $tmp865(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp861, $tmp864, $tmp867);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp868 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local47) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp869 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp861;
block113:;
frost$core$Int $tmp870 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:397:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp871 = $tmp191.value;
int64_t $tmp872 = $tmp870.value;
bool $tmp873 = $tmp871 == $tmp872;
frost$core$Bit $tmp874 = (frost$core$Bit) {$tmp873};
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block120; else goto block121;
block120:;
org$frostlang$frostc$Position* $tmp876 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp877 = *$tmp876;
org$frostlang$frostc$IR$Value** $tmp878 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp879 = *$tmp878;
org$frostlang$frostc$Type** $tmp880 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$Type* $tmp881 = *$tmp880;
*(&local48) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
org$frostlang$frostc$Type* $tmp882 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local48) = $tmp881;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:398
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp883 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp884 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp885 = *$tmp884;
org$frostlang$frostc$Type* $tmp886 = *(&local48);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:398:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp887 = &$tmp885->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp888 = *$tmp887;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp889 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp890 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp889, $tmp890);
frost$collections$Array$add$frost$collections$Array$T($tmp889, ((frost$core$Object*) $tmp886));
org$frostlang$frostc$Type* $tmp891 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp888, ((frost$collections$ListView*) $tmp889));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
$fn893 $tmp892 = ($fn893) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp894 = $tmp892(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp883, $tmp891, $tmp894);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
org$frostlang$frostc$Type* $tmp895 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local48) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp883;
block121:;
frost$core$Int $tmp896 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:400:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp897 = $tmp191.value;
int64_t $tmp898 = $tmp896.value;
bool $tmp899 = $tmp897 == $tmp898;
frost$core$Bit $tmp900 = (frost$core$Bit) {$tmp899};
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block124; else goto block125;
block124:;
org$frostlang$frostc$Position* $tmp902 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp903 = *$tmp902;
org$frostlang$frostc$IR$Value** $tmp904 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp905 = *$tmp904;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
org$frostlang$frostc$IR$Value* $tmp906 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local49) = $tmp905;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:401
org$frostlang$frostc$IR$Value* $tmp907 = *(&local49);
$fn909 $tmp908 = ($fn909) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp910 = $tmp908(param0, $tmp907, param2);
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp911 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local50) = $tmp910;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:402
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp912 = *(&local50);
org$frostlang$frostc$Type** $tmp913 = &$tmp912->type;
org$frostlang$frostc$Type* $tmp914 = *$tmp913;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:402:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp915 = &((org$frostlang$frostc$Symbol*) $tmp914)->name;
frost$core$String* $tmp916 = *$tmp915;
frost$core$Bit $tmp917 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp916, &$s918);
bool $tmp919 = $tmp917.value;
if ($tmp919) goto block128; else goto block129;
block129:;
frost$core$Int $tmp920 = (frost$core$Int) {402u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s921, $tmp920);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:403
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp922 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp923 = *(&local50);
org$frostlang$frostc$Type** $tmp924 = &$tmp923->type;
org$frostlang$frostc$Type* $tmp925 = *$tmp924;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:403:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp926 = &$tmp925->_subtypes;
org$frostlang$frostc$FixedArray* $tmp927 = *$tmp926;
frost$core$Bit $tmp928 = (frost$core$Bit) {$tmp927 != NULL};
bool $tmp929 = $tmp928.value;
if ($tmp929) goto block131; else goto block132;
block132:;
frost$core$Int $tmp930 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s931, $tmp930, &$s932);
abort(); // unreachable
block131:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Int $tmp933 = (frost$core$Int) {1u};
frost$core$Object* $tmp934 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp927, $tmp933);
$fn936 $tmp935 = ($fn936) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp937 = $tmp935(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp922, ((org$frostlang$frostc$Type*) $tmp934), $tmp937);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
frost$core$Frost$unref$frost$core$Object$Q($tmp934);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp938 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp939 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp922;
block125:;
frost$core$Int $tmp940 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:405:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp941 = $tmp191.value;
int64_t $tmp942 = $tmp940.value;
bool $tmp943 = $tmp941 == $tmp942;
frost$core$Bit $tmp944 = (frost$core$Bit) {$tmp943};
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block133; else goto block134;
block133:;
org$frostlang$frostc$Position* $tmp946 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp947 = *$tmp946;
org$frostlang$frostc$IR$Value** $tmp948 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp949 = *$tmp948;
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
org$frostlang$frostc$IR$Value* $tmp950 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
*(&local51) = $tmp949;
org$frostlang$frostc$IR$Value** $tmp951 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp952 = *$tmp951;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:406
org$frostlang$frostc$IR$Value* $tmp953 = *(&local51);
$fn955 $tmp954 = ($fn955) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp956 = $tmp954(param0, $tmp953, param2);
*(&local52) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp957 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local52) = $tmp956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:407
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp958 = *(&local52);
org$frostlang$frostc$Type** $tmp959 = &$tmp958->type;
org$frostlang$frostc$Type* $tmp960 = *$tmp959;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:407:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp961 = &((org$frostlang$frostc$Symbol*) $tmp960)->name;
frost$core$String* $tmp962 = *$tmp961;
frost$core$Bit $tmp963 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp962, &$s964);
bool $tmp965 = $tmp963.value;
if ($tmp965) goto block137; else goto block138;
block138:;
frost$core$Int $tmp966 = (frost$core$Int) {407u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s967, $tmp966);
abort(); // unreachable
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:408
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp968 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp969 = *(&local52);
org$frostlang$frostc$Type** $tmp970 = &$tmp969->type;
org$frostlang$frostc$Type* $tmp971 = *$tmp970;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:408:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp972 = &$tmp971->_subtypes;
org$frostlang$frostc$FixedArray* $tmp973 = *$tmp972;
frost$core$Bit $tmp974 = (frost$core$Bit) {$tmp973 != NULL};
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block140; else goto block141;
block141:;
frost$core$Int $tmp976 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s977, $tmp976, &$s978);
abort(); // unreachable
block140:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Int $tmp979 = (frost$core$Int) {1u};
frost$core$Object* $tmp980 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp973, $tmp979);
$fn982 $tmp981 = ($fn982) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp983 = $tmp981(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp968, ((org$frostlang$frostc$Type*) $tmp980), $tmp983);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$core$Frost$unref$frost$core$Object$Q($tmp980);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp984 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local52) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp985 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp968;
block134:;
frost$core$Int $tmp986 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:410:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp987 = $tmp191.value;
int64_t $tmp988 = $tmp986.value;
bool $tmp989 = $tmp987 == $tmp988;
frost$core$Bit $tmp990 = (frost$core$Bit) {$tmp989};
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp992 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp993 = *$tmp992;
org$frostlang$frostc$IR$Value** $tmp994 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp995 = *$tmp994;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
org$frostlang$frostc$IR$Value* $tmp996 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local53) = $tmp995;
org$frostlang$frostc$IR$Value** $tmp997 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp998 = *$tmp997;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:411
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp999 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR$Value* $tmp1000 = *(&local53);
$fn1002 $tmp1001 = ($fn1002) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1003 = $tmp1001(param0, $tmp1000, param2);
org$frostlang$frostc$Type** $tmp1004 = &$tmp1003->type;
org$frostlang$frostc$Type* $tmp1005 = *$tmp1004;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1006 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1007 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1006, $tmp1007);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp999, $tmp1005, $tmp1006);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
org$frostlang$frostc$IR$Value* $tmp1008 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp999;
block143:;
frost$core$Int $tmp1009 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:413:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1010 = $tmp191.value;
int64_t $tmp1011 = $tmp1009.value;
bool $tmp1012 = $tmp1010 == $tmp1011;
frost$core$Bit $tmp1013 = (frost$core$Bit) {$tmp1012};
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block145; else goto block146;
block145:;
org$frostlang$frostc$Position* $tmp1015 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp1016 = *$tmp1015;
org$frostlang$frostc$IR$Value** $tmp1017 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1018 = *$tmp1017;
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
org$frostlang$frostc$IR$Value* $tmp1019 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
*(&local54) = $tmp1018;
org$frostlang$frostc$IR$Value** $tmp1020 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1021 = *$tmp1020;
org$frostlang$frostc$IR$Value** $tmp1022 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1023 = *$tmp1022;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:414
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1024 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR$Value* $tmp1025 = *(&local54);
$fn1027 $tmp1026 = ($fn1027) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1028 = $tmp1026(param0, $tmp1025, param2);
org$frostlang$frostc$Type** $tmp1029 = &$tmp1028->type;
org$frostlang$frostc$Type* $tmp1030 = *$tmp1029;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1031 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1032 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1031, $tmp1032);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1024, $tmp1030, $tmp1031);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
org$frostlang$frostc$IR$Value* $tmp1033 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp1024;
block146:;
frost$core$Int $tmp1034 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:416:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1035 = $tmp191.value;
int64_t $tmp1036 = $tmp1034.value;
bool $tmp1037 = $tmp1035 == $tmp1036;
frost$core$Bit $tmp1038 = (frost$core$Bit) {$tmp1037};
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block148; else goto block149;
block148:;
org$frostlang$frostc$Position* $tmp1040 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp1041 = *$tmp1040;
org$frostlang$frostc$MethodDecl** $tmp1042 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp1043 = *$tmp1042;
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
org$frostlang$frostc$MethodDecl* $tmp1044 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local55) = $tmp1043;
org$frostlang$frostc$FixedArray** $tmp1045 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1046 = *$tmp1045;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$FixedArray* $tmp1047 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local56) = $tmp1046;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:417
org$frostlang$frostc$MethodDecl* $tmp1048 = *(&local55);
org$frostlang$frostc$Type** $tmp1049 = &$tmp1048->returnType;
org$frostlang$frostc$Type* $tmp1050 = *$tmp1049;
org$frostlang$frostc$Compiler** $tmp1051 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1052 = *$tmp1051;
org$frostlang$frostc$Type** $tmp1053 = &$tmp1052->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1054 = *$tmp1053;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:417:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1055 = &((org$frostlang$frostc$Symbol*) $tmp1050)->name;
frost$core$String* $tmp1056 = *$tmp1055;
frost$core$String** $tmp1057 = &((org$frostlang$frostc$Symbol*) $tmp1054)->name;
frost$core$String* $tmp1058 = *$tmp1057;
frost$core$Bit $tmp1059 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1056, $tmp1058);
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block155; else goto block156;
block155:;
org$frostlang$frostc$Type$Kind* $tmp1061 = &$tmp1050->typeKind;
org$frostlang$frostc$Type$Kind $tmp1062 = *$tmp1061;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1063;
$tmp1063 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1063->value = $tmp1062;
org$frostlang$frostc$Type$Kind* $tmp1064 = &$tmp1054->typeKind;
org$frostlang$frostc$Type$Kind $tmp1065 = *$tmp1064;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1066;
$tmp1066 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1066->value = $tmp1065;
ITable* $tmp1067 = ((frost$core$Equatable*) $tmp1063)->$class->itable;
while ($tmp1067->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1067 = $tmp1067->next;
}
$fn1069 $tmp1068 = $tmp1067->methods[0];
frost$core$Bit $tmp1070 = $tmp1068(((frost$core$Equatable*) $tmp1063), ((frost$core$Equatable*) $tmp1066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1066)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1063)));
*(&local57) = $tmp1070;
goto block157;
block156:;
*(&local57) = $tmp1059;
goto block157;
block157:;
frost$core$Bit $tmp1071 = *(&local57);
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block151; else goto block153;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:418
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1073 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1074 = *(&local55);
org$frostlang$frostc$Type** $tmp1075 = &$tmp1074->returnType;
org$frostlang$frostc$Type* $tmp1076 = *$tmp1075;
$fn1078 $tmp1077 = ($fn1078) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1079 = $tmp1077(param0, param1);
org$frostlang$frostc$FixedArray* $tmp1080 = *(&local56);
frost$core$Int $tmp1081 = (frost$core$Int) {0u};
frost$core$Object* $tmp1082 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1080, $tmp1081);
$fn1084 $tmp1083 = ($fn1084) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1085 = $tmp1083(param0, ((org$frostlang$frostc$IR$Value*) $tmp1082), param2);
frost$collections$ListView** $tmp1086 = &$tmp1085->nonNullImplications;
frost$collections$ListView* $tmp1087 = *$tmp1086;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp1073, $tmp1076, $tmp1079, $tmp1087);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q($tmp1082);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
org$frostlang$frostc$FixedArray* $tmp1088 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1089 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp1073;
block153:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:422
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1090 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1091 = *(&local55);
org$frostlang$frostc$Type** $tmp1092 = &$tmp1091->returnType;
org$frostlang$frostc$Type* $tmp1093 = *$tmp1092;
$fn1095 $tmp1094 = ($fn1095) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1096 = $tmp1094(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1090, $tmp1093, $tmp1096);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
org$frostlang$frostc$FixedArray* $tmp1097 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1098 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
return $tmp1090;
block152:;
org$frostlang$frostc$FixedArray* $tmp1099 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1100 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:426
frost$core$Int $tmp1101 = (frost$core$Int) {426u};
frost$collections$HashMap** $tmp1102 = &param0->statements;
frost$collections$HashMap* $tmp1103 = *$tmp1102;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1104;
$tmp1104 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1104->value = param1;
frost$core$Object* $tmp1105 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1103, ((frost$collections$HashKey*) $tmp1104));
frost$core$Bit $tmp1106 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp1105) != NULL};
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block158; else goto block159;
block159:;
frost$core$Int $tmp1108 = (frost$core$Int) {426u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1109, $tmp1108, &$s1110);
abort(); // unreachable
block158:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:426:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1112 $tmp1111 = ($fn1112) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1105))->$class->vtable[0];
frost$core$String* $tmp1113 = $tmp1111(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1105)));
frost$core$String* $tmp1114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1115, $tmp1113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$String* $tmp1116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1114, &$s1117);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1118, $tmp1101, $tmp1116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q($tmp1105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1104)));
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp183)));
goto block161;
block161:;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$pass$Analyzer$State* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$Int local2;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Int local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$Type* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:432
frost$core$Int* $tmp1119 = &param1->$rawValue;
frost$core$Int $tmp1120 = *$tmp1119;
frost$core$Int $tmp1121 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:433:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1122 = $tmp1120.value;
int64_t $tmp1123 = $tmp1121.value;
bool $tmp1124 = $tmp1122 == $tmp1123;
frost$core$Bit $tmp1125 = (frost$core$Bit) {$tmp1124};
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp1127 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp1128 = *$tmp1127;
org$frostlang$frostc$Type** $tmp1129 = (org$frostlang$frostc$Type**) (param1->$data + 1);
org$frostlang$frostc$Type* $tmp1130 = *$tmp1129;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
org$frostlang$frostc$Type* $tmp1131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
*(&local0) = $tmp1130;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:434
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1132 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1133 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1134 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1135 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1134, $tmp1135);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1132, $tmp1133, $tmp1134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
org$frostlang$frostc$Type* $tmp1136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1132;
block3:;
frost$core$Int $tmp1137 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:436:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1138 = $tmp1120.value;
int64_t $tmp1139 = $tmp1137.value;
bool $tmp1140 = $tmp1138 == $tmp1139;
frost$core$Bit $tmp1141 = (frost$core$Bit) {$tmp1140};
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp1143 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp1144 = *$tmp1143;
org$frostlang$frostc$Type** $tmp1145 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1146 = *$tmp1145;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
org$frostlang$frostc$Type* $tmp1147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local1) = $tmp1146;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:437
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1148 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1149 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1150 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1151 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1150, $tmp1151);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1148, $tmp1149, $tmp1150);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
org$frostlang$frostc$Type* $tmp1152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1148;
block6:;
frost$core$Int $tmp1153 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:439:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1154 = $tmp1120.value;
int64_t $tmp1155 = $tmp1153.value;
bool $tmp1156 = $tmp1154 == $tmp1155;
frost$core$Bit $tmp1157 = (frost$core$Bit) {$tmp1156};
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp1159 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp1160 = *$tmp1159;
*(&local2) = $tmp1160;
org$frostlang$frostc$Type** $tmp1161 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1162 = *$tmp1161;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:440
frost$collections$Array** $tmp1163 = &param2->locals;
frost$collections$Array* $tmp1164 = *$tmp1163;
frost$core$Int $tmp1165 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:440:32
frost$core$Int $tmp1166 = (frost$core$Int) {0u};
int64_t $tmp1167 = $tmp1165.value;
int64_t $tmp1168 = $tmp1166.value;
bool $tmp1169 = $tmp1167 >= $tmp1168;
frost$core$Bit $tmp1170 = (frost$core$Bit) {$tmp1169};
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block14; else goto block13;
block14:;
ITable* $tmp1172 = ((frost$collections$CollectionView*) $tmp1164)->$class->itable;
while ($tmp1172->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1172 = $tmp1172->next;
}
$fn1174 $tmp1173 = $tmp1172->methods[0];
frost$core$Int $tmp1175 = $tmp1173(((frost$collections$CollectionView*) $tmp1164));
int64_t $tmp1176 = $tmp1165.value;
int64_t $tmp1177 = $tmp1175.value;
bool $tmp1178 = $tmp1176 < $tmp1177;
frost$core$Bit $tmp1179 = (frost$core$Bit) {$tmp1178};
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1181 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1182, $tmp1181, &$s1183);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1184 = &$tmp1164->data;
frost$core$Object** $tmp1185 = *$tmp1184;
frost$core$Int64 $tmp1186 = frost$core$Int64$init$frost$core$Int($tmp1165);
int64_t $tmp1187 = $tmp1186.value;
frost$core$Object* $tmp1188 = $tmp1185[$tmp1187];
frost$core$Frost$ref$frost$core$Object$Q($tmp1188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1188)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1188);
return ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1188);
block9:;
frost$core$Int $tmp1189 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:442:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1190 = $tmp1120.value;
int64_t $tmp1191 = $tmp1189.value;
bool $tmp1192 = $tmp1190 == $tmp1191;
frost$core$Bit $tmp1193 = (frost$core$Bit) {$tmp1192};
bool $tmp1194 = $tmp1193.value;
if ($tmp1194) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type** $tmp1195 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp1196 = *$tmp1195;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
org$frostlang$frostc$Type* $tmp1197 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local3) = $tmp1196;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:443
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1198 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1199 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1200 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1201 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1200, $tmp1201);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1198, $tmp1199, $tmp1200);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
org$frostlang$frostc$Type* $tmp1202 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1198;
block16:;
frost$core$Int $tmp1203 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:445:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1204 = $tmp1120.value;
int64_t $tmp1205 = $tmp1203.value;
bool $tmp1206 = $tmp1204 == $tmp1205;
frost$core$Bit $tmp1207 = (frost$core$Bit) {$tmp1206};
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block18; else goto block19;
block18:;
frost$core$Int* $tmp1209 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp1210 = *$tmp1209;
*(&local4) = $tmp1210;
org$frostlang$frostc$Type** $tmp1211 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1212 = *$tmp1211;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:446
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1213 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array** $tmp1214 = &param2->parameters;
frost$collections$Array* $tmp1215 = *$tmp1214;
frost$core$Int $tmp1216 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:446:50
frost$core$Int $tmp1217 = (frost$core$Int) {0u};
int64_t $tmp1218 = $tmp1216.value;
int64_t $tmp1219 = $tmp1217.value;
bool $tmp1220 = $tmp1218 >= $tmp1219;
frost$core$Bit $tmp1221 = (frost$core$Bit) {$tmp1220};
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block24; else goto block23;
block24:;
ITable* $tmp1223 = ((frost$collections$CollectionView*) $tmp1215)->$class->itable;
while ($tmp1223->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1223 = $tmp1223->next;
}
$fn1225 $tmp1224 = $tmp1223->methods[0];
frost$core$Int $tmp1226 = $tmp1224(((frost$collections$CollectionView*) $tmp1215));
int64_t $tmp1227 = $tmp1216.value;
int64_t $tmp1228 = $tmp1226.value;
bool $tmp1229 = $tmp1227 < $tmp1228;
frost$core$Bit $tmp1230 = (frost$core$Bit) {$tmp1229};
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1232 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1233, $tmp1232, &$s1234);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1235 = &$tmp1215->data;
frost$core$Object** $tmp1236 = *$tmp1235;
frost$core$Int64 $tmp1237 = frost$core$Int64$init$frost$core$Int($tmp1216);
int64_t $tmp1238 = $tmp1237.value;
frost$core$Object* $tmp1239 = $tmp1236[$tmp1238];
frost$core$Frost$ref$frost$core$Object$Q($tmp1239);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1240 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1241 = (frost$core$Int) {3u};
frost$core$Int $tmp1242 = *(&local4);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int($tmp1240, $tmp1241, $tmp1242);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1213, ((org$frostlang$frostc$Type*) $tmp1239), $tmp1240);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
frost$core$Frost$unref$frost$core$Object$Q($tmp1239);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
return $tmp1213;
block19:;
frost$core$Int $tmp1243 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:448:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1244 = $tmp1120.value;
int64_t $tmp1245 = $tmp1243.value;
bool $tmp1246 = $tmp1244 == $tmp1245;
frost$core$Bit $tmp1247 = (frost$core$Bit) {$tmp1246};
bool $tmp1248 = $tmp1247.value;
if ($tmp1248) goto block25; else goto block26;
block25:;
frost$core$Real64* $tmp1249 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp1250 = *$tmp1249;
org$frostlang$frostc$Type** $tmp1251 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1252 = *$tmp1251;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
org$frostlang$frostc$Type* $tmp1253 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local5) = $tmp1252;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:449
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1254 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1255 = *(&local5);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1256 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1257 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1256, $tmp1257);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1254, $tmp1255, $tmp1256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
org$frostlang$frostc$Type* $tmp1258 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1254;
block26:;
frost$core$Int $tmp1259 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:451:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1260 = $tmp1120.value;
int64_t $tmp1261 = $tmp1259.value;
bool $tmp1262 = $tmp1260 == $tmp1261;
frost$core$Bit $tmp1263 = (frost$core$Bit) {$tmp1262};
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Statement$ID* $tmp1265 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1266 = *$tmp1265;
*(&local6) = $tmp1266;
org$frostlang$frostc$Type** $tmp1267 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1268 = *$tmp1267;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:452
org$frostlang$frostc$IR$Statement$ID $tmp1269 = *(&local6);
$fn1271 $tmp1270 = ($fn1271) param0->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1272 = $tmp1270(param0, $tmp1269, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
return $tmp1272;
block29:;
frost$core$Int $tmp1273 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:454:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1274 = $tmp1120.value;
int64_t $tmp1275 = $tmp1273.value;
bool $tmp1276 = $tmp1274 == $tmp1275;
frost$core$Bit $tmp1277 = (frost$core$Bit) {$tmp1276};
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block31; else goto block32;
block31:;
frost$core$String** $tmp1279 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp1280 = *$tmp1279;
org$frostlang$frostc$Type** $tmp1281 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1282 = *$tmp1281;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
org$frostlang$frostc$Type* $tmp1283 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local7) = $tmp1282;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:455
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1284 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1285 = *(&local7);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1286 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1287 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1286, $tmp1287);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1284, $tmp1285, $tmp1286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
org$frostlang$frostc$Type* $tmp1288 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1284;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:458
frost$core$Int $tmp1289 = (frost$core$Int) {458u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:458:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1291 $tmp1290 = ($fn1291) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1292 = $tmp1290(((frost$core$Object*) param1));
frost$core$String* $tmp1293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1294, $tmp1292);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$String* $tmp1295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1293, &$s1296);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1297, $tmp1289, $tmp1295);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
abort(); // unreachable
block1:;
goto block35;
block35:;

}
void org$frostlang$frostc$pass$Analyzer$propagate$org$frostlang$frostc$pass$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1, org$frostlang$frostc$IR$Block$ID param2) {

frost$collections$HashSet* local0 = NULL;
frost$core$Bit local1;
frost$collections$Iterator* local2 = NULL;
org$frostlang$frostc$pass$Analyzer$State* local3 = NULL;
org$frostlang$frostc$pass$Analyzer$BlockExit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:464
frost$collections$HashMap** $tmp1298 = &param0->predecessors;
frost$collections$HashMap* $tmp1299 = *$tmp1298;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1300;
$tmp1300 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1300->value = param2;
frost$core$Object* $tmp1301 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1299, ((frost$collections$HashKey*) $tmp1300));
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp1301)));
frost$collections$HashSet* $tmp1302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local0) = ((frost$collections$HashSet*) $tmp1301);
frost$core$Frost$unref$frost$core$Object$Q($tmp1301);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1300)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:465
frost$collections$HashSet* $tmp1303 = *(&local0);
frost$core$Bit $tmp1304 = (frost$core$Bit) {$tmp1303 == NULL};
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:466
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp1306 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1306);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$collections$HashSet* $tmp1307 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local0) = $tmp1306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:467
frost$collections$HashMap** $tmp1308 = &param0->predecessors;
frost$collections$HashMap* $tmp1309 = *$tmp1308;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1310;
$tmp1310 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1310->value = param2;
frost$collections$HashSet* $tmp1311 = *(&local0);
frost$core$Bit $tmp1312 = (frost$core$Bit) {$tmp1311 != NULL};
bool $tmp1313 = $tmp1312.value;
if ($tmp1313) goto block3; else goto block4;
block4:;
frost$core$Int $tmp1314 = (frost$core$Int) {467u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1315, $tmp1314, &$s1316);
abort(); // unreachable
block3:;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1309, ((frost$collections$HashKey*) $tmp1310), ((frost$core$Object*) $tmp1311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1310)));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:469
frost$collections$HashSet* $tmp1317 = *(&local0);
frost$core$Bit $tmp1318 = (frost$core$Bit) {$tmp1317 != NULL};
bool $tmp1319 = $tmp1318.value;
if ($tmp1319) goto block5; else goto block6;
block6:;
frost$core$Int $tmp1320 = (frost$core$Int) {469u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1321, $tmp1320, &$s1322);
abort(); // unreachable
block5:;
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper* $tmp1323;
$tmp1323 = (org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass);
$tmp1323->value = param1;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:469:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1324 = &$tmp1317->contents;
frost$collections$HashMap* $tmp1325 = *$tmp1324;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1325, ((frost$collections$HashKey*) $tmp1323), ((frost$core$Object*) ((frost$collections$HashKey*) $tmp1323)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1323)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:470
frost$core$Bit $tmp1326 = (frost$core$Bit) {false};
*(&local1) = $tmp1326;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:471
frost$collections$HashSet* $tmp1327 = *(&local0);
frost$core$Bit $tmp1328 = (frost$core$Bit) {$tmp1327 != NULL};
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block8; else goto block9;
block9:;
frost$core$Int $tmp1330 = (frost$core$Int) {471u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1331, $tmp1330, &$s1332);
abort(); // unreachable
block8:;
ITable* $tmp1333 = ((frost$collections$Iterable*) $tmp1327)->$class->itable;
while ($tmp1333->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1333 = $tmp1333->next;
}
$fn1335 $tmp1334 = $tmp1333->methods[0];
frost$collections$Iterator* $tmp1336 = $tmp1334(((frost$collections$Iterable*) $tmp1327));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$collections$Iterator* $tmp1337 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local2) = $tmp1336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:472
frost$collections$HashMap** $tmp1338 = &param0->entryStates;
frost$collections$HashMap* $tmp1339 = *$tmp1338;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1340;
$tmp1340 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1340->value = param2;
frost$core$Object* $tmp1341 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1339, ((frost$collections$HashKey*) $tmp1340));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1341)));
org$frostlang$frostc$pass$Analyzer$State* $tmp1342 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1341);
frost$core$Frost$unref$frost$core$Object$Q($tmp1341);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1340)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:473
org$frostlang$frostc$pass$Analyzer$State* $tmp1343 = *(&local3);
frost$core$Bit $tmp1344 = (frost$core$Bit) {$tmp1343 == NULL};
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:474
frost$collections$Iterator* $tmp1346 = *(&local2);
ITable* $tmp1347 = $tmp1346->$class->itable;
while ($tmp1347->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1347 = $tmp1347->next;
}
$fn1349 $tmp1348 = $tmp1347->methods[1];
frost$core$Object* $tmp1350 = $tmp1348($tmp1346);
$fn1352 $tmp1351 = ($fn1352) param0->$class->vtable[9];
org$frostlang$frostc$pass$Analyzer$State* $tmp1353 = $tmp1351(param0, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1350)->value);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
org$frostlang$frostc$pass$Analyzer$State* $tmp1354 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local3) = $tmp1353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$core$Frost$unref$frost$core$Object$Q($tmp1350);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:475
frost$collections$HashMap** $tmp1355 = &param0->entryStates;
frost$collections$HashMap* $tmp1356 = *$tmp1355;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1357;
$tmp1357 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1357->value = param2;
org$frostlang$frostc$pass$Analyzer$State* $tmp1358 = *(&local3);
frost$core$Bit $tmp1359 = (frost$core$Bit) {$tmp1358 != NULL};
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1361 = (frost$core$Int) {475u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1362, $tmp1361, &$s1363);
abort(); // unreachable
block12:;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1356, ((frost$collections$HashKey*) $tmp1357), ((frost$core$Object*) $tmp1358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1357)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:476
frost$core$Bit $tmp1364 = (frost$core$Bit) {true};
*(&local1) = $tmp1364;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:478
frost$collections$Iterator* $tmp1365 = *(&local2);
goto block14;
block14:;
ITable* $tmp1366 = $tmp1365->$class->itable;
while ($tmp1366->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1366 = $tmp1366->next;
}
$fn1368 $tmp1367 = $tmp1366->methods[0];
frost$core$Bit $tmp1369 = $tmp1367($tmp1365);
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block16; else goto block15;
block15:;
ITable* $tmp1371 = $tmp1365->$class->itable;
while ($tmp1371->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1371 = $tmp1371->next;
}
$fn1373 $tmp1372 = $tmp1371->methods[1];
frost$core$Object* $tmp1374 = $tmp1372($tmp1365);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1374)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:479
frost$core$Bit $tmp1375 = *(&local1);
bool $tmp1376 = $tmp1375.value;
if ($tmp1376) goto block17; else goto block18;
block17:;
*(&local5) = $tmp1375;
goto block19;
block18:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1377 = *(&local3);
frost$core$Bit $tmp1378 = (frost$core$Bit) {$tmp1377 != NULL};
bool $tmp1379 = $tmp1378.value;
if ($tmp1379) goto block20; else goto block21;
block21:;
frost$core$Int $tmp1380 = (frost$core$Int) {479u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1381, $tmp1380, &$s1382);
abort(); // unreachable
block20:;
org$frostlang$frostc$Compiler** $tmp1383 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1384 = *$tmp1383;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1385 = *(&local4);
$fn1387 $tmp1386 = ($fn1387) param0->$class->vtable[9];
org$frostlang$frostc$pass$Analyzer$State* $tmp1388 = $tmp1386(param0, $tmp1385);
$fn1390 $tmp1389 = ($fn1390) $tmp1377->$class->vtable[2];
frost$core$Bit $tmp1391 = $tmp1389($tmp1377, $tmp1384, $tmp1388);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local5) = $tmp1391;
goto block19;
block19:;
frost$core$Bit $tmp1392 = *(&local5);
*(&local1) = $tmp1392;
frost$core$Frost$unref$frost$core$Object$Q($tmp1374);
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:481
frost$core$Bit $tmp1393 = *(&local1);
bool $tmp1394 = $tmp1393.value;
if ($tmp1394) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:482
frost$collections$HashSet** $tmp1395 = &param0->worklist;
frost$collections$HashSet* $tmp1396 = *$tmp1395;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1397;
$tmp1397 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1397->value = param2;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:482:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1398 = &$tmp1396->contents;
frost$collections$HashMap* $tmp1399 = *$tmp1398;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1399, ((frost$collections$HashKey*) $tmp1397), ((frost$core$Object*) ((frost$collections$HashKey*) $tmp1397)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1397)));
goto block23;
block23:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1400 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$collections$Iterator* $tmp1401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$collections$HashSet* $tmp1402 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local0) = ((frost$collections$HashSet*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1, frost$core$Int param2, org$frostlang$frostc$pass$Analyzer$State* param3) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local1 = NULL;
frost$core$Tuple2* local2 = NULL;
frost$core$Int local3;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
frost$core$Int local8;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:499
org$frostlang$frostc$LinkedList** $tmp1403 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp1404 = *$tmp1403;
$fn1406 $tmp1405 = ($fn1406) $tmp1404->$class->vtable[6];
frost$core$Object* $tmp1407 = $tmp1405($tmp1404);
frost$core$Int* $tmp1408 = &((org$frostlang$frostc$IR$Statement*) $tmp1407)->$rawValue;
frost$core$Int $tmp1409 = *$tmp1408;
frost$core$Int $tmp1410 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:500:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1411 = $tmp1409.value;
int64_t $tmp1412 = $tmp1410.value;
bool $tmp1413 = $tmp1411 == $tmp1412;
frost$core$Bit $tmp1414 = (frost$core$Bit) {$tmp1413};
bool $tmp1415 = $tmp1414.value;
if ($tmp1415) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1416 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1407)->$data + 0);
org$frostlang$frostc$Position $tmp1417 = *$tmp1416;
org$frostlang$frostc$IR$Value** $tmp1418 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1407)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1419 = *$tmp1418;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
org$frostlang$frostc$IR$Value* $tmp1420 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
*(&local0) = $tmp1419;
org$frostlang$frostc$IR$Block$ID* $tmp1421 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1407)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1422 = *$tmp1421;
org$frostlang$frostc$IR$Block$ID* $tmp1423 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1407)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1424 = *$tmp1423;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:501
org$frostlang$frostc$IR$Value* $tmp1425 = *(&local0);
$fn1427 $tmp1426 = ($fn1427) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1428 = $tmp1426(param0, $tmp1425, param3);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1429 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local1) = $tmp1428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:502
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1430 = *(&local1);
frost$collections$ListView** $tmp1431 = &$tmp1430->nonNullImplications;
frost$collections$ListView* $tmp1432 = *$tmp1431;
frost$core$Bit $tmp1433 = (frost$core$Bit) {$tmp1432 != NULL};
bool $tmp1434 = $tmp1433.value;
if ($tmp1434) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:503
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1435 = *(&local1);
frost$collections$ListView** $tmp1436 = &$tmp1435->nonNullImplications;
frost$collections$ListView* $tmp1437 = *$tmp1436;
frost$core$Bit $tmp1438 = (frost$core$Bit) {$tmp1437 != NULL};
bool $tmp1439 = $tmp1438.value;
if ($tmp1439) goto block7; else goto block8;
block8:;
frost$core$Int $tmp1440 = (frost$core$Int) {503u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1441, $tmp1440, &$s1442);
abort(); // unreachable
block7:;
ITable* $tmp1443 = ((frost$collections$Iterable*) $tmp1437)->$class->itable;
while ($tmp1443->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1443 = $tmp1443->next;
}
$fn1445 $tmp1444 = $tmp1443->methods[0];
frost$collections$Iterator* $tmp1446 = $tmp1444(((frost$collections$Iterable*) $tmp1437));
goto block9;
block9:;
ITable* $tmp1447 = $tmp1446->$class->itable;
while ($tmp1447->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1447 = $tmp1447->next;
}
$fn1449 $tmp1448 = $tmp1447->methods[0];
frost$core$Bit $tmp1450 = $tmp1448($tmp1446);
bool $tmp1451 = $tmp1450.value;
if ($tmp1451) goto block11; else goto block10;
block10:;
*(&local2) = ((frost$core$Tuple2*) NULL);
ITable* $tmp1452 = $tmp1446->$class->itable;
while ($tmp1452->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1452 = $tmp1452->next;
}
$fn1454 $tmp1453 = $tmp1452->methods[1];
frost$core$Object* $tmp1455 = $tmp1453($tmp1446);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Tuple2*) $tmp1455)));
frost$core$Tuple2* $tmp1456 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local2) = ((frost$core$Tuple2*) $tmp1455);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:504
frost$core$Tuple2* $tmp1457 = *(&local2);
frost$core$Object** $tmp1458 = &$tmp1457->f1;
frost$core$Object* $tmp1459 = *$tmp1458;
frost$core$Int $tmp1460 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:504:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1461 = param2.value;
int64_t $tmp1462 = $tmp1460.value;
bool $tmp1463 = $tmp1461 == $tmp1462;
frost$core$Bit $tmp1464 = (frost$core$Bit) {$tmp1463};
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Analyzer.frost:504:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
bool $tmp1465 = ((frost$core$Bit$wrapper*) $tmp1459)->value.value;
bool $tmp1466 = $tmp1464.value;
bool $tmp1467 = $tmp1465 == $tmp1466;
frost$core$Bit $tmp1468 = (frost$core$Bit) {$tmp1467};
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:505
frost$core$Tuple2* $tmp1470 = *(&local2);
frost$core$Object** $tmp1471 = &$tmp1470->f0;
frost$core$Object* $tmp1472 = *$tmp1471;
frost$core$Int* $tmp1473 = &((org$frostlang$frostc$pass$Analyzer$Definition*) $tmp1472)->$rawValue;
frost$core$Int $tmp1474 = *$tmp1473;
frost$core$Int $tmp1475 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:506:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1476 = $tmp1474.value;
int64_t $tmp1477 = $tmp1475.value;
bool $tmp1478 = $tmp1476 == $tmp1477;
frost$core$Bit $tmp1479 = (frost$core$Bit) {$tmp1478};
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block17; else goto block18;
block17:;
frost$core$Int* $tmp1481 = (frost$core$Int*) (((org$frostlang$frostc$pass$Analyzer$Definition*) $tmp1472)->$data + 0);
frost$core$Int $tmp1482 = *$tmp1481;
*(&local3) = $tmp1482;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:507
frost$collections$Array** $tmp1483 = &param3->locals;
frost$collections$Array* $tmp1484 = *$tmp1483;
frost$core$Int $tmp1485 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:507:60
frost$core$Int $tmp1486 = (frost$core$Int) {0u};
int64_t $tmp1487 = $tmp1485.value;
int64_t $tmp1488 = $tmp1486.value;
bool $tmp1489 = $tmp1487 >= $tmp1488;
frost$core$Bit $tmp1490 = (frost$core$Bit) {$tmp1489};
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block23; else goto block22;
block23:;
ITable* $tmp1492 = ((frost$collections$CollectionView*) $tmp1484)->$class->itable;
while ($tmp1492->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1492 = $tmp1492->next;
}
$fn1494 $tmp1493 = $tmp1492->methods[0];
frost$core$Int $tmp1495 = $tmp1493(((frost$collections$CollectionView*) $tmp1484));
int64_t $tmp1496 = $tmp1485.value;
int64_t $tmp1497 = $tmp1495.value;
bool $tmp1498 = $tmp1496 < $tmp1497;
frost$core$Bit $tmp1499 = (frost$core$Bit) {$tmp1498};
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block21; else goto block22;
block22:;
frost$core$Int $tmp1501 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1502, $tmp1501, &$s1503);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1504 = &$tmp1484->data;
frost$core$Object** $tmp1505 = *$tmp1504;
frost$core$Int64 $tmp1506 = frost$core$Int64$init$frost$core$Int($tmp1485);
int64_t $tmp1507 = $tmp1506.value;
frost$core$Object* $tmp1508 = $tmp1505[$tmp1507];
frost$core$Frost$ref$frost$core$Object$Q($tmp1508);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1508)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1509 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1508);
frost$core$Frost$unref$frost$core$Object$Q($tmp1508);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:508
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1510 = *(&local4);
frost$core$Bit $tmp1511 = (frost$core$Bit) {true};
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block24; else goto block25;
block25:;
frost$core$Int $tmp1513 = (frost$core$Int) {508u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1514, $tmp1513);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:509
frost$collections$Array** $tmp1515 = &param3->locals;
frost$collections$Array* $tmp1516 = *$tmp1515;
frost$core$Int $tmp1517 = *(&local3);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1518 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1519 = *(&local4);
org$frostlang$frostc$Type** $tmp1520 = &$tmp1519->type;
org$frostlang$frostc$Type* $tmp1521 = *$tmp1520;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:509:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1522 = &$tmp1521->typeKind;
org$frostlang$frostc$Type$Kind $tmp1523 = *$tmp1522;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1524;
$tmp1524 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1524->value = $tmp1523;
frost$core$Int $tmp1525 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1526 = &(&local7)->$rawValue;
*$tmp1526 = $tmp1525;
org$frostlang$frostc$Type$Kind $tmp1527 = *(&local7);
*(&local6) = $tmp1527;
org$frostlang$frostc$Type$Kind $tmp1528 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1529;
$tmp1529 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1529->value = $tmp1528;
ITable* $tmp1530 = ((frost$core$Equatable*) $tmp1524)->$class->itable;
while ($tmp1530->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1530 = $tmp1530->next;
}
$fn1532 $tmp1531 = $tmp1530->methods[1];
frost$core$Bit $tmp1533 = $tmp1531(((frost$core$Equatable*) $tmp1524), ((frost$core$Equatable*) $tmp1529));
bool $tmp1534 = $tmp1533.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1529)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1524)));
if ($tmp1534) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local5) = $tmp1521;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1535 = &$tmp1521->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1536 = *$tmp1535;
frost$core$Bit $tmp1537 = (frost$core$Bit) {$tmp1536 != NULL};
bool $tmp1538 = $tmp1537.value;
if ($tmp1538) goto block31; else goto block32;
block32:;
frost$core$Int $tmp1539 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1540, $tmp1539, &$s1541);
abort(); // unreachable
block31:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$core$Int $tmp1542 = (frost$core$Int) {0u};
frost$core$Object* $tmp1543 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1536, $tmp1542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1543)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1543);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp1543);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1543)));
goto block26;
block26:;
org$frostlang$frostc$Type* $tmp1544 = *(&local5);
frost$core$Tuple2* $tmp1545 = *(&local2);
frost$core$Object** $tmp1546 = &$tmp1545->f0;
frost$core$Object* $tmp1547 = *$tmp1546;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1518, $tmp1544, ((org$frostlang$frostc$pass$Analyzer$Definition*) $tmp1547));
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:509:49
frost$core$Int $tmp1548 = (frost$core$Int) {0u};
int64_t $tmp1549 = $tmp1517.value;
int64_t $tmp1550 = $tmp1548.value;
bool $tmp1551 = $tmp1549 >= $tmp1550;
frost$core$Bit $tmp1552 = (frost$core$Bit) {$tmp1551};
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block36; else goto block35;
block36:;
ITable* $tmp1554 = ((frost$collections$CollectionView*) $tmp1516)->$class->itable;
while ($tmp1554->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1554 = $tmp1554->next;
}
$fn1556 $tmp1555 = $tmp1554->methods[0];
frost$core$Int $tmp1557 = $tmp1555(((frost$collections$CollectionView*) $tmp1516));
int64_t $tmp1558 = $tmp1517.value;
int64_t $tmp1559 = $tmp1557.value;
bool $tmp1560 = $tmp1558 < $tmp1559;
frost$core$Bit $tmp1561 = (frost$core$Bit) {$tmp1560};
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block34; else goto block35;
block35:;
frost$core$Int $tmp1563 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1564, $tmp1563, &$s1565);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1566 = &$tmp1516->data;
frost$core$Object** $tmp1567 = *$tmp1566;
frost$core$Int64 $tmp1568 = frost$core$Int64$init$frost$core$Int($tmp1517);
int64_t $tmp1569 = $tmp1568.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$core$Object* $tmp1570 = $tmp1567[$tmp1569];
frost$core$Frost$unref$frost$core$Object$Q($tmp1570);
$tmp1567[$tmp1569] = ((frost$core$Object*) $tmp1518);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
org$frostlang$frostc$Type* $tmp1571 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1572 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block16;
block18:;
frost$core$Int $tmp1573 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:512:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1574 = $tmp1474.value;
int64_t $tmp1575 = $tmp1573.value;
bool $tmp1576 = $tmp1574 == $tmp1575;
frost$core$Bit $tmp1577 = (frost$core$Bit) {$tmp1576};
bool $tmp1578 = $tmp1577.value;
if ($tmp1578) goto block37; else goto block16;
block37:;
frost$core$Int* $tmp1579 = (frost$core$Int*) (((org$frostlang$frostc$pass$Analyzer$Definition*) $tmp1472)->$data + 0);
frost$core$Int $tmp1580 = *$tmp1579;
*(&local8) = $tmp1580;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:513
frost$collections$Array** $tmp1581 = &param3->parameters;
frost$collections$Array* $tmp1582 = *$tmp1581;
frost$core$Int $tmp1583 = *(&local8);
frost$collections$Array** $tmp1584 = &param3->parameters;
frost$collections$Array* $tmp1585 = *$tmp1584;
frost$core$Int $tmp1586 = *(&local8);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:513:79
frost$core$Int $tmp1587 = (frost$core$Int) {0u};
int64_t $tmp1588 = $tmp1586.value;
int64_t $tmp1589 = $tmp1587.value;
bool $tmp1590 = $tmp1588 >= $tmp1589;
frost$core$Bit $tmp1591 = (frost$core$Bit) {$tmp1590};
bool $tmp1592 = $tmp1591.value;
if ($tmp1592) goto block42; else goto block41;
block42:;
ITable* $tmp1593 = ((frost$collections$CollectionView*) $tmp1585)->$class->itable;
while ($tmp1593->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1593 = $tmp1593->next;
}
$fn1595 $tmp1594 = $tmp1593->methods[0];
frost$core$Int $tmp1596 = $tmp1594(((frost$collections$CollectionView*) $tmp1585));
int64_t $tmp1597 = $tmp1586.value;
int64_t $tmp1598 = $tmp1596.value;
bool $tmp1599 = $tmp1597 < $tmp1598;
frost$core$Bit $tmp1600 = (frost$core$Bit) {$tmp1599};
bool $tmp1601 = $tmp1600.value;
if ($tmp1601) goto block40; else goto block41;
block41:;
frost$core$Int $tmp1602 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1603, $tmp1602, &$s1604);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1605 = &$tmp1585->data;
frost$core$Object** $tmp1606 = *$tmp1605;
frost$core$Int64 $tmp1607 = frost$core$Int64$init$frost$core$Int($tmp1586);
int64_t $tmp1608 = $tmp1607.value;
frost$core$Object* $tmp1609 = $tmp1606[$tmp1608];
frost$core$Frost$ref$frost$core$Object$Q($tmp1609);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:513:97
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1610 = &((org$frostlang$frostc$Type*) $tmp1609)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1611 = *$tmp1610;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1612;
$tmp1612 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1612->value = $tmp1611;
frost$core$Int $tmp1613 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1614 = &(&local11)->$rawValue;
*$tmp1614 = $tmp1613;
org$frostlang$frostc$Type$Kind $tmp1615 = *(&local11);
*(&local10) = $tmp1615;
org$frostlang$frostc$Type$Kind $tmp1616 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1617;
$tmp1617 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1617->value = $tmp1616;
ITable* $tmp1618 = ((frost$core$Equatable*) $tmp1612)->$class->itable;
while ($tmp1618->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1618 = $tmp1618->next;
}
$fn1620 $tmp1619 = $tmp1618->methods[1];
frost$core$Bit $tmp1621 = $tmp1619(((frost$core$Equatable*) $tmp1612), ((frost$core$Equatable*) $tmp1617));
bool $tmp1622 = $tmp1621.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1617)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1612)));
if ($tmp1622) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1609)));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1609)));
goto block43;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1623 = &((org$frostlang$frostc$Type*) $tmp1609)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1624 = *$tmp1623;
frost$core$Bit $tmp1625 = (frost$core$Bit) {$tmp1624 != NULL};
bool $tmp1626 = $tmp1625.value;
if ($tmp1626) goto block48; else goto block49;
block49:;
frost$core$Int $tmp1627 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1628, $tmp1627, &$s1629);
abort(); // unreachable
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
frost$core$Int $tmp1630 = (frost$core$Int) {0u};
frost$core$Object* $tmp1631 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1624, $tmp1630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1631)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1631);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1631)));
goto block43;
block43:;
org$frostlang$frostc$Type* $tmp1632 = *(&local9);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:513:53
frost$core$Int $tmp1633 = (frost$core$Int) {0u};
int64_t $tmp1634 = $tmp1583.value;
int64_t $tmp1635 = $tmp1633.value;
bool $tmp1636 = $tmp1634 >= $tmp1635;
frost$core$Bit $tmp1637 = (frost$core$Bit) {$tmp1636};
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block53; else goto block52;
block53:;
ITable* $tmp1639 = ((frost$collections$CollectionView*) $tmp1582)->$class->itable;
while ($tmp1639->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1639 = $tmp1639->next;
}
$fn1641 $tmp1640 = $tmp1639->methods[0];
frost$core$Int $tmp1642 = $tmp1640(((frost$collections$CollectionView*) $tmp1582));
int64_t $tmp1643 = $tmp1583.value;
int64_t $tmp1644 = $tmp1642.value;
bool $tmp1645 = $tmp1643 < $tmp1644;
frost$core$Bit $tmp1646 = (frost$core$Bit) {$tmp1645};
bool $tmp1647 = $tmp1646.value;
if ($tmp1647) goto block51; else goto block52;
block52:;
frost$core$Int $tmp1648 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1649, $tmp1648, &$s1650);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1651 = &$tmp1582->data;
frost$core$Object** $tmp1652 = *$tmp1651;
frost$core$Int64 $tmp1653 = frost$core$Int64$init$frost$core$Int($tmp1583);
int64_t $tmp1654 = $tmp1653.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
frost$core$Object* $tmp1655 = $tmp1652[$tmp1654];
frost$core$Frost$unref$frost$core$Object$Q($tmp1655);
$tmp1652[$tmp1654] = ((frost$core$Object*) $tmp1632);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
org$frostlang$frostc$Type* $tmp1656 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1609);
goto block16;
block16:;
goto block13;
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1455);
frost$core$Tuple2* $tmp1657 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local2) = ((frost$core$Tuple2*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
goto block6;
block6:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1658 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1659 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1407);
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:521
frost$core$Frost$unref$frost$core$Object$Q($tmp1407);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:528
frost$core$Int $tmp1660 = param2.$rawValue;
frost$core$Int $tmp1661 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:529:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1662 = $tmp1660.value;
int64_t $tmp1663 = $tmp1661.value;
bool $tmp1664 = $tmp1662 == $tmp1663;
frost$core$Bit $tmp1665 = (frost$core$Bit) {$tmp1664};
bool $tmp1666 = $tmp1665.value;
if ($tmp1666) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:530
frost$core$Int* $tmp1667 = &param3->$rawValue;
frost$core$Int $tmp1668 = *$tmp1667;
frost$core$Int $tmp1669 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:531:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1670 = $tmp1668.value;
int64_t $tmp1671 = $tmp1669.value;
bool $tmp1672 = $tmp1670 == $tmp1671;
frost$core$Bit $tmp1673 = (frost$core$Bit) {$tmp1672};
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block6; else goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:532
org$frostlang$frostc$Compiler** $tmp1675 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1676 = *$tmp1675;
org$frostlang$frostc$Type** $tmp1677 = &$tmp1676->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1678 = *$tmp1677;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:532:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1679 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1680 = *$tmp1679;
frost$core$String** $tmp1681 = &((org$frostlang$frostc$Symbol*) $tmp1678)->name;
frost$core$String* $tmp1682 = *$tmp1681;
frost$core$Bit $tmp1683 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1680, $tmp1682);
bool $tmp1684 = $tmp1683.value;
if ($tmp1684) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1685 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1686 = *$tmp1685;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1687;
$tmp1687 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1687->value = $tmp1686;
org$frostlang$frostc$Type$Kind* $tmp1688 = &$tmp1678->typeKind;
org$frostlang$frostc$Type$Kind $tmp1689 = *$tmp1688;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1690;
$tmp1690 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1690->value = $tmp1689;
ITable* $tmp1691 = ((frost$core$Equatable*) $tmp1687)->$class->itable;
while ($tmp1691->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1691 = $tmp1691->next;
}
$fn1693 $tmp1692 = $tmp1691->methods[0];
frost$core$Bit $tmp1694 = $tmp1692(((frost$core$Equatable*) $tmp1687), ((frost$core$Equatable*) $tmp1690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1690)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1687)));
*(&local0) = $tmp1694;
goto block11;
block10:;
*(&local0) = $tmp1683;
goto block11;
block11:;
frost$core$Bit $tmp1695 = *(&local0);
bool $tmp1696 = $tmp1695.value;
if ($tmp1696) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1697 = (frost$core$Int) {532u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1698, $tmp1697);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:533
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1699 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1700 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1699, $tmp1700);
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp1701 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
$fn1703 $tmp1702 = ($fn1703) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1704 = $tmp1702(param0, param1);
frost$core$Bit $tmp1705 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1706;
$tmp1706 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1706->value = $tmp1705;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp1701, ((frost$core$Object*) $tmp1704), ((frost$core$Object*) $tmp1706));
frost$collections$Array$add$frost$collections$Array$T($tmp1699, ((frost$core$Object*) $tmp1701));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
frost$collections$Array* $tmp1707 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local1) = $tmp1699;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:534
frost$core$Int* $tmp1708 = &param1->$rawValue;
frost$core$Int $tmp1709 = *$tmp1708;
frost$core$Int $tmp1710 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:535:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1711 = $tmp1709.value;
int64_t $tmp1712 = $tmp1710.value;
bool $tmp1713 = $tmp1711 == $tmp1712;
frost$core$Bit $tmp1714 = (frost$core$Bit) {$tmp1713};
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block15; else goto block14;
block15:;
org$frostlang$frostc$IR$Statement$ID* $tmp1716 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1717 = *$tmp1716;
*(&local2) = $tmp1717;
org$frostlang$frostc$Type** $tmp1718 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1719 = *$tmp1718;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:536
frost$collections$HashMap** $tmp1720 = &param0->statements;
frost$collections$HashMap* $tmp1721 = *$tmp1720;
org$frostlang$frostc$IR$Statement$ID $tmp1722 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1723;
$tmp1723 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1723->value = $tmp1722;
frost$core$Object* $tmp1724 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1721, ((frost$collections$HashKey*) $tmp1723));
frost$core$Bit $tmp1725 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp1724) != NULL};
bool $tmp1726 = $tmp1725.value;
if ($tmp1726) goto block17; else goto block18;
block18:;
frost$core$Int $tmp1727 = (frost$core$Int) {536u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1728, $tmp1727, &$s1729);
abort(); // unreachable
block17:;
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1724)));
org$frostlang$frostc$IR$Statement* $tmp1730 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp1724);
frost$core$Frost$unref$frost$core$Object$Q($tmp1724);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1723)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:537
org$frostlang$frostc$IR$Statement* $tmp1731 = *(&local3);
frost$core$Int* $tmp1732 = &$tmp1731->$rawValue;
frost$core$Int $tmp1733 = *$tmp1732;
frost$core$Int $tmp1734 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:538:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1735 = $tmp1733.value;
int64_t $tmp1736 = $tmp1734.value;
bool $tmp1737 = $tmp1735 == $tmp1736;
frost$core$Bit $tmp1738 = (frost$core$Bit) {$tmp1737};
bool $tmp1739 = $tmp1738.value;
if ($tmp1739) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Position* $tmp1740 = (org$frostlang$frostc$Position*) ($tmp1731->$data + 0);
org$frostlang$frostc$Position $tmp1741 = *$tmp1740;
org$frostlang$frostc$IR$Value** $tmp1742 = (org$frostlang$frostc$IR$Value**) ($tmp1731->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1743 = *$tmp1742;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
org$frostlang$frostc$IR$Value* $tmp1744 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
*(&local4) = $tmp1743;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:539
frost$collections$Array* $tmp1745 = *(&local1);
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp1746 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
org$frostlang$frostc$IR$Value* $tmp1747 = *(&local4);
$fn1749 $tmp1748 = ($fn1749) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1750 = $tmp1748(param0, $tmp1747);
frost$core$Bit $tmp1751 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1752;
$tmp1752 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1752->value = $tmp1751;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp1746, ((frost$core$Object*) $tmp1750), ((frost$core$Object*) $tmp1752));
frost$collections$Array$add$frost$collections$Array$T($tmp1745, ((frost$core$Object*) $tmp1746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1746));
org$frostlang$frostc$IR$Value* $tmp1753 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
org$frostlang$frostc$IR$Statement* $tmp1754 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:544
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1755 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1756 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1757 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1756, $tmp1757);
frost$collections$Array* $tmp1758 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp1755, param5, $tmp1756, ((frost$collections$ListView*) $tmp1758));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
frost$collections$Array* $tmp1759 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1755;
block5:;
goto block1;
block3:;
frost$core$Int $tmp1760 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:548:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1761 = $tmp1660.value;
int64_t $tmp1762 = $tmp1760.value;
bool $tmp1763 = $tmp1761 == $tmp1762;
frost$core$Bit $tmp1764 = (frost$core$Bit) {$tmp1763};
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block22; else goto block1;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:549
frost$core$Int* $tmp1766 = &param3->$rawValue;
frost$core$Int $tmp1767 = *$tmp1766;
frost$core$Int $tmp1768 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:550:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1769 = $tmp1767.value;
int64_t $tmp1770 = $tmp1768.value;
bool $tmp1771 = $tmp1769 == $tmp1770;
frost$core$Bit $tmp1772 = (frost$core$Bit) {$tmp1771};
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block25; else goto block24;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:551
org$frostlang$frostc$Compiler** $tmp1774 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1775 = *$tmp1774;
org$frostlang$frostc$Type** $tmp1776 = &$tmp1775->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1777 = *$tmp1776;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:551:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1778 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1779 = *$tmp1778;
frost$core$String** $tmp1780 = &((org$frostlang$frostc$Symbol*) $tmp1777)->name;
frost$core$String* $tmp1781 = *$tmp1780;
frost$core$Bit $tmp1782 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1779, $tmp1781);
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type$Kind* $tmp1784 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1785 = *$tmp1784;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1786;
$tmp1786 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1786->value = $tmp1785;
org$frostlang$frostc$Type$Kind* $tmp1787 = &$tmp1777->typeKind;
org$frostlang$frostc$Type$Kind $tmp1788 = *$tmp1787;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1789;
$tmp1789 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1789->value = $tmp1788;
ITable* $tmp1790 = ((frost$core$Equatable*) $tmp1786)->$class->itable;
while ($tmp1790->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1790 = $tmp1790->next;
}
$fn1792 $tmp1791 = $tmp1790->methods[0];
frost$core$Bit $tmp1793 = $tmp1791(((frost$core$Equatable*) $tmp1786), ((frost$core$Equatable*) $tmp1789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1789)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1786)));
*(&local5) = $tmp1793;
goto block30;
block29:;
*(&local5) = $tmp1782;
goto block30;
block30:;
frost$core$Bit $tmp1794 = *(&local5);
bool $tmp1795 = $tmp1794.value;
if ($tmp1795) goto block31; else goto block32;
block32:;
frost$core$Int $tmp1796 = (frost$core$Int) {551u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1797, $tmp1796);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:552
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1798 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1799 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1798, $tmp1799);
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp1800 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
$fn1802 $tmp1801 = ($fn1802) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1803 = $tmp1801(param0, param1);
frost$core$Bit $tmp1804 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1805;
$tmp1805 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1805->value = $tmp1804;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp1800, ((frost$core$Object*) $tmp1803), ((frost$core$Object*) $tmp1805));
frost$collections$Array$add$frost$collections$Array$T($tmp1798, ((frost$core$Object*) $tmp1800));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
frost$collections$Array* $tmp1806 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
*(&local6) = $tmp1798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:553
frost$core$Int* $tmp1807 = &param1->$rawValue;
frost$core$Int $tmp1808 = *$tmp1807;
frost$core$Int $tmp1809 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:554:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1810 = $tmp1808.value;
int64_t $tmp1811 = $tmp1809.value;
bool $tmp1812 = $tmp1810 == $tmp1811;
frost$core$Bit $tmp1813 = (frost$core$Bit) {$tmp1812};
bool $tmp1814 = $tmp1813.value;
if ($tmp1814) goto block34; else goto block33;
block34:;
org$frostlang$frostc$IR$Statement$ID* $tmp1815 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1816 = *$tmp1815;
*(&local7) = $tmp1816;
org$frostlang$frostc$Type** $tmp1817 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1818 = *$tmp1817;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:555
frost$collections$HashMap** $tmp1819 = &param0->statements;
frost$collections$HashMap* $tmp1820 = *$tmp1819;
org$frostlang$frostc$IR$Statement$ID $tmp1821 = *(&local7);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1822;
$tmp1822 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1822->value = $tmp1821;
frost$core$Object* $tmp1823 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1820, ((frost$collections$HashKey*) $tmp1822));
frost$core$Bit $tmp1824 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp1823) != NULL};
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block36; else goto block37;
block37:;
frost$core$Int $tmp1826 = (frost$core$Int) {555u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1827, $tmp1826, &$s1828);
abort(); // unreachable
block36:;
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1823)));
org$frostlang$frostc$IR$Statement* $tmp1829 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) $tmp1823);
frost$core$Frost$unref$frost$core$Object$Q($tmp1823);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1822)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:556
org$frostlang$frostc$IR$Statement* $tmp1830 = *(&local8);
frost$core$Int* $tmp1831 = &$tmp1830->$rawValue;
frost$core$Int $tmp1832 = *$tmp1831;
frost$core$Int $tmp1833 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:557:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1834 = $tmp1832.value;
int64_t $tmp1835 = $tmp1833.value;
bool $tmp1836 = $tmp1834 == $tmp1835;
frost$core$Bit $tmp1837 = (frost$core$Bit) {$tmp1836};
bool $tmp1838 = $tmp1837.value;
if ($tmp1838) goto block39; else goto block38;
block39:;
org$frostlang$frostc$Position* $tmp1839 = (org$frostlang$frostc$Position*) ($tmp1830->$data + 0);
org$frostlang$frostc$Position $tmp1840 = *$tmp1839;
org$frostlang$frostc$IR$Value** $tmp1841 = (org$frostlang$frostc$IR$Value**) ($tmp1830->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1842 = *$tmp1841;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
org$frostlang$frostc$IR$Value* $tmp1843 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
*(&local9) = $tmp1842;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:558
frost$collections$Array* $tmp1844 = *(&local6);
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp1845 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
org$frostlang$frostc$IR$Value* $tmp1846 = *(&local9);
$fn1848 $tmp1847 = ($fn1848) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1849 = $tmp1847(param0, $tmp1846);
frost$core$Bit $tmp1850 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1851;
$tmp1851 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1851->value = $tmp1850;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp1845, ((frost$core$Object*) $tmp1849), ((frost$core$Object*) $tmp1851));
frost$collections$Array$add$frost$collections$Array$T($tmp1844, ((frost$core$Object*) $tmp1845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
org$frostlang$frostc$IR$Value* $tmp1852 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block38;
block38:;
org$frostlang$frostc$IR$Statement* $tmp1853 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:563
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1854 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1855 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1856 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1855, $tmp1856);
frost$collections$Array* $tmp1857 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp1854, param5, $tmp1855, ((frost$collections$ListView*) $tmp1857));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$collections$Array* $tmp1858 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp1854;
block24:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:569
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1859 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1860 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1861 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1860, $tmp1861);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1859, param5, $tmp1860);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
return $tmp1859;

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
org$frostlang$frostc$FieldDecl* local10 = NULL;
frost$core$Int local11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:573
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp1862 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
frost$collections$HashMap** $tmp1863 = &param0->entryStates;
frost$collections$HashMap* $tmp1864 = *$tmp1863;
org$frostlang$frostc$IR$Block$ID $tmp1865 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1866;
$tmp1866 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1866->value = $tmp1865;
frost$core$Object* $tmp1867 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1864, ((frost$collections$HashKey*) $tmp1866));
frost$core$Bit $tmp1868 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp1867) != NULL};
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1870 = (frost$core$Int) {573u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1871, $tmp1870, &$s1872);
abort(); // unreachable
block1:;
org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State($tmp1862, ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1867));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
org$frostlang$frostc$pass$Analyzer$State* $tmp1873 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
*(&local0) = $tmp1862;
frost$core$Frost$unref$frost$core$Object$Q($tmp1867);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1866)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:574
frost$collections$HashMap** $tmp1874 = &param0->blocks;
frost$collections$HashMap* $tmp1875 = *$tmp1874;
org$frostlang$frostc$IR$Block$ID $tmp1876 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1877;
$tmp1877 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1877->value = $tmp1876;
frost$core$Object* $tmp1878 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1875, ((frost$collections$HashKey*) $tmp1877));
frost$core$Bit $tmp1879 = (frost$core$Bit) {((org$frostlang$frostc$IR$Block*) $tmp1878) != NULL};
bool $tmp1880 = $tmp1879.value;
if ($tmp1880) goto block3; else goto block4;
block4:;
frost$core$Int $tmp1881 = (frost$core$Int) {574u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1882, $tmp1881, &$s1883);
abort(); // unreachable
block3:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1878)));
org$frostlang$frostc$IR$Block* $tmp1884 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1878);
frost$core$Frost$unref$frost$core$Object$Q($tmp1878);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp1877)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:575
org$frostlang$frostc$IR$Block* $tmp1885 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1886 = &$tmp1885->ids;
org$frostlang$frostc$LinkedList* $tmp1887 = *$tmp1886;
ITable* $tmp1888 = ((frost$collections$Iterable*) $tmp1887)->$class->itable;
while ($tmp1888->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1888 = $tmp1888->next;
}
$fn1890 $tmp1889 = $tmp1888->methods[0];
frost$collections$Iterator* $tmp1891 = $tmp1889(((frost$collections$Iterable*) $tmp1887));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$collections$Iterator* $tmp1892 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local2) = $tmp1891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:576
org$frostlang$frostc$IR$Block* $tmp1893 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1894 = &$tmp1893->statements;
org$frostlang$frostc$LinkedList* $tmp1895 = *$tmp1894;
ITable* $tmp1896 = ((frost$collections$Iterable*) $tmp1895)->$class->itable;
while ($tmp1896->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1896 = $tmp1896->next;
}
$fn1898 $tmp1897 = $tmp1896->methods[0];
frost$collections$Iterator* $tmp1899 = $tmp1897(((frost$collections$Iterable*) $tmp1895));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
frost$collections$Iterator* $tmp1900 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local3) = $tmp1899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:577
goto block5;
block5:;
frost$collections$Iterator* $tmp1901 = *(&local2);
ITable* $tmp1902 = $tmp1901->$class->itable;
while ($tmp1902->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1902 = $tmp1902->next;
}
$fn1904 $tmp1903 = $tmp1902->methods[0];
frost$core$Bit $tmp1905 = $tmp1903($tmp1901);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:577:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1906 = $tmp1905.value;
bool $tmp1907 = !$tmp1906;
frost$core$Bit $tmp1908 = (frost$core$Bit) {$tmp1907};
bool $tmp1909 = $tmp1908.value;
if ($tmp1909) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:578
frost$collections$Iterator* $tmp1910 = *(&local2);
ITable* $tmp1911 = $tmp1910->$class->itable;
while ($tmp1911->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1911 = $tmp1911->next;
}
$fn1913 $tmp1912 = $tmp1911->methods[1];
frost$core$Object* $tmp1914 = $tmp1912($tmp1910);
*(&local4) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1914)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1914);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:579
frost$collections$Iterator* $tmp1915 = *(&local3);
ITable* $tmp1916 = $tmp1915->$class->itable;
while ($tmp1916->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1916 = $tmp1916->next;
}
$fn1918 $tmp1917 = $tmp1916->methods[1];
frost$core$Object* $tmp1919 = $tmp1917($tmp1915);
frost$core$Int* $tmp1920 = &((org$frostlang$frostc$IR$Statement*) $tmp1919)->$rawValue;
frost$core$Int $tmp1921 = *$tmp1920;
frost$core$Int $tmp1922 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:580:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1923 = $tmp1921.value;
int64_t $tmp1924 = $tmp1922.value;
bool $tmp1925 = $tmp1923 == $tmp1924;
frost$core$Bit $tmp1926 = (frost$core$Bit) {$tmp1925};
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp1928 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1919)->$data + 0);
org$frostlang$frostc$Position $tmp1929 = *$tmp1928;
org$frostlang$frostc$IR$Value** $tmp1930 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1919)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1931 = *$tmp1930;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
org$frostlang$frostc$IR$Value* $tmp1932 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
*(&local5) = $tmp1931;
org$frostlang$frostc$IR$Value** $tmp1933 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1919)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1934 = *$tmp1933;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
org$frostlang$frostc$IR$Value* $tmp1935 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
*(&local6) = $tmp1934;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:581
org$frostlang$frostc$IR$Value* $tmp1936 = *(&local6);
frost$core$Int* $tmp1937 = &$tmp1936->$rawValue;
frost$core$Int $tmp1938 = *$tmp1937;
frost$core$Int $tmp1939 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:582:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1940 = $tmp1938.value;
int64_t $tmp1941 = $tmp1939.value;
bool $tmp1942 = $tmp1940 == $tmp1941;
frost$core$Bit $tmp1943 = (frost$core$Bit) {$tmp1942};
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block14; else goto block15;
block14:;
frost$core$Int* $tmp1945 = (frost$core$Int*) ($tmp1936->$data + 0);
frost$core$Int $tmp1946 = *$tmp1945;
*(&local7) = $tmp1946;
org$frostlang$frostc$Type** $tmp1947 = (org$frostlang$frostc$Type**) ($tmp1936->$data + 8);
org$frostlang$frostc$Type* $tmp1948 = *$tmp1947;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:583
org$frostlang$frostc$pass$Analyzer$State* $tmp1949 = *(&local0);
frost$collections$Array** $tmp1950 = &$tmp1949->locals;
frost$collections$Array* $tmp1951 = *$tmp1950;
frost$core$Int $tmp1952 = *(&local7);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1953 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR$Value* $tmp1954 = *(&local5);
org$frostlang$frostc$pass$Analyzer$State* $tmp1955 = *(&local0);
$fn1957 $tmp1956 = ($fn1957) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1958 = $tmp1956(param0, $tmp1954, $tmp1955);
org$frostlang$frostc$Type** $tmp1959 = &$tmp1958->type;
org$frostlang$frostc$Type* $tmp1960 = *$tmp1959;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1961 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1962 = (frost$core$Int) {2u};
frost$core$Int $tmp1963 = *(&local7);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int($tmp1961, $tmp1962, $tmp1963);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1953, $tmp1960, $tmp1961);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:583:42
frost$core$Int $tmp1964 = (frost$core$Int) {0u};
int64_t $tmp1965 = $tmp1952.value;
int64_t $tmp1966 = $tmp1964.value;
bool $tmp1967 = $tmp1965 >= $tmp1966;
frost$core$Bit $tmp1968 = (frost$core$Bit) {$tmp1967};
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block20; else goto block19;
block20:;
ITable* $tmp1970 = ((frost$collections$CollectionView*) $tmp1951)->$class->itable;
while ($tmp1970->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1970 = $tmp1970->next;
}
$fn1972 $tmp1971 = $tmp1970->methods[0];
frost$core$Int $tmp1973 = $tmp1971(((frost$collections$CollectionView*) $tmp1951));
int64_t $tmp1974 = $tmp1952.value;
int64_t $tmp1975 = $tmp1973.value;
bool $tmp1976 = $tmp1974 < $tmp1975;
frost$core$Bit $tmp1977 = (frost$core$Bit) {$tmp1976};
bool $tmp1978 = $tmp1977.value;
if ($tmp1978) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1979 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1980, $tmp1979, &$s1981);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1982 = &$tmp1951->data;
frost$core$Object** $tmp1983 = *$tmp1982;
frost$core$Int64 $tmp1984 = frost$core$Int64$init$frost$core$Int($tmp1952);
int64_t $tmp1985 = $tmp1984.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
frost$core$Object* $tmp1986 = $tmp1983[$tmp1985];
frost$core$Frost$unref$frost$core$Object$Q($tmp1986);
$tmp1983[$tmp1985] = ((frost$core$Object*) $tmp1953);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
goto block13;
block15:;
frost$core$Int $tmp1987 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:586:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1988 = $tmp1938.value;
int64_t $tmp1989 = $tmp1987.value;
bool $tmp1990 = $tmp1988 == $tmp1989;
frost$core$Bit $tmp1991 = (frost$core$Bit) {$tmp1990};
bool $tmp1992 = $tmp1991.value;
if ($tmp1992) goto block21; else goto block13;
block21:;
org$frostlang$frostc$IR$Statement$ID* $tmp1993 = (org$frostlang$frostc$IR$Statement$ID*) ($tmp1936->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1994 = *$tmp1993;
*(&local8) = $tmp1994;
org$frostlang$frostc$Type** $tmp1995 = (org$frostlang$frostc$Type**) ($tmp1936->$data + 8);
org$frostlang$frostc$Type* $tmp1996 = *$tmp1995;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:587
frost$collections$HashMap** $tmp1997 = &param0->statements;
frost$collections$HashMap* $tmp1998 = *$tmp1997;
org$frostlang$frostc$IR$Statement$ID $tmp1999 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2000;
$tmp2000 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2000->value = $tmp1999;
frost$core$Object* $tmp2001 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1998, ((frost$collections$HashKey*) $tmp2000));
frost$core$Bit $tmp2002 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp2001) != NULL};
bool $tmp2003 = $tmp2002.value;
if ($tmp2003) goto block23; else goto block24;
block24:;
frost$core$Int $tmp2004 = (frost$core$Int) {587u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2005, $tmp2004, &$s2006);
abort(); // unreachable
block23:;
frost$core$Int* $tmp2007 = &((org$frostlang$frostc$IR$Statement*) $tmp2001)->$rawValue;
frost$core$Int $tmp2008 = *$tmp2007;
frost$core$Int $tmp2009 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:588:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2010 = $tmp2008.value;
int64_t $tmp2011 = $tmp2009.value;
bool $tmp2012 = $tmp2010 == $tmp2011;
frost$core$Bit $tmp2013 = (frost$core$Bit) {$tmp2012};
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block26; else goto block25;
block26:;
org$frostlang$frostc$Position* $tmp2015 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2001)->$data + 0);
org$frostlang$frostc$Position $tmp2016 = *$tmp2015;
org$frostlang$frostc$IR$Value** $tmp2017 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2001)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2018 = *$tmp2017;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
org$frostlang$frostc$IR$Value* $tmp2019 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
*(&local9) = $tmp2018;
org$frostlang$frostc$FieldDecl** $tmp2020 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp2001)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp2021 = *$tmp2020;
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
org$frostlang$frostc$FieldDecl* $tmp2022 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local10) = $tmp2021;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:589
org$frostlang$frostc$IR$Value* $tmp2023 = *(&local9);
frost$core$Int* $tmp2024 = &$tmp2023->$rawValue;
frost$core$Int $tmp2025 = *$tmp2024;
frost$core$Int $tmp2026 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:590:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2027 = $tmp2025.value;
int64_t $tmp2028 = $tmp2026.value;
bool $tmp2029 = $tmp2027 == $tmp2028;
frost$core$Bit $tmp2030 = (frost$core$Bit) {$tmp2029};
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block29; else goto block28;
block29:;
frost$core$Int* $tmp2032 = (frost$core$Int*) ($tmp2023->$data + 0);
frost$core$Int $tmp2033 = *$tmp2032;
*(&local11) = $tmp2033;
org$frostlang$frostc$Type** $tmp2034 = (org$frostlang$frostc$Type**) ($tmp2023->$data + 8);
org$frostlang$frostc$Type* $tmp2035 = *$tmp2034;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:591
org$frostlang$frostc$pass$Analyzer$State* $tmp2036 = *(&local0);
frost$collections$Array** $tmp2037 = &$tmp2036->locals;
frost$collections$Array* $tmp2038 = *$tmp2037;
frost$core$Int $tmp2039 = *(&local11);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2040 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR** $tmp2041 = &param0->ir;
org$frostlang$frostc$IR* $tmp2042 = *$tmp2041;
frost$collections$Array** $tmp2043 = &$tmp2042->locals;
frost$collections$Array* $tmp2044 = *$tmp2043;
frost$core$Int $tmp2045 = *(&local11);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:591:91
frost$core$Int $tmp2046 = (frost$core$Int) {0u};
int64_t $tmp2047 = $tmp2045.value;
int64_t $tmp2048 = $tmp2046.value;
bool $tmp2049 = $tmp2047 >= $tmp2048;
frost$core$Bit $tmp2050 = (frost$core$Bit) {$tmp2049};
bool $tmp2051 = $tmp2050.value;
if ($tmp2051) goto block34; else goto block33;
block34:;
ITable* $tmp2052 = ((frost$collections$CollectionView*) $tmp2044)->$class->itable;
while ($tmp2052->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2052 = $tmp2052->next;
}
$fn2054 $tmp2053 = $tmp2052->methods[0];
frost$core$Int $tmp2055 = $tmp2053(((frost$collections$CollectionView*) $tmp2044));
int64_t $tmp2056 = $tmp2045.value;
int64_t $tmp2057 = $tmp2055.value;
bool $tmp2058 = $tmp2056 < $tmp2057;
frost$core$Bit $tmp2059 = (frost$core$Bit) {$tmp2058};
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block32; else goto block33;
block33:;
frost$core$Int $tmp2061 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2062, $tmp2061, &$s2063);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2064 = &$tmp2044->data;
frost$core$Object** $tmp2065 = *$tmp2064;
frost$core$Int64 $tmp2066 = frost$core$Int64$init$frost$core$Int($tmp2045);
int64_t $tmp2067 = $tmp2066.value;
frost$core$Object* $tmp2068 = $tmp2065[$tmp2067];
frost$core$Frost$ref$frost$core$Object$Q($tmp2068);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp2069 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp2070 = (frost$core$Int) {2u};
frost$core$Int $tmp2071 = *(&local11);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int($tmp2069, $tmp2070, $tmp2071);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp2040, ((org$frostlang$frostc$Type*) $tmp2068), $tmp2069);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:591:58
frost$core$Int $tmp2072 = (frost$core$Int) {0u};
int64_t $tmp2073 = $tmp2039.value;
int64_t $tmp2074 = $tmp2072.value;
bool $tmp2075 = $tmp2073 >= $tmp2074;
frost$core$Bit $tmp2076 = (frost$core$Bit) {$tmp2075};
bool $tmp2077 = $tmp2076.value;
if ($tmp2077) goto block38; else goto block37;
block38:;
ITable* $tmp2078 = ((frost$collections$CollectionView*) $tmp2038)->$class->itable;
while ($tmp2078->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2078 = $tmp2078->next;
}
$fn2080 $tmp2079 = $tmp2078->methods[0];
frost$core$Int $tmp2081 = $tmp2079(((frost$collections$CollectionView*) $tmp2038));
int64_t $tmp2082 = $tmp2039.value;
int64_t $tmp2083 = $tmp2081.value;
bool $tmp2084 = $tmp2082 < $tmp2083;
frost$core$Bit $tmp2085 = (frost$core$Bit) {$tmp2084};
bool $tmp2086 = $tmp2085.value;
if ($tmp2086) goto block36; else goto block37;
block37:;
frost$core$Int $tmp2087 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2088, $tmp2087, &$s2089);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp2090 = &$tmp2038->data;
frost$core$Object** $tmp2091 = *$tmp2090;
frost$core$Int64 $tmp2092 = frost$core$Int64$init$frost$core$Int($tmp2039);
int64_t $tmp2093 = $tmp2092.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
frost$core$Object* $tmp2094 = $tmp2091[$tmp2093];
frost$core$Frost$unref$frost$core$Object$Q($tmp2094);
$tmp2091[$tmp2093] = ((frost$core$Object*) $tmp2040);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
frost$core$Frost$unref$frost$core$Object$Q($tmp2068);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
goto block28;
block28:;
org$frostlang$frostc$FieldDecl* $tmp2095 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2096 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block25;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2001);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2000)));
goto block13;
block13:;
org$frostlang$frostc$IR$Value* $tmp2097 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2098 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block11:;
frost$core$Int $tmp2099 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:600:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2100 = $tmp1921.value;
int64_t $tmp2101 = $tmp2099.value;
bool $tmp2102 = $tmp2100 == $tmp2101;
frost$core$Bit $tmp2103 = (frost$core$Bit) {$tmp2102};
bool $tmp2104 = $tmp2103.value;
if ($tmp2104) goto block39; else goto block9;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:601
frost$core$Bit* $tmp2105 = &param0->reportErrors;
frost$core$Bit $tmp2106 = *$tmp2105;
bool $tmp2107 = $tmp2106.value;
if ($tmp2107) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:602
org$frostlang$frostc$IR$Statement$ID $tmp2108 = *(&local4);
org$frostlang$frostc$pass$Analyzer$State* $tmp2109 = *(&local0);
$fn2111 $tmp2110 = ($fn2111) param0->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2112 = $tmp2110(param0, $tmp2108, $tmp2109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
goto block42;
block42:;
goto block9;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1919);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:607
org$frostlang$frostc$IR$Block* $tmp2113 = *(&local1);
frost$core$Int $tmp2114 = param1.exit;
org$frostlang$frostc$pass$Analyzer$State* $tmp2115 = *(&local0);
$fn2117 $tmp2116 = ($fn2117) param0->$class->vtable[7];
$tmp2116(param0, $tmp2113, $tmp2114, $tmp2115);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:608
org$frostlang$frostc$pass$Analyzer$State* $tmp2118 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$collections$Iterator* $tmp2119 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2120 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local2) = ((frost$collections$Iterator*) NULL);
org$frostlang$frostc$IR$Block* $tmp2121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$pass$Analyzer$State* $tmp2122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
return $tmp2118;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:612
frost$collections$HashMap** $tmp2123 = &param0->blocks;
frost$collections$HashMap* $tmp2124 = *$tmp2123;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2125;
$tmp2125 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2125->value = param1;
frost$core$Object* $tmp2126 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2124, ((frost$collections$HashKey*) $tmp2125));
frost$core$Bit $tmp2127 = (frost$core$Bit) {((org$frostlang$frostc$IR$Block*) $tmp2126) != NULL};
bool $tmp2128 = $tmp2127.value;
if ($tmp2128) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2129 = (frost$core$Int) {612u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2130, $tmp2129, &$s2131);
abort(); // unreachable
block1:;
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2126)));
org$frostlang$frostc$IR$Block* $tmp2132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp2126);
frost$core$Frost$unref$frost$core$Object$Q($tmp2126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2125)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:613
org$frostlang$frostc$IR$Block* $tmp2133 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp2134 = &$tmp2133->statements;
org$frostlang$frostc$LinkedList* $tmp2135 = *$tmp2134;
$fn2137 $tmp2136 = ($fn2137) $tmp2135->$class->vtable[6];
frost$core$Object* $tmp2138 = $tmp2136($tmp2135);
frost$core$Int* $tmp2139 = &((org$frostlang$frostc$IR$Statement*) $tmp2138)->$rawValue;
frost$core$Int $tmp2140 = *$tmp2139;
frost$core$Int $tmp2141 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:614:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2142 = $tmp2140.value;
int64_t $tmp2143 = $tmp2141.value;
bool $tmp2144 = $tmp2142 == $tmp2143;
frost$core$Bit $tmp2145 = (frost$core$Bit) {$tmp2144};
bool $tmp2146 = $tmp2145.value;
if ($tmp2146) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2147 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2138)->$data + 0);
org$frostlang$frostc$Position $tmp2148 = *$tmp2147;
org$frostlang$frostc$IR$Block$ID* $tmp2149 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2138)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2150 = *$tmp2149;
*(&local1) = $tmp2150;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:615
org$frostlang$frostc$IR$Block* $tmp2151 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp2152 = &$tmp2151->id;
org$frostlang$frostc$IR$Block$ID $tmp2153 = *$tmp2152;
frost$core$Int $tmp2154 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:615:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Block$ID* $tmp2155 = &(&local3)->id;
*$tmp2155 = $tmp2153;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Int* $tmp2156 = &(&local3)->exit;
*$tmp2156 = $tmp2154;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2157 = *(&local3);
*(&local2) = $tmp2157;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2158 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp2159 = *(&local1);
$fn2161 $tmp2160 = ($fn2161) param0->$class->vtable[6];
$tmp2160(param0, $tmp2158, $tmp2159);
goto block3;
block5:;
frost$core$Int $tmp2162 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:617:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2163 = $tmp2140.value;
int64_t $tmp2164 = $tmp2162.value;
bool $tmp2165 = $tmp2163 == $tmp2164;
frost$core$Bit $tmp2166 = (frost$core$Bit) {$tmp2165};
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2168 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2138)->$data + 0);
org$frostlang$frostc$Position $tmp2169 = *$tmp2168;
org$frostlang$frostc$IR$Value** $tmp2170 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2138)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2171 = *$tmp2170;
org$frostlang$frostc$IR$Block$ID* $tmp2172 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2138)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2173 = *$tmp2172;
*(&local4) = $tmp2173;
org$frostlang$frostc$IR$Block$ID* $tmp2174 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2138)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2175 = *$tmp2174;
*(&local5) = $tmp2175;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:618
org$frostlang$frostc$IR$Block* $tmp2176 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp2177 = &$tmp2176->id;
org$frostlang$frostc$IR$Block$ID $tmp2178 = *$tmp2177;
frost$core$Int $tmp2179 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:618:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Block$ID* $tmp2180 = &(&local7)->id;
*$tmp2180 = $tmp2178;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Int* $tmp2181 = &(&local7)->exit;
*$tmp2181 = $tmp2179;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2182 = *(&local7);
*(&local6) = $tmp2182;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2183 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2184 = *(&local4);
$fn2186 $tmp2185 = ($fn2186) param0->$class->vtable[6];
$tmp2185(param0, $tmp2183, $tmp2184);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:619
org$frostlang$frostc$IR$Block* $tmp2187 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp2188 = &$tmp2187->id;
org$frostlang$frostc$IR$Block$ID $tmp2189 = *$tmp2188;
frost$core$Int $tmp2190 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:619:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Block$ID* $tmp2191 = &(&local9)->id;
*$tmp2191 = $tmp2189;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Int* $tmp2192 = &(&local9)->exit;
*$tmp2192 = $tmp2190;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2193 = *(&local9);
*(&local8) = $tmp2193;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2194 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp2195 = *(&local5);
$fn2197 $tmp2196 = ($fn2197) param0->$class->vtable[6];
$tmp2196(param0, $tmp2194, $tmp2195);
goto block3;
block9:;
frost$core$Int $tmp2198 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:621:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2199 = $tmp2140.value;
int64_t $tmp2200 = $tmp2198.value;
bool $tmp2201 = $tmp2199 == $tmp2200;
frost$core$Bit $tmp2202 = (frost$core$Bit) {$tmp2201};
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block13; else goto block14;
block13:;
goto block3;
block14:;
frost$core$Int $tmp2204 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:623:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2205 = $tmp2140.value;
int64_t $tmp2206 = $tmp2204.value;
bool $tmp2207 = $tmp2205 == $tmp2206;
frost$core$Bit $tmp2208 = (frost$core$Bit) {$tmp2207};
bool $tmp2209 = $tmp2208.value;
if ($tmp2209) goto block16; else goto block17;
block16:;
goto block3;
block17:;
frost$core$Int $tmp2210 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:625:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2211 = $tmp2140.value;
int64_t $tmp2212 = $tmp2210.value;
bool $tmp2213 = $tmp2211 == $tmp2212;
frost$core$Bit $tmp2214 = (frost$core$Bit) {$tmp2213};
bool $tmp2215 = $tmp2214.value;
if ($tmp2215) goto block19; else goto block20;
block19:;
goto block3;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:628
frost$core$Int $tmp2216 = (frost$core$Int) {628u};
org$frostlang$frostc$IR$Block* $tmp2217 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp2218 = &$tmp2217->statements;
org$frostlang$frostc$LinkedList* $tmp2219 = *$tmp2218;
$fn2221 $tmp2220 = ($fn2221) $tmp2219->$class->vtable[6];
frost$core$Object* $tmp2222 = $tmp2220($tmp2219);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:628:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2224 $tmp2223 = ($fn2224) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2222))->$class->vtable[0];
frost$core$String* $tmp2225 = $tmp2223(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2222)));
frost$core$String* $tmp2226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2227, $tmp2225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2228, $tmp2216, $tmp2226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Frost$unref$frost$core$Object$Q($tmp2222);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2138);
org$frostlang$frostc$IR$Block* $tmp2229 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* param0) {

frost$core$Int local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$collections$Iterator* local2 = NULL;
frost$collections$Iterator* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:634
org$frostlang$frostc$MethodDecl** $tmp2230 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2231 = *$tmp2230;
frost$core$String* $tmp2232 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp2231);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:634:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp2232);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s2233);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:635
frost$core$Int $tmp2234 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp2235 = &param0->ir;
org$frostlang$frostc$IR* $tmp2236 = *$tmp2235;
frost$collections$Array** $tmp2237 = &$tmp2236->locals;
frost$collections$Array* $tmp2238 = *$tmp2237;
ITable* $tmp2239 = ((frost$collections$CollectionView*) $tmp2238)->$class->itable;
while ($tmp2239->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2239 = $tmp2239->next;
}
$fn2241 $tmp2240 = $tmp2239->methods[0];
frost$core$Int $tmp2242 = $tmp2240(((frost$collections$CollectionView*) $tmp2238));
frost$core$Bit $tmp2243 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2244 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2234, $tmp2242, $tmp2243);
frost$core$Int $tmp2245 = $tmp2244.min;
*(&local0) = $tmp2245;
frost$core$Int $tmp2246 = $tmp2244.max;
frost$core$Bit $tmp2247 = $tmp2244.inclusive;
bool $tmp2248 = $tmp2247.value;
frost$core$Int $tmp2249 = (frost$core$Int) {1u};
if ($tmp2248) goto block6; else goto block7;
block6:;
int64_t $tmp2250 = $tmp2245.value;
int64_t $tmp2251 = $tmp2246.value;
bool $tmp2252 = $tmp2250 <= $tmp2251;
frost$core$Bit $tmp2253 = (frost$core$Bit) {$tmp2252};
bool $tmp2254 = $tmp2253.value;
if ($tmp2254) goto block3; else goto block4;
block7:;
int64_t $tmp2255 = $tmp2245.value;
int64_t $tmp2256 = $tmp2246.value;
bool $tmp2257 = $tmp2255 < $tmp2256;
frost$core$Bit $tmp2258 = (frost$core$Bit) {$tmp2257};
bool $tmp2259 = $tmp2258.value;
if ($tmp2259) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:636
frost$core$Int $tmp2260 = *(&local0);
frost$core$Int$wrapper* $tmp2261;
$tmp2261 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp2261->value = $tmp2260;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:636:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2263 $tmp2262 = ($fn2263) ((frost$core$Object*) $tmp2261)->$class->vtable[0];
frost$core$String* $tmp2264 = $tmp2262(((frost$core$Object*) $tmp2261));
frost$core$String* $tmp2265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2266, $tmp2264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
frost$core$String* $tmp2267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2265, &$s2268);
org$frostlang$frostc$IR** $tmp2269 = &param0->ir;
org$frostlang$frostc$IR* $tmp2270 = *$tmp2269;
frost$collections$Array** $tmp2271 = &$tmp2270->locals;
frost$collections$Array* $tmp2272 = *$tmp2271;
frost$core$Int $tmp2273 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:636:54
frost$core$Int $tmp2274 = (frost$core$Int) {0u};
int64_t $tmp2275 = $tmp2273.value;
int64_t $tmp2276 = $tmp2274.value;
bool $tmp2277 = $tmp2275 >= $tmp2276;
frost$core$Bit $tmp2278 = (frost$core$Bit) {$tmp2277};
bool $tmp2279 = $tmp2278.value;
if ($tmp2279) goto block12; else goto block11;
block12:;
ITable* $tmp2280 = ((frost$collections$CollectionView*) $tmp2272)->$class->itable;
while ($tmp2280->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2280 = $tmp2280->next;
}
$fn2282 $tmp2281 = $tmp2280->methods[0];
frost$core$Int $tmp2283 = $tmp2281(((frost$collections$CollectionView*) $tmp2272));
int64_t $tmp2284 = $tmp2273.value;
int64_t $tmp2285 = $tmp2283.value;
bool $tmp2286 = $tmp2284 < $tmp2285;
frost$core$Bit $tmp2287 = (frost$core$Bit) {$tmp2286};
bool $tmp2288 = $tmp2287.value;
if ($tmp2288) goto block10; else goto block11;
block11:;
frost$core$Int $tmp2289 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2290, $tmp2289, &$s2291);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2292 = &$tmp2272->data;
frost$core$Object** $tmp2293 = *$tmp2292;
frost$core$Int64 $tmp2294 = frost$core$Int64$init$frost$core$Int($tmp2273);
int64_t $tmp2295 = $tmp2294.value;
frost$core$Object* $tmp2296 = $tmp2293[$tmp2295];
frost$core$Frost$ref$frost$core$Object$Q($tmp2296);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:636:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2298 $tmp2297 = ($fn2298) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2296))->$class->vtable[0];
frost$core$String* $tmp2299 = $tmp2297(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2296)));
frost$core$String* $tmp2300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2267, $tmp2299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$String* $tmp2301 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2300, &$s2302);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:636:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp2301);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s2303);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$Frost$unref$frost$core$Object$Q($tmp2296);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
frost$core$Int $tmp2304 = *(&local0);
int64_t $tmp2305 = $tmp2246.value;
int64_t $tmp2306 = $tmp2304.value;
int64_t $tmp2307 = $tmp2305 - $tmp2306;
frost$core$Int $tmp2308 = (frost$core$Int) {$tmp2307};
if ($tmp2248) goto block17; else goto block18;
block17:;
int64_t $tmp2309 = $tmp2308.value;
int64_t $tmp2310 = $tmp2249.value;
bool $tmp2311 = $tmp2309 >= $tmp2310;
frost$core$Bit $tmp2312 = (frost$core$Bit) {$tmp2311};
bool $tmp2313 = $tmp2312.value;
if ($tmp2313) goto block16; else goto block4;
block18:;
int64_t $tmp2314 = $tmp2308.value;
int64_t $tmp2315 = $tmp2249.value;
bool $tmp2316 = $tmp2314 > $tmp2315;
frost$core$Bit $tmp2317 = (frost$core$Bit) {$tmp2316};
bool $tmp2318 = $tmp2317.value;
if ($tmp2318) goto block16; else goto block4;
block16:;
int64_t $tmp2319 = $tmp2304.value;
int64_t $tmp2320 = $tmp2249.value;
int64_t $tmp2321 = $tmp2319 + $tmp2320;
frost$core$Int $tmp2322 = (frost$core$Int) {$tmp2321};
*(&local0) = $tmp2322;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:638
org$frostlang$frostc$IR** $tmp2323 = &param0->ir;
org$frostlang$frostc$IR* $tmp2324 = *$tmp2323;
frost$collections$Array** $tmp2325 = &$tmp2324->blocks;
frost$collections$Array* $tmp2326 = *$tmp2325;
ITable* $tmp2327 = ((frost$collections$Iterable*) $tmp2326)->$class->itable;
while ($tmp2327->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2327 = $tmp2327->next;
}
$fn2329 $tmp2328 = $tmp2327->methods[0];
frost$collections$Iterator* $tmp2330 = $tmp2328(((frost$collections$Iterable*) $tmp2326));
goto block19;
block19:;
ITable* $tmp2331 = $tmp2330->$class->itable;
while ($tmp2331->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2331 = $tmp2331->next;
}
$fn2333 $tmp2332 = $tmp2331->methods[0];
frost$core$Bit $tmp2334 = $tmp2332($tmp2330);
bool $tmp2335 = $tmp2334.value;
if ($tmp2335) goto block21; else goto block20;
block20:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2336 = $tmp2330->$class->itable;
while ($tmp2336->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2336 = $tmp2336->next;
}
$fn2338 $tmp2337 = $tmp2336->methods[1];
frost$core$Object* $tmp2339 = $tmp2337($tmp2330);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2339)));
org$frostlang$frostc$IR$Block* $tmp2340 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2339);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:639
org$frostlang$frostc$IR$Block* $tmp2341 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2342 = &$tmp2341->id;
org$frostlang$frostc$IR$Block$ID $tmp2343 = *$tmp2342;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2344;
$tmp2344 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2344->value = $tmp2343;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:639:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2346 $tmp2345 = ($fn2346) ((frost$core$Object*) $tmp2344)->$class->vtable[0];
frost$core$String* $tmp2347 = $tmp2345(((frost$core$Object*) $tmp2344));
frost$core$String* $tmp2348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2349, $tmp2347);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
frost$core$String* $tmp2350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2348, &$s2351);
frost$io$Console$print$frost$core$String($tmp2350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:640
frost$collections$HashMap** $tmp2352 = &param0->entryStates;
frost$collections$HashMap* $tmp2353 = *$tmp2352;
org$frostlang$frostc$IR$Block* $tmp2354 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2355 = &$tmp2354->id;
org$frostlang$frostc$IR$Block$ID $tmp2356 = *$tmp2355;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2357;
$tmp2357 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2357->value = $tmp2356;
frost$core$Object* $tmp2358 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2353, ((frost$collections$HashKey*) $tmp2357));
frost$core$Bit $tmp2359 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2358) != NULL};
bool $tmp2360 = $tmp2359.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2358);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2357)));
if ($tmp2360) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:641
frost$collections$HashMap** $tmp2361 = &param0->entryStates;
frost$collections$HashMap* $tmp2362 = *$tmp2361;
org$frostlang$frostc$IR$Block* $tmp2363 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2364 = &$tmp2363->id;
org$frostlang$frostc$IR$Block$ID $tmp2365 = *$tmp2364;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2366;
$tmp2366 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2366->value = $tmp2365;
frost$core$Object* $tmp2367 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2362, ((frost$collections$HashKey*) $tmp2366));
frost$core$Bit $tmp2368 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2367) != NULL};
bool $tmp2369 = $tmp2368.value;
if ($tmp2369) goto block25; else goto block26;
block26:;
frost$core$Int $tmp2370 = (frost$core$Int) {641u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2371, $tmp2370, &$s2372);
abort(); // unreachable
block25:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:641:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2374 $tmp2373 = ($fn2374) ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2367))->$class->vtable[0];
frost$core$String* $tmp2375 = $tmp2373(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2367)));
frost$core$String* $tmp2376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2377, $tmp2375);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
frost$io$Console$print$frost$core$String($tmp2376);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
frost$core$Frost$unref$frost$core$Object$Q($tmp2367);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2366)));
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:643
// begin inline call to method frost.io.Console.printLine() from Analyzer.frost:643:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s2378);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:644
org$frostlang$frostc$IR$Block* $tmp2379 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2380 = &$tmp2379->ids;
org$frostlang$frostc$LinkedList* $tmp2381 = *$tmp2380;
ITable* $tmp2382 = ((frost$collections$Iterable*) $tmp2381)->$class->itable;
while ($tmp2382->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2382 = $tmp2382->next;
}
$fn2384 $tmp2383 = $tmp2382->methods[0];
frost$collections$Iterator* $tmp2385 = $tmp2383(((frost$collections$Iterable*) $tmp2381));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
frost$collections$Iterator* $tmp2386 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
*(&local2) = $tmp2385;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:645
org$frostlang$frostc$IR$Block* $tmp2387 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2388 = &$tmp2387->statements;
org$frostlang$frostc$LinkedList* $tmp2389 = *$tmp2388;
ITable* $tmp2390 = ((frost$collections$Iterable*) $tmp2389)->$class->itable;
while ($tmp2390->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2390 = $tmp2390->next;
}
$fn2392 $tmp2391 = $tmp2390->methods[0];
frost$collections$Iterator* $tmp2393 = $tmp2391(((frost$collections$Iterable*) $tmp2389));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
frost$collections$Iterator* $tmp2394 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
*(&local3) = $tmp2393;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:646
goto block29;
block29:;
frost$collections$Iterator* $tmp2395 = *(&local2);
ITable* $tmp2396 = $tmp2395->$class->itable;
while ($tmp2396->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2396 = $tmp2396->next;
}
$fn2398 $tmp2397 = $tmp2396->methods[0];
frost$core$Bit $tmp2399 = $tmp2397($tmp2395);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:646:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2400 = $tmp2399.value;
bool $tmp2401 = !$tmp2400;
frost$core$Bit $tmp2402 = (frost$core$Bit) {$tmp2401};
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:647
frost$collections$Iterator* $tmp2404 = *(&local2);
ITable* $tmp2405 = $tmp2404->$class->itable;
while ($tmp2405->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2405 = $tmp2405->next;
}
$fn2407 $tmp2406 = $tmp2405->methods[1];
frost$core$Object* $tmp2408 = $tmp2406($tmp2404);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2409;
$tmp2409 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2409->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2408)->value;
// begin inline call to method frost.io.Console.print(o:frost.core.Object) from Analyzer.frost:647:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:54
$fn2411 $tmp2410 = ($fn2411) ((frost$core$Object*) $tmp2409)->$class->vtable[0];
frost$core$String* $tmp2412 = $tmp2410(((frost$core$Object*) $tmp2409));
frost$io$Console$print$frost$core$String($tmp2412);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
frost$core$Frost$unref$frost$core$Object$Q($tmp2408);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:648
frost$io$Console$print$frost$core$String(&$s2413);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:649
frost$collections$Iterator* $tmp2414 = *(&local3);
ITable* $tmp2415 = $tmp2414->$class->itable;
while ($tmp2415->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2415 = $tmp2415->next;
}
$fn2417 $tmp2416 = $tmp2415->methods[1];
frost$core$Object* $tmp2418 = $tmp2416($tmp2414);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Analyzer.frost:649:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn2420 $tmp2419 = ($fn2420) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2418))->$class->vtable[0];
frost$core$String* $tmp2421 = $tmp2419(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2418)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp2421);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
frost$core$Frost$unref$frost$core$Object$Q($tmp2418);
goto block29;
block31:;
frost$collections$Iterator* $tmp2422 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2423 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2339);
org$frostlang$frostc$IR$Block* $tmp2424 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
return;

}
void org$frostlang$frostc$pass$Analyzer$analyze(org$frostlang$frostc$pass$Analyzer* param0) {

org$frostlang$frostc$pass$Analyzer$DataFlowValue* local0 = NULL;
org$frostlang$frostc$pass$Analyzer$State* local1 = NULL;
frost$core$Int local2;
org$frostlang$frostc$MethodDecl$Parameter* local3 = NULL;
org$frostlang$frostc$IR$Block* local4 = NULL;
frost$collections$Iterator* local5 = NULL;
frost$collections$Iterator* local6 = NULL;
org$frostlang$frostc$IR$Block$ID local7;
org$frostlang$frostc$IR$Block* local8 = NULL;
org$frostlang$frostc$MethodDecl$Kind local9;
org$frostlang$frostc$MethodDecl$Kind local10;
org$frostlang$frostc$pass$Analyzer$BlockExit local11;
org$frostlang$frostc$pass$Analyzer$BlockExit local12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:655
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2425 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp2426 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2427 = *$tmp2426;
org$frostlang$frostc$Type** $tmp2428 = &$tmp2427->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp2429 = *$tmp2428;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp2430 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp2431 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp2430, $tmp2431);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp2425, $tmp2429, $tmp2430);
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2432 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
*(&local0) = $tmp2425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:656
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp2433 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
org$frostlang$frostc$pass$Analyzer$State$init($tmp2433);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
org$frostlang$frostc$pass$Analyzer$State* $tmp2434 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
*(&local1) = $tmp2433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:657
frost$core$Int $tmp2435 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp2436 = &param0->ir;
org$frostlang$frostc$IR* $tmp2437 = *$tmp2436;
frost$collections$Array** $tmp2438 = &$tmp2437->locals;
frost$collections$Array* $tmp2439 = *$tmp2438;
ITable* $tmp2440 = ((frost$collections$CollectionView*) $tmp2439)->$class->itable;
while ($tmp2440->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2440 = $tmp2440->next;
}
$fn2442 $tmp2441 = $tmp2440->methods[0];
frost$core$Int $tmp2443 = $tmp2441(((frost$collections$CollectionView*) $tmp2439));
frost$core$Bit $tmp2444 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2445 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2435, $tmp2443, $tmp2444);
frost$core$Int $tmp2446 = $tmp2445.min;
*(&local2) = $tmp2446;
frost$core$Int $tmp2447 = $tmp2445.max;
frost$core$Bit $tmp2448 = $tmp2445.inclusive;
bool $tmp2449 = $tmp2448.value;
frost$core$Int $tmp2450 = (frost$core$Int) {1u};
if ($tmp2449) goto block4; else goto block5;
block4:;
int64_t $tmp2451 = $tmp2446.value;
int64_t $tmp2452 = $tmp2447.value;
bool $tmp2453 = $tmp2451 <= $tmp2452;
frost$core$Bit $tmp2454 = (frost$core$Bit) {$tmp2453};
bool $tmp2455 = $tmp2454.value;
if ($tmp2455) goto block1; else goto block2;
block5:;
int64_t $tmp2456 = $tmp2446.value;
int64_t $tmp2457 = $tmp2447.value;
bool $tmp2458 = $tmp2456 < $tmp2457;
frost$core$Bit $tmp2459 = (frost$core$Bit) {$tmp2458};
bool $tmp2460 = $tmp2459.value;
if ($tmp2460) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:658
org$frostlang$frostc$pass$Analyzer$State* $tmp2461 = *(&local1);
frost$collections$Array** $tmp2462 = &$tmp2461->locals;
frost$collections$Array* $tmp2463 = *$tmp2462;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2464 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp2463, ((frost$core$Object*) $tmp2464));
frost$core$Int $tmp2465 = *(&local2);
int64_t $tmp2466 = $tmp2447.value;
int64_t $tmp2467 = $tmp2465.value;
int64_t $tmp2468 = $tmp2466 - $tmp2467;
frost$core$Int $tmp2469 = (frost$core$Int) {$tmp2468};
if ($tmp2449) goto block7; else goto block8;
block7:;
int64_t $tmp2470 = $tmp2469.value;
int64_t $tmp2471 = $tmp2450.value;
bool $tmp2472 = $tmp2470 >= $tmp2471;
frost$core$Bit $tmp2473 = (frost$core$Bit) {$tmp2472};
bool $tmp2474 = $tmp2473.value;
if ($tmp2474) goto block6; else goto block2;
block8:;
int64_t $tmp2475 = $tmp2469.value;
int64_t $tmp2476 = $tmp2450.value;
bool $tmp2477 = $tmp2475 > $tmp2476;
frost$core$Bit $tmp2478 = (frost$core$Bit) {$tmp2477};
bool $tmp2479 = $tmp2478.value;
if ($tmp2479) goto block6; else goto block2;
block6:;
int64_t $tmp2480 = $tmp2465.value;
int64_t $tmp2481 = $tmp2450.value;
int64_t $tmp2482 = $tmp2480 + $tmp2481;
frost$core$Int $tmp2483 = (frost$core$Int) {$tmp2482};
*(&local2) = $tmp2483;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:660
org$frostlang$frostc$MethodDecl** $tmp2484 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2485 = *$tmp2484;
// begin inline call to function org.frostlang.frostc.MethodDecl.get_isInstance():frost.core.Bit from Analyzer.frost:660:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:112
org$frostlang$frostc$Annotations** $tmp2486 = &$tmp2485->annotations;
org$frostlang$frostc$Annotations* $tmp2487 = *$tmp2486;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:112:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp2488 = &$tmp2487->flags;
frost$core$Int $tmp2489 = *$tmp2488;
frost$core$Int $tmp2490 = (frost$core$Int) {16u};
frost$core$Int $tmp2491 = frost$core$Int$$BAND$frost$core$Int$R$frost$core$Int($tmp2489, $tmp2490);
frost$core$Int $tmp2492 = (frost$core$Int) {0u};
int64_t $tmp2493 = $tmp2491.value;
int64_t $tmp2494 = $tmp2492.value;
bool $tmp2495 = $tmp2493 != $tmp2494;
frost$core$Bit $tmp2496 = (frost$core$Bit) {$tmp2495};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:112:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2497 = $tmp2496.value;
bool $tmp2498 = !$tmp2497;
frost$core$Bit $tmp2499 = (frost$core$Bit) {$tmp2498};
bool $tmp2500 = $tmp2499.value;
if ($tmp2500) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:661
org$frostlang$frostc$pass$Analyzer$State* $tmp2501 = *(&local1);
frost$collections$Array** $tmp2502 = &$tmp2501->parameters;
frost$collections$Array* $tmp2503 = *$tmp2502;
org$frostlang$frostc$MethodDecl** $tmp2504 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2505 = *$tmp2504;
frost$core$Weak** $tmp2506 = &$tmp2505->owner;
frost$core$Weak* $tmp2507 = *$tmp2506;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:661:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2508 = &$tmp2507->_valid;
frost$core$Bit $tmp2509 = *$tmp2508;
bool $tmp2510 = $tmp2509.value;
if ($tmp2510) goto block16; else goto block17;
block17:;
frost$core$Int $tmp2511 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2512, $tmp2511);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2513 = &$tmp2507->value;
frost$core$Object* $tmp2514 = *$tmp2513;
frost$core$Frost$ref$frost$core$Object$Q($tmp2514);
org$frostlang$frostc$Type** $tmp2515 = &((org$frostlang$frostc$ClassDecl*) $tmp2514)->type;
org$frostlang$frostc$Type* $tmp2516 = *$tmp2515;
frost$collections$Array$add$frost$collections$Array$T($tmp2503, ((frost$core$Object*) $tmp2516));
frost$core$Frost$unref$frost$core$Object$Q($tmp2514);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:663
org$frostlang$frostc$MethodDecl** $tmp2517 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2518 = *$tmp2517;
frost$collections$Array** $tmp2519 = &$tmp2518->parameters;
frost$collections$Array* $tmp2520 = *$tmp2519;
ITable* $tmp2521 = ((frost$collections$Iterable*) $tmp2520)->$class->itable;
while ($tmp2521->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2521 = $tmp2521->next;
}
$fn2523 $tmp2522 = $tmp2521->methods[0];
frost$collections$Iterator* $tmp2524 = $tmp2522(((frost$collections$Iterable*) $tmp2520));
goto block18;
block18:;
ITable* $tmp2525 = $tmp2524->$class->itable;
while ($tmp2525->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2525 = $tmp2525->next;
}
$fn2527 $tmp2526 = $tmp2525->methods[0];
frost$core$Bit $tmp2528 = $tmp2526($tmp2524);
bool $tmp2529 = $tmp2528.value;
if ($tmp2529) goto block20; else goto block19;
block19:;
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp2530 = $tmp2524->$class->itable;
while ($tmp2530->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2530 = $tmp2530->next;
}
$fn2532 $tmp2531 = $tmp2530->methods[1];
frost$core$Object* $tmp2533 = $tmp2531($tmp2524);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp2533)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2534 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp2533);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:664
org$frostlang$frostc$pass$Analyzer$State* $tmp2535 = *(&local1);
frost$collections$Array** $tmp2536 = &$tmp2535->parameters;
frost$collections$Array* $tmp2537 = *$tmp2536;
org$frostlang$frostc$MethodDecl$Parameter* $tmp2538 = *(&local3);
org$frostlang$frostc$Type** $tmp2539 = &$tmp2538->type;
org$frostlang$frostc$Type* $tmp2540 = *$tmp2539;
frost$collections$Array$add$frost$collections$Array$T($tmp2537, ((frost$core$Object*) $tmp2540));
frost$core$Frost$unref$frost$core$Object$Q($tmp2533);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2541 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:666
frost$collections$HashMap** $tmp2542 = &param0->entryStates;
frost$collections$HashMap* $tmp2543 = *$tmp2542;
org$frostlang$frostc$IR** $tmp2544 = &param0->ir;
org$frostlang$frostc$IR* $tmp2545 = *$tmp2544;
frost$collections$Array** $tmp2546 = &$tmp2545->blocks;
frost$collections$Array* $tmp2547 = *$tmp2546;
frost$core$Int $tmp2548 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:666:30
frost$core$Int $tmp2549 = (frost$core$Int) {0u};
int64_t $tmp2550 = $tmp2548.value;
int64_t $tmp2551 = $tmp2549.value;
bool $tmp2552 = $tmp2550 >= $tmp2551;
frost$core$Bit $tmp2553 = (frost$core$Bit) {$tmp2552};
bool $tmp2554 = $tmp2553.value;
if ($tmp2554) goto block24; else goto block23;
block24:;
ITable* $tmp2555 = ((frost$collections$CollectionView*) $tmp2547)->$class->itable;
while ($tmp2555->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2555 = $tmp2555->next;
}
$fn2557 $tmp2556 = $tmp2555->methods[0];
frost$core$Int $tmp2558 = $tmp2556(((frost$collections$CollectionView*) $tmp2547));
int64_t $tmp2559 = $tmp2548.value;
int64_t $tmp2560 = $tmp2558.value;
bool $tmp2561 = $tmp2559 < $tmp2560;
frost$core$Bit $tmp2562 = (frost$core$Bit) {$tmp2561};
bool $tmp2563 = $tmp2562.value;
if ($tmp2563) goto block22; else goto block23;
block23:;
frost$core$Int $tmp2564 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2565, $tmp2564, &$s2566);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2567 = &$tmp2547->data;
frost$core$Object** $tmp2568 = *$tmp2567;
frost$core$Int64 $tmp2569 = frost$core$Int64$init$frost$core$Int($tmp2548);
int64_t $tmp2570 = $tmp2569.value;
frost$core$Object* $tmp2571 = $tmp2568[$tmp2570];
frost$core$Frost$ref$frost$core$Object$Q($tmp2571);
org$frostlang$frostc$IR$Block$ID* $tmp2572 = &((org$frostlang$frostc$IR$Block*) $tmp2571)->id;
org$frostlang$frostc$IR$Block$ID $tmp2573 = *$tmp2572;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2574;
$tmp2574 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2574->value = $tmp2573;
org$frostlang$frostc$pass$Analyzer$State* $tmp2575 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2543, ((frost$collections$HashKey*) $tmp2574), ((frost$core$Object*) $tmp2575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2574)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2571);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:667
org$frostlang$frostc$IR** $tmp2576 = &param0->ir;
org$frostlang$frostc$IR* $tmp2577 = *$tmp2576;
frost$collections$Array** $tmp2578 = &$tmp2577->blocks;
frost$collections$Array* $tmp2579 = *$tmp2578;
ITable* $tmp2580 = ((frost$collections$Iterable*) $tmp2579)->$class->itable;
while ($tmp2580->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2580 = $tmp2580->next;
}
$fn2582 $tmp2581 = $tmp2580->methods[0];
frost$collections$Iterator* $tmp2583 = $tmp2581(((frost$collections$Iterable*) $tmp2579));
goto block25;
block25:;
ITable* $tmp2584 = $tmp2583->$class->itable;
while ($tmp2584->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2584 = $tmp2584->next;
}
$fn2586 $tmp2585 = $tmp2584->methods[0];
frost$core$Bit $tmp2587 = $tmp2585($tmp2583);
bool $tmp2588 = $tmp2587.value;
if ($tmp2588) goto block27; else goto block26;
block26:;
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2589 = $tmp2583->$class->itable;
while ($tmp2589->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2589 = $tmp2589->next;
}
$fn2591 $tmp2590 = $tmp2589->methods[1];
frost$core$Object* $tmp2592 = $tmp2590($tmp2583);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2592)));
org$frostlang$frostc$IR$Block* $tmp2593 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
*(&local4) = ((org$frostlang$frostc$IR$Block*) $tmp2592);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:668
frost$collections$HashMap** $tmp2594 = &param0->blocks;
frost$collections$HashMap* $tmp2595 = *$tmp2594;
org$frostlang$frostc$IR$Block* $tmp2596 = *(&local4);
org$frostlang$frostc$IR$Block$ID* $tmp2597 = &$tmp2596->id;
org$frostlang$frostc$IR$Block$ID $tmp2598 = *$tmp2597;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2599;
$tmp2599 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2599->value = $tmp2598;
org$frostlang$frostc$IR$Block* $tmp2600 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2595, ((frost$collections$HashKey*) $tmp2599), ((frost$core$Object*) $tmp2600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2599)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:669
org$frostlang$frostc$IR$Block* $tmp2601 = *(&local4);
org$frostlang$frostc$LinkedList** $tmp2602 = &$tmp2601->ids;
org$frostlang$frostc$LinkedList* $tmp2603 = *$tmp2602;
ITable* $tmp2604 = ((frost$collections$Iterable*) $tmp2603)->$class->itable;
while ($tmp2604->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2604 = $tmp2604->next;
}
$fn2606 $tmp2605 = $tmp2604->methods[0];
frost$collections$Iterator* $tmp2607 = $tmp2605(((frost$collections$Iterable*) $tmp2603));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
frost$collections$Iterator* $tmp2608 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
*(&local5) = $tmp2607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:670
org$frostlang$frostc$IR$Block* $tmp2609 = *(&local4);
org$frostlang$frostc$LinkedList** $tmp2610 = &$tmp2609->statements;
org$frostlang$frostc$LinkedList* $tmp2611 = *$tmp2610;
ITable* $tmp2612 = ((frost$collections$Iterable*) $tmp2611)->$class->itable;
while ($tmp2612->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2612 = $tmp2612->next;
}
$fn2614 $tmp2613 = $tmp2612->methods[0];
frost$collections$Iterator* $tmp2615 = $tmp2613(((frost$collections$Iterable*) $tmp2611));
*(&local6) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
frost$collections$Iterator* $tmp2616 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local6) = $tmp2615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:671
goto block28;
block28:;
frost$collections$Iterator* $tmp2617 = *(&local5);
ITable* $tmp2618 = $tmp2617->$class->itable;
while ($tmp2618->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2618 = $tmp2618->next;
}
$fn2620 $tmp2619 = $tmp2618->methods[0];
frost$core$Bit $tmp2621 = $tmp2619($tmp2617);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:671:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2622 = $tmp2621.value;
bool $tmp2623 = !$tmp2622;
frost$core$Bit $tmp2624 = (frost$core$Bit) {$tmp2623};
bool $tmp2625 = $tmp2624.value;
if ($tmp2625) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:672
frost$collections$HashMap** $tmp2626 = &param0->statements;
frost$collections$HashMap* $tmp2627 = *$tmp2626;
frost$collections$Iterator* $tmp2628 = *(&local5);
ITable* $tmp2629 = $tmp2628->$class->itable;
while ($tmp2629->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2629 = $tmp2629->next;
}
$fn2631 $tmp2630 = $tmp2629->methods[1];
frost$core$Object* $tmp2632 = $tmp2630($tmp2628);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2633;
$tmp2633 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2633->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2632)->value;
frost$collections$Iterator* $tmp2634 = *(&local6);
ITable* $tmp2635 = $tmp2634->$class->itable;
while ($tmp2635->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2635 = $tmp2635->next;
}
$fn2637 $tmp2636 = $tmp2635->methods[1];
frost$core$Object* $tmp2638 = $tmp2636($tmp2634);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2627, ((frost$collections$HashKey*) $tmp2633), ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2638)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2638);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2633)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2632);
goto block28;
block30:;
frost$collections$Iterator* $tmp2639 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
*(&local6) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2640 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2592);
org$frostlang$frostc$IR$Block* $tmp2641 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:675
frost$collections$HashSet** $tmp2642 = &param0->worklist;
frost$collections$HashSet* $tmp2643 = *$tmp2642;
org$frostlang$frostc$IR** $tmp2644 = &param0->ir;
org$frostlang$frostc$IR* $tmp2645 = *$tmp2644;
frost$collections$Array** $tmp2646 = &$tmp2645->blocks;
frost$collections$Array* $tmp2647 = *$tmp2646;
frost$core$Int $tmp2648 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:675:31
frost$core$Int $tmp2649 = (frost$core$Int) {0u};
int64_t $tmp2650 = $tmp2648.value;
int64_t $tmp2651 = $tmp2649.value;
bool $tmp2652 = $tmp2650 >= $tmp2651;
frost$core$Bit $tmp2653 = (frost$core$Bit) {$tmp2652};
bool $tmp2654 = $tmp2653.value;
if ($tmp2654) goto block35; else goto block34;
block35:;
ITable* $tmp2655 = ((frost$collections$CollectionView*) $tmp2647)->$class->itable;
while ($tmp2655->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2655 = $tmp2655->next;
}
$fn2657 $tmp2656 = $tmp2655->methods[0];
frost$core$Int $tmp2658 = $tmp2656(((frost$collections$CollectionView*) $tmp2647));
int64_t $tmp2659 = $tmp2648.value;
int64_t $tmp2660 = $tmp2658.value;
bool $tmp2661 = $tmp2659 < $tmp2660;
frost$core$Bit $tmp2662 = (frost$core$Bit) {$tmp2661};
bool $tmp2663 = $tmp2662.value;
if ($tmp2663) goto block33; else goto block34;
block34:;
frost$core$Int $tmp2664 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2665, $tmp2664, &$s2666);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2667 = &$tmp2647->data;
frost$core$Object** $tmp2668 = *$tmp2667;
frost$core$Int64 $tmp2669 = frost$core$Int64$init$frost$core$Int($tmp2648);
int64_t $tmp2670 = $tmp2669.value;
frost$core$Object* $tmp2671 = $tmp2668[$tmp2670];
frost$core$Frost$ref$frost$core$Object$Q($tmp2671);
org$frostlang$frostc$IR$Block$ID* $tmp2672 = &((org$frostlang$frostc$IR$Block*) $tmp2671)->id;
org$frostlang$frostc$IR$Block$ID $tmp2673 = *$tmp2672;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2674;
$tmp2674 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2674->value = $tmp2673;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:675:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp2675 = &$tmp2643->contents;
frost$collections$HashMap* $tmp2676 = *$tmp2675;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2676, ((frost$collections$HashKey*) $tmp2674), ((frost$core$Object*) ((frost$collections$HashKey*) $tmp2674)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2674)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2671);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:676
goto block37;
block37:;
frost$collections$HashSet** $tmp2677 = &param0->worklist;
frost$collections$HashSet* $tmp2678 = *$tmp2677;
ITable* $tmp2679 = ((frost$collections$CollectionView*) $tmp2678)->$class->itable;
while ($tmp2679->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2679 = $tmp2679->next;
}
$fn2681 $tmp2680 = $tmp2679->methods[0];
frost$core$Int $tmp2682 = $tmp2680(((frost$collections$CollectionView*) $tmp2678));
frost$core$Int $tmp2683 = (frost$core$Int) {0u};
int64_t $tmp2684 = $tmp2682.value;
int64_t $tmp2685 = $tmp2683.value;
bool $tmp2686 = $tmp2684 > $tmp2685;
frost$core$Bit $tmp2687 = (frost$core$Bit) {$tmp2686};
bool $tmp2688 = $tmp2687.value;
if ($tmp2688) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:677
frost$collections$HashSet** $tmp2689 = &param0->worklist;
frost$collections$HashSet* $tmp2690 = *$tmp2689;
ITable* $tmp2691 = ((frost$collections$Iterable*) $tmp2690)->$class->itable;
while ($tmp2691->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2691 = $tmp2691->next;
}
$fn2693 $tmp2692 = $tmp2691->methods[0];
frost$collections$Iterator* $tmp2694 = $tmp2692(((frost$collections$Iterable*) $tmp2690));
ITable* $tmp2695 = $tmp2694->$class->itable;
while ($tmp2695->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2695 = $tmp2695->next;
}
$fn2697 $tmp2696 = $tmp2695->methods[1];
frost$core$Object* $tmp2698 = $tmp2696($tmp2694);
*(&local7) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2698)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2698);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:678
frost$collections$HashSet** $tmp2699 = &param0->worklist;
frost$collections$HashSet* $tmp2700 = *$tmp2699;
org$frostlang$frostc$IR$Block$ID $tmp2701 = *(&local7);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2702;
$tmp2702 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2702->value = $tmp2701;
// begin inline call to method frost.collections.HashSet.remove(value:frost.collections.HashSet.T) from Analyzer.frost:678:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:30
frost$collections$HashMap** $tmp2703 = &$tmp2700->contents;
frost$collections$HashMap* $tmp2704 = *$tmp2703;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp2704, ((frost$collections$HashKey*) $tmp2702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2702)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:679
org$frostlang$frostc$IR$Block$ID $tmp2705 = *(&local7);
$fn2707 $tmp2706 = ($fn2707) param0->$class->vtable[10];
$tmp2706(param0, $tmp2705);
goto block37;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:681
frost$core$Bit $tmp2708 = (frost$core$Bit) {true};
frost$core$Bit* $tmp2709 = &param0->reportErrors;
*$tmp2709 = $tmp2708;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:682
org$frostlang$frostc$IR** $tmp2710 = &param0->ir;
org$frostlang$frostc$IR* $tmp2711 = *$tmp2710;
frost$collections$Array** $tmp2712 = &$tmp2711->blocks;
frost$collections$Array* $tmp2713 = *$tmp2712;
ITable* $tmp2714 = ((frost$collections$Iterable*) $tmp2713)->$class->itable;
while ($tmp2714->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2714 = $tmp2714->next;
}
$fn2716 $tmp2715 = $tmp2714->methods[0];
frost$collections$Iterator* $tmp2717 = $tmp2715(((frost$collections$Iterable*) $tmp2713));
goto block41;
block41:;
ITable* $tmp2718 = $tmp2717->$class->itable;
while ($tmp2718->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2718 = $tmp2718->next;
}
$fn2720 $tmp2719 = $tmp2718->methods[0];
frost$core$Bit $tmp2721 = $tmp2719($tmp2717);
bool $tmp2722 = $tmp2721.value;
if ($tmp2722) goto block43; else goto block42;
block42:;
*(&local8) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2723 = $tmp2717->$class->itable;
while ($tmp2723->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2723 = $tmp2723->next;
}
$fn2725 $tmp2724 = $tmp2723->methods[1];
frost$core$Object* $tmp2726 = $tmp2724($tmp2717);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2726)));
org$frostlang$frostc$IR$Block* $tmp2727 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
*(&local8) = ((org$frostlang$frostc$IR$Block*) $tmp2726);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:683
frost$collections$HashMap** $tmp2728 = &param0->entryStates;
frost$collections$HashMap* $tmp2729 = *$tmp2728;
org$frostlang$frostc$IR$Block* $tmp2730 = *(&local8);
org$frostlang$frostc$IR$Block$ID* $tmp2731 = &$tmp2730->id;
org$frostlang$frostc$IR$Block$ID $tmp2732 = *$tmp2731;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2733;
$tmp2733 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2733->value = $tmp2732;
frost$core$Object* $tmp2734 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2729, ((frost$collections$HashKey*) $tmp2733));
frost$core$Bit $tmp2735 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2734) != NULL};
bool $tmp2736 = $tmp2735.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2734);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp2733)));
if ($tmp2736) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:684
org$frostlang$frostc$IR$Block* $tmp2737 = *(&local8);
org$frostlang$frostc$LinkedList** $tmp2738 = &$tmp2737->statements;
org$frostlang$frostc$LinkedList* $tmp2739 = *$tmp2738;
ITable* $tmp2740 = ((frost$collections$CollectionView*) $tmp2739)->$class->itable;
while ($tmp2740->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2740 = $tmp2740->next;
}
$fn2742 $tmp2741 = $tmp2740->methods[1];
frost$core$Object* $tmp2743 = $tmp2741(((frost$collections$CollectionView*) $tmp2739));
frost$core$Int* $tmp2744 = &((org$frostlang$frostc$IR$Statement*) $tmp2743)->$rawValue;
frost$core$Int $tmp2745 = *$tmp2744;
frost$core$Int $tmp2746 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:685:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2747 = $tmp2745.value;
int64_t $tmp2748 = $tmp2746.value;
bool $tmp2749 = $tmp2747 == $tmp2748;
frost$core$Bit $tmp2750 = (frost$core$Bit) {$tmp2749};
bool $tmp2751 = $tmp2750.value;
if ($tmp2751) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:686
org$frostlang$frostc$MethodDecl** $tmp2752 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2753 = *$tmp2752;
org$frostlang$frostc$MethodDecl$Kind* $tmp2754 = &$tmp2753->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2755 = *$tmp2754;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2756;
$tmp2756 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2756->value = $tmp2755;
frost$core$Int $tmp2757 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Analyzer.frost:686:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2758 = &(&local10)->$rawValue;
*$tmp2758 = $tmp2757;
org$frostlang$frostc$MethodDecl$Kind $tmp2759 = *(&local10);
*(&local9) = $tmp2759;
org$frostlang$frostc$MethodDecl$Kind $tmp2760 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2761;
$tmp2761 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2761->value = $tmp2760;
ITable* $tmp2762 = ((frost$core$Equatable*) $tmp2756)->$class->itable;
while ($tmp2762->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2762 = $tmp2762->next;
}
$fn2764 $tmp2763 = $tmp2762->methods[1];
frost$core$Bit $tmp2765 = $tmp2763(((frost$core$Equatable*) $tmp2756), ((frost$core$Equatable*) $tmp2761));
bool $tmp2766 = $tmp2765.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2761)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2756)));
if ($tmp2766) goto block53; else goto block52;
block53:;
org$frostlang$frostc$MethodDecl** $tmp2767 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2768 = *$tmp2767;
org$frostlang$frostc$Type** $tmp2769 = &$tmp2768->returnType;
org$frostlang$frostc$Type* $tmp2770 = *$tmp2769;
org$frostlang$frostc$Compiler** $tmp2771 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2772 = *$tmp2771;
org$frostlang$frostc$Type** $tmp2773 = &$tmp2772->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2774 = *$tmp2773;
ITable* $tmp2775 = ((frost$core$Equatable*) $tmp2770)->$class->itable;
while ($tmp2775->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2775 = $tmp2775->next;
}
$fn2777 $tmp2776 = $tmp2775->methods[1];
frost$core$Bit $tmp2778 = $tmp2776(((frost$core$Equatable*) $tmp2770), ((frost$core$Equatable*) $tmp2774));
bool $tmp2779 = $tmp2778.value;
if ($tmp2779) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:688
org$frostlang$frostc$Compiler** $tmp2780 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2781 = *$tmp2780;
org$frostlang$frostc$MethodDecl** $tmp2782 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2783 = *$tmp2782;
org$frostlang$frostc$Position* $tmp2784 = &((org$frostlang$frostc$Symbol*) $tmp2783)->position;
org$frostlang$frostc$Position $tmp2785 = *$tmp2784;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2781, $tmp2785, &$s2786);
goto block52;
block52:;
goto block47;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:692
org$frostlang$frostc$IR$Block* $tmp2787 = *(&local8);
org$frostlang$frostc$IR$Block$ID* $tmp2788 = &$tmp2787->id;
org$frostlang$frostc$IR$Block$ID $tmp2789 = *$tmp2788;
frost$core$Int $tmp2790 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:692:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Block$ID* $tmp2791 = &(&local12)->id;
*$tmp2791 = $tmp2789;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Int* $tmp2792 = &(&local12)->exit;
*$tmp2792 = $tmp2790;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2793 = *(&local12);
*(&local11) = $tmp2793;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2794 = *(&local11);
$fn2796 $tmp2795 = ($fn2796) param0->$class->vtable[9];
org$frostlang$frostc$pass$Analyzer$State* $tmp2797 = $tmp2795(param0, $tmp2794);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
goto block47;
block47:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2743);
goto block45;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:696
org$frostlang$frostc$IR$Block* $tmp2798 = *(&local8);
frost$core$Bit* $tmp2799 = &$tmp2798->containsExplicitCode;
frost$core$Bit $tmp2800 = *$tmp2799;
bool $tmp2801 = $tmp2800.value;
if ($tmp2801) goto block58; else goto block57;
block58:;
org$frostlang$frostc$IR$Block* $tmp2802 = *(&local8);
frost$core$Bit* $tmp2803 = &$tmp2802->forceReachable;
frost$core$Bit $tmp2804 = *$tmp2803;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:696:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2805 = $tmp2804.value;
bool $tmp2806 = !$tmp2805;
frost$core$Bit $tmp2807 = (frost$core$Bit) {$tmp2806};
bool $tmp2808 = $tmp2807.value;
if ($tmp2808) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:697
org$frostlang$frostc$Compiler** $tmp2809 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2810 = *$tmp2809;
org$frostlang$frostc$IR$Block* $tmp2811 = *(&local8);
org$frostlang$frostc$LinkedList** $tmp2812 = &$tmp2811->statements;
org$frostlang$frostc$LinkedList* $tmp2813 = *$tmp2812;
ITable* $tmp2814 = ((frost$collections$CollectionView*) $tmp2813)->$class->itable;
while ($tmp2814->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2814 = $tmp2814->next;
}
$fn2816 $tmp2815 = $tmp2814->methods[1];
frost$core$Object* $tmp2817 = $tmp2815(((frost$collections$CollectionView*) $tmp2813));
$fn2819 $tmp2818 = ($fn2819) ((org$frostlang$frostc$IR$Statement*) $tmp2817)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2820 = $tmp2818(((org$frostlang$frostc$IR$Statement*) $tmp2817));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2810, $tmp2820, &$s2821);
frost$core$Frost$unref$frost$core$Object$Q($tmp2817);
goto block57;
block57:;
goto block45;
block45:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2726);
org$frostlang$frostc$IR$Block* $tmp2822 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local8) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block41;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
org$frostlang$frostc$pass$Analyzer$State* $tmp2823 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2824 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$Position local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:703
org$frostlang$frostc$LinkedList** $tmp2825 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2826 = *$tmp2825;
ITable* $tmp2827 = ((frost$collections$CollectionView*) $tmp2826)->$class->itable;
while ($tmp2827->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2827 = $tmp2827->next;
}
$fn2829 $tmp2828 = $tmp2827->methods[1];
frost$core$Object* $tmp2830 = $tmp2828(((frost$collections$CollectionView*) $tmp2826));
*(&local0) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2830)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2830);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:704
org$frostlang$frostc$LinkedList** $tmp2831 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2832 = *$tmp2831;
ITable* $tmp2833 = ((frost$collections$CollectionView*) $tmp2832)->$class->itable;
while ($tmp2833->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2833 = $tmp2833->next;
}
$fn2835 $tmp2834 = $tmp2833->methods[1];
frost$core$Object* $tmp2836 = $tmp2834(((frost$collections$CollectionView*) $tmp2832));
$fn2838 $tmp2837 = ($fn2838) ((org$frostlang$frostc$IR$Statement*) $tmp2836)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2839 = $tmp2837(((org$frostlang$frostc$IR$Statement*) $tmp2836));
*(&local1) = $tmp2839;
frost$core$Frost$unref$frost$core$Object$Q($tmp2836);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:705
org$frostlang$frostc$LinkedList** $tmp2840 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2841 = *$tmp2840;
$fn2843 $tmp2842 = ($fn2843) $tmp2841->$class->vtable[8];
$tmp2842($tmp2841);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:706
org$frostlang$frostc$LinkedList** $tmp2844 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2845 = *$tmp2844;
org$frostlang$frostc$IR$Statement$ID $tmp2846 = *(&local0);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2847;
$tmp2847 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2847->value = $tmp2846;
$fn2849 $tmp2848 = ($fn2849) $tmp2845->$class->vtable[4];
$tmp2848($tmp2845, ((frost$core$Object*) $tmp2847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:707
org$frostlang$frostc$LinkedList** $tmp2850 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2851 = *$tmp2850;
$fn2853 $tmp2852 = ($fn2853) $tmp2851->$class->vtable[8];
$tmp2852($tmp2851);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:708
org$frostlang$frostc$LinkedList** $tmp2854 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2855 = *$tmp2854;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2856 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2857 = (frost$core$Int) {28u};
org$frostlang$frostc$Position $tmp2858 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position($tmp2856, $tmp2857, $tmp2858);
$fn2860 $tmp2859 = ($fn2860) $tmp2855->$class->vtable[4];
$tmp2859($tmp2855, ((frost$core$Object*) $tmp2856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:712
org$frostlang$frostc$IR** $tmp2861 = &param0->ir;
org$frostlang$frostc$IR* $tmp2862 = *$tmp2861;
frost$collections$Array** $tmp2863 = &$tmp2862->blocks;
frost$collections$Array* $tmp2864 = *$tmp2863;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:712:33
frost$core$Int $tmp2865 = (frost$core$Int) {0u};
int64_t $tmp2866 = param1.value;
int64_t $tmp2867 = $tmp2865.value;
bool $tmp2868 = $tmp2866 >= $tmp2867;
frost$core$Bit $tmp2869 = (frost$core$Bit) {$tmp2868};
bool $tmp2870 = $tmp2869.value;
if ($tmp2870) goto block4; else goto block3;
block4:;
ITable* $tmp2871 = ((frost$collections$CollectionView*) $tmp2864)->$class->itable;
while ($tmp2871->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2871 = $tmp2871->next;
}
$fn2873 $tmp2872 = $tmp2871->methods[0];
frost$core$Int $tmp2874 = $tmp2872(((frost$collections$CollectionView*) $tmp2864));
int64_t $tmp2875 = param1.value;
int64_t $tmp2876 = $tmp2874.value;
bool $tmp2877 = $tmp2875 < $tmp2876;
frost$core$Bit $tmp2878 = (frost$core$Bit) {$tmp2877};
bool $tmp2879 = $tmp2878.value;
if ($tmp2879) goto block2; else goto block3;
block3:;
frost$core$Int $tmp2880 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2881, $tmp2880, &$s2882);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2883 = &$tmp2864->data;
frost$core$Object** $tmp2884 = *$tmp2883;
frost$core$Int64 $tmp2885 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp2886 = $tmp2885.value;
frost$core$Object* $tmp2887 = $tmp2884[$tmp2886];
frost$core$Frost$ref$frost$core$Object$Q($tmp2887);
org$frostlang$frostc$IR$Block$ID* $tmp2888 = &((org$frostlang$frostc$IR$Block*) $tmp2887)->id;
org$frostlang$frostc$IR$Block$ID $tmp2889 = *$tmp2888;
*(&local0) = $tmp2889;
frost$core$Frost$unref$frost$core$Object$Q($tmp2887);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:713
org$frostlang$frostc$IR** $tmp2890 = &param0->ir;
org$frostlang$frostc$IR* $tmp2891 = *$tmp2890;
frost$collections$Array** $tmp2892 = &$tmp2891->blocks;
frost$collections$Array* $tmp2893 = *$tmp2892;
frost$core$Object* $tmp2894 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp2893, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2894);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:714
org$frostlang$frostc$IR** $tmp2895 = &param0->ir;
org$frostlang$frostc$IR* $tmp2896 = *$tmp2895;
frost$collections$Array** $tmp2897 = &$tmp2896->blocks;
frost$collections$Array* $tmp2898 = *$tmp2897;
ITable* $tmp2899 = ((frost$collections$Iterable*) $tmp2898)->$class->itable;
while ($tmp2899->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2899 = $tmp2899->next;
}
$fn2901 $tmp2900 = $tmp2899->methods[0];
frost$collections$Iterator* $tmp2902 = $tmp2900(((frost$collections$Iterable*) $tmp2898));
goto block5;
block5:;
ITable* $tmp2903 = $tmp2902->$class->itable;
while ($tmp2903->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2903 = $tmp2903->next;
}
$fn2905 $tmp2904 = $tmp2903->methods[0];
frost$core$Bit $tmp2906 = $tmp2904($tmp2902);
bool $tmp2907 = $tmp2906.value;
if ($tmp2907) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2908 = $tmp2902->$class->itable;
while ($tmp2908->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2908 = $tmp2908->next;
}
$fn2910 $tmp2909 = $tmp2908->methods[1];
frost$core$Object* $tmp2911 = $tmp2909($tmp2902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2911)));
org$frostlang$frostc$IR$Block* $tmp2912 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2911);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:715
org$frostlang$frostc$IR$Block* $tmp2913 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2914 = &$tmp2913->statements;
org$frostlang$frostc$LinkedList* $tmp2915 = *$tmp2914;
ITable* $tmp2916 = ((frost$collections$CollectionView*) $tmp2915)->$class->itable;
while ($tmp2916->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2916 = $tmp2916->next;
}
$fn2918 $tmp2917 = $tmp2916->methods[0];
frost$core$Int $tmp2919 = $tmp2917(((frost$collections$CollectionView*) $tmp2915));
frost$core$Int $tmp2920 = (frost$core$Int) {1u};
int64_t $tmp2921 = $tmp2919.value;
int64_t $tmp2922 = $tmp2920.value;
int64_t $tmp2923 = $tmp2921 - $tmp2922;
frost$core$Int $tmp2924 = (frost$core$Int) {$tmp2923};
*(&local2) = $tmp2924;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:716
org$frostlang$frostc$IR$Block* $tmp2925 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2926 = &$tmp2925->statements;
org$frostlang$frostc$LinkedList* $tmp2927 = *$tmp2926;
$fn2929 $tmp2928 = ($fn2929) $tmp2927->$class->vtable[6];
frost$core$Object* $tmp2930 = $tmp2928($tmp2927);
frost$core$Int* $tmp2931 = &((org$frostlang$frostc$IR$Statement*) $tmp2930)->$rawValue;
frost$core$Int $tmp2932 = *$tmp2931;
frost$core$Int $tmp2933 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:717:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2934 = $tmp2932.value;
int64_t $tmp2935 = $tmp2933.value;
bool $tmp2936 = $tmp2934 == $tmp2935;
frost$core$Bit $tmp2937 = (frost$core$Bit) {$tmp2936};
bool $tmp2938 = $tmp2937.value;
if ($tmp2938) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2939 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2930)->$data + 0);
org$frostlang$frostc$Position $tmp2940 = *$tmp2939;
org$frostlang$frostc$IR$Block$ID* $tmp2941 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2930)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2942 = *$tmp2941;
*(&local3) = $tmp2942;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:718
org$frostlang$frostc$IR$Block$ID $tmp2943 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2944 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:718:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2945 = $tmp2943.value;
frost$core$Int $tmp2946 = $tmp2944.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2947 = $tmp2945.value;
int64_t $tmp2948 = $tmp2946.value;
bool $tmp2949 = $tmp2947 == $tmp2948;
frost$core$Bit $tmp2950 = (frost$core$Bit) {$tmp2949};
bool $tmp2951 = $tmp2950.value;
if ($tmp2951) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:719
org$frostlang$frostc$IR$Block* $tmp2952 = *(&local1);
$fn2954 $tmp2953 = ($fn2954) param0->$class->vtable[13];
$tmp2953(param0, $tmp2952);
goto block13;
block13:;
goto block8;
block10:;
frost$core$Int $tmp2955 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:722:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2956 = $tmp2932.value;
int64_t $tmp2957 = $tmp2955.value;
bool $tmp2958 = $tmp2956 == $tmp2957;
frost$core$Bit $tmp2959 = (frost$core$Bit) {$tmp2958};
bool $tmp2960 = $tmp2959.value;
if ($tmp2960) goto block16; else goto block8;
block16:;
org$frostlang$frostc$Position* $tmp2961 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2930)->$data + 0);
org$frostlang$frostc$Position $tmp2962 = *$tmp2961;
*(&local4) = $tmp2962;
org$frostlang$frostc$IR$Value** $tmp2963 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2930)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2964 = *$tmp2963;
org$frostlang$frostc$IR$Block$ID* $tmp2965 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2930)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2966 = *$tmp2965;
*(&local5) = $tmp2966;
org$frostlang$frostc$IR$Block$ID* $tmp2967 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2930)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2968 = *$tmp2967;
*(&local6) = $tmp2968;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:723
org$frostlang$frostc$IR$Block$ID $tmp2969 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2970;
$tmp2970 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2970->value = $tmp2969;
org$frostlang$frostc$IR$Block$ID $tmp2971 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2972;
$tmp2972 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2972->value = $tmp2971;
ITable* $tmp2973 = ((frost$core$Equatable*) $tmp2970)->$class->itable;
while ($tmp2973->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2973 = $tmp2973->next;
}
$fn2975 $tmp2974 = $tmp2973->methods[1];
frost$core$Bit $tmp2976 = $tmp2974(((frost$core$Equatable*) $tmp2970), ((frost$core$Equatable*) $tmp2972));
bool $tmp2977 = $tmp2976.value;
if ($tmp2977) goto block18; else goto block19;
block19:;
frost$core$Int $tmp2978 = (frost$core$Int) {723u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2979, $tmp2978);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2972)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2970)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:724
org$frostlang$frostc$IR$Block$ID $tmp2980 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp2981 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:724:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2982 = $tmp2980.value;
frost$core$Int $tmp2983 = $tmp2981.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2984 = $tmp2982.value;
int64_t $tmp2985 = $tmp2983.value;
bool $tmp2986 = $tmp2984 == $tmp2985;
frost$core$Bit $tmp2987 = (frost$core$Bit) {$tmp2986};
bool $tmp2988 = $tmp2987.value;
if ($tmp2988) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:726
frost$core$System$crash();
frost$core$Int $tmp2989 = (frost$core$Int) {726u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2990, $tmp2989, &$s2991);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:728
org$frostlang$frostc$IR$Block$ID $tmp2992 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2993 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:728:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2994 = $tmp2992.value;
frost$core$Int $tmp2995 = $tmp2993.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2996 = $tmp2994.value;
int64_t $tmp2997 = $tmp2995.value;
bool $tmp2998 = $tmp2996 == $tmp2997;
frost$core$Bit $tmp2999 = (frost$core$Bit) {$tmp2998};
bool $tmp3000 = $tmp2999.value;
if ($tmp3000) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:730
frost$core$System$crash();
frost$core$Int $tmp3001 = (frost$core$Int) {730u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3002, $tmp3001, &$s3003);
abort(); // unreachable
block26:;
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2930);
frost$core$Frost$unref$frost$core$Object$Q($tmp2911);
org$frostlang$frostc$IR$Block* $tmp3004 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
return;

}
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp3005 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3006 = *$tmp3005;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
org$frostlang$frostc$MethodDecl** $tmp3007 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp3008 = *$tmp3007;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
org$frostlang$frostc$IR** $tmp3009 = &param0->ir;
org$frostlang$frostc$IR* $tmp3010 = *$tmp3009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
frost$collections$HashMap** $tmp3011 = &param0->blocks;
frost$collections$HashMap* $tmp3012 = *$tmp3011;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
frost$collections$HashMap** $tmp3013 = &param0->predecessors;
frost$collections$HashMap* $tmp3014 = *$tmp3013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
frost$collections$HashMap** $tmp3015 = &param0->entryStates;
frost$collections$HashMap* $tmp3016 = *$tmp3015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
frost$collections$HashSet** $tmp3017 = &param0->worklist;
frost$collections$HashSet* $tmp3018 = *$tmp3017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
frost$collections$HashMap** $tmp3019 = &param0->statements;
frost$collections$HashMap* $tmp3020 = *$tmp3019;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
return;

}

