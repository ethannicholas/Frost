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
#include "frost/collections/Key.h"
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
typedef frost$core$Tuple2* (*$fn844)(frost$core$Tuple2*);
typedef frost$collections$Array* (*$fn852)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn861)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn888)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn904)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn931)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn950)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn977)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn997)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1022)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn1064)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1073)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1079)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1090)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID);
typedef frost$core$String* (*$fn1107)(frost$core$Object*);
typedef frost$core$Int (*$fn1169)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1220)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1266)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$String* (*$fn1286)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1315)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn1329)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1332)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1343)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1348)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1357)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1360)(org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn1376)(org$frostlang$frostc$LinkedList*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1397)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn1410)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1414)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1419)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1459)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1497)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1521)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1560)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1585)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1606)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1658)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1668)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1714)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1757)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1767)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$pass$Analyzer$Definition* (*$fn1813)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1855)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1863)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1869)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1878)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1883)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1922)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn1937)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2019)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2045)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn2076)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef void (*$fn2082)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*, frost$core$Int, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn2102)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2126)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn2151)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn2162)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Object* (*$fn2186)(org$frostlang$frostc$LinkedList*);
typedef frost$core$String* (*$fn2189)(frost$core$Object*);
typedef frost$core$Int (*$fn2206)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2228)(frost$core$Object*);
typedef frost$core$Int (*$fn2247)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2263)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2294)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2298)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2303)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2311)(frost$core$Object*);
typedef frost$core$String* (*$fn2339)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2349)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn2357)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2363)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2372)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2376)(frost$core$Object*);
typedef frost$core$Object* (*$fn2382)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2385)(frost$core$Object*);
typedef frost$core$Int (*$fn2407)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2488)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2492)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2497)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2522)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2547)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2551)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2556)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2571)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn2579)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2585)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2596)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2602)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2622)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2646)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2658)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2662)(frost$collections$Iterator*);
typedef void (*$fn2672)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2681)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2685)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2690)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2707)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2729)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2742)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn2761)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Object* (*$fn2781)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2784)(org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn2794)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2800)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2803)(org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2808)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2814)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn2818)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2825)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Int (*$fn2838)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2866)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2870)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2875)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2883)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2894)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2919)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn2940)(frost$core$Equatable*, frost$core$Equatable*);

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
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s959 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s972 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s1110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x3a\x20", 23, 7177047828670113807, NULL };
static frost$core$String $s1112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x27", 19, 3303349432046188092, NULL };
static frost$core$String $s1291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s1292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s1762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1793 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s1836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1837 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 119, -3350841056831834457, NULL };
static frost$core$String $s1847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s1945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1970 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74", 105, -2897163937542556243, NULL };
static frost$core$String $s2027 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2028 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2053 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s2095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s2192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 4880269855066615229, NULL };
static frost$core$String $s2193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s2233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s2255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 119, -3350841056831834457, NULL };
static frost$core$String $s2342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s2477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 2495389199813969088, NULL };
static frost$core$String $s2786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s2846 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2944 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s2967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

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
frost$core$Object* $tmp36 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp34, ((frost$collections$Key*) $tmp35));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp126;
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
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
frost$core$Object* $tmp184 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp182, ((frost$collections$Key*) $tmp183));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
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
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp845 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Analyzer.frost:393:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp846 = &$tmp845->pointer;
*$tmp846 = ((frost$core$Int8*) org$frostlang$frostc$pass$Analyzer$$anonymous1$$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$R$$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp847 = &$tmp845->target;
frost$core$Immutable* $tmp848 = *$tmp847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Immutable** $tmp849 = &$tmp845->target;
*$tmp849 = ((frost$core$Immutable*) NULL);
ITable* $tmp850 = ((frost$collections$CollectionView*) $tmp843)->$class->itable;
while ($tmp850->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp850 = $tmp850->next;
}
$fn852 $tmp851 = $tmp850->methods[9];
frost$collections$Array* $tmp853 = $tmp851(((frost$collections$CollectionView*) $tmp843), ((frost$core$MutableMethod*) $tmp845));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp834, $tmp837, $tmp840, ((frost$collections$ListView*) $tmp853));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp854 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local47) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp855 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
return $tmp834;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:395
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp856 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp857 = *(&local47);
org$frostlang$frostc$Type** $tmp858 = &$tmp857->type;
org$frostlang$frostc$Type* $tmp859 = *$tmp858;
$fn861 $tmp860 = ($fn861) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp862 = $tmp860(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp856, $tmp859, $tmp862);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp863 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local47) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp864 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
return $tmp856;
block113:;
frost$core$Int $tmp865 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:397:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp866 = $tmp191.value;
int64_t $tmp867 = $tmp865.value;
bool $tmp868 = $tmp866 == $tmp867;
frost$core$Bit $tmp869 = (frost$core$Bit) {$tmp868};
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block118; else goto block119;
block118:;
org$frostlang$frostc$Position* $tmp871 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp872 = *$tmp871;
org$frostlang$frostc$IR$Value** $tmp873 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp874 = *$tmp873;
org$frostlang$frostc$Type** $tmp875 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$Type* $tmp876 = *$tmp875;
*(&local48) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
org$frostlang$frostc$Type* $tmp877 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local48) = $tmp876;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:398
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp878 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp879 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp880 = *$tmp879;
org$frostlang$frostc$Type* $tmp881 = *(&local48);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:398:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp882 = &$tmp880->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp883 = *$tmp882;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp884 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp885 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp884, $tmp885);
frost$collections$Array$add$frost$collections$Array$T($tmp884, ((frost$core$Object*) $tmp881));
org$frostlang$frostc$Type* $tmp886 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp883, ((frost$collections$ListView*) $tmp884));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
$fn888 $tmp887 = ($fn888) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp889 = $tmp887(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp878, $tmp886, $tmp889);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
org$frostlang$frostc$Type* $tmp890 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local48) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
return $tmp878;
block119:;
frost$core$Int $tmp891 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:400:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp892 = $tmp191.value;
int64_t $tmp893 = $tmp891.value;
bool $tmp894 = $tmp892 == $tmp893;
frost$core$Bit $tmp895 = (frost$core$Bit) {$tmp894};
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block122; else goto block123;
block122:;
org$frostlang$frostc$Position* $tmp897 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp898 = *$tmp897;
org$frostlang$frostc$IR$Value** $tmp899 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp900 = *$tmp899;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
org$frostlang$frostc$IR$Value* $tmp901 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local49) = $tmp900;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:401
org$frostlang$frostc$IR$Value* $tmp902 = *(&local49);
$fn904 $tmp903 = ($fn904) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp905 = $tmp903(param0, $tmp902, param2);
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp906 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local50) = $tmp905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:402
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp907 = *(&local50);
org$frostlang$frostc$Type** $tmp908 = &$tmp907->type;
org$frostlang$frostc$Type* $tmp909 = *$tmp908;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:402:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp910 = &((org$frostlang$frostc$Symbol*) $tmp909)->name;
frost$core$String* $tmp911 = *$tmp910;
frost$core$Bit $tmp912 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp911, &$s913);
bool $tmp914 = $tmp912.value;
if ($tmp914) goto block126; else goto block127;
block127:;
frost$core$Int $tmp915 = (frost$core$Int) {402u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s916, $tmp915);
abort(); // unreachable
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:403
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp917 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp918 = *(&local50);
org$frostlang$frostc$Type** $tmp919 = &$tmp918->type;
org$frostlang$frostc$Type* $tmp920 = *$tmp919;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:403:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp921 = &$tmp920->_subtypes;
org$frostlang$frostc$FixedArray* $tmp922 = *$tmp921;
frost$core$Bit $tmp923 = (frost$core$Bit) {$tmp922 != NULL};
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block129; else goto block130;
block130:;
frost$core$Int $tmp925 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s926, $tmp925, &$s927);
abort(); // unreachable
block129:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Int $tmp928 = (frost$core$Int) {1u};
frost$core$Object* $tmp929 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp922, $tmp928);
$fn931 $tmp930 = ($fn931) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp932 = $tmp930(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp917, ((org$frostlang$frostc$Type*) $tmp929), $tmp932);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q($tmp929);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp933 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp934 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
return $tmp917;
block123:;
frost$core$Int $tmp935 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:405:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp936 = $tmp191.value;
int64_t $tmp937 = $tmp935.value;
bool $tmp938 = $tmp936 == $tmp937;
frost$core$Bit $tmp939 = (frost$core$Bit) {$tmp938};
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block131; else goto block132;
block131:;
org$frostlang$frostc$Position* $tmp941 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp942 = *$tmp941;
org$frostlang$frostc$IR$Value** $tmp943 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp944 = *$tmp943;
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
org$frostlang$frostc$IR$Value* $tmp945 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local51) = $tmp944;
org$frostlang$frostc$IR$Value** $tmp946 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp947 = *$tmp946;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:406
org$frostlang$frostc$IR$Value* $tmp948 = *(&local51);
$fn950 $tmp949 = ($fn950) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp951 = $tmp949(param0, $tmp948, param2);
*(&local52) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp952 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local52) = $tmp951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:407
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp953 = *(&local52);
org$frostlang$frostc$Type** $tmp954 = &$tmp953->type;
org$frostlang$frostc$Type* $tmp955 = *$tmp954;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:407:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp956 = &((org$frostlang$frostc$Symbol*) $tmp955)->name;
frost$core$String* $tmp957 = *$tmp956;
frost$core$Bit $tmp958 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp957, &$s959);
bool $tmp960 = $tmp958.value;
if ($tmp960) goto block135; else goto block136;
block136:;
frost$core$Int $tmp961 = (frost$core$Int) {407u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s962, $tmp961);
abort(); // unreachable
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:408
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp963 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp964 = *(&local52);
org$frostlang$frostc$Type** $tmp965 = &$tmp964->type;
org$frostlang$frostc$Type* $tmp966 = *$tmp965;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:408:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp967 = &$tmp966->_subtypes;
org$frostlang$frostc$FixedArray* $tmp968 = *$tmp967;
frost$core$Bit $tmp969 = (frost$core$Bit) {$tmp968 != NULL};
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block138; else goto block139;
block139:;
frost$core$Int $tmp971 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s972, $tmp971, &$s973);
abort(); // unreachable
block138:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Int $tmp974 = (frost$core$Int) {1u};
frost$core$Object* $tmp975 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp968, $tmp974);
$fn977 $tmp976 = ($fn977) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp978 = $tmp976(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp963, ((org$frostlang$frostc$Type*) $tmp975), $tmp978);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
frost$core$Frost$unref$frost$core$Object$Q($tmp975);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp979 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local52) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp980 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
return $tmp963;
block132:;
frost$core$Int $tmp981 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:410:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp982 = $tmp191.value;
int64_t $tmp983 = $tmp981.value;
bool $tmp984 = $tmp982 == $tmp983;
frost$core$Bit $tmp985 = (frost$core$Bit) {$tmp984};
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp987 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp988 = *$tmp987;
org$frostlang$frostc$IR$Value** $tmp989 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp990 = *$tmp989;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
org$frostlang$frostc$IR$Value* $tmp991 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local53) = $tmp990;
org$frostlang$frostc$IR$Value** $tmp992 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp993 = *$tmp992;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:411
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp994 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR$Value* $tmp995 = *(&local53);
$fn997 $tmp996 = ($fn997) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp998 = $tmp996(param0, $tmp995, param2);
org$frostlang$frostc$Type** $tmp999 = &$tmp998->type;
org$frostlang$frostc$Type* $tmp1000 = *$tmp999;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1001 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1002 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1001, $tmp1002);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp994, $tmp1000, $tmp1001);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
org$frostlang$frostc$IR$Value* $tmp1003 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
return $tmp994;
block141:;
frost$core$Int $tmp1004 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:413:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1005 = $tmp191.value;
int64_t $tmp1006 = $tmp1004.value;
bool $tmp1007 = $tmp1005 == $tmp1006;
frost$core$Bit $tmp1008 = (frost$core$Bit) {$tmp1007};
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block143; else goto block144;
block143:;
org$frostlang$frostc$Position* $tmp1010 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp1011 = *$tmp1010;
org$frostlang$frostc$IR$Value** $tmp1012 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1013 = *$tmp1012;
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
org$frostlang$frostc$IR$Value* $tmp1014 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local54) = $tmp1013;
org$frostlang$frostc$IR$Value** $tmp1015 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1016 = *$tmp1015;
org$frostlang$frostc$IR$Value** $tmp1017 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1018 = *$tmp1017;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:414
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1019 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR$Value* $tmp1020 = *(&local54);
$fn1022 $tmp1021 = ($fn1022) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1023 = $tmp1021(param0, $tmp1020, param2);
org$frostlang$frostc$Type** $tmp1024 = &$tmp1023->type;
org$frostlang$frostc$Type* $tmp1025 = *$tmp1024;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1026 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1027 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1026, $tmp1027);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1019, $tmp1025, $tmp1026);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
org$frostlang$frostc$IR$Value* $tmp1028 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
return $tmp1019;
block144:;
frost$core$Int $tmp1029 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:416:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1030 = $tmp191.value;
int64_t $tmp1031 = $tmp1029.value;
bool $tmp1032 = $tmp1030 == $tmp1031;
frost$core$Bit $tmp1033 = (frost$core$Bit) {$tmp1032};
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block146; else goto block147;
block146:;
org$frostlang$frostc$Position* $tmp1035 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 0);
org$frostlang$frostc$Position $tmp1036 = *$tmp1035;
org$frostlang$frostc$MethodDecl** $tmp1037 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp1038 = *$tmp1037;
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
org$frostlang$frostc$MethodDecl* $tmp1039 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local55) = $tmp1038;
org$frostlang$frostc$FixedArray** $tmp1040 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp184)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1041 = *$tmp1040;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
org$frostlang$frostc$FixedArray* $tmp1042 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local56) = $tmp1041;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:417
org$frostlang$frostc$MethodDecl* $tmp1043 = *(&local55);
org$frostlang$frostc$Type** $tmp1044 = &$tmp1043->returnType;
org$frostlang$frostc$Type* $tmp1045 = *$tmp1044;
org$frostlang$frostc$Compiler** $tmp1046 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1047 = *$tmp1046;
org$frostlang$frostc$Type** $tmp1048 = &$tmp1047->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1049 = *$tmp1048;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:417:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1050 = &((org$frostlang$frostc$Symbol*) $tmp1045)->name;
frost$core$String* $tmp1051 = *$tmp1050;
frost$core$String** $tmp1052 = &((org$frostlang$frostc$Symbol*) $tmp1049)->name;
frost$core$String* $tmp1053 = *$tmp1052;
frost$core$Bit $tmp1054 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1051, $tmp1053);
bool $tmp1055 = $tmp1054.value;
if ($tmp1055) goto block153; else goto block154;
block153:;
org$frostlang$frostc$Type$Kind* $tmp1056 = &$tmp1045->typeKind;
org$frostlang$frostc$Type$Kind $tmp1057 = *$tmp1056;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1058;
$tmp1058 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1058->value = $tmp1057;
org$frostlang$frostc$Type$Kind* $tmp1059 = &$tmp1049->typeKind;
org$frostlang$frostc$Type$Kind $tmp1060 = *$tmp1059;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1061;
$tmp1061 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1061->value = $tmp1060;
ITable* $tmp1062 = ((frost$core$Equatable*) $tmp1058)->$class->itable;
while ($tmp1062->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1062 = $tmp1062->next;
}
$fn1064 $tmp1063 = $tmp1062->methods[0];
frost$core$Bit $tmp1065 = $tmp1063(((frost$core$Equatable*) $tmp1058), ((frost$core$Equatable*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1061)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1058)));
*(&local57) = $tmp1065;
goto block155;
block154:;
*(&local57) = $tmp1054;
goto block155;
block155:;
frost$core$Bit $tmp1066 = *(&local57);
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block149; else goto block151;
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:418
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1068 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1069 = *(&local55);
org$frostlang$frostc$Type** $tmp1070 = &$tmp1069->returnType;
org$frostlang$frostc$Type* $tmp1071 = *$tmp1070;
$fn1073 $tmp1072 = ($fn1073) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1074 = $tmp1072(param0, param1);
org$frostlang$frostc$FixedArray* $tmp1075 = *(&local56);
frost$core$Int $tmp1076 = (frost$core$Int) {0u};
frost$core$Object* $tmp1077 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1075, $tmp1076);
$fn1079 $tmp1078 = ($fn1079) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1080 = $tmp1078(param0, ((org$frostlang$frostc$IR$Value*) $tmp1077), param2);
frost$collections$ListView** $tmp1081 = &$tmp1080->nonNullImplications;
frost$collections$ListView* $tmp1082 = *$tmp1081;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp1068, $tmp1071, $tmp1074, $tmp1082);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q($tmp1077);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
org$frostlang$frostc$FixedArray* $tmp1083 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1084 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
return $tmp1068;
block151:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:422
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1085 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1086 = *(&local55);
org$frostlang$frostc$Type** $tmp1087 = &$tmp1086->returnType;
org$frostlang$frostc$Type* $tmp1088 = *$tmp1087;
$fn1090 $tmp1089 = ($fn1090) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1091 = $tmp1089(param0, param1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1085, $tmp1088, $tmp1091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
org$frostlang$frostc$FixedArray* $tmp1092 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1093 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
return $tmp1085;
block150:;
org$frostlang$frostc$FixedArray* $tmp1094 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1095 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:426
frost$core$Int $tmp1096 = (frost$core$Int) {426u};
frost$collections$HashMap** $tmp1097 = &param0->statements;
frost$collections$HashMap* $tmp1098 = *$tmp1097;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1099;
$tmp1099 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1099->value = param1;
frost$core$Object* $tmp1100 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1098, ((frost$collections$Key*) $tmp1099));
frost$core$Bit $tmp1101 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp1100) != NULL};
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block156; else goto block157;
block157:;
frost$core$Int $tmp1103 = (frost$core$Int) {426u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1104, $tmp1103, &$s1105);
abort(); // unreachable
block156:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:426:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1107 $tmp1106 = ($fn1107) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1100))->$class->vtable[0];
frost$core$String* $tmp1108 = $tmp1106(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1100)));
frost$core$String* $tmp1109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1110, $tmp1108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
frost$core$String* $tmp1111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1109, &$s1112);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1113, $tmp1096, $tmp1111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
frost$core$Frost$unref$frost$core$Object$Q($tmp1100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1099)));
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp183)));
goto block159;
block159:;

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
frost$core$Int* $tmp1114 = &param1->$rawValue;
frost$core$Int $tmp1115 = *$tmp1114;
frost$core$Int $tmp1116 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:433:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1117 = $tmp1115.value;
int64_t $tmp1118 = $tmp1116.value;
bool $tmp1119 = $tmp1117 == $tmp1118;
frost$core$Bit $tmp1120 = (frost$core$Bit) {$tmp1119};
bool $tmp1121 = $tmp1120.value;
if ($tmp1121) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp1122 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp1123 = *$tmp1122;
org$frostlang$frostc$Type** $tmp1124 = (org$frostlang$frostc$Type**) (param1->$data + 1);
org$frostlang$frostc$Type* $tmp1125 = *$tmp1124;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
org$frostlang$frostc$Type* $tmp1126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local0) = $tmp1125;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:434
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1127 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1128 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1129 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1130 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1129, $tmp1130);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1127, $tmp1128, $tmp1129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
org$frostlang$frostc$Type* $tmp1131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1127;
block3:;
frost$core$Int $tmp1132 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:436:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1133 = $tmp1115.value;
int64_t $tmp1134 = $tmp1132.value;
bool $tmp1135 = $tmp1133 == $tmp1134;
frost$core$Bit $tmp1136 = (frost$core$Bit) {$tmp1135};
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp1138 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp1139 = *$tmp1138;
org$frostlang$frostc$Type** $tmp1140 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1141 = *$tmp1140;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
org$frostlang$frostc$Type* $tmp1142 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local1) = $tmp1141;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:437
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1143 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1144 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1145 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1146 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1145, $tmp1146);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1143, $tmp1144, $tmp1145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
org$frostlang$frostc$Type* $tmp1147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1143;
block6:;
frost$core$Int $tmp1148 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:439:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1149 = $tmp1115.value;
int64_t $tmp1150 = $tmp1148.value;
bool $tmp1151 = $tmp1149 == $tmp1150;
frost$core$Bit $tmp1152 = (frost$core$Bit) {$tmp1151};
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp1154 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp1155 = *$tmp1154;
*(&local2) = $tmp1155;
org$frostlang$frostc$Type** $tmp1156 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1157 = *$tmp1156;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:440
frost$collections$Array** $tmp1158 = &param2->locals;
frost$collections$Array* $tmp1159 = *$tmp1158;
frost$core$Int $tmp1160 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:440:32
frost$core$Int $tmp1161 = (frost$core$Int) {0u};
int64_t $tmp1162 = $tmp1160.value;
int64_t $tmp1163 = $tmp1161.value;
bool $tmp1164 = $tmp1162 >= $tmp1163;
frost$core$Bit $tmp1165 = (frost$core$Bit) {$tmp1164};
bool $tmp1166 = $tmp1165.value;
if ($tmp1166) goto block14; else goto block13;
block14:;
ITable* $tmp1167 = ((frost$collections$CollectionView*) $tmp1159)->$class->itable;
while ($tmp1167->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1167 = $tmp1167->next;
}
$fn1169 $tmp1168 = $tmp1167->methods[0];
frost$core$Int $tmp1170 = $tmp1168(((frost$collections$CollectionView*) $tmp1159));
int64_t $tmp1171 = $tmp1160.value;
int64_t $tmp1172 = $tmp1170.value;
bool $tmp1173 = $tmp1171 < $tmp1172;
frost$core$Bit $tmp1174 = (frost$core$Bit) {$tmp1173};
bool $tmp1175 = $tmp1174.value;
if ($tmp1175) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1176 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1177, $tmp1176, &$s1178);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1179 = &$tmp1159->data;
frost$core$Object** $tmp1180 = *$tmp1179;
frost$core$Int64 $tmp1181 = frost$core$Int64$init$frost$core$Int($tmp1160);
int64_t $tmp1182 = $tmp1181.value;
frost$core$Object* $tmp1183 = $tmp1180[$tmp1182];
frost$core$Frost$ref$frost$core$Object$Q($tmp1183);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1183)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1183);
return ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1183);
block9:;
frost$core$Int $tmp1184 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:442:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1185 = $tmp1115.value;
int64_t $tmp1186 = $tmp1184.value;
bool $tmp1187 = $tmp1185 == $tmp1186;
frost$core$Bit $tmp1188 = (frost$core$Bit) {$tmp1187};
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type** $tmp1190 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp1191 = *$tmp1190;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
org$frostlang$frostc$Type* $tmp1192 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local3) = $tmp1191;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:443
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1193 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1194 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1195 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1196 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1195, $tmp1196);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1193, $tmp1194, $tmp1195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
org$frostlang$frostc$Type* $tmp1197 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1193;
block16:;
frost$core$Int $tmp1198 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:445:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1199 = $tmp1115.value;
int64_t $tmp1200 = $tmp1198.value;
bool $tmp1201 = $tmp1199 == $tmp1200;
frost$core$Bit $tmp1202 = (frost$core$Bit) {$tmp1201};
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block18; else goto block19;
block18:;
frost$core$Int* $tmp1204 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp1205 = *$tmp1204;
*(&local4) = $tmp1205;
org$frostlang$frostc$Type** $tmp1206 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1207 = *$tmp1206;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:446
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1208 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array** $tmp1209 = &param2->parameters;
frost$collections$Array* $tmp1210 = *$tmp1209;
frost$core$Int $tmp1211 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:446:50
frost$core$Int $tmp1212 = (frost$core$Int) {0u};
int64_t $tmp1213 = $tmp1211.value;
int64_t $tmp1214 = $tmp1212.value;
bool $tmp1215 = $tmp1213 >= $tmp1214;
frost$core$Bit $tmp1216 = (frost$core$Bit) {$tmp1215};
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block24; else goto block23;
block24:;
ITable* $tmp1218 = ((frost$collections$CollectionView*) $tmp1210)->$class->itable;
while ($tmp1218->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1218 = $tmp1218->next;
}
$fn1220 $tmp1219 = $tmp1218->methods[0];
frost$core$Int $tmp1221 = $tmp1219(((frost$collections$CollectionView*) $tmp1210));
int64_t $tmp1222 = $tmp1211.value;
int64_t $tmp1223 = $tmp1221.value;
bool $tmp1224 = $tmp1222 < $tmp1223;
frost$core$Bit $tmp1225 = (frost$core$Bit) {$tmp1224};
bool $tmp1226 = $tmp1225.value;
if ($tmp1226) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1227 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1228, $tmp1227, &$s1229);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1230 = &$tmp1210->data;
frost$core$Object** $tmp1231 = *$tmp1230;
frost$core$Int64 $tmp1232 = frost$core$Int64$init$frost$core$Int($tmp1211);
int64_t $tmp1233 = $tmp1232.value;
frost$core$Object* $tmp1234 = $tmp1231[$tmp1233];
frost$core$Frost$ref$frost$core$Object$Q($tmp1234);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1235 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1236 = (frost$core$Int) {3u};
frost$core$Int $tmp1237 = *(&local4);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int($tmp1235, $tmp1236, $tmp1237);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1208, ((org$frostlang$frostc$Type*) $tmp1234), $tmp1235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q($tmp1234);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
return $tmp1208;
block19:;
frost$core$Int $tmp1238 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:448:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1239 = $tmp1115.value;
int64_t $tmp1240 = $tmp1238.value;
bool $tmp1241 = $tmp1239 == $tmp1240;
frost$core$Bit $tmp1242 = (frost$core$Bit) {$tmp1241};
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block25; else goto block26;
block25:;
frost$core$Real64* $tmp1244 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp1245 = *$tmp1244;
org$frostlang$frostc$Type** $tmp1246 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1247 = *$tmp1246;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
org$frostlang$frostc$Type* $tmp1248 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local5) = $tmp1247;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:449
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1249 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1250 = *(&local5);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1251 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1252 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1251, $tmp1252);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1249, $tmp1250, $tmp1251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
org$frostlang$frostc$Type* $tmp1253 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1249;
block26:;
frost$core$Int $tmp1254 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:451:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1255 = $tmp1115.value;
int64_t $tmp1256 = $tmp1254.value;
bool $tmp1257 = $tmp1255 == $tmp1256;
frost$core$Bit $tmp1258 = (frost$core$Bit) {$tmp1257};
bool $tmp1259 = $tmp1258.value;
if ($tmp1259) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Statement$ID* $tmp1260 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1261 = *$tmp1260;
*(&local6) = $tmp1261;
org$frostlang$frostc$Type** $tmp1262 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1263 = *$tmp1262;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:452
org$frostlang$frostc$IR$Statement$ID $tmp1264 = *(&local6);
$fn1266 $tmp1265 = ($fn1266) param0->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1267 = $tmp1265(param0, $tmp1264, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
return $tmp1267;
block29:;
frost$core$Int $tmp1268 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:454:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1269 = $tmp1115.value;
int64_t $tmp1270 = $tmp1268.value;
bool $tmp1271 = $tmp1269 == $tmp1270;
frost$core$Bit $tmp1272 = (frost$core$Bit) {$tmp1271};
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block31; else goto block32;
block31:;
frost$core$String** $tmp1274 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp1275 = *$tmp1274;
org$frostlang$frostc$Type** $tmp1276 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1277 = *$tmp1276;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
org$frostlang$frostc$Type* $tmp1278 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
*(&local7) = $tmp1277;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:455
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1279 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1280 = *(&local7);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1281 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1282 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1281, $tmp1282);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1279, $tmp1280, $tmp1281);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
org$frostlang$frostc$Type* $tmp1283 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1279;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:458
frost$core$Int $tmp1284 = (frost$core$Int) {458u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:458:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1286 $tmp1285 = ($fn1286) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1287 = $tmp1285(((frost$core$Object*) param1));
frost$core$String* $tmp1288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1289, $tmp1287);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$String* $tmp1290 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1288, &$s1291);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1292, $tmp1284, $tmp1290);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
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
frost$collections$HashMap** $tmp1293 = &param0->predecessors;
frost$collections$HashMap* $tmp1294 = *$tmp1293;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1295;
$tmp1295 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1295->value = param2;
frost$core$Object* $tmp1296 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1294, ((frost$collections$Key*) $tmp1295));
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp1296)));
frost$collections$HashSet* $tmp1297 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local0) = ((frost$collections$HashSet*) $tmp1296);
frost$core$Frost$unref$frost$core$Object$Q($tmp1296);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1295)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:465
frost$collections$HashSet* $tmp1298 = *(&local0);
frost$core$Bit $tmp1299 = (frost$core$Bit) {$tmp1298 == NULL};
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:466
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp1301 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$collections$HashSet* $tmp1302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local0) = $tmp1301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:467
frost$collections$HashMap** $tmp1303 = &param0->predecessors;
frost$collections$HashMap* $tmp1304 = *$tmp1303;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1305;
$tmp1305 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1305->value = param2;
frost$collections$HashSet* $tmp1306 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1304, ((frost$collections$Key*) $tmp1305), ((frost$core$Object*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1305)));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:469
frost$collections$HashSet* $tmp1307 = *(&local0);
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper* $tmp1308;
$tmp1308 = (org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass);
$tmp1308->value = param1;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:469:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1309 = &$tmp1307->contents;
frost$collections$HashMap* $tmp1310 = *$tmp1309;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1310, ((frost$collections$Key*) $tmp1308), ((frost$core$Object*) ((frost$collections$Key*) $tmp1308)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1308)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:470
frost$core$Bit $tmp1311 = (frost$core$Bit) {false};
*(&local1) = $tmp1311;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:471
frost$collections$HashSet* $tmp1312 = *(&local0);
ITable* $tmp1313 = ((frost$collections$Iterable*) $tmp1312)->$class->itable;
while ($tmp1313->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1313 = $tmp1313->next;
}
$fn1315 $tmp1314 = $tmp1313->methods[0];
frost$collections$Iterator* $tmp1316 = $tmp1314(((frost$collections$Iterable*) $tmp1312));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$collections$Iterator* $tmp1317 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local2) = $tmp1316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:472
frost$collections$HashMap** $tmp1318 = &param0->entryStates;
frost$collections$HashMap* $tmp1319 = *$tmp1318;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1320;
$tmp1320 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1320->value = param2;
frost$core$Object* $tmp1321 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1319, ((frost$collections$Key*) $tmp1320));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1321)));
org$frostlang$frostc$pass$Analyzer$State* $tmp1322 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1321);
frost$core$Frost$unref$frost$core$Object$Q($tmp1321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1320)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:473
org$frostlang$frostc$pass$Analyzer$State* $tmp1323 = *(&local3);
frost$core$Bit $tmp1324 = (frost$core$Bit) {$tmp1323 == NULL};
bool $tmp1325 = $tmp1324.value;
if ($tmp1325) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:474
frost$collections$Iterator* $tmp1326 = *(&local2);
ITable* $tmp1327 = $tmp1326->$class->itable;
while ($tmp1327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1327 = $tmp1327->next;
}
$fn1329 $tmp1328 = $tmp1327->methods[1];
frost$core$Object* $tmp1330 = $tmp1328($tmp1326);
$fn1332 $tmp1331 = ($fn1332) param0->$class->vtable[9];
org$frostlang$frostc$pass$Analyzer$State* $tmp1333 = $tmp1331(param0, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1330)->value);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
org$frostlang$frostc$pass$Analyzer$State* $tmp1334 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local3) = $tmp1333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$Frost$unref$frost$core$Object$Q($tmp1330);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:475
frost$collections$HashMap** $tmp1335 = &param0->entryStates;
frost$collections$HashMap* $tmp1336 = *$tmp1335;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1337;
$tmp1337 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1337->value = param2;
org$frostlang$frostc$pass$Analyzer$State* $tmp1338 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1336, ((frost$collections$Key*) $tmp1337), ((frost$core$Object*) $tmp1338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1337)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:476
frost$core$Bit $tmp1339 = (frost$core$Bit) {true};
*(&local1) = $tmp1339;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:478
frost$collections$Iterator* $tmp1340 = *(&local2);
goto block6;
block6:;
ITable* $tmp1341 = $tmp1340->$class->itable;
while ($tmp1341->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1341 = $tmp1341->next;
}
$fn1343 $tmp1342 = $tmp1341->methods[0];
frost$core$Bit $tmp1344 = $tmp1342($tmp1340);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block8; else goto block7;
block7:;
ITable* $tmp1346 = $tmp1340->$class->itable;
while ($tmp1346->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1346 = $tmp1346->next;
}
$fn1348 $tmp1347 = $tmp1346->methods[1];
frost$core$Object* $tmp1349 = $tmp1347($tmp1340);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1349)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:479
frost$core$Bit $tmp1350 = *(&local1);
bool $tmp1351 = $tmp1350.value;
if ($tmp1351) goto block9; else goto block10;
block9:;
*(&local5) = $tmp1350;
goto block11;
block10:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1352 = *(&local3);
org$frostlang$frostc$Compiler** $tmp1353 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1354 = *$tmp1353;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1355 = *(&local4);
$fn1357 $tmp1356 = ($fn1357) param0->$class->vtable[9];
org$frostlang$frostc$pass$Analyzer$State* $tmp1358 = $tmp1356(param0, $tmp1355);
$fn1360 $tmp1359 = ($fn1360) $tmp1352->$class->vtable[2];
frost$core$Bit $tmp1361 = $tmp1359($tmp1352, $tmp1354, $tmp1358);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local5) = $tmp1361;
goto block11;
block11:;
frost$core$Bit $tmp1362 = *(&local5);
*(&local1) = $tmp1362;
frost$core$Frost$unref$frost$core$Object$Q($tmp1349);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:481
frost$core$Bit $tmp1363 = *(&local1);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:482
frost$collections$HashSet** $tmp1365 = &param0->worklist;
frost$collections$HashSet* $tmp1366 = *$tmp1365;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1367;
$tmp1367 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1367->value = param2;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:482:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1368 = &$tmp1366->contents;
frost$collections$HashMap* $tmp1369 = *$tmp1368;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1369, ((frost$collections$Key*) $tmp1367), ((frost$core$Object*) ((frost$collections$Key*) $tmp1367)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1367)));
goto block13;
block13:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1370 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$collections$Iterator* $tmp1371 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$collections$HashSet* $tmp1372 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
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
org$frostlang$frostc$LinkedList** $tmp1373 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp1374 = *$tmp1373;
$fn1376 $tmp1375 = ($fn1376) $tmp1374->$class->vtable[6];
frost$core$Object* $tmp1377 = $tmp1375($tmp1374);
frost$core$Int* $tmp1378 = &((org$frostlang$frostc$IR$Statement*) $tmp1377)->$rawValue;
frost$core$Int $tmp1379 = *$tmp1378;
frost$core$Int $tmp1380 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:500:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1381 = $tmp1379.value;
int64_t $tmp1382 = $tmp1380.value;
bool $tmp1383 = $tmp1381 == $tmp1382;
frost$core$Bit $tmp1384 = (frost$core$Bit) {$tmp1383};
bool $tmp1385 = $tmp1384.value;
if ($tmp1385) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1386 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1377)->$data + 0);
org$frostlang$frostc$Position $tmp1387 = *$tmp1386;
org$frostlang$frostc$IR$Value** $tmp1388 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1377)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1389 = *$tmp1388;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
org$frostlang$frostc$IR$Value* $tmp1390 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local0) = $tmp1389;
org$frostlang$frostc$IR$Block$ID* $tmp1391 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1377)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1392 = *$tmp1391;
org$frostlang$frostc$IR$Block$ID* $tmp1393 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1377)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1394 = *$tmp1393;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:501
org$frostlang$frostc$IR$Value* $tmp1395 = *(&local0);
$fn1397 $tmp1396 = ($fn1397) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1398 = $tmp1396(param0, $tmp1395, param3);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1399 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local1) = $tmp1398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:502
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1400 = *(&local1);
frost$collections$ListView** $tmp1401 = &$tmp1400->nonNullImplications;
frost$collections$ListView* $tmp1402 = *$tmp1401;
frost$core$Bit $tmp1403 = (frost$core$Bit) {$tmp1402 != NULL};
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:503
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1405 = *(&local1);
frost$collections$ListView** $tmp1406 = &$tmp1405->nonNullImplications;
frost$collections$ListView* $tmp1407 = *$tmp1406;
ITable* $tmp1408 = ((frost$collections$Iterable*) $tmp1407)->$class->itable;
while ($tmp1408->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1408 = $tmp1408->next;
}
$fn1410 $tmp1409 = $tmp1408->methods[0];
frost$collections$Iterator* $tmp1411 = $tmp1409(((frost$collections$Iterable*) $tmp1407));
goto block7;
block7:;
ITable* $tmp1412 = $tmp1411->$class->itable;
while ($tmp1412->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1412 = $tmp1412->next;
}
$fn1414 $tmp1413 = $tmp1412->methods[0];
frost$core$Bit $tmp1415 = $tmp1413($tmp1411);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block9; else goto block8;
block8:;
*(&local2) = ((frost$core$Tuple2*) NULL);
ITable* $tmp1417 = $tmp1411->$class->itable;
while ($tmp1417->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1417 = $tmp1417->next;
}
$fn1419 $tmp1418 = $tmp1417->methods[1];
frost$core$Object* $tmp1420 = $tmp1418($tmp1411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Tuple2*) $tmp1420)));
frost$core$Tuple2* $tmp1421 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local2) = ((frost$core$Tuple2*) $tmp1420);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:504
frost$core$Tuple2* $tmp1422 = *(&local2);
frost$core$Object** $tmp1423 = &$tmp1422->f1;
frost$core$Object* $tmp1424 = *$tmp1423;
frost$core$Int $tmp1425 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:504:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1426 = param2.value;
int64_t $tmp1427 = $tmp1425.value;
bool $tmp1428 = $tmp1426 == $tmp1427;
frost$core$Bit $tmp1429 = (frost$core$Bit) {$tmp1428};
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Analyzer.frost:504:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
bool $tmp1430 = ((frost$core$Bit$wrapper*) $tmp1424)->value.value;
bool $tmp1431 = $tmp1429.value;
bool $tmp1432 = $tmp1430 == $tmp1431;
frost$core$Bit $tmp1433 = (frost$core$Bit) {$tmp1432};
bool $tmp1434 = $tmp1433.value;
if ($tmp1434) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:505
frost$core$Tuple2* $tmp1435 = *(&local2);
frost$core$Object** $tmp1436 = &$tmp1435->f0;
frost$core$Object* $tmp1437 = *$tmp1436;
frost$core$Int* $tmp1438 = &((org$frostlang$frostc$pass$Analyzer$Definition*) $tmp1437)->$rawValue;
frost$core$Int $tmp1439 = *$tmp1438;
frost$core$Int $tmp1440 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:506:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1441 = $tmp1439.value;
int64_t $tmp1442 = $tmp1440.value;
bool $tmp1443 = $tmp1441 == $tmp1442;
frost$core$Bit $tmp1444 = (frost$core$Bit) {$tmp1443};
bool $tmp1445 = $tmp1444.value;
if ($tmp1445) goto block15; else goto block16;
block15:;
frost$core$Int* $tmp1446 = (frost$core$Int*) (((org$frostlang$frostc$pass$Analyzer$Definition*) $tmp1437)->$data + 0);
frost$core$Int $tmp1447 = *$tmp1446;
*(&local3) = $tmp1447;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:507
frost$collections$Array** $tmp1448 = &param3->locals;
frost$collections$Array* $tmp1449 = *$tmp1448;
frost$core$Int $tmp1450 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:507:60
frost$core$Int $tmp1451 = (frost$core$Int) {0u};
int64_t $tmp1452 = $tmp1450.value;
int64_t $tmp1453 = $tmp1451.value;
bool $tmp1454 = $tmp1452 >= $tmp1453;
frost$core$Bit $tmp1455 = (frost$core$Bit) {$tmp1454};
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block21; else goto block20;
block21:;
ITable* $tmp1457 = ((frost$collections$CollectionView*) $tmp1449)->$class->itable;
while ($tmp1457->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1457 = $tmp1457->next;
}
$fn1459 $tmp1458 = $tmp1457->methods[0];
frost$core$Int $tmp1460 = $tmp1458(((frost$collections$CollectionView*) $tmp1449));
int64_t $tmp1461 = $tmp1450.value;
int64_t $tmp1462 = $tmp1460.value;
bool $tmp1463 = $tmp1461 < $tmp1462;
frost$core$Bit $tmp1464 = (frost$core$Bit) {$tmp1463};
bool $tmp1465 = $tmp1464.value;
if ($tmp1465) goto block19; else goto block20;
block20:;
frost$core$Int $tmp1466 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1467, $tmp1466, &$s1468);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1469 = &$tmp1449->data;
frost$core$Object** $tmp1470 = *$tmp1469;
frost$core$Int64 $tmp1471 = frost$core$Int64$init$frost$core$Int($tmp1450);
int64_t $tmp1472 = $tmp1471.value;
frost$core$Object* $tmp1473 = $tmp1470[$tmp1472];
frost$core$Frost$ref$frost$core$Object$Q($tmp1473);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1473)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1474 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1473);
frost$core$Frost$unref$frost$core$Object$Q($tmp1473);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:508
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1475 = *(&local4);
frost$core$Bit $tmp1476 = (frost$core$Bit) {true};
bool $tmp1477 = $tmp1476.value;
if ($tmp1477) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1478 = (frost$core$Int) {508u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1479, $tmp1478);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:509
frost$collections$Array** $tmp1480 = &param3->locals;
frost$collections$Array* $tmp1481 = *$tmp1480;
frost$core$Int $tmp1482 = *(&local3);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1483 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1484 = *(&local4);
org$frostlang$frostc$Type** $tmp1485 = &$tmp1484->type;
org$frostlang$frostc$Type* $tmp1486 = *$tmp1485;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:509:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1487 = &$tmp1486->typeKind;
org$frostlang$frostc$Type$Kind $tmp1488 = *$tmp1487;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1489;
$tmp1489 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1489->value = $tmp1488;
frost$core$Int $tmp1490 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1491 = &(&local7)->$rawValue;
*$tmp1491 = $tmp1490;
org$frostlang$frostc$Type$Kind $tmp1492 = *(&local7);
*(&local6) = $tmp1492;
org$frostlang$frostc$Type$Kind $tmp1493 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1494;
$tmp1494 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1494->value = $tmp1493;
ITable* $tmp1495 = ((frost$core$Equatable*) $tmp1489)->$class->itable;
while ($tmp1495->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1495 = $tmp1495->next;
}
$fn1497 $tmp1496 = $tmp1495->methods[1];
frost$core$Bit $tmp1498 = $tmp1496(((frost$core$Equatable*) $tmp1489), ((frost$core$Equatable*) $tmp1494));
bool $tmp1499 = $tmp1498.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1494)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1489)));
if ($tmp1499) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
*(&local5) = $tmp1486;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
goto block24;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1500 = &$tmp1486->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1501 = *$tmp1500;
frost$core$Bit $tmp1502 = (frost$core$Bit) {$tmp1501 != NULL};
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1504 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1505, $tmp1504, &$s1506);
abort(); // unreachable
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
frost$core$Int $tmp1507 = (frost$core$Int) {0u};
frost$core$Object* $tmp1508 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1501, $tmp1507);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1508)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1508);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp1508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1508)));
goto block24;
block24:;
org$frostlang$frostc$Type* $tmp1509 = *(&local5);
frost$core$Tuple2* $tmp1510 = *(&local2);
frost$core$Object** $tmp1511 = &$tmp1510->f0;
frost$core$Object* $tmp1512 = *$tmp1511;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1483, $tmp1509, ((org$frostlang$frostc$pass$Analyzer$Definition*) $tmp1512));
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:509:49
frost$core$Int $tmp1513 = (frost$core$Int) {0u};
int64_t $tmp1514 = $tmp1482.value;
int64_t $tmp1515 = $tmp1513.value;
bool $tmp1516 = $tmp1514 >= $tmp1515;
frost$core$Bit $tmp1517 = (frost$core$Bit) {$tmp1516};
bool $tmp1518 = $tmp1517.value;
if ($tmp1518) goto block34; else goto block33;
block34:;
ITable* $tmp1519 = ((frost$collections$CollectionView*) $tmp1481)->$class->itable;
while ($tmp1519->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1519 = $tmp1519->next;
}
$fn1521 $tmp1520 = $tmp1519->methods[0];
frost$core$Int $tmp1522 = $tmp1520(((frost$collections$CollectionView*) $tmp1481));
int64_t $tmp1523 = $tmp1482.value;
int64_t $tmp1524 = $tmp1522.value;
bool $tmp1525 = $tmp1523 < $tmp1524;
frost$core$Bit $tmp1526 = (frost$core$Bit) {$tmp1525};
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block32; else goto block33;
block33:;
frost$core$Int $tmp1528 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1529, $tmp1528, &$s1530);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1531 = &$tmp1481->data;
frost$core$Object** $tmp1532 = *$tmp1531;
frost$core$Int64 $tmp1533 = frost$core$Int64$init$frost$core$Int($tmp1482);
int64_t $tmp1534 = $tmp1533.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Object* $tmp1535 = $tmp1532[$tmp1534];
frost$core$Frost$unref$frost$core$Object$Q($tmp1535);
$tmp1532[$tmp1534] = ((frost$core$Object*) $tmp1483);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
org$frostlang$frostc$Type* $tmp1536 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1537 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block14;
block16:;
frost$core$Int $tmp1538 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:512:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1539 = $tmp1439.value;
int64_t $tmp1540 = $tmp1538.value;
bool $tmp1541 = $tmp1539 == $tmp1540;
frost$core$Bit $tmp1542 = (frost$core$Bit) {$tmp1541};
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block35; else goto block14;
block35:;
frost$core$Int* $tmp1544 = (frost$core$Int*) (((org$frostlang$frostc$pass$Analyzer$Definition*) $tmp1437)->$data + 0);
frost$core$Int $tmp1545 = *$tmp1544;
*(&local8) = $tmp1545;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:513
frost$collections$Array** $tmp1546 = &param3->parameters;
frost$collections$Array* $tmp1547 = *$tmp1546;
frost$core$Int $tmp1548 = *(&local8);
frost$collections$Array** $tmp1549 = &param3->parameters;
frost$collections$Array* $tmp1550 = *$tmp1549;
frost$core$Int $tmp1551 = *(&local8);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:513:79
frost$core$Int $tmp1552 = (frost$core$Int) {0u};
int64_t $tmp1553 = $tmp1551.value;
int64_t $tmp1554 = $tmp1552.value;
bool $tmp1555 = $tmp1553 >= $tmp1554;
frost$core$Bit $tmp1556 = (frost$core$Bit) {$tmp1555};
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block40; else goto block39;
block40:;
ITable* $tmp1558 = ((frost$collections$CollectionView*) $tmp1550)->$class->itable;
while ($tmp1558->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1558 = $tmp1558->next;
}
$fn1560 $tmp1559 = $tmp1558->methods[0];
frost$core$Int $tmp1561 = $tmp1559(((frost$collections$CollectionView*) $tmp1550));
int64_t $tmp1562 = $tmp1551.value;
int64_t $tmp1563 = $tmp1561.value;
bool $tmp1564 = $tmp1562 < $tmp1563;
frost$core$Bit $tmp1565 = (frost$core$Bit) {$tmp1564};
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block38; else goto block39;
block39:;
frost$core$Int $tmp1567 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1568, $tmp1567, &$s1569);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1570 = &$tmp1550->data;
frost$core$Object** $tmp1571 = *$tmp1570;
frost$core$Int64 $tmp1572 = frost$core$Int64$init$frost$core$Int($tmp1551);
int64_t $tmp1573 = $tmp1572.value;
frost$core$Object* $tmp1574 = $tmp1571[$tmp1573];
frost$core$Frost$ref$frost$core$Object$Q($tmp1574);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:513:97
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1575 = &((org$frostlang$frostc$Type*) $tmp1574)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1576 = *$tmp1575;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1577;
$tmp1577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1577->value = $tmp1576;
frost$core$Int $tmp1578 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1579 = &(&local11)->$rawValue;
*$tmp1579 = $tmp1578;
org$frostlang$frostc$Type$Kind $tmp1580 = *(&local11);
*(&local10) = $tmp1580;
org$frostlang$frostc$Type$Kind $tmp1581 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1582;
$tmp1582 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1582->value = $tmp1581;
ITable* $tmp1583 = ((frost$core$Equatable*) $tmp1577)->$class->itable;
while ($tmp1583->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1583 = $tmp1583->next;
}
$fn1585 $tmp1584 = $tmp1583->methods[1];
frost$core$Bit $tmp1586 = $tmp1584(((frost$core$Equatable*) $tmp1577), ((frost$core$Equatable*) $tmp1582));
bool $tmp1587 = $tmp1586.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1582)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1577)));
if ($tmp1587) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1574)));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1574)));
goto block41;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1588 = &((org$frostlang$frostc$Type*) $tmp1574)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1589 = *$tmp1588;
frost$core$Bit $tmp1590 = (frost$core$Bit) {$tmp1589 != NULL};
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block46; else goto block47;
block47:;
frost$core$Int $tmp1592 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1593, $tmp1592, &$s1594);
abort(); // unreachable
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Int $tmp1595 = (frost$core$Int) {0u};
frost$core$Object* $tmp1596 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1589, $tmp1595);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1596)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1596);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1596)));
goto block41;
block41:;
org$frostlang$frostc$Type* $tmp1597 = *(&local9);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:513:53
frost$core$Int $tmp1598 = (frost$core$Int) {0u};
int64_t $tmp1599 = $tmp1548.value;
int64_t $tmp1600 = $tmp1598.value;
bool $tmp1601 = $tmp1599 >= $tmp1600;
frost$core$Bit $tmp1602 = (frost$core$Bit) {$tmp1601};
bool $tmp1603 = $tmp1602.value;
if ($tmp1603) goto block51; else goto block50;
block51:;
ITable* $tmp1604 = ((frost$collections$CollectionView*) $tmp1547)->$class->itable;
while ($tmp1604->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1604 = $tmp1604->next;
}
$fn1606 $tmp1605 = $tmp1604->methods[0];
frost$core$Int $tmp1607 = $tmp1605(((frost$collections$CollectionView*) $tmp1547));
int64_t $tmp1608 = $tmp1548.value;
int64_t $tmp1609 = $tmp1607.value;
bool $tmp1610 = $tmp1608 < $tmp1609;
frost$core$Bit $tmp1611 = (frost$core$Bit) {$tmp1610};
bool $tmp1612 = $tmp1611.value;
if ($tmp1612) goto block49; else goto block50;
block50:;
frost$core$Int $tmp1613 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1614, $tmp1613, &$s1615);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1616 = &$tmp1547->data;
frost$core$Object** $tmp1617 = *$tmp1616;
frost$core$Int64 $tmp1618 = frost$core$Int64$init$frost$core$Int($tmp1548);
int64_t $tmp1619 = $tmp1618.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
frost$core$Object* $tmp1620 = $tmp1617[$tmp1619];
frost$core$Frost$unref$frost$core$Object$Q($tmp1620);
$tmp1617[$tmp1619] = ((frost$core$Object*) $tmp1597);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
org$frostlang$frostc$Type* $tmp1621 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1574);
goto block14;
block14:;
goto block11;
block11:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1420);
frost$core$Tuple2* $tmp1622 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
*(&local2) = ((frost$core$Tuple2*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
goto block6;
block6:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1623 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1624 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1377);
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:521
frost$core$Frost$unref$frost$core$Object$Q($tmp1377);
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
frost$core$Int $tmp1625 = param2.$rawValue;
frost$core$Int $tmp1626 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:529:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1627 = $tmp1625.value;
int64_t $tmp1628 = $tmp1626.value;
bool $tmp1629 = $tmp1627 == $tmp1628;
frost$core$Bit $tmp1630 = (frost$core$Bit) {$tmp1629};
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:530
frost$core$Int* $tmp1632 = &param3->$rawValue;
frost$core$Int $tmp1633 = *$tmp1632;
frost$core$Int $tmp1634 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:531:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1635 = $tmp1633.value;
int64_t $tmp1636 = $tmp1634.value;
bool $tmp1637 = $tmp1635 == $tmp1636;
frost$core$Bit $tmp1638 = (frost$core$Bit) {$tmp1637};
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block6; else goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:532
org$frostlang$frostc$Compiler** $tmp1640 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1641 = *$tmp1640;
org$frostlang$frostc$Type** $tmp1642 = &$tmp1641->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1643 = *$tmp1642;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:532:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1644 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1645 = *$tmp1644;
frost$core$String** $tmp1646 = &((org$frostlang$frostc$Symbol*) $tmp1643)->name;
frost$core$String* $tmp1647 = *$tmp1646;
frost$core$Bit $tmp1648 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1645, $tmp1647);
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1650 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1651 = *$tmp1650;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1652;
$tmp1652 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1652->value = $tmp1651;
org$frostlang$frostc$Type$Kind* $tmp1653 = &$tmp1643->typeKind;
org$frostlang$frostc$Type$Kind $tmp1654 = *$tmp1653;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1655;
$tmp1655 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1655->value = $tmp1654;
ITable* $tmp1656 = ((frost$core$Equatable*) $tmp1652)->$class->itable;
while ($tmp1656->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1656 = $tmp1656->next;
}
$fn1658 $tmp1657 = $tmp1656->methods[0];
frost$core$Bit $tmp1659 = $tmp1657(((frost$core$Equatable*) $tmp1652), ((frost$core$Equatable*) $tmp1655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1655)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1652)));
*(&local0) = $tmp1659;
goto block11;
block10:;
*(&local0) = $tmp1648;
goto block11;
block11:;
frost$core$Bit $tmp1660 = *(&local0);
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1662 = (frost$core$Int) {532u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1663, $tmp1662);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:533
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1664 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1665 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1664, $tmp1665);
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp1666 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
$fn1668 $tmp1667 = ($fn1668) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1669 = $tmp1667(param0, param1);
frost$core$Bit $tmp1670 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1671;
$tmp1671 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1671->value = $tmp1670;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp1666, ((frost$core$Object*) $tmp1669), ((frost$core$Object*) $tmp1671));
frost$collections$Array$add$frost$collections$Array$T($tmp1664, ((frost$core$Object*) $tmp1666));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
frost$collections$Array* $tmp1672 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local1) = $tmp1664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:534
frost$core$Int* $tmp1673 = &param1->$rawValue;
frost$core$Int $tmp1674 = *$tmp1673;
frost$core$Int $tmp1675 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:535:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1676 = $tmp1674.value;
int64_t $tmp1677 = $tmp1675.value;
bool $tmp1678 = $tmp1676 == $tmp1677;
frost$core$Bit $tmp1679 = (frost$core$Bit) {$tmp1678};
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block15; else goto block14;
block15:;
org$frostlang$frostc$IR$Statement$ID* $tmp1681 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1682 = *$tmp1681;
*(&local2) = $tmp1682;
org$frostlang$frostc$Type** $tmp1683 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1684 = *$tmp1683;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:536
frost$collections$HashMap** $tmp1685 = &param0->statements;
frost$collections$HashMap* $tmp1686 = *$tmp1685;
org$frostlang$frostc$IR$Statement$ID $tmp1687 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1688;
$tmp1688 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1688->value = $tmp1687;
frost$core$Object* $tmp1689 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1686, ((frost$collections$Key*) $tmp1688));
frost$core$Bit $tmp1690 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp1689) != NULL};
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block17; else goto block18;
block18:;
frost$core$Int $tmp1692 = (frost$core$Int) {536u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1693, $tmp1692, &$s1694);
abort(); // unreachable
block17:;
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1689)));
org$frostlang$frostc$IR$Statement* $tmp1695 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp1689);
frost$core$Frost$unref$frost$core$Object$Q($tmp1689);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1688)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:537
org$frostlang$frostc$IR$Statement* $tmp1696 = *(&local3);
frost$core$Int* $tmp1697 = &$tmp1696->$rawValue;
frost$core$Int $tmp1698 = *$tmp1697;
frost$core$Int $tmp1699 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:538:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1700 = $tmp1698.value;
int64_t $tmp1701 = $tmp1699.value;
bool $tmp1702 = $tmp1700 == $tmp1701;
frost$core$Bit $tmp1703 = (frost$core$Bit) {$tmp1702};
bool $tmp1704 = $tmp1703.value;
if ($tmp1704) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Position* $tmp1705 = (org$frostlang$frostc$Position*) ($tmp1696->$data + 0);
org$frostlang$frostc$Position $tmp1706 = *$tmp1705;
org$frostlang$frostc$IR$Value** $tmp1707 = (org$frostlang$frostc$IR$Value**) ($tmp1696->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1708 = *$tmp1707;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
org$frostlang$frostc$IR$Value* $tmp1709 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local4) = $tmp1708;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:539
frost$collections$Array* $tmp1710 = *(&local1);
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp1711 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
org$frostlang$frostc$IR$Value* $tmp1712 = *(&local4);
$fn1714 $tmp1713 = ($fn1714) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1715 = $tmp1713(param0, $tmp1712);
frost$core$Bit $tmp1716 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1717;
$tmp1717 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1717->value = $tmp1716;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp1711, ((frost$core$Object*) $tmp1715), ((frost$core$Object*) $tmp1717));
frost$collections$Array$add$frost$collections$Array$T($tmp1710, ((frost$core$Object*) $tmp1711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
org$frostlang$frostc$IR$Value* $tmp1718 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
org$frostlang$frostc$IR$Statement* $tmp1719 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:544
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1720 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1721 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1722 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1721, $tmp1722);
frost$collections$Array* $tmp1723 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp1720, param5, $tmp1721, ((frost$collections$ListView*) $tmp1723));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$collections$Array* $tmp1724 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1720;
block5:;
goto block1;
block3:;
frost$core$Int $tmp1725 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:548:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1726 = $tmp1625.value;
int64_t $tmp1727 = $tmp1725.value;
bool $tmp1728 = $tmp1726 == $tmp1727;
frost$core$Bit $tmp1729 = (frost$core$Bit) {$tmp1728};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block22; else goto block1;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:549
frost$core$Int* $tmp1731 = &param3->$rawValue;
frost$core$Int $tmp1732 = *$tmp1731;
frost$core$Int $tmp1733 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:550:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1734 = $tmp1732.value;
int64_t $tmp1735 = $tmp1733.value;
bool $tmp1736 = $tmp1734 == $tmp1735;
frost$core$Bit $tmp1737 = (frost$core$Bit) {$tmp1736};
bool $tmp1738 = $tmp1737.value;
if ($tmp1738) goto block25; else goto block24;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:551
org$frostlang$frostc$Compiler** $tmp1739 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1740 = *$tmp1739;
org$frostlang$frostc$Type** $tmp1741 = &$tmp1740->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1742 = *$tmp1741;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:551:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1743 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1744 = *$tmp1743;
frost$core$String** $tmp1745 = &((org$frostlang$frostc$Symbol*) $tmp1742)->name;
frost$core$String* $tmp1746 = *$tmp1745;
frost$core$Bit $tmp1747 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1744, $tmp1746);
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type$Kind* $tmp1749 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1750 = *$tmp1749;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1751;
$tmp1751 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1751->value = $tmp1750;
org$frostlang$frostc$Type$Kind* $tmp1752 = &$tmp1742->typeKind;
org$frostlang$frostc$Type$Kind $tmp1753 = *$tmp1752;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1754;
$tmp1754 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1754->value = $tmp1753;
ITable* $tmp1755 = ((frost$core$Equatable*) $tmp1751)->$class->itable;
while ($tmp1755->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1755 = $tmp1755->next;
}
$fn1757 $tmp1756 = $tmp1755->methods[0];
frost$core$Bit $tmp1758 = $tmp1756(((frost$core$Equatable*) $tmp1751), ((frost$core$Equatable*) $tmp1754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1754)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1751)));
*(&local5) = $tmp1758;
goto block30;
block29:;
*(&local5) = $tmp1747;
goto block30;
block30:;
frost$core$Bit $tmp1759 = *(&local5);
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block31; else goto block32;
block32:;
frost$core$Int $tmp1761 = (frost$core$Int) {551u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1762, $tmp1761);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:552
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1763 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1764 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1763, $tmp1764);
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp1765 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
$fn1767 $tmp1766 = ($fn1767) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1768 = $tmp1766(param0, param1);
frost$core$Bit $tmp1769 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1770;
$tmp1770 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1770->value = $tmp1769;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp1765, ((frost$core$Object*) $tmp1768), ((frost$core$Object*) $tmp1770));
frost$collections$Array$add$frost$collections$Array$T($tmp1763, ((frost$core$Object*) $tmp1765));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
frost$collections$Array* $tmp1771 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
*(&local6) = $tmp1763;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:553
frost$core$Int* $tmp1772 = &param1->$rawValue;
frost$core$Int $tmp1773 = *$tmp1772;
frost$core$Int $tmp1774 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:554:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1775 = $tmp1773.value;
int64_t $tmp1776 = $tmp1774.value;
bool $tmp1777 = $tmp1775 == $tmp1776;
frost$core$Bit $tmp1778 = (frost$core$Bit) {$tmp1777};
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block34; else goto block33;
block34:;
org$frostlang$frostc$IR$Statement$ID* $tmp1780 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1781 = *$tmp1780;
*(&local7) = $tmp1781;
org$frostlang$frostc$Type** $tmp1782 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1783 = *$tmp1782;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:555
frost$collections$HashMap** $tmp1784 = &param0->statements;
frost$collections$HashMap* $tmp1785 = *$tmp1784;
org$frostlang$frostc$IR$Statement$ID $tmp1786 = *(&local7);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1787;
$tmp1787 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1787->value = $tmp1786;
frost$core$Object* $tmp1788 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1785, ((frost$collections$Key*) $tmp1787));
frost$core$Bit $tmp1789 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp1788) != NULL};
bool $tmp1790 = $tmp1789.value;
if ($tmp1790) goto block36; else goto block37;
block37:;
frost$core$Int $tmp1791 = (frost$core$Int) {555u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1792, $tmp1791, &$s1793);
abort(); // unreachable
block36:;
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1788)));
org$frostlang$frostc$IR$Statement* $tmp1794 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) $tmp1788);
frost$core$Frost$unref$frost$core$Object$Q($tmp1788);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1787)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:556
org$frostlang$frostc$IR$Statement* $tmp1795 = *(&local8);
frost$core$Int* $tmp1796 = &$tmp1795->$rawValue;
frost$core$Int $tmp1797 = *$tmp1796;
frost$core$Int $tmp1798 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:557:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1799 = $tmp1797.value;
int64_t $tmp1800 = $tmp1798.value;
bool $tmp1801 = $tmp1799 == $tmp1800;
frost$core$Bit $tmp1802 = (frost$core$Bit) {$tmp1801};
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block39; else goto block38;
block39:;
org$frostlang$frostc$Position* $tmp1804 = (org$frostlang$frostc$Position*) ($tmp1795->$data + 0);
org$frostlang$frostc$Position $tmp1805 = *$tmp1804;
org$frostlang$frostc$IR$Value** $tmp1806 = (org$frostlang$frostc$IR$Value**) ($tmp1795->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1807 = *$tmp1806;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
org$frostlang$frostc$IR$Value* $tmp1808 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local9) = $tmp1807;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:558
frost$collections$Array* $tmp1809 = *(&local6);
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp1810 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
org$frostlang$frostc$IR$Value* $tmp1811 = *(&local9);
$fn1813 $tmp1812 = ($fn1813) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1814 = $tmp1812(param0, $tmp1811);
frost$core$Bit $tmp1815 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1816;
$tmp1816 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1816->value = $tmp1815;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp1810, ((frost$core$Object*) $tmp1814), ((frost$core$Object*) $tmp1816));
frost$collections$Array$add$frost$collections$Array$T($tmp1809, ((frost$core$Object*) $tmp1810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
org$frostlang$frostc$IR$Value* $tmp1817 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block38;
block38:;
org$frostlang$frostc$IR$Statement* $tmp1818 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:563
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1819 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1820 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1821 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1820, $tmp1821);
frost$collections$Array* $tmp1822 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp1819, param5, $tmp1820, ((frost$collections$ListView*) $tmp1822));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$collections$Array* $tmp1823 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp1819;
block24:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:569
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1824 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1825 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1826 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp1825, $tmp1826);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1824, param5, $tmp1825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
return $tmp1824;

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
org$frostlang$frostc$pass$Analyzer$State* $tmp1827 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
frost$collections$HashMap** $tmp1828 = &param0->entryStates;
frost$collections$HashMap* $tmp1829 = *$tmp1828;
org$frostlang$frostc$IR$Block$ID $tmp1830 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1831;
$tmp1831 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1831->value = $tmp1830;
frost$core$Object* $tmp1832 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1829, ((frost$collections$Key*) $tmp1831));
frost$core$Bit $tmp1833 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp1832) != NULL};
bool $tmp1834 = $tmp1833.value;
if ($tmp1834) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1835 = (frost$core$Int) {573u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1836, $tmp1835, &$s1837);
abort(); // unreachable
block1:;
org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State($tmp1827, ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1832));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
org$frostlang$frostc$pass$Analyzer$State* $tmp1838 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
*(&local0) = $tmp1827;
frost$core$Frost$unref$frost$core$Object$Q($tmp1832);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1831)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:574
frost$collections$HashMap** $tmp1839 = &param0->blocks;
frost$collections$HashMap* $tmp1840 = *$tmp1839;
org$frostlang$frostc$IR$Block$ID $tmp1841 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1842;
$tmp1842 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1842->value = $tmp1841;
frost$core$Object* $tmp1843 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1840, ((frost$collections$Key*) $tmp1842));
frost$core$Bit $tmp1844 = (frost$core$Bit) {((org$frostlang$frostc$IR$Block*) $tmp1843) != NULL};
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block3; else goto block4;
block4:;
frost$core$Int $tmp1846 = (frost$core$Int) {574u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1847, $tmp1846, &$s1848);
abort(); // unreachable
block3:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1843)));
org$frostlang$frostc$IR$Block* $tmp1849 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1843);
frost$core$Frost$unref$frost$core$Object$Q($tmp1843);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1842)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:575
org$frostlang$frostc$IR$Block* $tmp1850 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1851 = &$tmp1850->ids;
org$frostlang$frostc$LinkedList* $tmp1852 = *$tmp1851;
ITable* $tmp1853 = ((frost$collections$Iterable*) $tmp1852)->$class->itable;
while ($tmp1853->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1853 = $tmp1853->next;
}
$fn1855 $tmp1854 = $tmp1853->methods[0];
frost$collections$Iterator* $tmp1856 = $tmp1854(((frost$collections$Iterable*) $tmp1852));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$collections$Iterator* $tmp1857 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
*(&local2) = $tmp1856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:576
org$frostlang$frostc$IR$Block* $tmp1858 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1859 = &$tmp1858->statements;
org$frostlang$frostc$LinkedList* $tmp1860 = *$tmp1859;
ITable* $tmp1861 = ((frost$collections$Iterable*) $tmp1860)->$class->itable;
while ($tmp1861->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1861 = $tmp1861->next;
}
$fn1863 $tmp1862 = $tmp1861->methods[0];
frost$collections$Iterator* $tmp1864 = $tmp1862(((frost$collections$Iterable*) $tmp1860));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$collections$Iterator* $tmp1865 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local3) = $tmp1864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:577
goto block5;
block5:;
frost$collections$Iterator* $tmp1866 = *(&local2);
ITable* $tmp1867 = $tmp1866->$class->itable;
while ($tmp1867->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1867 = $tmp1867->next;
}
$fn1869 $tmp1868 = $tmp1867->methods[0];
frost$core$Bit $tmp1870 = $tmp1868($tmp1866);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:577:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1871 = $tmp1870.value;
bool $tmp1872 = !$tmp1871;
frost$core$Bit $tmp1873 = (frost$core$Bit) {$tmp1872};
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:578
frost$collections$Iterator* $tmp1875 = *(&local2);
ITable* $tmp1876 = $tmp1875->$class->itable;
while ($tmp1876->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1876 = $tmp1876->next;
}
$fn1878 $tmp1877 = $tmp1876->methods[1];
frost$core$Object* $tmp1879 = $tmp1877($tmp1875);
*(&local4) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1879)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1879);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:579
frost$collections$Iterator* $tmp1880 = *(&local3);
ITable* $tmp1881 = $tmp1880->$class->itable;
while ($tmp1881->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1881 = $tmp1881->next;
}
$fn1883 $tmp1882 = $tmp1881->methods[1];
frost$core$Object* $tmp1884 = $tmp1882($tmp1880);
frost$core$Int* $tmp1885 = &((org$frostlang$frostc$IR$Statement*) $tmp1884)->$rawValue;
frost$core$Int $tmp1886 = *$tmp1885;
frost$core$Int $tmp1887 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:580:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1888 = $tmp1886.value;
int64_t $tmp1889 = $tmp1887.value;
bool $tmp1890 = $tmp1888 == $tmp1889;
frost$core$Bit $tmp1891 = (frost$core$Bit) {$tmp1890};
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp1893 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1884)->$data + 0);
org$frostlang$frostc$Position $tmp1894 = *$tmp1893;
org$frostlang$frostc$IR$Value** $tmp1895 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1884)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1896 = *$tmp1895;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
org$frostlang$frostc$IR$Value* $tmp1897 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
*(&local5) = $tmp1896;
org$frostlang$frostc$IR$Value** $tmp1898 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1884)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1899 = *$tmp1898;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
org$frostlang$frostc$IR$Value* $tmp1900 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local6) = $tmp1899;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:581
org$frostlang$frostc$IR$Value* $tmp1901 = *(&local6);
frost$core$Int* $tmp1902 = &$tmp1901->$rawValue;
frost$core$Int $tmp1903 = *$tmp1902;
frost$core$Int $tmp1904 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:582:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1905 = $tmp1903.value;
int64_t $tmp1906 = $tmp1904.value;
bool $tmp1907 = $tmp1905 == $tmp1906;
frost$core$Bit $tmp1908 = (frost$core$Bit) {$tmp1907};
bool $tmp1909 = $tmp1908.value;
if ($tmp1909) goto block14; else goto block15;
block14:;
frost$core$Int* $tmp1910 = (frost$core$Int*) ($tmp1901->$data + 0);
frost$core$Int $tmp1911 = *$tmp1910;
*(&local7) = $tmp1911;
org$frostlang$frostc$Type** $tmp1912 = (org$frostlang$frostc$Type**) ($tmp1901->$data + 8);
org$frostlang$frostc$Type* $tmp1913 = *$tmp1912;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:583
org$frostlang$frostc$pass$Analyzer$State* $tmp1914 = *(&local0);
frost$collections$Array** $tmp1915 = &$tmp1914->locals;
frost$collections$Array* $tmp1916 = *$tmp1915;
frost$core$Int $tmp1917 = *(&local7);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1918 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR$Value* $tmp1919 = *(&local5);
org$frostlang$frostc$pass$Analyzer$State* $tmp1920 = *(&local0);
$fn1922 $tmp1921 = ($fn1922) param0->$class->vtable[5];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1923 = $tmp1921(param0, $tmp1919, $tmp1920);
org$frostlang$frostc$Type** $tmp1924 = &$tmp1923->type;
org$frostlang$frostc$Type* $tmp1925 = *$tmp1924;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp1926 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp1927 = (frost$core$Int) {2u};
frost$core$Int $tmp1928 = *(&local7);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int($tmp1926, $tmp1927, $tmp1928);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp1918, $tmp1925, $tmp1926);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:583:42
frost$core$Int $tmp1929 = (frost$core$Int) {0u};
int64_t $tmp1930 = $tmp1917.value;
int64_t $tmp1931 = $tmp1929.value;
bool $tmp1932 = $tmp1930 >= $tmp1931;
frost$core$Bit $tmp1933 = (frost$core$Bit) {$tmp1932};
bool $tmp1934 = $tmp1933.value;
if ($tmp1934) goto block20; else goto block19;
block20:;
ITable* $tmp1935 = ((frost$collections$CollectionView*) $tmp1916)->$class->itable;
while ($tmp1935->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1935 = $tmp1935->next;
}
$fn1937 $tmp1936 = $tmp1935->methods[0];
frost$core$Int $tmp1938 = $tmp1936(((frost$collections$CollectionView*) $tmp1916));
int64_t $tmp1939 = $tmp1917.value;
int64_t $tmp1940 = $tmp1938.value;
bool $tmp1941 = $tmp1939 < $tmp1940;
frost$core$Bit $tmp1942 = (frost$core$Bit) {$tmp1941};
bool $tmp1943 = $tmp1942.value;
if ($tmp1943) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1944 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1945, $tmp1944, &$s1946);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1947 = &$tmp1916->data;
frost$core$Object** $tmp1948 = *$tmp1947;
frost$core$Int64 $tmp1949 = frost$core$Int64$init$frost$core$Int($tmp1917);
int64_t $tmp1950 = $tmp1949.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
frost$core$Object* $tmp1951 = $tmp1948[$tmp1950];
frost$core$Frost$unref$frost$core$Object$Q($tmp1951);
$tmp1948[$tmp1950] = ((frost$core$Object*) $tmp1918);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
goto block13;
block15:;
frost$core$Int $tmp1952 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:586:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1953 = $tmp1903.value;
int64_t $tmp1954 = $tmp1952.value;
bool $tmp1955 = $tmp1953 == $tmp1954;
frost$core$Bit $tmp1956 = (frost$core$Bit) {$tmp1955};
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block21; else goto block13;
block21:;
org$frostlang$frostc$IR$Statement$ID* $tmp1958 = (org$frostlang$frostc$IR$Statement$ID*) ($tmp1901->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1959 = *$tmp1958;
*(&local8) = $tmp1959;
org$frostlang$frostc$Type** $tmp1960 = (org$frostlang$frostc$Type**) ($tmp1901->$data + 8);
org$frostlang$frostc$Type* $tmp1961 = *$tmp1960;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:587
frost$collections$HashMap** $tmp1962 = &param0->statements;
frost$collections$HashMap* $tmp1963 = *$tmp1962;
org$frostlang$frostc$IR$Statement$ID $tmp1964 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1965;
$tmp1965 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1965->value = $tmp1964;
frost$core$Object* $tmp1966 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1963, ((frost$collections$Key*) $tmp1965));
frost$core$Bit $tmp1967 = (frost$core$Bit) {((org$frostlang$frostc$IR$Statement*) $tmp1966) != NULL};
bool $tmp1968 = $tmp1967.value;
if ($tmp1968) goto block23; else goto block24;
block24:;
frost$core$Int $tmp1969 = (frost$core$Int) {587u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1970, $tmp1969, &$s1971);
abort(); // unreachable
block23:;
frost$core$Int* $tmp1972 = &((org$frostlang$frostc$IR$Statement*) $tmp1966)->$rawValue;
frost$core$Int $tmp1973 = *$tmp1972;
frost$core$Int $tmp1974 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:588:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1975 = $tmp1973.value;
int64_t $tmp1976 = $tmp1974.value;
bool $tmp1977 = $tmp1975 == $tmp1976;
frost$core$Bit $tmp1978 = (frost$core$Bit) {$tmp1977};
bool $tmp1979 = $tmp1978.value;
if ($tmp1979) goto block26; else goto block25;
block26:;
org$frostlang$frostc$Position* $tmp1980 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1966)->$data + 0);
org$frostlang$frostc$Position $tmp1981 = *$tmp1980;
org$frostlang$frostc$IR$Value** $tmp1982 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1966)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1983 = *$tmp1982;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
org$frostlang$frostc$IR$Value* $tmp1984 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
*(&local9) = $tmp1983;
org$frostlang$frostc$FieldDecl** $tmp1985 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp1966)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1986 = *$tmp1985;
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
org$frostlang$frostc$FieldDecl* $tmp1987 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
*(&local10) = $tmp1986;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:589
org$frostlang$frostc$IR$Value* $tmp1988 = *(&local9);
frost$core$Int* $tmp1989 = &$tmp1988->$rawValue;
frost$core$Int $tmp1990 = *$tmp1989;
frost$core$Int $tmp1991 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:590:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1992 = $tmp1990.value;
int64_t $tmp1993 = $tmp1991.value;
bool $tmp1994 = $tmp1992 == $tmp1993;
frost$core$Bit $tmp1995 = (frost$core$Bit) {$tmp1994};
bool $tmp1996 = $tmp1995.value;
if ($tmp1996) goto block29; else goto block28;
block29:;
frost$core$Int* $tmp1997 = (frost$core$Int*) ($tmp1988->$data + 0);
frost$core$Int $tmp1998 = *$tmp1997;
*(&local11) = $tmp1998;
org$frostlang$frostc$Type** $tmp1999 = (org$frostlang$frostc$Type**) ($tmp1988->$data + 8);
org$frostlang$frostc$Type* $tmp2000 = *$tmp1999;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:591
org$frostlang$frostc$pass$Analyzer$State* $tmp2001 = *(&local0);
frost$collections$Array** $tmp2002 = &$tmp2001->locals;
frost$collections$Array* $tmp2003 = *$tmp2002;
frost$core$Int $tmp2004 = *(&local11);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2005 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR** $tmp2006 = &param0->ir;
org$frostlang$frostc$IR* $tmp2007 = *$tmp2006;
frost$collections$Array** $tmp2008 = &$tmp2007->locals;
frost$collections$Array* $tmp2009 = *$tmp2008;
frost$core$Int $tmp2010 = *(&local11);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:591:91
frost$core$Int $tmp2011 = (frost$core$Int) {0u};
int64_t $tmp2012 = $tmp2010.value;
int64_t $tmp2013 = $tmp2011.value;
bool $tmp2014 = $tmp2012 >= $tmp2013;
frost$core$Bit $tmp2015 = (frost$core$Bit) {$tmp2014};
bool $tmp2016 = $tmp2015.value;
if ($tmp2016) goto block34; else goto block33;
block34:;
ITable* $tmp2017 = ((frost$collections$CollectionView*) $tmp2009)->$class->itable;
while ($tmp2017->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2017 = $tmp2017->next;
}
$fn2019 $tmp2018 = $tmp2017->methods[0];
frost$core$Int $tmp2020 = $tmp2018(((frost$collections$CollectionView*) $tmp2009));
int64_t $tmp2021 = $tmp2010.value;
int64_t $tmp2022 = $tmp2020.value;
bool $tmp2023 = $tmp2021 < $tmp2022;
frost$core$Bit $tmp2024 = (frost$core$Bit) {$tmp2023};
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block32; else goto block33;
block33:;
frost$core$Int $tmp2026 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2027, $tmp2026, &$s2028);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2029 = &$tmp2009->data;
frost$core$Object** $tmp2030 = *$tmp2029;
frost$core$Int64 $tmp2031 = frost$core$Int64$init$frost$core$Int($tmp2010);
int64_t $tmp2032 = $tmp2031.value;
frost$core$Object* $tmp2033 = $tmp2030[$tmp2032];
frost$core$Frost$ref$frost$core$Object$Q($tmp2033);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp2034 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp2035 = (frost$core$Int) {2u};
frost$core$Int $tmp2036 = *(&local11);
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int($tmp2034, $tmp2035, $tmp2036);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp2005, ((org$frostlang$frostc$Type*) $tmp2033), $tmp2034);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:591:58
frost$core$Int $tmp2037 = (frost$core$Int) {0u};
int64_t $tmp2038 = $tmp2004.value;
int64_t $tmp2039 = $tmp2037.value;
bool $tmp2040 = $tmp2038 >= $tmp2039;
frost$core$Bit $tmp2041 = (frost$core$Bit) {$tmp2040};
bool $tmp2042 = $tmp2041.value;
if ($tmp2042) goto block38; else goto block37;
block38:;
ITable* $tmp2043 = ((frost$collections$CollectionView*) $tmp2003)->$class->itable;
while ($tmp2043->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2043 = $tmp2043->next;
}
$fn2045 $tmp2044 = $tmp2043->methods[0];
frost$core$Int $tmp2046 = $tmp2044(((frost$collections$CollectionView*) $tmp2003));
int64_t $tmp2047 = $tmp2004.value;
int64_t $tmp2048 = $tmp2046.value;
bool $tmp2049 = $tmp2047 < $tmp2048;
frost$core$Bit $tmp2050 = (frost$core$Bit) {$tmp2049};
bool $tmp2051 = $tmp2050.value;
if ($tmp2051) goto block36; else goto block37;
block37:;
frost$core$Int $tmp2052 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2053, $tmp2052, &$s2054);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp2055 = &$tmp2003->data;
frost$core$Object** $tmp2056 = *$tmp2055;
frost$core$Int64 $tmp2057 = frost$core$Int64$init$frost$core$Int($tmp2004);
int64_t $tmp2058 = $tmp2057.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
frost$core$Object* $tmp2059 = $tmp2056[$tmp2058];
frost$core$Frost$unref$frost$core$Object$Q($tmp2059);
$tmp2056[$tmp2058] = ((frost$core$Object*) $tmp2005);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
frost$core$Frost$unref$frost$core$Object$Q($tmp2033);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
goto block28;
block28:;
org$frostlang$frostc$FieldDecl* $tmp2060 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2061 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block25;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1966);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1965)));
goto block13;
block13:;
org$frostlang$frostc$IR$Value* $tmp2062 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2063 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block11:;
frost$core$Int $tmp2064 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:600:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2065 = $tmp1886.value;
int64_t $tmp2066 = $tmp2064.value;
bool $tmp2067 = $tmp2065 == $tmp2066;
frost$core$Bit $tmp2068 = (frost$core$Bit) {$tmp2067};
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block39; else goto block9;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:601
frost$core$Bit* $tmp2070 = &param0->reportErrors;
frost$core$Bit $tmp2071 = *$tmp2070;
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:602
org$frostlang$frostc$IR$Statement$ID $tmp2073 = *(&local4);
org$frostlang$frostc$pass$Analyzer$State* $tmp2074 = *(&local0);
$fn2076 $tmp2075 = ($fn2076) param0->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2077 = $tmp2075(param0, $tmp2073, $tmp2074);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
goto block42;
block42:;
goto block9;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1884);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:607
org$frostlang$frostc$IR$Block* $tmp2078 = *(&local1);
frost$core$Int $tmp2079 = param1.exit;
org$frostlang$frostc$pass$Analyzer$State* $tmp2080 = *(&local0);
$fn2082 $tmp2081 = ($fn2082) param0->$class->vtable[7];
$tmp2081(param0, $tmp2078, $tmp2079, $tmp2080);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:608
org$frostlang$frostc$pass$Analyzer$State* $tmp2083 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
frost$collections$Iterator* $tmp2084 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2085 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
*(&local2) = ((frost$collections$Iterator*) NULL);
org$frostlang$frostc$IR$Block* $tmp2086 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$pass$Analyzer$State* $tmp2087 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
return $tmp2083;

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
frost$collections$HashMap** $tmp2088 = &param0->blocks;
frost$collections$HashMap* $tmp2089 = *$tmp2088;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2090;
$tmp2090 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2090->value = param1;
frost$core$Object* $tmp2091 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2089, ((frost$collections$Key*) $tmp2090));
frost$core$Bit $tmp2092 = (frost$core$Bit) {((org$frostlang$frostc$IR$Block*) $tmp2091) != NULL};
bool $tmp2093 = $tmp2092.value;
if ($tmp2093) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2094 = (frost$core$Int) {612u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2095, $tmp2094, &$s2096);
abort(); // unreachable
block1:;
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2091)));
org$frostlang$frostc$IR$Block* $tmp2097 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp2091);
frost$core$Frost$unref$frost$core$Object$Q($tmp2091);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2090)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:613
org$frostlang$frostc$IR$Block* $tmp2098 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp2099 = &$tmp2098->statements;
org$frostlang$frostc$LinkedList* $tmp2100 = *$tmp2099;
$fn2102 $tmp2101 = ($fn2102) $tmp2100->$class->vtable[6];
frost$core$Object* $tmp2103 = $tmp2101($tmp2100);
frost$core$Int* $tmp2104 = &((org$frostlang$frostc$IR$Statement*) $tmp2103)->$rawValue;
frost$core$Int $tmp2105 = *$tmp2104;
frost$core$Int $tmp2106 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:614:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2107 = $tmp2105.value;
int64_t $tmp2108 = $tmp2106.value;
bool $tmp2109 = $tmp2107 == $tmp2108;
frost$core$Bit $tmp2110 = (frost$core$Bit) {$tmp2109};
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2112 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2103)->$data + 0);
org$frostlang$frostc$Position $tmp2113 = *$tmp2112;
org$frostlang$frostc$IR$Block$ID* $tmp2114 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2103)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2115 = *$tmp2114;
*(&local1) = $tmp2115;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:615
org$frostlang$frostc$IR$Block* $tmp2116 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp2117 = &$tmp2116->id;
org$frostlang$frostc$IR$Block$ID $tmp2118 = *$tmp2117;
frost$core$Int $tmp2119 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:615:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Block$ID* $tmp2120 = &(&local3)->id;
*$tmp2120 = $tmp2118;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Int* $tmp2121 = &(&local3)->exit;
*$tmp2121 = $tmp2119;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2122 = *(&local3);
*(&local2) = $tmp2122;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2123 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp2124 = *(&local1);
$fn2126 $tmp2125 = ($fn2126) param0->$class->vtable[6];
$tmp2125(param0, $tmp2123, $tmp2124);
goto block3;
block5:;
frost$core$Int $tmp2127 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:617:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2128 = $tmp2105.value;
int64_t $tmp2129 = $tmp2127.value;
bool $tmp2130 = $tmp2128 == $tmp2129;
frost$core$Bit $tmp2131 = (frost$core$Bit) {$tmp2130};
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2133 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2103)->$data + 0);
org$frostlang$frostc$Position $tmp2134 = *$tmp2133;
org$frostlang$frostc$IR$Value** $tmp2135 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2103)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2136 = *$tmp2135;
org$frostlang$frostc$IR$Block$ID* $tmp2137 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2103)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2138 = *$tmp2137;
*(&local4) = $tmp2138;
org$frostlang$frostc$IR$Block$ID* $tmp2139 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2103)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2140 = *$tmp2139;
*(&local5) = $tmp2140;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:618
org$frostlang$frostc$IR$Block* $tmp2141 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp2142 = &$tmp2141->id;
org$frostlang$frostc$IR$Block$ID $tmp2143 = *$tmp2142;
frost$core$Int $tmp2144 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:618:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Block$ID* $tmp2145 = &(&local7)->id;
*$tmp2145 = $tmp2143;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Int* $tmp2146 = &(&local7)->exit;
*$tmp2146 = $tmp2144;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2147 = *(&local7);
*(&local6) = $tmp2147;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2148 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2149 = *(&local4);
$fn2151 $tmp2150 = ($fn2151) param0->$class->vtable[6];
$tmp2150(param0, $tmp2148, $tmp2149);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:619
org$frostlang$frostc$IR$Block* $tmp2152 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp2153 = &$tmp2152->id;
org$frostlang$frostc$IR$Block$ID $tmp2154 = *$tmp2153;
frost$core$Int $tmp2155 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:619:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Block$ID* $tmp2156 = &(&local9)->id;
*$tmp2156 = $tmp2154;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Int* $tmp2157 = &(&local9)->exit;
*$tmp2157 = $tmp2155;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2158 = *(&local9);
*(&local8) = $tmp2158;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2159 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp2160 = *(&local5);
$fn2162 $tmp2161 = ($fn2162) param0->$class->vtable[6];
$tmp2161(param0, $tmp2159, $tmp2160);
goto block3;
block9:;
frost$core$Int $tmp2163 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:621:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2164 = $tmp2105.value;
int64_t $tmp2165 = $tmp2163.value;
bool $tmp2166 = $tmp2164 == $tmp2165;
frost$core$Bit $tmp2167 = (frost$core$Bit) {$tmp2166};
bool $tmp2168 = $tmp2167.value;
if ($tmp2168) goto block13; else goto block14;
block13:;
goto block3;
block14:;
frost$core$Int $tmp2169 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:623:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2170 = $tmp2105.value;
int64_t $tmp2171 = $tmp2169.value;
bool $tmp2172 = $tmp2170 == $tmp2171;
frost$core$Bit $tmp2173 = (frost$core$Bit) {$tmp2172};
bool $tmp2174 = $tmp2173.value;
if ($tmp2174) goto block16; else goto block17;
block16:;
goto block3;
block17:;
frost$core$Int $tmp2175 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:625:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2176 = $tmp2105.value;
int64_t $tmp2177 = $tmp2175.value;
bool $tmp2178 = $tmp2176 == $tmp2177;
frost$core$Bit $tmp2179 = (frost$core$Bit) {$tmp2178};
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block19; else goto block20;
block19:;
goto block3;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:628
frost$core$Int $tmp2181 = (frost$core$Int) {628u};
org$frostlang$frostc$IR$Block* $tmp2182 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp2183 = &$tmp2182->statements;
org$frostlang$frostc$LinkedList* $tmp2184 = *$tmp2183;
$fn2186 $tmp2185 = ($fn2186) $tmp2184->$class->vtable[6];
frost$core$Object* $tmp2187 = $tmp2185($tmp2184);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:628:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2189 $tmp2188 = ($fn2189) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2187))->$class->vtable[0];
frost$core$String* $tmp2190 = $tmp2188(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2187)));
frost$core$String* $tmp2191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2192, $tmp2190);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2193, $tmp2181, $tmp2191);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$Frost$unref$frost$core$Object$Q($tmp2187);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2103);
org$frostlang$frostc$IR$Block* $tmp2194 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* param0) {

frost$core$Int local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$collections$Iterator* local2 = NULL;
frost$collections$Iterator* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:634
org$frostlang$frostc$MethodDecl** $tmp2195 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2196 = *$tmp2195;
frost$core$String* $tmp2197 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp2196);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:634:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp2197);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s2198);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:635
frost$core$Int $tmp2199 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp2200 = &param0->ir;
org$frostlang$frostc$IR* $tmp2201 = *$tmp2200;
frost$collections$Array** $tmp2202 = &$tmp2201->locals;
frost$collections$Array* $tmp2203 = *$tmp2202;
ITable* $tmp2204 = ((frost$collections$CollectionView*) $tmp2203)->$class->itable;
while ($tmp2204->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2204 = $tmp2204->next;
}
$fn2206 $tmp2205 = $tmp2204->methods[0];
frost$core$Int $tmp2207 = $tmp2205(((frost$collections$CollectionView*) $tmp2203));
frost$core$Bit $tmp2208 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2209 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2199, $tmp2207, $tmp2208);
frost$core$Int $tmp2210 = $tmp2209.min;
*(&local0) = $tmp2210;
frost$core$Int $tmp2211 = $tmp2209.max;
frost$core$Bit $tmp2212 = $tmp2209.inclusive;
bool $tmp2213 = $tmp2212.value;
frost$core$Int $tmp2214 = (frost$core$Int) {1u};
if ($tmp2213) goto block6; else goto block7;
block6:;
int64_t $tmp2215 = $tmp2210.value;
int64_t $tmp2216 = $tmp2211.value;
bool $tmp2217 = $tmp2215 <= $tmp2216;
frost$core$Bit $tmp2218 = (frost$core$Bit) {$tmp2217};
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block3; else goto block4;
block7:;
int64_t $tmp2220 = $tmp2210.value;
int64_t $tmp2221 = $tmp2211.value;
bool $tmp2222 = $tmp2220 < $tmp2221;
frost$core$Bit $tmp2223 = (frost$core$Bit) {$tmp2222};
bool $tmp2224 = $tmp2223.value;
if ($tmp2224) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:636
frost$core$Int $tmp2225 = *(&local0);
frost$core$Int$wrapper* $tmp2226;
$tmp2226 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp2226->value = $tmp2225;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:636:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2228 $tmp2227 = ($fn2228) ((frost$core$Object*) $tmp2226)->$class->vtable[0];
frost$core$String* $tmp2229 = $tmp2227(((frost$core$Object*) $tmp2226));
frost$core$String* $tmp2230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2231, $tmp2229);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
frost$core$String* $tmp2232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2230, &$s2233);
org$frostlang$frostc$IR** $tmp2234 = &param0->ir;
org$frostlang$frostc$IR* $tmp2235 = *$tmp2234;
frost$collections$Array** $tmp2236 = &$tmp2235->locals;
frost$collections$Array* $tmp2237 = *$tmp2236;
frost$core$Int $tmp2238 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:636:54
frost$core$Int $tmp2239 = (frost$core$Int) {0u};
int64_t $tmp2240 = $tmp2238.value;
int64_t $tmp2241 = $tmp2239.value;
bool $tmp2242 = $tmp2240 >= $tmp2241;
frost$core$Bit $tmp2243 = (frost$core$Bit) {$tmp2242};
bool $tmp2244 = $tmp2243.value;
if ($tmp2244) goto block12; else goto block11;
block12:;
ITable* $tmp2245 = ((frost$collections$CollectionView*) $tmp2237)->$class->itable;
while ($tmp2245->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2245 = $tmp2245->next;
}
$fn2247 $tmp2246 = $tmp2245->methods[0];
frost$core$Int $tmp2248 = $tmp2246(((frost$collections$CollectionView*) $tmp2237));
int64_t $tmp2249 = $tmp2238.value;
int64_t $tmp2250 = $tmp2248.value;
bool $tmp2251 = $tmp2249 < $tmp2250;
frost$core$Bit $tmp2252 = (frost$core$Bit) {$tmp2251};
bool $tmp2253 = $tmp2252.value;
if ($tmp2253) goto block10; else goto block11;
block11:;
frost$core$Int $tmp2254 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2255, $tmp2254, &$s2256);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2257 = &$tmp2237->data;
frost$core$Object** $tmp2258 = *$tmp2257;
frost$core$Int64 $tmp2259 = frost$core$Int64$init$frost$core$Int($tmp2238);
int64_t $tmp2260 = $tmp2259.value;
frost$core$Object* $tmp2261 = $tmp2258[$tmp2260];
frost$core$Frost$ref$frost$core$Object$Q($tmp2261);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:636:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2263 $tmp2262 = ($fn2263) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2261))->$class->vtable[0];
frost$core$String* $tmp2264 = $tmp2262(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2261)));
frost$core$String* $tmp2265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2232, $tmp2264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
frost$core$String* $tmp2266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2265, &$s2267);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:636:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp2266);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s2268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q($tmp2261);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Int $tmp2269 = *(&local0);
int64_t $tmp2270 = $tmp2211.value;
int64_t $tmp2271 = $tmp2269.value;
int64_t $tmp2272 = $tmp2270 - $tmp2271;
frost$core$Int $tmp2273 = (frost$core$Int) {$tmp2272};
if ($tmp2213) goto block17; else goto block18;
block17:;
int64_t $tmp2274 = $tmp2273.value;
int64_t $tmp2275 = $tmp2214.value;
bool $tmp2276 = $tmp2274 >= $tmp2275;
frost$core$Bit $tmp2277 = (frost$core$Bit) {$tmp2276};
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block16; else goto block4;
block18:;
int64_t $tmp2279 = $tmp2273.value;
int64_t $tmp2280 = $tmp2214.value;
bool $tmp2281 = $tmp2279 > $tmp2280;
frost$core$Bit $tmp2282 = (frost$core$Bit) {$tmp2281};
bool $tmp2283 = $tmp2282.value;
if ($tmp2283) goto block16; else goto block4;
block16:;
int64_t $tmp2284 = $tmp2269.value;
int64_t $tmp2285 = $tmp2214.value;
int64_t $tmp2286 = $tmp2284 + $tmp2285;
frost$core$Int $tmp2287 = (frost$core$Int) {$tmp2286};
*(&local0) = $tmp2287;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:638
org$frostlang$frostc$IR** $tmp2288 = &param0->ir;
org$frostlang$frostc$IR* $tmp2289 = *$tmp2288;
frost$collections$Array** $tmp2290 = &$tmp2289->blocks;
frost$collections$Array* $tmp2291 = *$tmp2290;
ITable* $tmp2292 = ((frost$collections$Iterable*) $tmp2291)->$class->itable;
while ($tmp2292->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2292 = $tmp2292->next;
}
$fn2294 $tmp2293 = $tmp2292->methods[0];
frost$collections$Iterator* $tmp2295 = $tmp2293(((frost$collections$Iterable*) $tmp2291));
goto block19;
block19:;
ITable* $tmp2296 = $tmp2295->$class->itable;
while ($tmp2296->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2296 = $tmp2296->next;
}
$fn2298 $tmp2297 = $tmp2296->methods[0];
frost$core$Bit $tmp2299 = $tmp2297($tmp2295);
bool $tmp2300 = $tmp2299.value;
if ($tmp2300) goto block21; else goto block20;
block20:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2301 = $tmp2295->$class->itable;
while ($tmp2301->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2301 = $tmp2301->next;
}
$fn2303 $tmp2302 = $tmp2301->methods[1];
frost$core$Object* $tmp2304 = $tmp2302($tmp2295);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2304)));
org$frostlang$frostc$IR$Block* $tmp2305 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2304);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:639
org$frostlang$frostc$IR$Block* $tmp2306 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2307 = &$tmp2306->id;
org$frostlang$frostc$IR$Block$ID $tmp2308 = *$tmp2307;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2309;
$tmp2309 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2309->value = $tmp2308;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:639:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2311 $tmp2310 = ($fn2311) ((frost$core$Object*) $tmp2309)->$class->vtable[0];
frost$core$String* $tmp2312 = $tmp2310(((frost$core$Object*) $tmp2309));
frost$core$String* $tmp2313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2314, $tmp2312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
frost$core$String* $tmp2315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2313, &$s2316);
frost$io$Console$print$frost$core$String($tmp2315);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:640
frost$collections$HashMap** $tmp2317 = &param0->entryStates;
frost$collections$HashMap* $tmp2318 = *$tmp2317;
org$frostlang$frostc$IR$Block* $tmp2319 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2320 = &$tmp2319->id;
org$frostlang$frostc$IR$Block$ID $tmp2321 = *$tmp2320;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2322;
$tmp2322 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2322->value = $tmp2321;
frost$core$Object* $tmp2323 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2318, ((frost$collections$Key*) $tmp2322));
frost$core$Bit $tmp2324 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2323) != NULL};
bool $tmp2325 = $tmp2324.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2323);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2322)));
if ($tmp2325) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:641
frost$collections$HashMap** $tmp2326 = &param0->entryStates;
frost$collections$HashMap* $tmp2327 = *$tmp2326;
org$frostlang$frostc$IR$Block* $tmp2328 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2329 = &$tmp2328->id;
org$frostlang$frostc$IR$Block$ID $tmp2330 = *$tmp2329;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2331;
$tmp2331 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2331->value = $tmp2330;
frost$core$Object* $tmp2332 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2327, ((frost$collections$Key*) $tmp2331));
frost$core$Bit $tmp2333 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2332) != NULL};
bool $tmp2334 = $tmp2333.value;
if ($tmp2334) goto block25; else goto block26;
block26:;
frost$core$Int $tmp2335 = (frost$core$Int) {641u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2336, $tmp2335, &$s2337);
abort(); // unreachable
block25:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:641:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2339 $tmp2338 = ($fn2339) ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2332))->$class->vtable[0];
frost$core$String* $tmp2340 = $tmp2338(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2332)));
frost$core$String* $tmp2341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2342, $tmp2340);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$io$Console$print$frost$core$String($tmp2341);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
frost$core$Frost$unref$frost$core$Object$Q($tmp2332);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2331)));
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:643
// begin inline call to method frost.io.Console.printLine() from Analyzer.frost:643:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s2343);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:644
org$frostlang$frostc$IR$Block* $tmp2344 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2345 = &$tmp2344->ids;
org$frostlang$frostc$LinkedList* $tmp2346 = *$tmp2345;
ITable* $tmp2347 = ((frost$collections$Iterable*) $tmp2346)->$class->itable;
while ($tmp2347->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2347 = $tmp2347->next;
}
$fn2349 $tmp2348 = $tmp2347->methods[0];
frost$collections$Iterator* $tmp2350 = $tmp2348(((frost$collections$Iterable*) $tmp2346));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
frost$collections$Iterator* $tmp2351 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
*(&local2) = $tmp2350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:645
org$frostlang$frostc$IR$Block* $tmp2352 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2353 = &$tmp2352->statements;
org$frostlang$frostc$LinkedList* $tmp2354 = *$tmp2353;
ITable* $tmp2355 = ((frost$collections$Iterable*) $tmp2354)->$class->itable;
while ($tmp2355->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2355 = $tmp2355->next;
}
$fn2357 $tmp2356 = $tmp2355->methods[0];
frost$collections$Iterator* $tmp2358 = $tmp2356(((frost$collections$Iterable*) $tmp2354));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
frost$collections$Iterator* $tmp2359 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
*(&local3) = $tmp2358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:646
goto block29;
block29:;
frost$collections$Iterator* $tmp2360 = *(&local2);
ITable* $tmp2361 = $tmp2360->$class->itable;
while ($tmp2361->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2361 = $tmp2361->next;
}
$fn2363 $tmp2362 = $tmp2361->methods[0];
frost$core$Bit $tmp2364 = $tmp2362($tmp2360);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:646:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2365 = $tmp2364.value;
bool $tmp2366 = !$tmp2365;
frost$core$Bit $tmp2367 = (frost$core$Bit) {$tmp2366};
bool $tmp2368 = $tmp2367.value;
if ($tmp2368) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:647
frost$collections$Iterator* $tmp2369 = *(&local2);
ITable* $tmp2370 = $tmp2369->$class->itable;
while ($tmp2370->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2370 = $tmp2370->next;
}
$fn2372 $tmp2371 = $tmp2370->methods[1];
frost$core$Object* $tmp2373 = $tmp2371($tmp2369);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2374;
$tmp2374 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2374->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2373)->value;
// begin inline call to method frost.io.Console.print(o:frost.core.Object) from Analyzer.frost:647:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:54
$fn2376 $tmp2375 = ($fn2376) ((frost$core$Object*) $tmp2374)->$class->vtable[0];
frost$core$String* $tmp2377 = $tmp2375(((frost$core$Object*) $tmp2374));
frost$io$Console$print$frost$core$String($tmp2377);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
frost$core$Frost$unref$frost$core$Object$Q($tmp2373);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:648
frost$io$Console$print$frost$core$String(&$s2378);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:649
frost$collections$Iterator* $tmp2379 = *(&local3);
ITable* $tmp2380 = $tmp2379->$class->itable;
while ($tmp2380->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2380 = $tmp2380->next;
}
$fn2382 $tmp2381 = $tmp2380->methods[1];
frost$core$Object* $tmp2383 = $tmp2381($tmp2379);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Analyzer.frost:649:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn2385 $tmp2384 = ($fn2385) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2383))->$class->vtable[0];
frost$core$String* $tmp2386 = $tmp2384(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2383)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp2386);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$Frost$unref$frost$core$Object$Q($tmp2383);
goto block29;
block31:;
frost$collections$Iterator* $tmp2387 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2304);
org$frostlang$frostc$IR$Block* $tmp2389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
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
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2390 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp2391 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2392 = *$tmp2391;
org$frostlang$frostc$Type** $tmp2393 = &$tmp2392->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp2394 = *$tmp2393;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp2395 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp2396 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp2395, $tmp2396);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp2390, $tmp2394, $tmp2395);
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2397 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
*(&local0) = $tmp2390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:656
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp2398 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
org$frostlang$frostc$pass$Analyzer$State$init($tmp2398);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
org$frostlang$frostc$pass$Analyzer$State* $tmp2399 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
*(&local1) = $tmp2398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:657
frost$core$Int $tmp2400 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp2401 = &param0->ir;
org$frostlang$frostc$IR* $tmp2402 = *$tmp2401;
frost$collections$Array** $tmp2403 = &$tmp2402->locals;
frost$collections$Array* $tmp2404 = *$tmp2403;
ITable* $tmp2405 = ((frost$collections$CollectionView*) $tmp2404)->$class->itable;
while ($tmp2405->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2405 = $tmp2405->next;
}
$fn2407 $tmp2406 = $tmp2405->methods[0];
frost$core$Int $tmp2408 = $tmp2406(((frost$collections$CollectionView*) $tmp2404));
frost$core$Bit $tmp2409 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2410 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2400, $tmp2408, $tmp2409);
frost$core$Int $tmp2411 = $tmp2410.min;
*(&local2) = $tmp2411;
frost$core$Int $tmp2412 = $tmp2410.max;
frost$core$Bit $tmp2413 = $tmp2410.inclusive;
bool $tmp2414 = $tmp2413.value;
frost$core$Int $tmp2415 = (frost$core$Int) {1u};
if ($tmp2414) goto block4; else goto block5;
block4:;
int64_t $tmp2416 = $tmp2411.value;
int64_t $tmp2417 = $tmp2412.value;
bool $tmp2418 = $tmp2416 <= $tmp2417;
frost$core$Bit $tmp2419 = (frost$core$Bit) {$tmp2418};
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block1; else goto block2;
block5:;
int64_t $tmp2421 = $tmp2411.value;
int64_t $tmp2422 = $tmp2412.value;
bool $tmp2423 = $tmp2421 < $tmp2422;
frost$core$Bit $tmp2424 = (frost$core$Bit) {$tmp2423};
bool $tmp2425 = $tmp2424.value;
if ($tmp2425) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:658
org$frostlang$frostc$pass$Analyzer$State* $tmp2426 = *(&local1);
frost$collections$Array** $tmp2427 = &$tmp2426->locals;
frost$collections$Array* $tmp2428 = *$tmp2427;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2429 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp2428, ((frost$core$Object*) $tmp2429));
frost$core$Int $tmp2430 = *(&local2);
int64_t $tmp2431 = $tmp2412.value;
int64_t $tmp2432 = $tmp2430.value;
int64_t $tmp2433 = $tmp2431 - $tmp2432;
frost$core$Int $tmp2434 = (frost$core$Int) {$tmp2433};
if ($tmp2414) goto block7; else goto block8;
block7:;
int64_t $tmp2435 = $tmp2434.value;
int64_t $tmp2436 = $tmp2415.value;
bool $tmp2437 = $tmp2435 >= $tmp2436;
frost$core$Bit $tmp2438 = (frost$core$Bit) {$tmp2437};
bool $tmp2439 = $tmp2438.value;
if ($tmp2439) goto block6; else goto block2;
block8:;
int64_t $tmp2440 = $tmp2434.value;
int64_t $tmp2441 = $tmp2415.value;
bool $tmp2442 = $tmp2440 > $tmp2441;
frost$core$Bit $tmp2443 = (frost$core$Bit) {$tmp2442};
bool $tmp2444 = $tmp2443.value;
if ($tmp2444) goto block6; else goto block2;
block6:;
int64_t $tmp2445 = $tmp2430.value;
int64_t $tmp2446 = $tmp2415.value;
int64_t $tmp2447 = $tmp2445 + $tmp2446;
frost$core$Int $tmp2448 = (frost$core$Int) {$tmp2447};
*(&local2) = $tmp2448;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:660
org$frostlang$frostc$MethodDecl** $tmp2449 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2450 = *$tmp2449;
// begin inline call to function org.frostlang.frostc.MethodDecl.get_isInstance():frost.core.Bit from Analyzer.frost:660:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:112
org$frostlang$frostc$Annotations** $tmp2451 = &$tmp2450->annotations;
org$frostlang$frostc$Annotations* $tmp2452 = *$tmp2451;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:112:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp2453 = &$tmp2452->flags;
frost$core$Int $tmp2454 = *$tmp2453;
frost$core$Int $tmp2455 = (frost$core$Int) {16u};
frost$core$Int $tmp2456 = frost$core$Int$$BAND$frost$core$Int$R$frost$core$Int($tmp2454, $tmp2455);
frost$core$Int $tmp2457 = (frost$core$Int) {0u};
int64_t $tmp2458 = $tmp2456.value;
int64_t $tmp2459 = $tmp2457.value;
bool $tmp2460 = $tmp2458 != $tmp2459;
frost$core$Bit $tmp2461 = (frost$core$Bit) {$tmp2460};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:112:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2462 = $tmp2461.value;
bool $tmp2463 = !$tmp2462;
frost$core$Bit $tmp2464 = (frost$core$Bit) {$tmp2463};
bool $tmp2465 = $tmp2464.value;
if ($tmp2465) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:661
org$frostlang$frostc$pass$Analyzer$State* $tmp2466 = *(&local1);
frost$collections$Array** $tmp2467 = &$tmp2466->parameters;
frost$collections$Array* $tmp2468 = *$tmp2467;
org$frostlang$frostc$MethodDecl** $tmp2469 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2470 = *$tmp2469;
frost$core$Weak** $tmp2471 = &$tmp2470->owner;
frost$core$Weak* $tmp2472 = *$tmp2471;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:661:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2473 = &$tmp2472->_valid;
frost$core$Bit $tmp2474 = *$tmp2473;
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block16; else goto block17;
block17:;
frost$core$Int $tmp2476 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2477, $tmp2476);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2478 = &$tmp2472->value;
frost$core$Object* $tmp2479 = *$tmp2478;
frost$core$Frost$ref$frost$core$Object$Q($tmp2479);
org$frostlang$frostc$Type** $tmp2480 = &((org$frostlang$frostc$ClassDecl*) $tmp2479)->type;
org$frostlang$frostc$Type* $tmp2481 = *$tmp2480;
frost$collections$Array$add$frost$collections$Array$T($tmp2468, ((frost$core$Object*) $tmp2481));
frost$core$Frost$unref$frost$core$Object$Q($tmp2479);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:663
org$frostlang$frostc$MethodDecl** $tmp2482 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2483 = *$tmp2482;
frost$collections$Array** $tmp2484 = &$tmp2483->parameters;
frost$collections$Array* $tmp2485 = *$tmp2484;
ITable* $tmp2486 = ((frost$collections$Iterable*) $tmp2485)->$class->itable;
while ($tmp2486->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2486 = $tmp2486->next;
}
$fn2488 $tmp2487 = $tmp2486->methods[0];
frost$collections$Iterator* $tmp2489 = $tmp2487(((frost$collections$Iterable*) $tmp2485));
goto block18;
block18:;
ITable* $tmp2490 = $tmp2489->$class->itable;
while ($tmp2490->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2490 = $tmp2490->next;
}
$fn2492 $tmp2491 = $tmp2490->methods[0];
frost$core$Bit $tmp2493 = $tmp2491($tmp2489);
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block20; else goto block19;
block19:;
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp2495 = $tmp2489->$class->itable;
while ($tmp2495->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2495 = $tmp2495->next;
}
$fn2497 $tmp2496 = $tmp2495->methods[1];
frost$core$Object* $tmp2498 = $tmp2496($tmp2489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp2498)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2499 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp2498);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:664
org$frostlang$frostc$pass$Analyzer$State* $tmp2500 = *(&local1);
frost$collections$Array** $tmp2501 = &$tmp2500->parameters;
frost$collections$Array* $tmp2502 = *$tmp2501;
org$frostlang$frostc$MethodDecl$Parameter* $tmp2503 = *(&local3);
org$frostlang$frostc$Type** $tmp2504 = &$tmp2503->type;
org$frostlang$frostc$Type* $tmp2505 = *$tmp2504;
frost$collections$Array$add$frost$collections$Array$T($tmp2502, ((frost$core$Object*) $tmp2505));
frost$core$Frost$unref$frost$core$Object$Q($tmp2498);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2506 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:666
frost$collections$HashMap** $tmp2507 = &param0->entryStates;
frost$collections$HashMap* $tmp2508 = *$tmp2507;
org$frostlang$frostc$IR** $tmp2509 = &param0->ir;
org$frostlang$frostc$IR* $tmp2510 = *$tmp2509;
frost$collections$Array** $tmp2511 = &$tmp2510->blocks;
frost$collections$Array* $tmp2512 = *$tmp2511;
frost$core$Int $tmp2513 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:666:30
frost$core$Int $tmp2514 = (frost$core$Int) {0u};
int64_t $tmp2515 = $tmp2513.value;
int64_t $tmp2516 = $tmp2514.value;
bool $tmp2517 = $tmp2515 >= $tmp2516;
frost$core$Bit $tmp2518 = (frost$core$Bit) {$tmp2517};
bool $tmp2519 = $tmp2518.value;
if ($tmp2519) goto block24; else goto block23;
block24:;
ITable* $tmp2520 = ((frost$collections$CollectionView*) $tmp2512)->$class->itable;
while ($tmp2520->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2520 = $tmp2520->next;
}
$fn2522 $tmp2521 = $tmp2520->methods[0];
frost$core$Int $tmp2523 = $tmp2521(((frost$collections$CollectionView*) $tmp2512));
int64_t $tmp2524 = $tmp2513.value;
int64_t $tmp2525 = $tmp2523.value;
bool $tmp2526 = $tmp2524 < $tmp2525;
frost$core$Bit $tmp2527 = (frost$core$Bit) {$tmp2526};
bool $tmp2528 = $tmp2527.value;
if ($tmp2528) goto block22; else goto block23;
block23:;
frost$core$Int $tmp2529 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2530, $tmp2529, &$s2531);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2532 = &$tmp2512->data;
frost$core$Object** $tmp2533 = *$tmp2532;
frost$core$Int64 $tmp2534 = frost$core$Int64$init$frost$core$Int($tmp2513);
int64_t $tmp2535 = $tmp2534.value;
frost$core$Object* $tmp2536 = $tmp2533[$tmp2535];
frost$core$Frost$ref$frost$core$Object$Q($tmp2536);
org$frostlang$frostc$IR$Block$ID* $tmp2537 = &((org$frostlang$frostc$IR$Block*) $tmp2536)->id;
org$frostlang$frostc$IR$Block$ID $tmp2538 = *$tmp2537;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2539;
$tmp2539 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2539->value = $tmp2538;
org$frostlang$frostc$pass$Analyzer$State* $tmp2540 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2508, ((frost$collections$Key*) $tmp2539), ((frost$core$Object*) $tmp2540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2539)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2536);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:667
org$frostlang$frostc$IR** $tmp2541 = &param0->ir;
org$frostlang$frostc$IR* $tmp2542 = *$tmp2541;
frost$collections$Array** $tmp2543 = &$tmp2542->blocks;
frost$collections$Array* $tmp2544 = *$tmp2543;
ITable* $tmp2545 = ((frost$collections$Iterable*) $tmp2544)->$class->itable;
while ($tmp2545->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2545 = $tmp2545->next;
}
$fn2547 $tmp2546 = $tmp2545->methods[0];
frost$collections$Iterator* $tmp2548 = $tmp2546(((frost$collections$Iterable*) $tmp2544));
goto block25;
block25:;
ITable* $tmp2549 = $tmp2548->$class->itable;
while ($tmp2549->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2549 = $tmp2549->next;
}
$fn2551 $tmp2550 = $tmp2549->methods[0];
frost$core$Bit $tmp2552 = $tmp2550($tmp2548);
bool $tmp2553 = $tmp2552.value;
if ($tmp2553) goto block27; else goto block26;
block26:;
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2554 = $tmp2548->$class->itable;
while ($tmp2554->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2554 = $tmp2554->next;
}
$fn2556 $tmp2555 = $tmp2554->methods[1];
frost$core$Object* $tmp2557 = $tmp2555($tmp2548);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2557)));
org$frostlang$frostc$IR$Block* $tmp2558 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
*(&local4) = ((org$frostlang$frostc$IR$Block*) $tmp2557);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:668
frost$collections$HashMap** $tmp2559 = &param0->blocks;
frost$collections$HashMap* $tmp2560 = *$tmp2559;
org$frostlang$frostc$IR$Block* $tmp2561 = *(&local4);
org$frostlang$frostc$IR$Block$ID* $tmp2562 = &$tmp2561->id;
org$frostlang$frostc$IR$Block$ID $tmp2563 = *$tmp2562;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2564;
$tmp2564 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2564->value = $tmp2563;
org$frostlang$frostc$IR$Block* $tmp2565 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2560, ((frost$collections$Key*) $tmp2564), ((frost$core$Object*) $tmp2565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2564)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:669
org$frostlang$frostc$IR$Block* $tmp2566 = *(&local4);
org$frostlang$frostc$LinkedList** $tmp2567 = &$tmp2566->ids;
org$frostlang$frostc$LinkedList* $tmp2568 = *$tmp2567;
ITable* $tmp2569 = ((frost$collections$Iterable*) $tmp2568)->$class->itable;
while ($tmp2569->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2569 = $tmp2569->next;
}
$fn2571 $tmp2570 = $tmp2569->methods[0];
frost$collections$Iterator* $tmp2572 = $tmp2570(((frost$collections$Iterable*) $tmp2568));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
frost$collections$Iterator* $tmp2573 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local5) = $tmp2572;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:670
org$frostlang$frostc$IR$Block* $tmp2574 = *(&local4);
org$frostlang$frostc$LinkedList** $tmp2575 = &$tmp2574->statements;
org$frostlang$frostc$LinkedList* $tmp2576 = *$tmp2575;
ITable* $tmp2577 = ((frost$collections$Iterable*) $tmp2576)->$class->itable;
while ($tmp2577->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2577 = $tmp2577->next;
}
$fn2579 $tmp2578 = $tmp2577->methods[0];
frost$collections$Iterator* $tmp2580 = $tmp2578(((frost$collections$Iterable*) $tmp2576));
*(&local6) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
frost$collections$Iterator* $tmp2581 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
*(&local6) = $tmp2580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:671
goto block28;
block28:;
frost$collections$Iterator* $tmp2582 = *(&local5);
ITable* $tmp2583 = $tmp2582->$class->itable;
while ($tmp2583->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2583 = $tmp2583->next;
}
$fn2585 $tmp2584 = $tmp2583->methods[0];
frost$core$Bit $tmp2586 = $tmp2584($tmp2582);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:671:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2587 = $tmp2586.value;
bool $tmp2588 = !$tmp2587;
frost$core$Bit $tmp2589 = (frost$core$Bit) {$tmp2588};
bool $tmp2590 = $tmp2589.value;
if ($tmp2590) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:672
frost$collections$HashMap** $tmp2591 = &param0->statements;
frost$collections$HashMap* $tmp2592 = *$tmp2591;
frost$collections$Iterator* $tmp2593 = *(&local5);
ITable* $tmp2594 = $tmp2593->$class->itable;
while ($tmp2594->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2594 = $tmp2594->next;
}
$fn2596 $tmp2595 = $tmp2594->methods[1];
frost$core$Object* $tmp2597 = $tmp2595($tmp2593);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2598;
$tmp2598 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2598->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2597)->value;
frost$collections$Iterator* $tmp2599 = *(&local6);
ITable* $tmp2600 = $tmp2599->$class->itable;
while ($tmp2600->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2600 = $tmp2600->next;
}
$fn2602 $tmp2601 = $tmp2600->methods[1];
frost$core$Object* $tmp2603 = $tmp2601($tmp2599);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2592, ((frost$collections$Key*) $tmp2598), ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2603)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2603);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2598)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2597);
goto block28;
block30:;
frost$collections$Iterator* $tmp2604 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
*(&local6) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2605 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2557);
org$frostlang$frostc$IR$Block* $tmp2606 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:675
frost$collections$HashSet** $tmp2607 = &param0->worklist;
frost$collections$HashSet* $tmp2608 = *$tmp2607;
org$frostlang$frostc$IR** $tmp2609 = &param0->ir;
org$frostlang$frostc$IR* $tmp2610 = *$tmp2609;
frost$collections$Array** $tmp2611 = &$tmp2610->blocks;
frost$collections$Array* $tmp2612 = *$tmp2611;
frost$core$Int $tmp2613 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:675:31
frost$core$Int $tmp2614 = (frost$core$Int) {0u};
int64_t $tmp2615 = $tmp2613.value;
int64_t $tmp2616 = $tmp2614.value;
bool $tmp2617 = $tmp2615 >= $tmp2616;
frost$core$Bit $tmp2618 = (frost$core$Bit) {$tmp2617};
bool $tmp2619 = $tmp2618.value;
if ($tmp2619) goto block35; else goto block34;
block35:;
ITable* $tmp2620 = ((frost$collections$CollectionView*) $tmp2612)->$class->itable;
while ($tmp2620->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2620 = $tmp2620->next;
}
$fn2622 $tmp2621 = $tmp2620->methods[0];
frost$core$Int $tmp2623 = $tmp2621(((frost$collections$CollectionView*) $tmp2612));
int64_t $tmp2624 = $tmp2613.value;
int64_t $tmp2625 = $tmp2623.value;
bool $tmp2626 = $tmp2624 < $tmp2625;
frost$core$Bit $tmp2627 = (frost$core$Bit) {$tmp2626};
bool $tmp2628 = $tmp2627.value;
if ($tmp2628) goto block33; else goto block34;
block34:;
frost$core$Int $tmp2629 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2630, $tmp2629, &$s2631);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2632 = &$tmp2612->data;
frost$core$Object** $tmp2633 = *$tmp2632;
frost$core$Int64 $tmp2634 = frost$core$Int64$init$frost$core$Int($tmp2613);
int64_t $tmp2635 = $tmp2634.value;
frost$core$Object* $tmp2636 = $tmp2633[$tmp2635];
frost$core$Frost$ref$frost$core$Object$Q($tmp2636);
org$frostlang$frostc$IR$Block$ID* $tmp2637 = &((org$frostlang$frostc$IR$Block*) $tmp2636)->id;
org$frostlang$frostc$IR$Block$ID $tmp2638 = *$tmp2637;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2639;
$tmp2639 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2639->value = $tmp2638;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:675:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp2640 = &$tmp2608->contents;
frost$collections$HashMap* $tmp2641 = *$tmp2640;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2641, ((frost$collections$Key*) $tmp2639), ((frost$core$Object*) ((frost$collections$Key*) $tmp2639)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2639)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2636);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:676
goto block37;
block37:;
frost$collections$HashSet** $tmp2642 = &param0->worklist;
frost$collections$HashSet* $tmp2643 = *$tmp2642;
ITable* $tmp2644 = ((frost$collections$CollectionView*) $tmp2643)->$class->itable;
while ($tmp2644->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2644 = $tmp2644->next;
}
$fn2646 $tmp2645 = $tmp2644->methods[0];
frost$core$Int $tmp2647 = $tmp2645(((frost$collections$CollectionView*) $tmp2643));
frost$core$Int $tmp2648 = (frost$core$Int) {0u};
int64_t $tmp2649 = $tmp2647.value;
int64_t $tmp2650 = $tmp2648.value;
bool $tmp2651 = $tmp2649 > $tmp2650;
frost$core$Bit $tmp2652 = (frost$core$Bit) {$tmp2651};
bool $tmp2653 = $tmp2652.value;
if ($tmp2653) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:677
frost$collections$HashSet** $tmp2654 = &param0->worklist;
frost$collections$HashSet* $tmp2655 = *$tmp2654;
ITable* $tmp2656 = ((frost$collections$Iterable*) $tmp2655)->$class->itable;
while ($tmp2656->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2656 = $tmp2656->next;
}
$fn2658 $tmp2657 = $tmp2656->methods[0];
frost$collections$Iterator* $tmp2659 = $tmp2657(((frost$collections$Iterable*) $tmp2655));
ITable* $tmp2660 = $tmp2659->$class->itable;
while ($tmp2660->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2660 = $tmp2660->next;
}
$fn2662 $tmp2661 = $tmp2660->methods[1];
frost$core$Object* $tmp2663 = $tmp2661($tmp2659);
*(&local7) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2663)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2663);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:678
frost$collections$HashSet** $tmp2664 = &param0->worklist;
frost$collections$HashSet* $tmp2665 = *$tmp2664;
org$frostlang$frostc$IR$Block$ID $tmp2666 = *(&local7);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2667;
$tmp2667 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2667->value = $tmp2666;
// begin inline call to method frost.collections.HashSet.remove(value:frost.collections.HashSet.T) from Analyzer.frost:678:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:30
frost$collections$HashMap** $tmp2668 = &$tmp2665->contents;
frost$collections$HashMap* $tmp2669 = *$tmp2668;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp2669, ((frost$collections$Key*) $tmp2667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2667)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:679
org$frostlang$frostc$IR$Block$ID $tmp2670 = *(&local7);
$fn2672 $tmp2671 = ($fn2672) param0->$class->vtable[10];
$tmp2671(param0, $tmp2670);
goto block37;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:681
frost$core$Bit $tmp2673 = (frost$core$Bit) {true};
frost$core$Bit* $tmp2674 = &param0->reportErrors;
*$tmp2674 = $tmp2673;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:682
org$frostlang$frostc$IR** $tmp2675 = &param0->ir;
org$frostlang$frostc$IR* $tmp2676 = *$tmp2675;
frost$collections$Array** $tmp2677 = &$tmp2676->blocks;
frost$collections$Array* $tmp2678 = *$tmp2677;
ITable* $tmp2679 = ((frost$collections$Iterable*) $tmp2678)->$class->itable;
while ($tmp2679->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2679 = $tmp2679->next;
}
$fn2681 $tmp2680 = $tmp2679->methods[0];
frost$collections$Iterator* $tmp2682 = $tmp2680(((frost$collections$Iterable*) $tmp2678));
goto block41;
block41:;
ITable* $tmp2683 = $tmp2682->$class->itable;
while ($tmp2683->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2683 = $tmp2683->next;
}
$fn2685 $tmp2684 = $tmp2683->methods[0];
frost$core$Bit $tmp2686 = $tmp2684($tmp2682);
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block43; else goto block42;
block42:;
*(&local8) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2688 = $tmp2682->$class->itable;
while ($tmp2688->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2688 = $tmp2688->next;
}
$fn2690 $tmp2689 = $tmp2688->methods[1];
frost$core$Object* $tmp2691 = $tmp2689($tmp2682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2691)));
org$frostlang$frostc$IR$Block* $tmp2692 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
*(&local8) = ((org$frostlang$frostc$IR$Block*) $tmp2691);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:683
frost$collections$HashMap** $tmp2693 = &param0->entryStates;
frost$collections$HashMap* $tmp2694 = *$tmp2693;
org$frostlang$frostc$IR$Block* $tmp2695 = *(&local8);
org$frostlang$frostc$IR$Block$ID* $tmp2696 = &$tmp2695->id;
org$frostlang$frostc$IR$Block$ID $tmp2697 = *$tmp2696;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2698;
$tmp2698 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2698->value = $tmp2697;
frost$core$Object* $tmp2699 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2694, ((frost$collections$Key*) $tmp2698));
frost$core$Bit $tmp2700 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2699) != NULL};
bool $tmp2701 = $tmp2700.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2699);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2698)));
if ($tmp2701) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:684
org$frostlang$frostc$IR$Block* $tmp2702 = *(&local8);
org$frostlang$frostc$LinkedList** $tmp2703 = &$tmp2702->statements;
org$frostlang$frostc$LinkedList* $tmp2704 = *$tmp2703;
ITable* $tmp2705 = ((frost$collections$CollectionView*) $tmp2704)->$class->itable;
while ($tmp2705->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2705 = $tmp2705->next;
}
$fn2707 $tmp2706 = $tmp2705->methods[1];
frost$core$Object* $tmp2708 = $tmp2706(((frost$collections$CollectionView*) $tmp2704));
frost$core$Int* $tmp2709 = &((org$frostlang$frostc$IR$Statement*) $tmp2708)->$rawValue;
frost$core$Int $tmp2710 = *$tmp2709;
frost$core$Int $tmp2711 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:685:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2712 = $tmp2710.value;
int64_t $tmp2713 = $tmp2711.value;
bool $tmp2714 = $tmp2712 == $tmp2713;
frost$core$Bit $tmp2715 = (frost$core$Bit) {$tmp2714};
bool $tmp2716 = $tmp2715.value;
if ($tmp2716) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:686
org$frostlang$frostc$MethodDecl** $tmp2717 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2718 = *$tmp2717;
org$frostlang$frostc$MethodDecl$Kind* $tmp2719 = &$tmp2718->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2720 = *$tmp2719;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2721;
$tmp2721 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2721->value = $tmp2720;
frost$core$Int $tmp2722 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Analyzer.frost:686:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2723 = &(&local10)->$rawValue;
*$tmp2723 = $tmp2722;
org$frostlang$frostc$MethodDecl$Kind $tmp2724 = *(&local10);
*(&local9) = $tmp2724;
org$frostlang$frostc$MethodDecl$Kind $tmp2725 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2726;
$tmp2726 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2726->value = $tmp2725;
ITable* $tmp2727 = ((frost$core$Equatable*) $tmp2721)->$class->itable;
while ($tmp2727->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2727 = $tmp2727->next;
}
$fn2729 $tmp2728 = $tmp2727->methods[1];
frost$core$Bit $tmp2730 = $tmp2728(((frost$core$Equatable*) $tmp2721), ((frost$core$Equatable*) $tmp2726));
bool $tmp2731 = $tmp2730.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2726)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2721)));
if ($tmp2731) goto block53; else goto block52;
block53:;
org$frostlang$frostc$MethodDecl** $tmp2732 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2733 = *$tmp2732;
org$frostlang$frostc$Type** $tmp2734 = &$tmp2733->returnType;
org$frostlang$frostc$Type* $tmp2735 = *$tmp2734;
org$frostlang$frostc$Compiler** $tmp2736 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2737 = *$tmp2736;
org$frostlang$frostc$Type** $tmp2738 = &$tmp2737->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2739 = *$tmp2738;
ITable* $tmp2740 = ((frost$core$Equatable*) $tmp2735)->$class->itable;
while ($tmp2740->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2740 = $tmp2740->next;
}
$fn2742 $tmp2741 = $tmp2740->methods[1];
frost$core$Bit $tmp2743 = $tmp2741(((frost$core$Equatable*) $tmp2735), ((frost$core$Equatable*) $tmp2739));
bool $tmp2744 = $tmp2743.value;
if ($tmp2744) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:688
org$frostlang$frostc$Compiler** $tmp2745 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2746 = *$tmp2745;
org$frostlang$frostc$MethodDecl** $tmp2747 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2748 = *$tmp2747;
org$frostlang$frostc$Position* $tmp2749 = &((org$frostlang$frostc$Symbol*) $tmp2748)->position;
org$frostlang$frostc$Position $tmp2750 = *$tmp2749;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2746, $tmp2750, &$s2751);
goto block52;
block52:;
goto block47;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:692
org$frostlang$frostc$IR$Block* $tmp2752 = *(&local8);
org$frostlang$frostc$IR$Block$ID* $tmp2753 = &$tmp2752->id;
org$frostlang$frostc$IR$Block$ID $tmp2754 = *$tmp2753;
frost$core$Int $tmp2755 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:692:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Block$ID* $tmp2756 = &(&local12)->id;
*$tmp2756 = $tmp2754;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Int* $tmp2757 = &(&local12)->exit;
*$tmp2757 = $tmp2755;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2758 = *(&local12);
*(&local11) = $tmp2758;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2759 = *(&local11);
$fn2761 $tmp2760 = ($fn2761) param0->$class->vtable[9];
org$frostlang$frostc$pass$Analyzer$State* $tmp2762 = $tmp2760(param0, $tmp2759);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
goto block47;
block47:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2708);
goto block45;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:696
org$frostlang$frostc$IR$Block* $tmp2763 = *(&local8);
frost$core$Bit* $tmp2764 = &$tmp2763->containsExplicitCode;
frost$core$Bit $tmp2765 = *$tmp2764;
bool $tmp2766 = $tmp2765.value;
if ($tmp2766) goto block58; else goto block57;
block58:;
org$frostlang$frostc$IR$Block* $tmp2767 = *(&local8);
frost$core$Bit* $tmp2768 = &$tmp2767->forceReachable;
frost$core$Bit $tmp2769 = *$tmp2768;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:696:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2770 = $tmp2769.value;
bool $tmp2771 = !$tmp2770;
frost$core$Bit $tmp2772 = (frost$core$Bit) {$tmp2771};
bool $tmp2773 = $tmp2772.value;
if ($tmp2773) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:697
org$frostlang$frostc$Compiler** $tmp2774 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2775 = *$tmp2774;
org$frostlang$frostc$IR$Block* $tmp2776 = *(&local8);
org$frostlang$frostc$LinkedList** $tmp2777 = &$tmp2776->statements;
org$frostlang$frostc$LinkedList* $tmp2778 = *$tmp2777;
ITable* $tmp2779 = ((frost$collections$CollectionView*) $tmp2778)->$class->itable;
while ($tmp2779->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2779 = $tmp2779->next;
}
$fn2781 $tmp2780 = $tmp2779->methods[1];
frost$core$Object* $tmp2782 = $tmp2780(((frost$collections$CollectionView*) $tmp2778));
$fn2784 $tmp2783 = ($fn2784) ((org$frostlang$frostc$IR$Statement*) $tmp2782)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2785 = $tmp2783(((org$frostlang$frostc$IR$Statement*) $tmp2782));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2775, $tmp2785, &$s2786);
frost$core$Frost$unref$frost$core$Object$Q($tmp2782);
goto block57;
block57:;
goto block45;
block45:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2691);
org$frostlang$frostc$IR$Block* $tmp2787 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
*(&local8) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block41;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
org$frostlang$frostc$pass$Analyzer$State* $tmp2788 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2789 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$Position local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:703
org$frostlang$frostc$LinkedList** $tmp2790 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2791 = *$tmp2790;
ITable* $tmp2792 = ((frost$collections$CollectionView*) $tmp2791)->$class->itable;
while ($tmp2792->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2792 = $tmp2792->next;
}
$fn2794 $tmp2793 = $tmp2792->methods[1];
frost$core$Object* $tmp2795 = $tmp2793(((frost$collections$CollectionView*) $tmp2791));
*(&local0) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2795)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2795);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:704
org$frostlang$frostc$LinkedList** $tmp2796 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2797 = *$tmp2796;
ITable* $tmp2798 = ((frost$collections$CollectionView*) $tmp2797)->$class->itable;
while ($tmp2798->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2798 = $tmp2798->next;
}
$fn2800 $tmp2799 = $tmp2798->methods[1];
frost$core$Object* $tmp2801 = $tmp2799(((frost$collections$CollectionView*) $tmp2797));
$fn2803 $tmp2802 = ($fn2803) ((org$frostlang$frostc$IR$Statement*) $tmp2801)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2804 = $tmp2802(((org$frostlang$frostc$IR$Statement*) $tmp2801));
*(&local1) = $tmp2804;
frost$core$Frost$unref$frost$core$Object$Q($tmp2801);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:705
org$frostlang$frostc$LinkedList** $tmp2805 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2806 = *$tmp2805;
$fn2808 $tmp2807 = ($fn2808) $tmp2806->$class->vtable[8];
$tmp2807($tmp2806);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:706
org$frostlang$frostc$LinkedList** $tmp2809 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2810 = *$tmp2809;
org$frostlang$frostc$IR$Statement$ID $tmp2811 = *(&local0);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2812;
$tmp2812 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2812->value = $tmp2811;
$fn2814 $tmp2813 = ($fn2814) $tmp2810->$class->vtable[4];
$tmp2813($tmp2810, ((frost$core$Object*) $tmp2812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:707
org$frostlang$frostc$LinkedList** $tmp2815 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2816 = *$tmp2815;
$fn2818 $tmp2817 = ($fn2818) $tmp2816->$class->vtable[8];
$tmp2817($tmp2816);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:708
org$frostlang$frostc$LinkedList** $tmp2819 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2820 = *$tmp2819;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2821 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2822 = (frost$core$Int) {28u};
org$frostlang$frostc$Position $tmp2823 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position($tmp2821, $tmp2822, $tmp2823);
$fn2825 $tmp2824 = ($fn2825) $tmp2820->$class->vtable[4];
$tmp2824($tmp2820, ((frost$core$Object*) $tmp2821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
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
org$frostlang$frostc$IR** $tmp2826 = &param0->ir;
org$frostlang$frostc$IR* $tmp2827 = *$tmp2826;
frost$collections$Array** $tmp2828 = &$tmp2827->blocks;
frost$collections$Array* $tmp2829 = *$tmp2828;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:712:33
frost$core$Int $tmp2830 = (frost$core$Int) {0u};
int64_t $tmp2831 = param1.value;
int64_t $tmp2832 = $tmp2830.value;
bool $tmp2833 = $tmp2831 >= $tmp2832;
frost$core$Bit $tmp2834 = (frost$core$Bit) {$tmp2833};
bool $tmp2835 = $tmp2834.value;
if ($tmp2835) goto block4; else goto block3;
block4:;
ITable* $tmp2836 = ((frost$collections$CollectionView*) $tmp2829)->$class->itable;
while ($tmp2836->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2836 = $tmp2836->next;
}
$fn2838 $tmp2837 = $tmp2836->methods[0];
frost$core$Int $tmp2839 = $tmp2837(((frost$collections$CollectionView*) $tmp2829));
int64_t $tmp2840 = param1.value;
int64_t $tmp2841 = $tmp2839.value;
bool $tmp2842 = $tmp2840 < $tmp2841;
frost$core$Bit $tmp2843 = (frost$core$Bit) {$tmp2842};
bool $tmp2844 = $tmp2843.value;
if ($tmp2844) goto block2; else goto block3;
block3:;
frost$core$Int $tmp2845 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2846, $tmp2845, &$s2847);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2848 = &$tmp2829->data;
frost$core$Object** $tmp2849 = *$tmp2848;
frost$core$Int64 $tmp2850 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp2851 = $tmp2850.value;
frost$core$Object* $tmp2852 = $tmp2849[$tmp2851];
frost$core$Frost$ref$frost$core$Object$Q($tmp2852);
org$frostlang$frostc$IR$Block$ID* $tmp2853 = &((org$frostlang$frostc$IR$Block*) $tmp2852)->id;
org$frostlang$frostc$IR$Block$ID $tmp2854 = *$tmp2853;
*(&local0) = $tmp2854;
frost$core$Frost$unref$frost$core$Object$Q($tmp2852);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:713
org$frostlang$frostc$IR** $tmp2855 = &param0->ir;
org$frostlang$frostc$IR* $tmp2856 = *$tmp2855;
frost$collections$Array** $tmp2857 = &$tmp2856->blocks;
frost$collections$Array* $tmp2858 = *$tmp2857;
frost$core$Object* $tmp2859 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp2858, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2859);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:714
org$frostlang$frostc$IR** $tmp2860 = &param0->ir;
org$frostlang$frostc$IR* $tmp2861 = *$tmp2860;
frost$collections$Array** $tmp2862 = &$tmp2861->blocks;
frost$collections$Array* $tmp2863 = *$tmp2862;
ITable* $tmp2864 = ((frost$collections$Iterable*) $tmp2863)->$class->itable;
while ($tmp2864->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2864 = $tmp2864->next;
}
$fn2866 $tmp2865 = $tmp2864->methods[0];
frost$collections$Iterator* $tmp2867 = $tmp2865(((frost$collections$Iterable*) $tmp2863));
goto block5;
block5:;
ITable* $tmp2868 = $tmp2867->$class->itable;
while ($tmp2868->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2868 = $tmp2868->next;
}
$fn2870 $tmp2869 = $tmp2868->methods[0];
frost$core$Bit $tmp2871 = $tmp2869($tmp2867);
bool $tmp2872 = $tmp2871.value;
if ($tmp2872) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2873 = $tmp2867->$class->itable;
while ($tmp2873->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2873 = $tmp2873->next;
}
$fn2875 $tmp2874 = $tmp2873->methods[1];
frost$core$Object* $tmp2876 = $tmp2874($tmp2867);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2876)));
org$frostlang$frostc$IR$Block* $tmp2877 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2876);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:715
org$frostlang$frostc$IR$Block* $tmp2878 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2879 = &$tmp2878->statements;
org$frostlang$frostc$LinkedList* $tmp2880 = *$tmp2879;
ITable* $tmp2881 = ((frost$collections$CollectionView*) $tmp2880)->$class->itable;
while ($tmp2881->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2881 = $tmp2881->next;
}
$fn2883 $tmp2882 = $tmp2881->methods[0];
frost$core$Int $tmp2884 = $tmp2882(((frost$collections$CollectionView*) $tmp2880));
frost$core$Int $tmp2885 = (frost$core$Int) {1u};
int64_t $tmp2886 = $tmp2884.value;
int64_t $tmp2887 = $tmp2885.value;
int64_t $tmp2888 = $tmp2886 - $tmp2887;
frost$core$Int $tmp2889 = (frost$core$Int) {$tmp2888};
*(&local2) = $tmp2889;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:716
org$frostlang$frostc$IR$Block* $tmp2890 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2891 = &$tmp2890->statements;
org$frostlang$frostc$LinkedList* $tmp2892 = *$tmp2891;
$fn2894 $tmp2893 = ($fn2894) $tmp2892->$class->vtable[6];
frost$core$Object* $tmp2895 = $tmp2893($tmp2892);
frost$core$Int* $tmp2896 = &((org$frostlang$frostc$IR$Statement*) $tmp2895)->$rawValue;
frost$core$Int $tmp2897 = *$tmp2896;
frost$core$Int $tmp2898 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:717:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2899 = $tmp2897.value;
int64_t $tmp2900 = $tmp2898.value;
bool $tmp2901 = $tmp2899 == $tmp2900;
frost$core$Bit $tmp2902 = (frost$core$Bit) {$tmp2901};
bool $tmp2903 = $tmp2902.value;
if ($tmp2903) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2904 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2895)->$data + 0);
org$frostlang$frostc$Position $tmp2905 = *$tmp2904;
org$frostlang$frostc$IR$Block$ID* $tmp2906 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2895)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2907 = *$tmp2906;
*(&local3) = $tmp2907;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:718
org$frostlang$frostc$IR$Block$ID $tmp2908 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2909 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:718:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2910 = $tmp2908.value;
frost$core$Int $tmp2911 = $tmp2909.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2912 = $tmp2910.value;
int64_t $tmp2913 = $tmp2911.value;
bool $tmp2914 = $tmp2912 == $tmp2913;
frost$core$Bit $tmp2915 = (frost$core$Bit) {$tmp2914};
bool $tmp2916 = $tmp2915.value;
if ($tmp2916) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:719
org$frostlang$frostc$IR$Block* $tmp2917 = *(&local1);
$fn2919 $tmp2918 = ($fn2919) param0->$class->vtable[13];
$tmp2918(param0, $tmp2917);
goto block13;
block13:;
goto block8;
block10:;
frost$core$Int $tmp2920 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:722:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2921 = $tmp2897.value;
int64_t $tmp2922 = $tmp2920.value;
bool $tmp2923 = $tmp2921 == $tmp2922;
frost$core$Bit $tmp2924 = (frost$core$Bit) {$tmp2923};
bool $tmp2925 = $tmp2924.value;
if ($tmp2925) goto block16; else goto block8;
block16:;
org$frostlang$frostc$Position* $tmp2926 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2895)->$data + 0);
org$frostlang$frostc$Position $tmp2927 = *$tmp2926;
*(&local4) = $tmp2927;
org$frostlang$frostc$IR$Value** $tmp2928 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2895)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2929 = *$tmp2928;
org$frostlang$frostc$IR$Block$ID* $tmp2930 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2895)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2931 = *$tmp2930;
*(&local5) = $tmp2931;
org$frostlang$frostc$IR$Block$ID* $tmp2932 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2895)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2933 = *$tmp2932;
*(&local6) = $tmp2933;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:723
org$frostlang$frostc$IR$Block$ID $tmp2934 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2935;
$tmp2935 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2935->value = $tmp2934;
org$frostlang$frostc$IR$Block$ID $tmp2936 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2937;
$tmp2937 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2937->value = $tmp2936;
ITable* $tmp2938 = ((frost$core$Equatable*) $tmp2935)->$class->itable;
while ($tmp2938->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2938 = $tmp2938->next;
}
$fn2940 $tmp2939 = $tmp2938->methods[1];
frost$core$Bit $tmp2941 = $tmp2939(((frost$core$Equatable*) $tmp2935), ((frost$core$Equatable*) $tmp2937));
bool $tmp2942 = $tmp2941.value;
if ($tmp2942) goto block18; else goto block19;
block19:;
frost$core$Int $tmp2943 = (frost$core$Int) {723u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2944, $tmp2943);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2937)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2935)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:724
org$frostlang$frostc$IR$Block$ID $tmp2945 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp2946 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:724:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2947 = $tmp2945.value;
frost$core$Int $tmp2948 = $tmp2946.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2949 = $tmp2947.value;
int64_t $tmp2950 = $tmp2948.value;
bool $tmp2951 = $tmp2949 == $tmp2950;
frost$core$Bit $tmp2952 = (frost$core$Bit) {$tmp2951};
bool $tmp2953 = $tmp2952.value;
if ($tmp2953) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:726
frost$core$System$crash();
frost$core$Int $tmp2954 = (frost$core$Int) {726u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2955, $tmp2954, &$s2956);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:728
org$frostlang$frostc$IR$Block$ID $tmp2957 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2958 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:728:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2959 = $tmp2957.value;
frost$core$Int $tmp2960 = $tmp2958.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2961 = $tmp2959.value;
int64_t $tmp2962 = $tmp2960.value;
bool $tmp2963 = $tmp2961 == $tmp2962;
frost$core$Bit $tmp2964 = (frost$core$Bit) {$tmp2963};
bool $tmp2965 = $tmp2964.value;
if ($tmp2965) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:730
frost$core$System$crash();
frost$core$Int $tmp2966 = (frost$core$Int) {730u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2967, $tmp2966, &$s2968);
abort(); // unreachable
block26:;
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2895);
frost$core$Frost$unref$frost$core$Object$Q($tmp2876);
org$frostlang$frostc$IR$Block* $tmp2969 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
return;

}
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp2970 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2971 = *$tmp2970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
org$frostlang$frostc$MethodDecl** $tmp2972 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2973 = *$tmp2972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
org$frostlang$frostc$IR** $tmp2974 = &param0->ir;
org$frostlang$frostc$IR* $tmp2975 = *$tmp2974;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
frost$collections$HashMap** $tmp2976 = &param0->blocks;
frost$collections$HashMap* $tmp2977 = *$tmp2976;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
frost$collections$HashMap** $tmp2978 = &param0->predecessors;
frost$collections$HashMap* $tmp2979 = *$tmp2978;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
frost$collections$HashMap** $tmp2980 = &param0->entryStates;
frost$collections$HashMap* $tmp2981 = *$tmp2980;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
frost$collections$HashSet** $tmp2982 = &param0->worklist;
frost$collections$HashSet* $tmp2983 = *$tmp2982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
frost$collections$HashMap** $tmp2984 = &param0->statements;
frost$collections$HashMap* $tmp2985 = *$tmp2984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
return;

}

