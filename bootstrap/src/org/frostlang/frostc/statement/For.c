#include "org/frostlang/frostc/statement/For.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Compiler/Target.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/HashSet.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$For$class_type org$frostlang$frostc$statement$For$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$For$cleanup} };

typedef frost$core$Bit (*$fn12)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn39)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn69)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn98)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn102)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn114)(frost$core$Object*);
typedef frost$core$Bit (*$fn137)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn161)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn184)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn207)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn230)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn248)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn272)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn295)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn318)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn341)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn364)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn377)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn403)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn425)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn447)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn454)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn470)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn491)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn501)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn513)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn519)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn525)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn536)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn569)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn594)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn597)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn600)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn611)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn642)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn653)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn656)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn659)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn670)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn700)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn703)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn732)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn750)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn776)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn781)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn786)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn791)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn796)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn814)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn819)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn850)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn855)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn886)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn891)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn894)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn898)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn903)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn915)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn926)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn931)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn934)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn947)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn985)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1008)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1031)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1054)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1077)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1096)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1101)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1111)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1116)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1147)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1152)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1183)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1188)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1226)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1233)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1238)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1264)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1276)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1282)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn1288)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1299)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1342)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1350)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1358)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn1382)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1385)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1388)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1399)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1431)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn1442)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1445)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1448)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1459)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1490)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1493)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1499)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1517)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1536)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1546)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1569)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1592)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1615)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1638)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1672)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1690)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1715)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1718)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1726)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1731)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1736)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1741)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1746)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1813)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1818)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1821)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1826)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1836)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1841)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1872)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1877)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1908)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1913)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1916)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1921)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1931)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1936)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1967)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1972)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2003)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2008)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2011)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2015)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2020)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2036)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2047)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2052)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2055)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2068)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2081)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2086)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2096)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2101)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2122)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2145)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2168)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2191)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2214)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2233)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2238)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2248)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2253)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2284)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2289)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2320)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2325)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2353)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2376)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2399)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2422)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2445)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2464)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2469)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2479)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2484)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2515)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2520)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2551)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2556)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2587)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2594)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2599)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2636)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2669)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn2674)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn2683)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2703)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2707)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2723)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2729)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2751)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2757)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn2777)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn2780)(frost$core$Object*);
typedef frost$core$Bit (*$fn2808)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2904)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn2910)(frost$core$Object*);
typedef frost$core$String* (*$fn2935)(frost$core$Object*);
typedef frost$core$Bit (*$fn3022)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3064)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3107)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3112)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3117)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn3127)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3139)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3143)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3165)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3177)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3182)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3206)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3211)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3221)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3259)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3263)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3268)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3278)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3289)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3294)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3316)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3325)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3335)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3340)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3344)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3349)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3363)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3387)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3392)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3400)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3430)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3454)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3459)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3467)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3501)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn3505)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn3508)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 34, 8035563818917771412, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, -3848379638281795678, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -3818102238453651865, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, -8243849900526105723, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, 2895801343972463081, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 6004887031425356233, NULL };
static frost$core$String $s783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, -6773890575270984264, NULL };
static frost$core$String $s788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, -5757260016675641217, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 7819478318269437571, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 862953121163133953, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 4129098721710860897, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1093 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -2517180725123787287, NULL };
static frost$core$String $s1103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 371504587453742575, NULL };
static frost$core$String $s1130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -1657626740712006728, NULL };
static frost$core$String $s1311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s1404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s1464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s1669 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 6004887031425356233, NULL };
static frost$core$String $s1733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, -6773890575270984264, NULL };
static frost$core$String $s1738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, -5757260016675641217, NULL };
static frost$core$String $s1743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, 6835485881888488082, NULL };
static frost$core$String $s1748 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 3156828070342271752, NULL };
static frost$core$String $s1761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s1787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1796 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s1799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, -3266654702256079504, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, -1544085282621682558, NULL };
static frost$core$String $s1855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1891 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 1700389036629462354, NULL };
static frost$core$String $s1923 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, -1590985972706820336, NULL };
static frost$core$String $s1950 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s1956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1992 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2057 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 4129098721710860897, NULL };
static frost$core$String $s2078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, -9175798345561453926, NULL };
static frost$core$String $s2088 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, 1352989231191166944, NULL };
static frost$core$String $s2112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, 8914406012094469804, NULL };
static frost$core$String $s2240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, 8797429780311193770, NULL };
static frost$core$String $s2267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, 583162507237697254, NULL };
static frost$core$String $s2471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -8356613504536380376, NULL };
static frost$core$String $s2498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s2575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s2649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s2653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x6f\x72\x27\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x72\x61\x6e\x67\x65\x20\x27", 45, -6193764283733493999, NULL };
static frost$core$String $s2679 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20", 3, -6196166834438432699, NULL };
static frost$core$String $s2681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x72\x61\x6e\x67\x65\x73\x20\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x62\x6f\x74\x68\x20\x73\x74\x61\x72\x74\x20\x61\x6e\x64\x20\x65\x6e\x64", 43, 7049180602675478362, NULL };
static frost$core$String $s2727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s2783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s2785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s2787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, -5635255732749358298, NULL };
static frost$core$String $s2846 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s2854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, -4445134852680863373, NULL };
static frost$core$String $s2915 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s2926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s2938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s2940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s2942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, -4606220905787087156, NULL };
static frost$core$String $s2990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3045 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s3109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, -2208379357949812030, NULL };
static frost$core$String $s3114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 415422786092736210, NULL };
static frost$core$String $s3119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 4826375230611455343, NULL };
static frost$core$String $s3171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, -5672273796004150040, NULL };
static frost$core$String $s3244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, -1931643216358674392, NULL };
static frost$core$String $s3321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s3404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s3405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s3471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s3472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s3487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -1037217257710868414, NULL };
static frost$core$String $s3493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, -8670400631145364674, NULL };
static frost$core$String $s3513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -1132365909717631325, NULL };

frost$core$Bit org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
frost$core$Bit local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:25
org$frostlang$frostc$Type$Kind* $tmp2 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3 = *$tmp2;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int $tmp5 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:25:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp6 = &(&local1)->$rawValue;
*$tmp6 = $tmp5;
org$frostlang$frostc$Type$Kind $tmp7 = *(&local1);
*(&local0) = $tmp7;
org$frostlang$frostc$Type$Kind $tmp8 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp9;
$tmp9 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp9->value = $tmp8;
ITable* $tmp10 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Bit $tmp13 = $tmp11(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp9));
bool $tmp14 = $tmp13.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp9)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
if ($tmp14) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:26
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:26:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp15 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp16 = *$tmp15;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Int $tmp17 = (frost$core$Int) {0u};
frost$core$Object* $tmp18 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp16, $tmp17);
frost$core$Bit $tmp19 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, ((org$frostlang$frostc$Type*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q($tmp18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
return $tmp19;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:28
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp20 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp21 = *$tmp20;
frost$core$Bit $tmp22 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp21, &$s23);
bool $tmp24 = $tmp22.value;
if ($tmp24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:29
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp25 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp26 = *$tmp25;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Int $tmp27 = (frost$core$Int) {1u};
frost$core$Object* $tmp28 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp26, $tmp27);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:29:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp29 = &((org$frostlang$frostc$Type*) $tmp28)->typeKind;
org$frostlang$frostc$Type$Kind $tmp30 = *$tmp29;
org$frostlang$frostc$Type$Kind$wrapper* $tmp31;
$tmp31 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp31->value = $tmp30;
frost$core$Int $tmp32 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp33 = &(&local4)->$rawValue;
*$tmp33 = $tmp32;
org$frostlang$frostc$Type$Kind $tmp34 = *(&local4);
*(&local3) = $tmp34;
org$frostlang$frostc$Type$Kind $tmp35 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp36;
$tmp36 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp36->value = $tmp35;
ITable* $tmp37 = ((frost$core$Equatable*) $tmp31)->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[1];
frost$core$Bit $tmp40 = $tmp38(((frost$core$Equatable*) $tmp31), ((frost$core$Equatable*) $tmp36));
bool $tmp41 = $tmp40.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp36)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
if ($tmp41) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp28)));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp28);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp28)));
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp42 = &((org$frostlang$frostc$Type*) $tmp28)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp43 = *$tmp42;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Int $tmp44 = (frost$core$Int) {0u};
frost$core$Object* $tmp45 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp43, $tmp44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp45)));
frost$core$Frost$unref$frost$core$Object$Q($tmp45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp45)));
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp46 = *(&local2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
org$frostlang$frostc$Type* $tmp47 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local5) = $tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:30
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:30:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp48 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Int $tmp50 = (frost$core$Int) {2u};
frost$core$Object* $tmp51 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp49, $tmp50);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp51)));
org$frostlang$frostc$Type* $tmp52 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local6) = ((org$frostlang$frostc$Type*) $tmp51);
frost$core$Frost$unref$frost$core$Object$Q($tmp51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:31
org$frostlang$frostc$Type* $tmp53 = *(&local5);
org$frostlang$frostc$Type* $tmp54 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:31:22
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp55 = &((org$frostlang$frostc$Symbol*) $tmp53)->name;
frost$core$String* $tmp56 = *$tmp55;
frost$core$String** $tmp57 = &((org$frostlang$frostc$Symbol*) $tmp54)->name;
frost$core$String* $tmp58 = *$tmp57;
frost$core$Bit $tmp59 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp56, $tmp58);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type$Kind* $tmp61 = &$tmp53->typeKind;
org$frostlang$frostc$Type$Kind $tmp62 = *$tmp61;
org$frostlang$frostc$Type$Kind$wrapper* $tmp63;
$tmp63 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp63->value = $tmp62;
org$frostlang$frostc$Type$Kind* $tmp64 = &$tmp54->typeKind;
org$frostlang$frostc$Type$Kind $tmp65 = *$tmp64;
org$frostlang$frostc$Type$Kind$wrapper* $tmp66;
$tmp66 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp66->value = $tmp65;
ITable* $tmp67 = ((frost$core$Equatable*) $tmp63)->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$core$Bit $tmp70 = $tmp68(((frost$core$Equatable*) $tmp63), ((frost$core$Equatable*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp66)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp63)));
*(&local7) = $tmp70;
goto block20;
block19:;
*(&local7) = $tmp59;
goto block20;
block20:;
frost$core$Bit $tmp71 = *(&local7);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:32
frost$core$Bit $tmp73 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp74 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp75 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp76 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
return $tmp73;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:34
org$frostlang$frostc$Type* $tmp77 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from For.frost:34:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp78 = &((org$frostlang$frostc$Symbol*) $tmp77)->name;
frost$core$String* $tmp79 = *$tmp78;
frost$core$Bit $tmp80 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp79, &$s81);
bool $tmp82 = $tmp80.value;
if ($tmp82) goto block24; else goto block22;
block24:;
org$frostlang$frostc$Type* $tmp83 = *(&local6);
frost$core$String** $tmp84 = &((org$frostlang$frostc$Symbol*) $tmp83)->name;
frost$core$String* $tmp85 = *$tmp84;
frost$core$Bit $tmp86 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp85, &$s87);
bool $tmp88 = $tmp86.value;
if ($tmp88) goto block23; else goto block22;
block23:;
org$frostlang$frostc$Type* $tmp89 = *(&local5);
frost$core$String** $tmp90 = &((org$frostlang$frostc$Symbol*) $tmp89)->name;
frost$core$String* $tmp91 = *$tmp90;
org$frostlang$frostc$Type* $tmp92 = *(&local6);
frost$core$String** $tmp93 = &((org$frostlang$frostc$Symbol*) $tmp92)->name;
frost$core$String* $tmp94 = *$tmp93;
// begin inline call to function frost.core.String.get_length():frost.core.Int from For.frost:35:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp96 = ((frost$collections$Iterable*) &$s95)->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$collections$Iterator* $tmp99 = $tmp97(((frost$collections$Iterable*) &$s95));
ITable* $tmp100 = $tmp99->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[2];
frost$core$Int $tmp103 = $tmp101($tmp99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Bit $tmp104 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp105 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp103, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp104);
frost$core$String* $tmp106 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp94, $tmp105);
frost$core$Bit $tmp107 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp91, $tmp106);
bool $tmp108 = $tmp107.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
if ($tmp108) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:36
frost$core$Bit $tmp109 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp110 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp111 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp112 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
return $tmp109;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:38
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:38:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn114 $tmp113 = ($fn114) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp115 = $tmp113(((frost$core$Object*) param2));
frost$core$String* $tmp116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s117, $tmp115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$String* $tmp118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp116, &$s119);
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp118, &$s121);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:40
frost$core$Bit $tmp122 = (frost$core$Bit) {false};
org$frostlang$frostc$Type* $tmp123 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp124 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp125 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
return $tmp122;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:42
frost$core$Bit $tmp126 = (frost$core$Bit) {true};
return $tmp126;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Bit local6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:48
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:48:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp127 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp128 = *$tmp127;
org$frostlang$frostc$Type$Kind$wrapper* $tmp129;
$tmp129 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp129->value = $tmp128;
frost$core$Int $tmp130 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp131 = &(&local2)->$rawValue;
*$tmp131 = $tmp130;
org$frostlang$frostc$Type$Kind $tmp132 = *(&local2);
*(&local1) = $tmp132;
org$frostlang$frostc$Type$Kind $tmp133 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp134;
$tmp134 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp134->value = $tmp133;
ITable* $tmp135 = ((frost$core$Equatable*) $tmp129)->$class->itable;
while ($tmp135->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp135 = $tmp135->next;
}
$fn137 $tmp136 = $tmp135->methods[1];
frost$core$Bit $tmp138 = $tmp136(((frost$core$Equatable*) $tmp129), ((frost$core$Equatable*) $tmp134));
bool $tmp139 = $tmp138.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp134)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp129)));
if ($tmp139) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local0) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp140 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp141 = *$tmp140;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Int $tmp142 = (frost$core$Int) {0u};
frost$core$Object* $tmp143 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp141, $tmp142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp143)));
frost$core$Frost$unref$frost$core$Object$Q($tmp143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp143)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp144 = *(&local0);
org$frostlang$frostc$Type** $tmp145 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp146 = *$tmp145;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp147 = &((org$frostlang$frostc$Symbol*) $tmp144)->name;
frost$core$String* $tmp148 = *$tmp147;
frost$core$String** $tmp149 = &((org$frostlang$frostc$Symbol*) $tmp146)->name;
frost$core$String* $tmp150 = *$tmp149;
frost$core$Bit $tmp151 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp148, $tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type$Kind* $tmp153 = &$tmp144->typeKind;
org$frostlang$frostc$Type$Kind $tmp154 = *$tmp153;
org$frostlang$frostc$Type$Kind$wrapper* $tmp155;
$tmp155 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp155->value = $tmp154;
org$frostlang$frostc$Type$Kind* $tmp156 = &$tmp146->typeKind;
org$frostlang$frostc$Type$Kind $tmp157 = *$tmp156;
org$frostlang$frostc$Type$Kind$wrapper* $tmp158;
$tmp158 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp158->value = $tmp157;
ITable* $tmp159 = ((frost$core$Equatable*) $tmp155)->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$core$Bit $tmp162 = $tmp160(((frost$core$Equatable*) $tmp155), ((frost$core$Equatable*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp158)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp155)));
*(&local3) = $tmp162;
goto block12;
block11:;
*(&local3) = $tmp151;
goto block12;
block12:;
frost$core$Bit $tmp163 = *(&local3);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:49
org$frostlang$frostc$Type** $tmp165 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp166 = *$tmp165;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$Type* $tmp167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp166;
block8:;
org$frostlang$frostc$Type** $tmp168 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp169 = *$tmp168;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:50:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp170 = &((org$frostlang$frostc$Symbol*) $tmp144)->name;
frost$core$String* $tmp171 = *$tmp170;
frost$core$String** $tmp172 = &((org$frostlang$frostc$Symbol*) $tmp169)->name;
frost$core$String* $tmp173 = *$tmp172;
frost$core$Bit $tmp174 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp171, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Type$Kind* $tmp176 = &$tmp144->typeKind;
org$frostlang$frostc$Type$Kind $tmp177 = *$tmp176;
org$frostlang$frostc$Type$Kind$wrapper* $tmp178;
$tmp178 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp178->value = $tmp177;
org$frostlang$frostc$Type$Kind* $tmp179 = &$tmp169->typeKind;
org$frostlang$frostc$Type$Kind $tmp180 = *$tmp179;
org$frostlang$frostc$Type$Kind$wrapper* $tmp181;
$tmp181 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp181->value = $tmp180;
ITable* $tmp182 = ((frost$core$Equatable*) $tmp178)->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$core$Bit $tmp185 = $tmp183(((frost$core$Equatable*) $tmp178), ((frost$core$Equatable*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp181)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp178)));
*(&local4) = $tmp185;
goto block18;
block17:;
*(&local4) = $tmp174;
goto block18;
block18:;
frost$core$Bit $tmp186 = *(&local4);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:50
org$frostlang$frostc$Type** $tmp188 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp189 = *$tmp188;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$Type* $tmp190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp189;
block14:;
org$frostlang$frostc$Type** $tmp191 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp192 = *$tmp191;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:51:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp193 = &((org$frostlang$frostc$Symbol*) $tmp144)->name;
frost$core$String* $tmp194 = *$tmp193;
frost$core$String** $tmp195 = &((org$frostlang$frostc$Symbol*) $tmp192)->name;
frost$core$String* $tmp196 = *$tmp195;
frost$core$Bit $tmp197 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp194, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type$Kind* $tmp199 = &$tmp144->typeKind;
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
*(&local5) = $tmp208;
goto block24;
block23:;
*(&local5) = $tmp197;
goto block24;
block24:;
frost$core$Bit $tmp209 = *(&local5);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:51
org$frostlang$frostc$Type** $tmp211 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp212 = *$tmp211;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$Type* $tmp213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp212;
block20:;
org$frostlang$frostc$Type** $tmp214 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp215 = *$tmp214;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:52:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp216 = &((org$frostlang$frostc$Symbol*) $tmp144)->name;
frost$core$String* $tmp217 = *$tmp216;
frost$core$String** $tmp218 = &((org$frostlang$frostc$Symbol*) $tmp215)->name;
frost$core$String* $tmp219 = *$tmp218;
frost$core$Bit $tmp220 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp217, $tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type$Kind* $tmp222 = &$tmp144->typeKind;
org$frostlang$frostc$Type$Kind $tmp223 = *$tmp222;
org$frostlang$frostc$Type$Kind$wrapper* $tmp224;
$tmp224 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp224->value = $tmp223;
org$frostlang$frostc$Type$Kind* $tmp225 = &$tmp215->typeKind;
org$frostlang$frostc$Type$Kind $tmp226 = *$tmp225;
org$frostlang$frostc$Type$Kind$wrapper* $tmp227;
$tmp227 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp227->value = $tmp226;
ITable* $tmp228 = ((frost$core$Equatable*) $tmp224)->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp228 = $tmp228->next;
}
$fn230 $tmp229 = $tmp228->methods[0];
frost$core$Bit $tmp231 = $tmp229(((frost$core$Equatable*) $tmp224), ((frost$core$Equatable*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp227)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp224)));
*(&local6) = $tmp231;
goto block30;
block29:;
*(&local6) = $tmp220;
goto block30;
block30:;
frost$core$Bit $tmp232 = *(&local6);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:52
org$frostlang$frostc$Type** $tmp234 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp235 = *$tmp234;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$Type* $tmp236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp235;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$Type* $tmp237 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
goto block31;
block31:;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Bit local6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp238 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp239 = *$tmp238;
org$frostlang$frostc$Type$Kind$wrapper* $tmp240;
$tmp240 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp240->value = $tmp239;
frost$core$Int $tmp241 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp242 = &(&local2)->$rawValue;
*$tmp242 = $tmp241;
org$frostlang$frostc$Type$Kind $tmp243 = *(&local2);
*(&local1) = $tmp243;
org$frostlang$frostc$Type$Kind $tmp244 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp245;
$tmp245 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp245->value = $tmp244;
ITable* $tmp246 = ((frost$core$Equatable*) $tmp240)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[1];
frost$core$Bit $tmp249 = $tmp247(((frost$core$Equatable*) $tmp240), ((frost$core$Equatable*) $tmp245));
bool $tmp250 = $tmp249.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp240)));
if ($tmp250) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local0) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp251 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp252 = *$tmp251;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Int $tmp253 = (frost$core$Int) {0u};
frost$core$Object* $tmp254 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp252, $tmp253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp254)));
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp254);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp254)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp255 = *(&local0);
org$frostlang$frostc$Type** $tmp256 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp257 = *$tmp256;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp258 = &((org$frostlang$frostc$Symbol*) $tmp255)->name;
frost$core$String* $tmp259 = *$tmp258;
frost$core$String** $tmp260 = &((org$frostlang$frostc$Symbol*) $tmp257)->name;
frost$core$String* $tmp261 = *$tmp260;
frost$core$Bit $tmp262 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp259, $tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type$Kind* $tmp264 = &$tmp255->typeKind;
org$frostlang$frostc$Type$Kind $tmp265 = *$tmp264;
org$frostlang$frostc$Type$Kind$wrapper* $tmp266;
$tmp266 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp266->value = $tmp265;
org$frostlang$frostc$Type$Kind* $tmp267 = &$tmp257->typeKind;
org$frostlang$frostc$Type$Kind $tmp268 = *$tmp267;
org$frostlang$frostc$Type$Kind$wrapper* $tmp269;
$tmp269 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp269->value = $tmp268;
ITable* $tmp270 = ((frost$core$Equatable*) $tmp266)->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[0];
frost$core$Bit $tmp273 = $tmp271(((frost$core$Equatable*) $tmp266), ((frost$core$Equatable*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp269)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp266)));
*(&local3) = $tmp273;
goto block12;
block11:;
*(&local3) = $tmp262;
goto block12;
block12:;
frost$core$Bit $tmp274 = *(&local3);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp276 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp277 = *$tmp276;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$Type* $tmp278 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp277;
block8:;
org$frostlang$frostc$Type** $tmp279 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp280 = *$tmp279;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp281 = &((org$frostlang$frostc$Symbol*) $tmp255)->name;
frost$core$String* $tmp282 = *$tmp281;
frost$core$String** $tmp283 = &((org$frostlang$frostc$Symbol*) $tmp280)->name;
frost$core$String* $tmp284 = *$tmp283;
frost$core$Bit $tmp285 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp282, $tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Type$Kind* $tmp287 = &$tmp255->typeKind;
org$frostlang$frostc$Type$Kind $tmp288 = *$tmp287;
org$frostlang$frostc$Type$Kind$wrapper* $tmp289;
$tmp289 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp289->value = $tmp288;
org$frostlang$frostc$Type$Kind* $tmp290 = &$tmp280->typeKind;
org$frostlang$frostc$Type$Kind $tmp291 = *$tmp290;
org$frostlang$frostc$Type$Kind$wrapper* $tmp292;
$tmp292 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp292->value = $tmp291;
ITable* $tmp293 = ((frost$core$Equatable*) $tmp289)->$class->itable;
while ($tmp293->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp293 = $tmp293->next;
}
$fn295 $tmp294 = $tmp293->methods[0];
frost$core$Bit $tmp296 = $tmp294(((frost$core$Equatable*) $tmp289), ((frost$core$Equatable*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp292)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp289)));
*(&local4) = $tmp296;
goto block18;
block17:;
*(&local4) = $tmp285;
goto block18;
block18:;
frost$core$Bit $tmp297 = *(&local4);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp299 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp300 = *$tmp299;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$Type* $tmp301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp300;
block14:;
org$frostlang$frostc$Type** $tmp302 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp303 = *$tmp302;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp304 = &((org$frostlang$frostc$Symbol*) $tmp255)->name;
frost$core$String* $tmp305 = *$tmp304;
frost$core$String** $tmp306 = &((org$frostlang$frostc$Symbol*) $tmp303)->name;
frost$core$String* $tmp307 = *$tmp306;
frost$core$Bit $tmp308 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp305, $tmp307);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type$Kind* $tmp310 = &$tmp255->typeKind;
org$frostlang$frostc$Type$Kind $tmp311 = *$tmp310;
org$frostlang$frostc$Type$Kind$wrapper* $tmp312;
$tmp312 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp312->value = $tmp311;
org$frostlang$frostc$Type$Kind* $tmp313 = &$tmp303->typeKind;
org$frostlang$frostc$Type$Kind $tmp314 = *$tmp313;
org$frostlang$frostc$Type$Kind$wrapper* $tmp315;
$tmp315 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp315->value = $tmp314;
ITable* $tmp316 = ((frost$core$Equatable*) $tmp312)->$class->itable;
while ($tmp316->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp316 = $tmp316->next;
}
$fn318 $tmp317 = $tmp316->methods[0];
frost$core$Bit $tmp319 = $tmp317(((frost$core$Equatable*) $tmp312), ((frost$core$Equatable*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp315)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp312)));
*(&local5) = $tmp319;
goto block24;
block23:;
*(&local5) = $tmp308;
goto block24;
block24:;
frost$core$Bit $tmp320 = *(&local5);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp322 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp323 = *$tmp322;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$Type* $tmp324 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp323;
block20:;
org$frostlang$frostc$Type** $tmp325 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp326 = *$tmp325;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp327 = &((org$frostlang$frostc$Symbol*) $tmp255)->name;
frost$core$String* $tmp328 = *$tmp327;
frost$core$String** $tmp329 = &((org$frostlang$frostc$Symbol*) $tmp326)->name;
frost$core$String* $tmp330 = *$tmp329;
frost$core$Bit $tmp331 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp328, $tmp330);
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type$Kind* $tmp333 = &$tmp255->typeKind;
org$frostlang$frostc$Type$Kind $tmp334 = *$tmp333;
org$frostlang$frostc$Type$Kind$wrapper* $tmp335;
$tmp335 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp335->value = $tmp334;
org$frostlang$frostc$Type$Kind* $tmp336 = &$tmp326->typeKind;
org$frostlang$frostc$Type$Kind $tmp337 = *$tmp336;
org$frostlang$frostc$Type$Kind$wrapper* $tmp338;
$tmp338 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp338->value = $tmp337;
ITable* $tmp339 = ((frost$core$Equatable*) $tmp335)->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
frost$core$Bit $tmp342 = $tmp340(((frost$core$Equatable*) $tmp335), ((frost$core$Equatable*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp338)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp335)));
*(&local6) = $tmp342;
goto block30;
block29:;
*(&local6) = $tmp331;
goto block30;
block30:;
frost$core$Bit $tmp343 = *(&local6);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp345 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp346 = *$tmp345;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$Type* $tmp347 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp346;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$Type* $tmp348 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
goto block31;
block31:;

}
frost$collections$ListView* org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$IR$Value* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp349 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp350 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp349, $tmp350);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp351 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp352 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp353 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp351, $tmp352, $tmp353, param0);
frost$collections$Array$add$frost$collections$Array$T($tmp349, ((frost$core$Object*) $tmp351));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp349)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
return ((frost$collections$ListView*) $tmp349);

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
frost$core$Bit local5;
frost$core$Bit local6;
frost$core$Bit local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:78
org$frostlang$frostc$Type$Kind* $tmp354 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp355 = *$tmp354;
org$frostlang$frostc$Type$Kind$wrapper* $tmp356;
$tmp356 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp356->value = $tmp355;
frost$core$Int $tmp357 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:78:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp358 = &(&local1)->$rawValue;
*$tmp358 = $tmp357;
org$frostlang$frostc$Type$Kind $tmp359 = *(&local1);
*(&local0) = $tmp359;
org$frostlang$frostc$Type$Kind $tmp360 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp361;
$tmp361 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp361->value = $tmp360;
ITable* $tmp362 = ((frost$core$Equatable*) $tmp356)->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
frost$core$Bit $tmp365 = $tmp363(((frost$core$Equatable*) $tmp356), ((frost$core$Equatable*) $tmp361));
bool $tmp366 = $tmp365.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp361)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp356)));
if ($tmp366) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:79
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:79:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp367 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp368 = *$tmp367;
org$frostlang$frostc$Type$Kind$wrapper* $tmp369;
$tmp369 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp369->value = $tmp368;
frost$core$Int $tmp370 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp371 = &(&local4)->$rawValue;
*$tmp371 = $tmp370;
org$frostlang$frostc$Type$Kind $tmp372 = *(&local4);
*(&local3) = $tmp372;
org$frostlang$frostc$Type$Kind $tmp373 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp374;
$tmp374 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp374->value = $tmp373;
ITable* $tmp375 = ((frost$core$Equatable*) $tmp369)->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[1];
frost$core$Bit $tmp378 = $tmp376(((frost$core$Equatable*) $tmp369), ((frost$core$Equatable*) $tmp374));
bool $tmp379 = $tmp378.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp374)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp369)));
if ($tmp379) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local2) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp380 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp381 = *$tmp380;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Int $tmp382 = (frost$core$Int) {0u};
frost$core$Object* $tmp383 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp381, $tmp382);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp383)));
frost$core$Frost$unref$frost$core$Object$Q($tmp383);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp383);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp383)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp384 = *(&local2);
org$frostlang$frostc$Type* $tmp385 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp384);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
org$frostlang$frostc$Type* $tmp386 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp385;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:81
org$frostlang$frostc$Type** $tmp387 = &param0->CHAR8_TYPE;
org$frostlang$frostc$Type* $tmp388 = *$tmp387;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:81:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp389 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp390 = *$tmp389;
frost$core$String** $tmp391 = &((org$frostlang$frostc$Symbol*) $tmp388)->name;
frost$core$String* $tmp392 = *$tmp391;
frost$core$Bit $tmp393 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp390, $tmp392);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Type$Kind* $tmp395 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp396 = *$tmp395;
org$frostlang$frostc$Type$Kind$wrapper* $tmp397;
$tmp397 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp397->value = $tmp396;
org$frostlang$frostc$Type$Kind* $tmp398 = &$tmp388->typeKind;
org$frostlang$frostc$Type$Kind $tmp399 = *$tmp398;
org$frostlang$frostc$Type$Kind$wrapper* $tmp400;
$tmp400 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp400->value = $tmp399;
ITable* $tmp401 = ((frost$core$Equatable*) $tmp397)->$class->itable;
while ($tmp401->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp401 = $tmp401->next;
}
$fn403 $tmp402 = $tmp401->methods[0];
frost$core$Bit $tmp404 = $tmp402(((frost$core$Equatable*) $tmp397), ((frost$core$Equatable*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp400)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp397)));
*(&local5) = $tmp404;
goto block15;
block14:;
*(&local5) = $tmp393;
goto block15;
block15:;
frost$core$Bit $tmp405 = *(&local5);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:82
org$frostlang$frostc$Type** $tmp407 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp408 = *$tmp407;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
return $tmp408;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:84
org$frostlang$frostc$Type** $tmp409 = &param0->CHAR16_TYPE;
org$frostlang$frostc$Type* $tmp410 = *$tmp409;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:84:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp411 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp412 = *$tmp411;
frost$core$String** $tmp413 = &((org$frostlang$frostc$Symbol*) $tmp410)->name;
frost$core$String* $tmp414 = *$tmp413;
frost$core$Bit $tmp415 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp412, $tmp414);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Type$Kind* $tmp417 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp418 = *$tmp417;
org$frostlang$frostc$Type$Kind$wrapper* $tmp419;
$tmp419 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp419->value = $tmp418;
org$frostlang$frostc$Type$Kind* $tmp420 = &$tmp410->typeKind;
org$frostlang$frostc$Type$Kind $tmp421 = *$tmp420;
org$frostlang$frostc$Type$Kind$wrapper* $tmp422;
$tmp422 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp422->value = $tmp421;
ITable* $tmp423 = ((frost$core$Equatable*) $tmp419)->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[0];
frost$core$Bit $tmp426 = $tmp424(((frost$core$Equatable*) $tmp419), ((frost$core$Equatable*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp422)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp419)));
*(&local6) = $tmp426;
goto block22;
block21:;
*(&local6) = $tmp415;
goto block22;
block22:;
frost$core$Bit $tmp427 = *(&local6);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:85
org$frostlang$frostc$Type** $tmp429 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp430 = *$tmp429;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
return $tmp430;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:87
org$frostlang$frostc$Type** $tmp431 = &param0->CHAR32_TYPE;
org$frostlang$frostc$Type* $tmp432 = *$tmp431;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:87:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp433 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp434 = *$tmp433;
frost$core$String** $tmp435 = &((org$frostlang$frostc$Symbol*) $tmp432)->name;
frost$core$String* $tmp436 = *$tmp435;
frost$core$Bit $tmp437 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp434, $tmp436);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Type$Kind* $tmp439 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp440 = *$tmp439;
org$frostlang$frostc$Type$Kind$wrapper* $tmp441;
$tmp441 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp441->value = $tmp440;
org$frostlang$frostc$Type$Kind* $tmp442 = &$tmp432->typeKind;
org$frostlang$frostc$Type$Kind $tmp443 = *$tmp442;
org$frostlang$frostc$Type$Kind$wrapper* $tmp444;
$tmp444 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp444->value = $tmp443;
ITable* $tmp445 = ((frost$core$Equatable*) $tmp441)->$class->itable;
while ($tmp445->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp445 = $tmp445->next;
}
$fn447 $tmp446 = $tmp445->methods[0];
frost$core$Bit $tmp448 = $tmp446(((frost$core$Equatable*) $tmp441), ((frost$core$Equatable*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp444)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp441)));
*(&local7) = $tmp448;
goto block29;
block28:;
*(&local7) = $tmp437;
goto block29;
block29:;
frost$core$Bit $tmp449 = *(&local7);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block23; else goto block25;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:88
org$frostlang$frostc$Type** $tmp451 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp452 = *$tmp451;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
return $tmp452;
block25:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block24:;
goto block17;
block17:;
goto block10;
block10:;
goto block30;
block30:;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

frost$core$Bit local0;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:99
$fn454 $tmp453 = ($fn454) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp455 = $tmp453(param2);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:99:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp456 = &((org$frostlang$frostc$Symbol*) $tmp455)->name;
frost$core$String* $tmp457 = *$tmp456;
frost$core$String** $tmp458 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp459 = *$tmp458;
frost$core$Bit $tmp460 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp457, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind* $tmp462 = &$tmp455->typeKind;
org$frostlang$frostc$Type$Kind $tmp463 = *$tmp462;
org$frostlang$frostc$Type$Kind$wrapper* $tmp464;
$tmp464 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp464->value = $tmp463;
org$frostlang$frostc$Type$Kind* $tmp465 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp466 = *$tmp465;
org$frostlang$frostc$Type$Kind$wrapper* $tmp467;
$tmp467 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp467->value = $tmp466;
ITable* $tmp468 = ((frost$core$Equatable*) $tmp464)->$class->itable;
while ($tmp468->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp468 = $tmp468->next;
}
$fn470 $tmp469 = $tmp468->methods[0];
frost$core$Bit $tmp471 = $tmp469(((frost$core$Equatable*) $tmp464), ((frost$core$Equatable*) $tmp467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp467)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp464)));
*(&local0) = $tmp471;
goto block6;
block5:;
*(&local0) = $tmp460;
goto block6;
block6:;
frost$core$Bit $tmp472 = *(&local0);
bool $tmp473 = $tmp472.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
if ($tmp473) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:102
org$frostlang$frostc$ClassDecl* $tmp474 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
org$frostlang$frostc$ClassDecl* $tmp475 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local1) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:103
org$frostlang$frostc$ClassDecl* $tmp476 = *(&local1);
frost$core$Bit $tmp477 = (frost$core$Bit) {$tmp476 != NULL};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block7; else goto block8;
block8:;
frost$core$Int $tmp479 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s480, $tmp479);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:104
org$frostlang$frostc$IR** $tmp481 = &param0->ir;
org$frostlang$frostc$IR* $tmp482 = *$tmp481;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp483 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp484 = (frost$core$Int) {7u};
org$frostlang$frostc$ClassDecl* $tmp485 = *(&local1);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp486 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp487 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp486, $tmp487);
org$frostlang$frostc$IR$Value* $tmp488 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp486, ((frost$core$Object*) $tmp488));
org$frostlang$frostc$FixedArray* $tmp489 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp486);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp483, $tmp484, param1, $tmp485, $tmp489);
$fn491 $tmp490 = ($fn491) $tmp482->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp492 = $tmp490($tmp482, $tmp483);
*(&local2) = $tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:106
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp493 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp494 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp495 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp493, $tmp494, $tmp495, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
org$frostlang$frostc$ClassDecl* $tmp496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp493;

}
void org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$Variable* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
frost$core$Int local3;
frost$core$Int local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$ClassDecl* local7 = NULL;
frost$collections$ListView* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
frost$core$Bit local14;
org$frostlang$frostc$IR$Block$ID local15;
org$frostlang$frostc$IR$Block$ID local16;
org$frostlang$frostc$IR$Block$ID local17;
org$frostlang$frostc$IR$Block$ID local18;
org$frostlang$frostc$IR$Block$ID local19;
org$frostlang$frostc$Compiler$AutoContext* local20 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local21 = NULL;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$IR$Value* local23 = NULL;
org$frostlang$frostc$IR$Value* local24 = NULL;
org$frostlang$frostc$IR$Value* local25 = NULL;
org$frostlang$frostc$ASTNode* local26 = NULL;
org$frostlang$frostc$IR$Block$ID local27;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$IR$Value* local29 = NULL;
org$frostlang$frostc$Type* local30 = NULL;
org$frostlang$frostc$Type* local31 = NULL;
frost$core$Bit local32;
frost$core$Bit local33;
frost$core$Bit local34;
frost$core$Bit local35;
org$frostlang$frostc$IR$Value* local36 = NULL;
org$frostlang$frostc$IR$Block$ID local37;
org$frostlang$frostc$IR$Block$ID local38;
org$frostlang$frostc$IR$Value* local39 = NULL;
org$frostlang$frostc$IR$Value* local40 = NULL;
org$frostlang$frostc$IR$Value* local41 = NULL;
org$frostlang$frostc$IR$Value* local42 = NULL;
org$frostlang$frostc$IR$Value* local43 = NULL;
org$frostlang$frostc$IR$Value* local44 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:113
org$frostlang$frostc$IR** $tmp497 = &param0->ir;
org$frostlang$frostc$IR* $tmp498 = *$tmp497;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
org$frostlang$frostc$IR* $tmp499 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local0) = $tmp498;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:114
$fn501 $tmp500 = ($fn501) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp502 = $tmp500(param4);
org$frostlang$frostc$Type$Kind* $tmp503 = &$tmp502->typeKind;
org$frostlang$frostc$Type$Kind $tmp504 = *$tmp503;
org$frostlang$frostc$Type$Kind$wrapper* $tmp505;
$tmp505 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp505->value = $tmp504;
frost$core$Int $tmp506 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:114:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp507 = &(&local2)->$rawValue;
*$tmp507 = $tmp506;
org$frostlang$frostc$Type$Kind $tmp508 = *(&local2);
*(&local1) = $tmp508;
org$frostlang$frostc$Type$Kind $tmp509 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp510;
$tmp510 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp510->value = $tmp509;
ITable* $tmp511 = ((frost$core$Equatable*) $tmp505)->$class->itable;
while ($tmp511->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp511 = $tmp511->next;
}
$fn513 $tmp512 = $tmp511->methods[0];
frost$core$Bit $tmp514 = $tmp512(((frost$core$Equatable*) $tmp505), ((frost$core$Equatable*) $tmp510));
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block2; else goto block3;
block3:;
frost$core$Int $tmp516 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s517, $tmp516);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp510)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp505)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:115
$fn519 $tmp518 = ($fn519) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp520 = $tmp518(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:115:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp521 = &$tmp520->_subtypes;
org$frostlang$frostc$FixedArray* $tmp522 = *$tmp521;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
ITable* $tmp523 = ((frost$collections$CollectionView*) $tmp522)->$class->itable;
while ($tmp523->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp523 = $tmp523->next;
}
$fn525 $tmp524 = $tmp523->methods[0];
frost$core$Int $tmp526 = $tmp524(((frost$collections$CollectionView*) $tmp522));
frost$core$Int $tmp527 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:115:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527.value;
bool $tmp530 = $tmp528 == $tmp529;
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block6; else goto block7;
block7:;
frost$core$Int $tmp533 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s534, $tmp533);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:116
$fn536 $tmp535 = ($fn536) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp537 = $tmp535(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:116:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp538 = &$tmp537->_subtypes;
org$frostlang$frostc$FixedArray* $tmp539 = *$tmp538;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
frost$core$Int $tmp540 = (frost$core$Int) {0u};
frost$core$Object* $tmp541 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp539, $tmp540);
frost$core$String** $tmp542 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp541))->name;
frost$core$String* $tmp543 = *$tmp542;
frost$core$Bit $tmp544 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp543, &$s545);
bool $tmp546 = $tmp544.value;
if ($tmp546) goto block9; else goto block10;
block10:;
frost$core$Int $tmp547 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s548, $tmp547);
abort(); // unreachable
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp541);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:117
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:118
org$frostlang$frostc$Variable$Storage** $tmp549 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp550 = *$tmp549;
frost$core$Int* $tmp551 = &$tmp550->$rawValue;
frost$core$Int $tmp552 = *$tmp551;
frost$core$Int $tmp553 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:119:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553.value;
bool $tmp556 = $tmp554 == $tmp555;
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block12; else goto block13;
block12:;
frost$core$Int* $tmp559 = (frost$core$Int*) ($tmp550->$data + 0);
frost$core$Int $tmp560 = *$tmp559;
*(&local4) = $tmp560;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:120
frost$core$Int $tmp561 = *(&local4);
*(&local3) = $tmp561;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:126
org$frostlang$frostc$Type** $tmp562 = &param3->type;
org$frostlang$frostc$Type* $tmp563 = *$tmp562;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
org$frostlang$frostc$Type* $tmp564 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local5) = $tmp563;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:127
org$frostlang$frostc$Type* $tmp565 = *(&local5);
org$frostlang$frostc$Type* $tmp566 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp565);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
org$frostlang$frostc$Type* $tmp567 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local6) = $tmp566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:129
$fn569 $tmp568 = ($fn569) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp570 = $tmp568(param4);
org$frostlang$frostc$ClassDecl* $tmp571 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp570);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$ClassDecl* $tmp572 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local7) = $tmp571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:130
org$frostlang$frostc$ClassDecl* $tmp573 = *(&local7);
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573 == NULL};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block15; else goto block16;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:123
frost$core$Int $tmp576 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s577, $tmp576);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:131
org$frostlang$frostc$ClassDecl* $tmp578 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp579 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp580 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp581 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:133
org$frostlang$frostc$ClassDecl* $tmp582 = *(&local7);
frost$collections$ListView* $tmp583 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp582);
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$collections$ListView* $tmp584 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local8) = $tmp583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:136
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp585 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp586 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp587 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp588 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp589 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp590 = *(&local8);
frost$core$Int $tmp591 = (frost$core$Int) {0u};
ITable* $tmp592 = $tmp590->$class->itable;
while ($tmp592->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp592 = $tmp592->next;
}
$fn594 $tmp593 = $tmp592->methods[0];
frost$core$Object* $tmp595 = $tmp593($tmp590, $tmp591);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp588, $tmp589, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp595));
$fn597 $tmp596 = ($fn597) $tmp587->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp598 = $tmp596($tmp587, $tmp588);
$fn600 $tmp599 = ($fn600) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp601 = $tmp599(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:138:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp602 = &$tmp601->_subtypes;
org$frostlang$frostc$FixedArray* $tmp603 = *$tmp602;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Int $tmp604 = (frost$core$Int) {1u};
frost$core$Object* $tmp605 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp603, $tmp604);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp585, $tmp586, $tmp598, ((org$frostlang$frostc$Type*) $tmp605));
org$frostlang$frostc$Type* $tmp606 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:136:54
org$frostlang$frostc$Type** $tmp607 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp608 = *$tmp607;
ITable* $tmp609 = ((frost$core$Equatable*) $tmp606)->$class->itable;
while ($tmp609->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp609 = $tmp609->next;
}
$fn611 $tmp610 = $tmp609->methods[1];
frost$core$Bit $tmp612 = $tmp610(((frost$core$Equatable*) $tmp606), ((frost$core$Equatable*) $tmp608));
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block19; else goto block20;
block20:;
frost$core$Int $tmp614 = (frost$core$Int) {4101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s615, $tmp614, &$s616);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4102
frost$core$Bit $tmp617 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp618 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp585, $tmp606, $tmp617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
org$frostlang$frostc$Type* $tmp619 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp620 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp618, $tmp619);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
org$frostlang$frostc$IR$Value* $tmp621 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local9) = $tmp620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q($tmp605);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$core$Frost$unref$frost$core$Object$Q($tmp595);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:139
org$frostlang$frostc$IR$Value* $tmp622 = *(&local9);
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622 == NULL};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:140
org$frostlang$frostc$IR$Value* $tmp625 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp626 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp627 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp628 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp629 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp630 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:144
org$frostlang$frostc$IR* $tmp631 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp632 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp633 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp634 = *(&local9);
org$frostlang$frostc$Type* $tmp635 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp636 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp634, $tmp635);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp637 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp638 = (frost$core$Int) {2u};
frost$core$Int $tmp639 = *(&local3);
org$frostlang$frostc$Type* $tmp640 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp637, $tmp638, $tmp639, $tmp640);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp632, $tmp633, param1, $tmp636, $tmp637);
$fn642 $tmp641 = ($fn642) $tmp631->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp643 = $tmp641($tmp631, $tmp632);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:148
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp644 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp645 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp646 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp647 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp648 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp649 = *(&local8);
frost$core$Int $tmp650 = (frost$core$Int) {1u};
ITable* $tmp651 = $tmp649->$class->itable;
while ($tmp651->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[0];
frost$core$Object* $tmp654 = $tmp652($tmp649, $tmp650);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp647, $tmp648, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp654));
$fn656 $tmp655 = ($fn656) $tmp646->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp657 = $tmp655($tmp646, $tmp647);
$fn659 $tmp658 = ($fn659) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp660 = $tmp658(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:150:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp661 = &$tmp660->_subtypes;
org$frostlang$frostc$FixedArray* $tmp662 = *$tmp661;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Int $tmp663 = (frost$core$Int) {1u};
frost$core$Object* $tmp664 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp662, $tmp663);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp644, $tmp645, $tmp657, ((org$frostlang$frostc$Type*) $tmp664));
org$frostlang$frostc$Type* $tmp665 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:148:52
org$frostlang$frostc$Type** $tmp666 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp667 = *$tmp666;
ITable* $tmp668 = ((frost$core$Equatable*) $tmp665)->$class->itable;
while ($tmp668->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp668 = $tmp668->next;
}
$fn670 $tmp669 = $tmp668->methods[1];
frost$core$Bit $tmp671 = $tmp669(((frost$core$Equatable*) $tmp665), ((frost$core$Equatable*) $tmp667));
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block25; else goto block26;
block26:;
frost$core$Int $tmp673 = (frost$core$Int) {4101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s674, $tmp673, &$s675);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4102
frost$core$Bit $tmp676 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp677 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp644, $tmp665, $tmp676);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
org$frostlang$frostc$Type* $tmp678 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp679 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp677, $tmp678);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
org$frostlang$frostc$IR$Value* $tmp680 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local10) = $tmp679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q($tmp664);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q($tmp654);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:151
org$frostlang$frostc$IR$Value* $tmp681 = *(&local10);
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681 == NULL};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:152
org$frostlang$frostc$IR$Value* $tmp684 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp685 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp686 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp687 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp688 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp689 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp690 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:156
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp691 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp692 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp693 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp694 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp695 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp696 = *(&local8);
frost$core$Int $tmp697 = (frost$core$Int) {2u};
ITable* $tmp698 = $tmp696->$class->itable;
while ($tmp698->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp698 = $tmp698->next;
}
$fn700 $tmp699 = $tmp698->methods[0];
frost$core$Object* $tmp701 = $tmp699($tmp696, $tmp697);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp694, $tmp695, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp701));
$fn703 $tmp702 = ($fn703) $tmp693->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp704 = $tmp702($tmp693, $tmp694);
org$frostlang$frostc$Type** $tmp705 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp706 = *$tmp705;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp691, $tmp692, $tmp704, $tmp706);
org$frostlang$frostc$IR$Value* $tmp707 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp691);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
org$frostlang$frostc$IR$Value* $tmp708 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local11) = $tmp707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q($tmp701);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:159
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp709 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp710 = (frost$core$Int) {25u};
frost$core$UInt64 $tmp711 = (frost$core$UInt64) {1u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp709, $tmp710, param1, $tmp711);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp712 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp713 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp714 = *(&local6);
frost$core$Bit $tmp715 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp712, $tmp713, $tmp714, $tmp715);
org$frostlang$frostc$IR$Value* $tmp716 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp709, $tmp712);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
org$frostlang$frostc$IR$Value* $tmp717 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local12) = $tmp716;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:161
org$frostlang$frostc$IR$Value* $tmp718 = *(&local12);
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718 == NULL};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:162
org$frostlang$frostc$IR$Value* $tmp721 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp722 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp723 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp724 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp725 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp726 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp727 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp728 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp729 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:164
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:165
org$frostlang$frostc$IR$Value* $tmp730 = *(&local12);
$fn732 $tmp731 = ($fn732) $tmp730->$class->vtable[2];
org$frostlang$frostc$Type* $tmp733 = $tmp731($tmp730);
org$frostlang$frostc$Type** $tmp734 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp735 = *$tmp734;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:165:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp736 = &((org$frostlang$frostc$Symbol*) $tmp733)->name;
frost$core$String* $tmp737 = *$tmp736;
frost$core$String** $tmp738 = &((org$frostlang$frostc$Symbol*) $tmp735)->name;
frost$core$String* $tmp739 = *$tmp738;
frost$core$Bit $tmp740 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp737, $tmp739);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Type$Kind* $tmp742 = &$tmp733->typeKind;
org$frostlang$frostc$Type$Kind $tmp743 = *$tmp742;
org$frostlang$frostc$Type$Kind$wrapper* $tmp744;
$tmp744 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp744->value = $tmp743;
org$frostlang$frostc$Type$Kind* $tmp745 = &$tmp735->typeKind;
org$frostlang$frostc$Type$Kind $tmp746 = *$tmp745;
org$frostlang$frostc$Type$Kind$wrapper* $tmp747;
$tmp747 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp747->value = $tmp746;
ITable* $tmp748 = ((frost$core$Equatable*) $tmp744)->$class->itable;
while ($tmp748->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp748 = $tmp748->next;
}
$fn750 $tmp749 = $tmp748->methods[0];
frost$core$Bit $tmp751 = $tmp749(((frost$core$Equatable*) $tmp744), ((frost$core$Equatable*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp747)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp744)));
*(&local14) = $tmp751;
goto block37;
block36:;
*(&local14) = $tmp740;
goto block37;
block37:;
frost$core$Bit $tmp752 = *(&local14);
bool $tmp753 = $tmp752.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
if ($tmp753) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:166
org$frostlang$frostc$IR$Value* $tmp754 = *(&local12);
org$frostlang$frostc$Type** $tmp755 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp756 = *$tmp755;
org$frostlang$frostc$IR$Value* $tmp757 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp754, $tmp756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
org$frostlang$frostc$IR$Value* $tmp758 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local13) = $tmp757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:167
org$frostlang$frostc$IR$Value* $tmp759 = *(&local13);
frost$core$Bit $tmp760 = (frost$core$Bit) {$tmp759 == NULL};
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:168
org$frostlang$frostc$IR$Value* $tmp762 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp763 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp764 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp765 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp766 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp767 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp768 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp769 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp770 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp771 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block39:;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:172
org$frostlang$frostc$IR$Value* $tmp772 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
org$frostlang$frostc$IR$Value* $tmp773 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local13) = $tmp772;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:176
org$frostlang$frostc$IR* $tmp774 = *(&local0);
$fn776 $tmp775 = ($fn776) $tmp774->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp777 = $tmp775($tmp774, &$s778);
*(&local15) = $tmp777;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:177
org$frostlang$frostc$IR* $tmp779 = *(&local0);
$fn781 $tmp780 = ($fn781) $tmp779->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp782 = $tmp780($tmp779, &$s783);
*(&local16) = $tmp782;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:178
org$frostlang$frostc$IR* $tmp784 = *(&local0);
$fn786 $tmp785 = ($fn786) $tmp784->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp787 = $tmp785($tmp784, &$s788);
*(&local17) = $tmp787;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:179
org$frostlang$frostc$IR* $tmp789 = *(&local0);
$fn791 $tmp790 = ($fn791) $tmp789->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp792 = $tmp790($tmp789, &$s793);
*(&local18) = $tmp792;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:180
org$frostlang$frostc$IR* $tmp794 = *(&local0);
$fn796 $tmp795 = ($fn796) $tmp794->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp797 = $tmp795($tmp794, &$s798);
*(&local19) = $tmp797;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:181
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp799 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp800 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp801 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp802 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp803 = *(&local17);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp800, $tmp801, param2, $tmp802, $tmp803);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp799, param0, $tmp800);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
org$frostlang$frostc$Compiler$AutoContext* $tmp804 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local20) = $tmp799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:183
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp805 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp805, param0);
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
org$frostlang$frostc$Compiler$AutoScope* $tmp806 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local21) = $tmp805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:184
org$frostlang$frostc$IR* $tmp807 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp808 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp809 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp810 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp811 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp812 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp808, $tmp809, param1, $tmp810, $tmp811, $tmp812);
$fn814 $tmp813 = ($fn814) $tmp807->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp815 = $tmp813($tmp807, $tmp808);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:186
org$frostlang$frostc$IR* $tmp816 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp817 = *(&local18);
$fn819 $tmp818 = ($fn819) $tmp816->$class->vtable[4];
$tmp818($tmp816, $tmp817);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:187
org$frostlang$frostc$IR$Value* $tmp820 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp821 = *(&local10);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:187:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp822 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp823 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp822, $tmp823);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp824 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp825 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp826 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp824, $tmp825, $tmp826, $tmp821);
frost$collections$Array$add$frost$collections$Array$T($tmp822, ((frost$core$Object*) $tmp824));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp822)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp827 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp828 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp829 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp830 = *$tmp829;
frost$core$Bit $tmp831 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp827, $tmp828, $tmp830, $tmp831);
org$frostlang$frostc$IR$Value* $tmp832 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp820, &$s833, ((frost$collections$ListView*) $tmp822), $tmp827);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
org$frostlang$frostc$IR$Value* $tmp834 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local22) = $tmp832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp822)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:189
org$frostlang$frostc$IR$Value* $tmp835 = *(&local22);
frost$core$Bit $tmp836 = (frost$core$Bit) {$tmp835 != NULL};
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block41; else goto block42;
block42:;
frost$core$Int $tmp838 = (frost$core$Int) {189u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s839, $tmp838);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:190
org$frostlang$frostc$IR$Value* $tmp840 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp841 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp840);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
org$frostlang$frostc$IR$Value* $tmp842 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local23) = $tmp841;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:191
org$frostlang$frostc$IR* $tmp843 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp844 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp845 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp846 = *(&local23);
org$frostlang$frostc$IR$Block$ID $tmp847 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp848 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp844, $tmp845, param1, $tmp846, $tmp847, $tmp848);
$fn850 $tmp849 = ($fn850) $tmp843->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp851 = $tmp849($tmp843, $tmp844);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:193
org$frostlang$frostc$IR* $tmp852 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp853 = *(&local19);
$fn855 $tmp854 = ($fn855) $tmp852->$class->vtable[4];
$tmp854($tmp852, $tmp853);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:194
org$frostlang$frostc$IR$Value* $tmp856 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp857 = *(&local10);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:194:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp858 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp859 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp858, $tmp859);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp860 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp861 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp862 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp860, $tmp861, $tmp862, $tmp857);
frost$collections$Array$add$frost$collections$Array$T($tmp858, ((frost$core$Object*) $tmp860));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp858)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp863 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp864 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp865 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp866 = *$tmp865;
frost$core$Bit $tmp867 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp863, $tmp864, $tmp866, $tmp867);
org$frostlang$frostc$IR$Value* $tmp868 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp856, &$s869, ((frost$collections$ListView*) $tmp858), $tmp863);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
org$frostlang$frostc$IR$Value* $tmp870 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local24) = $tmp868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp858)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:196
org$frostlang$frostc$IR$Value* $tmp871 = *(&local24);
frost$core$Bit $tmp872 = (frost$core$Bit) {$tmp871 != NULL};
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block44; else goto block45;
block45:;
frost$core$Int $tmp874 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s875, $tmp874);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:197
org$frostlang$frostc$IR$Value* $tmp876 = *(&local24);
org$frostlang$frostc$IR$Value* $tmp877 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp876);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
org$frostlang$frostc$IR$Value* $tmp878 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local25) = $tmp877;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:198
org$frostlang$frostc$IR* $tmp879 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp880 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp881 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp882 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp883 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp884 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp880, $tmp881, param1, $tmp882, $tmp883, $tmp884);
$fn886 $tmp885 = ($fn886) $tmp879->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp887 = $tmp885($tmp879, $tmp880);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:200
org$frostlang$frostc$IR* $tmp888 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp889 = *(&local15);
$fn891 $tmp890 = ($fn891) $tmp888->$class->vtable[4];
$tmp890($tmp888, $tmp889);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:201
ITable* $tmp892 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp892->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp892 = $tmp892->next;
}
$fn894 $tmp893 = $tmp892->methods[0];
frost$collections$Iterator* $tmp895 = $tmp893(((frost$collections$Iterable*) param5));
goto block46;
block46:;
ITable* $tmp896 = $tmp895->$class->itable;
while ($tmp896->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp896 = $tmp896->next;
}
$fn898 $tmp897 = $tmp896->methods[0];
frost$core$Bit $tmp899 = $tmp897($tmp895);
bool $tmp900 = $tmp899.value;
if ($tmp900) goto block48; else goto block47;
block47:;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp901 = $tmp895->$class->itable;
while ($tmp901->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp901 = $tmp901->next;
}
$fn903 $tmp902 = $tmp901->methods[1];
frost$core$Object* $tmp904 = $tmp902($tmp895);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp904)));
org$frostlang$frostc$ASTNode* $tmp905 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local26) = ((org$frostlang$frostc$ASTNode*) $tmp904);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:202
org$frostlang$frostc$ASTNode* $tmp906 = *(&local26);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp906);
frost$core$Frost$unref$frost$core$Object$Q($tmp904);
org$frostlang$frostc$ASTNode* $tmp907 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block46;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
org$frostlang$frostc$IR$Value* $tmp908 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp909 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp910 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp911 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp912 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:205
org$frostlang$frostc$IR* $tmp913 = *(&local0);
$fn915 $tmp914 = ($fn915) $tmp913->$class->vtable[5];
frost$core$Bit $tmp916 = $tmp914($tmp913);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:205:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp917 = $tmp916.value;
bool $tmp918 = !$tmp917;
frost$core$Bit $tmp919 = (frost$core$Bit) {$tmp918};
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:206
org$frostlang$frostc$IR* $tmp921 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp922 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp923 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp924 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp922, $tmp923, param1, $tmp924);
$fn926 $tmp925 = ($fn926) $tmp921->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp927 = $tmp925($tmp921, $tmp922);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:208
org$frostlang$frostc$IR* $tmp928 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp929 = *(&local17);
$fn931 $tmp930 = ($fn931) $tmp928->$class->vtable[4];
$tmp930($tmp928, $tmp929);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:209
org$frostlang$frostc$IR* $tmp932 = *(&local0);
$fn934 $tmp933 = ($fn934) $tmp932->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp935 = $tmp933($tmp932, &$s936);
*(&local27) = $tmp935;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:212
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp937 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp938 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp939 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp940 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp941 = (frost$core$Int) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp942 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp943 = (frost$core$Int) {2u};
frost$core$Int $tmp944 = *(&local3);
org$frostlang$frostc$Type* $tmp945 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp942, $tmp943, $tmp944, $tmp945);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp940, $tmp941, param1, $tmp942);
$fn947 $tmp946 = ($fn947) $tmp939->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp948 = $tmp946($tmp939, $tmp940);
org$frostlang$frostc$Type* $tmp949 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp937, $tmp938, $tmp948, $tmp949);
org$frostlang$frostc$Type* $tmp950 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp951 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp937, $tmp950);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
org$frostlang$frostc$IR$Value* $tmp952 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local28) = $tmp951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:214
org$frostlang$frostc$IR$Value* $tmp953 = *(&local28);
frost$core$Bit $tmp954 = (frost$core$Bit) {$tmp953 != NULL};
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block52; else goto block53;
block53:;
frost$core$Int $tmp956 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s957, $tmp956);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:217
org$frostlang$frostc$IR$Value* $tmp958 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp959 = *(&local28);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:217:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp960 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp961 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp960, $tmp961);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp962 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp963 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp964 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp962, $tmp963, $tmp964, $tmp959);
frost$collections$Array$add$frost$collections$Array$T($tmp960, ((frost$core$Object*) $tmp962));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp960)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp965 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp966 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp965, $tmp966);
org$frostlang$frostc$IR$Value* $tmp967 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp958, &$s968, ((frost$collections$ListView*) $tmp960), $tmp965);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
org$frostlang$frostc$IR$Value* $tmp969 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local29) = $tmp967;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp960)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:218
org$frostlang$frostc$IR$Value* $tmp970 = *(&local29);
frost$core$Bit $tmp971 = (frost$core$Bit) {$tmp970 != NULL};
bool $tmp972 = $tmp971.value;
if ($tmp972) goto block55; else goto block56;
block56:;
frost$core$Int $tmp973 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s974, $tmp973);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:219
org$frostlang$frostc$IR$Value* $tmp975 = *(&local29);
org$frostlang$frostc$Type* $tmp976 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:219:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp977 = &$tmp976->typeKind;
org$frostlang$frostc$Type$Kind $tmp978 = *$tmp977;
org$frostlang$frostc$Type$Kind$wrapper* $tmp979;
$tmp979 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp979->value = $tmp978;
frost$core$Int $tmp980 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp981 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp980);
org$frostlang$frostc$Type$Kind$wrapper* $tmp982;
$tmp982 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp982->value = $tmp981;
ITable* $tmp983 = ((frost$core$Equatable*) $tmp979)->$class->itable;
while ($tmp983->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp983 = $tmp983->next;
}
$fn985 $tmp984 = $tmp983->methods[1];
frost$core$Bit $tmp986 = $tmp984(((frost$core$Equatable*) $tmp979), ((frost$core$Equatable*) $tmp982));
bool $tmp987 = $tmp986.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp982)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp979)));
if ($tmp987) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local31) = $tmp976;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
goto block58;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp988 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp976);
frost$core$Int $tmp989 = (frost$core$Int) {0u};
frost$core$Object* $tmp990 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp988, $tmp989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp990)));
frost$core$Frost$unref$frost$core$Object$Q($tmp990);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local31) = ((org$frostlang$frostc$Type*) $tmp990);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp990)));
goto block58;
block58:;
org$frostlang$frostc$Type* $tmp991 = *(&local31);
org$frostlang$frostc$Type** $tmp992 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp993 = *$tmp992;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp994 = &((org$frostlang$frostc$Symbol*) $tmp991)->name;
frost$core$String* $tmp995 = *$tmp994;
frost$core$String** $tmp996 = &((org$frostlang$frostc$Symbol*) $tmp993)->name;
frost$core$String* $tmp997 = *$tmp996;
frost$core$Bit $tmp998 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp995, $tmp997);
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Type$Kind* $tmp1000 = &$tmp991->typeKind;
org$frostlang$frostc$Type$Kind $tmp1001 = *$tmp1000;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1002;
$tmp1002 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1002->value = $tmp1001;
org$frostlang$frostc$Type$Kind* $tmp1003 = &$tmp993->typeKind;
org$frostlang$frostc$Type$Kind $tmp1004 = *$tmp1003;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1005;
$tmp1005 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1005->value = $tmp1004;
ITable* $tmp1006 = ((frost$core$Equatable*) $tmp1002)->$class->itable;
while ($tmp1006->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1006 = $tmp1006->next;
}
$fn1008 $tmp1007 = $tmp1006->methods[0];
frost$core$Bit $tmp1009 = $tmp1007(((frost$core$Equatable*) $tmp1002), ((frost$core$Equatable*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1005)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1002)));
*(&local32) = $tmp1009;
goto block67;
block66:;
*(&local32) = $tmp998;
goto block67;
block67:;
frost$core$Bit $tmp1010 = *(&local32);
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp1012 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp1013 = *$tmp1012;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
org$frostlang$frostc$Type* $tmp1014 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1013;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
goto block57;
block63:;
org$frostlang$frostc$Type** $tmp1015 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp1016 = *$tmp1015;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1017 = &((org$frostlang$frostc$Symbol*) $tmp991)->name;
frost$core$String* $tmp1018 = *$tmp1017;
frost$core$String** $tmp1019 = &((org$frostlang$frostc$Symbol*) $tmp1016)->name;
frost$core$String* $tmp1020 = *$tmp1019;
frost$core$Bit $tmp1021 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1018, $tmp1020);
bool $tmp1022 = $tmp1021.value;
if ($tmp1022) goto block71; else goto block72;
block71:;
org$frostlang$frostc$Type$Kind* $tmp1023 = &$tmp991->typeKind;
org$frostlang$frostc$Type$Kind $tmp1024 = *$tmp1023;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1025;
$tmp1025 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1025->value = $tmp1024;
org$frostlang$frostc$Type$Kind* $tmp1026 = &$tmp1016->typeKind;
org$frostlang$frostc$Type$Kind $tmp1027 = *$tmp1026;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1028;
$tmp1028 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1028->value = $tmp1027;
ITable* $tmp1029 = ((frost$core$Equatable*) $tmp1025)->$class->itable;
while ($tmp1029->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1029 = $tmp1029->next;
}
$fn1031 $tmp1030 = $tmp1029->methods[0];
frost$core$Bit $tmp1032 = $tmp1030(((frost$core$Equatable*) $tmp1025), ((frost$core$Equatable*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1028)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1025)));
*(&local33) = $tmp1032;
goto block73;
block72:;
*(&local33) = $tmp1021;
goto block73;
block73:;
frost$core$Bit $tmp1033 = *(&local33);
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp1035 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp1036 = *$tmp1035;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
org$frostlang$frostc$Type* $tmp1037 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1036;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
goto block57;
block69:;
org$frostlang$frostc$Type** $tmp1038 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp1039 = *$tmp1038;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1040 = &((org$frostlang$frostc$Symbol*) $tmp991)->name;
frost$core$String* $tmp1041 = *$tmp1040;
frost$core$String** $tmp1042 = &((org$frostlang$frostc$Symbol*) $tmp1039)->name;
frost$core$String* $tmp1043 = *$tmp1042;
frost$core$Bit $tmp1044 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1041, $tmp1043);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Type$Kind* $tmp1046 = &$tmp991->typeKind;
org$frostlang$frostc$Type$Kind $tmp1047 = *$tmp1046;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1048;
$tmp1048 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1048->value = $tmp1047;
org$frostlang$frostc$Type$Kind* $tmp1049 = &$tmp1039->typeKind;
org$frostlang$frostc$Type$Kind $tmp1050 = *$tmp1049;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1051;
$tmp1051 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1051->value = $tmp1050;
ITable* $tmp1052 = ((frost$core$Equatable*) $tmp1048)->$class->itable;
while ($tmp1052->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1052 = $tmp1052->next;
}
$fn1054 $tmp1053 = $tmp1052->methods[0];
frost$core$Bit $tmp1055 = $tmp1053(((frost$core$Equatable*) $tmp1048), ((frost$core$Equatable*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1051)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1048)));
*(&local34) = $tmp1055;
goto block79;
block78:;
*(&local34) = $tmp1044;
goto block79;
block79:;
frost$core$Bit $tmp1056 = *(&local34);
bool $tmp1057 = $tmp1056.value;
if ($tmp1057) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp1058 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp1059 = *$tmp1058;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
org$frostlang$frostc$Type* $tmp1060 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1059;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
goto block57;
block75:;
org$frostlang$frostc$Type** $tmp1061 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1062 = *$tmp1061;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1063 = &((org$frostlang$frostc$Symbol*) $tmp991)->name;
frost$core$String* $tmp1064 = *$tmp1063;
frost$core$String** $tmp1065 = &((org$frostlang$frostc$Symbol*) $tmp1062)->name;
frost$core$String* $tmp1066 = *$tmp1065;
frost$core$Bit $tmp1067 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1064, $tmp1066);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Type$Kind* $tmp1069 = &$tmp991->typeKind;
org$frostlang$frostc$Type$Kind $tmp1070 = *$tmp1069;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1071;
$tmp1071 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1071->value = $tmp1070;
org$frostlang$frostc$Type$Kind* $tmp1072 = &$tmp1062->typeKind;
org$frostlang$frostc$Type$Kind $tmp1073 = *$tmp1072;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1074;
$tmp1074 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1074->value = $tmp1073;
ITable* $tmp1075 = ((frost$core$Equatable*) $tmp1071)->$class->itable;
while ($tmp1075->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1075 = $tmp1075->next;
}
$fn1077 $tmp1076 = $tmp1075->methods[0];
frost$core$Bit $tmp1078 = $tmp1076(((frost$core$Equatable*) $tmp1071), ((frost$core$Equatable*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1074)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1071)));
*(&local35) = $tmp1078;
goto block85;
block84:;
*(&local35) = $tmp1067;
goto block85;
block85:;
frost$core$Bit $tmp1079 = *(&local35);
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp1081 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1082 = *$tmp1081;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
org$frostlang$frostc$Type* $tmp1083 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1082;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
goto block57;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
org$frostlang$frostc$Type* $tmp1084 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp976;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
goto block57;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
org$frostlang$frostc$Type* $tmp1085 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
goto block57;
block57:;
org$frostlang$frostc$Type* $tmp1086 = *(&local30);
org$frostlang$frostc$IR$Value* $tmp1087 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp975, $tmp1086);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
org$frostlang$frostc$IR$Value* $tmp1088 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local36) = $tmp1087;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:220
org$frostlang$frostc$IR$Value* $tmp1089 = *(&local36);
frost$core$Bit $tmp1090 = (frost$core$Bit) {$tmp1089 != NULL};
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block86; else goto block87;
block87:;
frost$core$Int $tmp1092 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1093, $tmp1092);
abort(); // unreachable
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:222
org$frostlang$frostc$IR* $tmp1094 = *(&local0);
$fn1096 $tmp1095 = ($fn1096) $tmp1094->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1097 = $tmp1095($tmp1094, &$s1098);
*(&local37) = $tmp1097;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:223
org$frostlang$frostc$IR* $tmp1099 = *(&local0);
$fn1101 $tmp1100 = ($fn1101) $tmp1099->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1102 = $tmp1100($tmp1099, &$s1103);
*(&local38) = $tmp1102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:224
org$frostlang$frostc$IR* $tmp1104 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1105 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1106 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1107 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp1108 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1109 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1105, $tmp1106, param1, $tmp1107, $tmp1108, $tmp1109);
$fn1111 $tmp1110 = ($fn1111) $tmp1104->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1112 = $tmp1110($tmp1104, $tmp1105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:227
org$frostlang$frostc$IR* $tmp1113 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1114 = *(&local37);
$fn1116 $tmp1115 = ($fn1116) $tmp1113->$class->vtable[4];
$tmp1115($tmp1113, $tmp1114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:228
org$frostlang$frostc$IR$Value* $tmp1117 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1118 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:228:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1119 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1120 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1119, $tmp1120);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1121 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1122 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1123 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1121, $tmp1122, $tmp1123, $tmp1118);
frost$collections$Array$add$frost$collections$Array$T($tmp1119, ((frost$core$Object*) $tmp1121));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1119)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1124 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1125 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1126 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1127 = *$tmp1126;
frost$core$Bit $tmp1128 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1124, $tmp1125, $tmp1127, $tmp1128);
org$frostlang$frostc$IR$Value* $tmp1129 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1117, &$s1130, ((frost$collections$ListView*) $tmp1119), $tmp1124);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
org$frostlang$frostc$IR$Value* $tmp1131 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
*(&local39) = $tmp1129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1119)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:230
org$frostlang$frostc$IR$Value* $tmp1132 = *(&local39);
frost$core$Bit $tmp1133 = (frost$core$Bit) {$tmp1132 != NULL};
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block89; else goto block90;
block90:;
frost$core$Int $tmp1135 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1136, $tmp1135);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:231
org$frostlang$frostc$IR$Value* $tmp1137 = *(&local39);
org$frostlang$frostc$IR$Value* $tmp1138 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1137);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
org$frostlang$frostc$IR$Value* $tmp1139 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local40) = $tmp1138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:232
org$frostlang$frostc$IR* $tmp1140 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1141 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1142 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1143 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1144 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1145 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1141, $tmp1142, param1, $tmp1143, $tmp1144, $tmp1145);
$fn1147 $tmp1146 = ($fn1147) $tmp1140->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1148 = $tmp1146($tmp1140, $tmp1141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:235
org$frostlang$frostc$IR* $tmp1149 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1150 = *(&local38);
$fn1152 $tmp1151 = ($fn1152) $tmp1149->$class->vtable[4];
$tmp1151($tmp1149, $tmp1150);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:236
org$frostlang$frostc$IR$Value* $tmp1153 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1154 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:236:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1155 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1156 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1155, $tmp1156);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1157 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1158 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1159 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1157, $tmp1158, $tmp1159, $tmp1154);
frost$collections$Array$add$frost$collections$Array$T($tmp1155, ((frost$core$Object*) $tmp1157));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1155)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1160 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1161 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1162 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1163 = *$tmp1162;
frost$core$Bit $tmp1164 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1160, $tmp1161, $tmp1163, $tmp1164);
org$frostlang$frostc$IR$Value* $tmp1165 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1153, &$s1166, ((frost$collections$ListView*) $tmp1155), $tmp1160);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
org$frostlang$frostc$IR$Value* $tmp1167 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local41) = $tmp1165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1155)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:238
org$frostlang$frostc$IR$Value* $tmp1168 = *(&local41);
frost$core$Bit $tmp1169 = (frost$core$Bit) {$tmp1168 != NULL};
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block92; else goto block93;
block93:;
frost$core$Int $tmp1171 = (frost$core$Int) {238u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1172, $tmp1171);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:239
org$frostlang$frostc$IR$Value* $tmp1173 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1174 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1173);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
org$frostlang$frostc$IR$Value* $tmp1175 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local42) = $tmp1174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:240
org$frostlang$frostc$IR* $tmp1176 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1177 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1178 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1179 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1180 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1181 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1177, $tmp1178, param1, $tmp1179, $tmp1180, $tmp1181);
$fn1183 $tmp1182 = ($fn1183) $tmp1176->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1184 = $tmp1182($tmp1176, $tmp1177);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:242
org$frostlang$frostc$IR* $tmp1185 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1186 = *(&local27);
$fn1188 $tmp1187 = ($fn1188) $tmp1185->$class->vtable[4];
$tmp1187($tmp1185, $tmp1186);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:243
org$frostlang$frostc$IR$Value* $tmp1189 = *(&local28);
org$frostlang$frostc$IR$Value* $tmp1190 = *(&local12);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:243:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1191 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1192 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1191, $tmp1192);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1193 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1194 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1195 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1193, $tmp1194, $tmp1195, $tmp1190);
frost$collections$Array$add$frost$collections$Array$T($tmp1191, ((frost$core$Object*) $tmp1193));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1191)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1196 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1197 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1196, $tmp1197);
org$frostlang$frostc$IR$Value* $tmp1198 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1189, &$s1199, ((frost$collections$ListView*) $tmp1191), $tmp1196);
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
org$frostlang$frostc$IR$Value* $tmp1200 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
*(&local43) = $tmp1198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1191)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:244
org$frostlang$frostc$IR$Value* $tmp1201 = *(&local43);
frost$core$Bit $tmp1202 = (frost$core$Bit) {$tmp1201 != NULL};
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block95; else goto block96;
block96:;
frost$core$Int $tmp1204 = (frost$core$Int) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1205, $tmp1204);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:245
org$frostlang$frostc$IR$Value* $tmp1206 = *(&local43);
org$frostlang$frostc$Type* $tmp1207 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1208 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1206, $tmp1207);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
org$frostlang$frostc$IR$Value* $tmp1209 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local44) = $tmp1208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:246
org$frostlang$frostc$IR$Value* $tmp1210 = *(&local44);
frost$core$Bit $tmp1211 = (frost$core$Bit) {$tmp1210 != NULL};
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block97; else goto block98;
block98:;
frost$core$Int $tmp1213 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1214, $tmp1213);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:247
org$frostlang$frostc$IR* $tmp1215 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1216 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1217 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp1218 = *(&local44);
org$frostlang$frostc$Type* $tmp1219 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1220 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1218, $tmp1219);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1221 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1222 = (frost$core$Int) {2u};
frost$core$Int $tmp1223 = *(&local3);
org$frostlang$frostc$Type* $tmp1224 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp1221, $tmp1222, $tmp1223, $tmp1224);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1216, $tmp1217, param1, $tmp1220, $tmp1221);
$fn1226 $tmp1225 = ($fn1226) $tmp1215->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1227 = $tmp1225($tmp1215, $tmp1216);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:250
org$frostlang$frostc$IR* $tmp1228 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1229 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1230 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1231 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1229, $tmp1230, param1, $tmp1231);
$fn1233 $tmp1232 = ($fn1233) $tmp1228->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1234 = $tmp1232($tmp1228, $tmp1229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:252
org$frostlang$frostc$IR* $tmp1235 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1236 = *(&local16);
$fn1238 $tmp1237 = ($fn1238) $tmp1235->$class->vtable[4];
$tmp1237($tmp1235, $tmp1236);
org$frostlang$frostc$IR$Value* $tmp1239 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1240 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1241 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1242 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1243 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1244 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1245 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1246 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1247 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1248 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1249 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1250 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1251 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1252 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1253 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1254 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1255 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1256 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1257 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1258 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$Variable* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
frost$core$Int local3;
frost$core$Int local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$ClassDecl* local10 = NULL;
frost$collections$ListView* local11 = NULL;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
org$frostlang$frostc$IR$Value* local15 = NULL;
frost$core$Bit local16;
org$frostlang$frostc$Type* local17 = NULL;
org$frostlang$frostc$Type* local18 = NULL;
frost$core$Bit local19;
frost$core$Bit local20;
frost$core$Bit local21;
frost$core$Bit local22;
org$frostlang$frostc$IR$Value* local23 = NULL;
org$frostlang$frostc$IR$Value* local24 = NULL;
org$frostlang$frostc$IR$Value* local25 = NULL;
frost$core$Bit local26;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$IR$Block$ID local28;
org$frostlang$frostc$IR$Block$ID local29;
org$frostlang$frostc$IR$Block$ID local30;
org$frostlang$frostc$IR$Block$ID local31;
org$frostlang$frostc$IR$Block$ID local32;
org$frostlang$frostc$IR$Value* local33 = NULL;
org$frostlang$frostc$Compiler$AutoContext* local34 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local35 = NULL;
org$frostlang$frostc$IR$Value* local36 = NULL;
org$frostlang$frostc$IR$Block$ID local37;
org$frostlang$frostc$IR$Block$ID local38;
org$frostlang$frostc$IR$Value* local39 = NULL;
org$frostlang$frostc$IR$Value* local40 = NULL;
org$frostlang$frostc$IR$Value* local41 = NULL;
org$frostlang$frostc$IR$Value* local42 = NULL;
org$frostlang$frostc$IR$Block$ID local43;
org$frostlang$frostc$IR$Block$ID local44;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$IR$Value* local47 = NULL;
org$frostlang$frostc$IR$Value* local48 = NULL;
org$frostlang$frostc$ASTNode* local49 = NULL;
org$frostlang$frostc$IR$Block$ID local50;
org$frostlang$frostc$IR$Value* local51 = NULL;
org$frostlang$frostc$IR$Block$ID local52;
org$frostlang$frostc$IR$Block$ID local53;
org$frostlang$frostc$Type* local54 = NULL;
org$frostlang$frostc$Type* local55 = NULL;
frost$core$Bit local56;
frost$core$Bit local57;
frost$core$Bit local58;
frost$core$Bit local59;
org$frostlang$frostc$IR$Value* local60 = NULL;
org$frostlang$frostc$IR$Block$ID local61;
org$frostlang$frostc$IR$Block$ID local62;
org$frostlang$frostc$IR$Value* local63 = NULL;
org$frostlang$frostc$IR$Value* local64 = NULL;
org$frostlang$frostc$IR$Value* local65 = NULL;
org$frostlang$frostc$IR$Value* local66 = NULL;
org$frostlang$frostc$IR$Value* local67 = NULL;
org$frostlang$frostc$Type* local68 = NULL;
org$frostlang$frostc$Type* local69 = NULL;
frost$core$Bit local70;
frost$core$Bit local71;
frost$core$Bit local72;
frost$core$Bit local73;
org$frostlang$frostc$IR$Value* local74 = NULL;
org$frostlang$frostc$IR$Block$ID local75;
org$frostlang$frostc$IR$Block$ID local76;
org$frostlang$frostc$IR$Value* local77 = NULL;
org$frostlang$frostc$IR$Value* local78 = NULL;
org$frostlang$frostc$IR$Value* local79 = NULL;
org$frostlang$frostc$IR$Value* local80 = NULL;
org$frostlang$frostc$IR$Value* local81 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:276
org$frostlang$frostc$IR** $tmp1260 = &param0->ir;
org$frostlang$frostc$IR* $tmp1261 = *$tmp1260;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
org$frostlang$frostc$IR* $tmp1262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local0) = $tmp1261;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:277
$fn1264 $tmp1263 = ($fn1264) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1265 = $tmp1263(param4);
org$frostlang$frostc$Type$Kind* $tmp1266 = &$tmp1265->typeKind;
org$frostlang$frostc$Type$Kind $tmp1267 = *$tmp1266;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1268;
$tmp1268 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1268->value = $tmp1267;
frost$core$Int $tmp1269 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:277:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1270 = &(&local2)->$rawValue;
*$tmp1270 = $tmp1269;
org$frostlang$frostc$Type$Kind $tmp1271 = *(&local2);
*(&local1) = $tmp1271;
org$frostlang$frostc$Type$Kind $tmp1272 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1273;
$tmp1273 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1273->value = $tmp1272;
ITable* $tmp1274 = ((frost$core$Equatable*) $tmp1268)->$class->itable;
while ($tmp1274->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1274 = $tmp1274->next;
}
$fn1276 $tmp1275 = $tmp1274->methods[0];
frost$core$Bit $tmp1277 = $tmp1275(((frost$core$Equatable*) $tmp1268), ((frost$core$Equatable*) $tmp1273));
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block2; else goto block3;
block3:;
frost$core$Int $tmp1279 = (frost$core$Int) {277u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1280, $tmp1279);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1273)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1268)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:278
$fn1282 $tmp1281 = ($fn1282) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1283 = $tmp1281(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:278:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1284 = &$tmp1283->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1285 = *$tmp1284;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
ITable* $tmp1286 = ((frost$collections$CollectionView*) $tmp1285)->$class->itable;
while ($tmp1286->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1286 = $tmp1286->next;
}
$fn1288 $tmp1287 = $tmp1286->methods[0];
frost$core$Int $tmp1289 = $tmp1287(((frost$collections$CollectionView*) $tmp1285));
frost$core$Int $tmp1290 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:278:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1291 = $tmp1289.value;
int64_t $tmp1292 = $tmp1290.value;
bool $tmp1293 = $tmp1291 == $tmp1292;
frost$core$Bit $tmp1294 = (frost$core$Bit) {$tmp1293};
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1296 = (frost$core$Int) {278u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1297, $tmp1296);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:279
$fn1299 $tmp1298 = ($fn1299) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1300 = $tmp1298(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:279:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1301 = &$tmp1300->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1302 = *$tmp1301;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$core$Int $tmp1303 = (frost$core$Int) {0u};
frost$core$Object* $tmp1304 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1302, $tmp1303);
frost$core$String** $tmp1305 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp1304))->name;
frost$core$String* $tmp1306 = *$tmp1305;
frost$core$Bit $tmp1307 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1306, &$s1308);
bool $tmp1309 = $tmp1307.value;
if ($tmp1309) goto block9; else goto block10;
block10:;
frost$core$Int $tmp1310 = (frost$core$Int) {279u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1311, $tmp1310);
abort(); // unreachable
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1304);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:280
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:281
org$frostlang$frostc$Variable$Storage** $tmp1312 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp1313 = *$tmp1312;
frost$core$Int* $tmp1314 = &$tmp1313->$rawValue;
frost$core$Int $tmp1315 = *$tmp1314;
frost$core$Int $tmp1316 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:282:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1317 = $tmp1315.value;
int64_t $tmp1318 = $tmp1316.value;
bool $tmp1319 = $tmp1317 == $tmp1318;
frost$core$Bit $tmp1320 = (frost$core$Bit) {$tmp1319};
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block12; else goto block13;
block12:;
frost$core$Int* $tmp1322 = (frost$core$Int*) ($tmp1313->$data + 0);
frost$core$Int $tmp1323 = *$tmp1322;
*(&local4) = $tmp1323;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:283
frost$core$Int $tmp1324 = *(&local4);
*(&local3) = $tmp1324;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:289
org$frostlang$frostc$Type** $tmp1325 = &param3->type;
org$frostlang$frostc$Type* $tmp1326 = *$tmp1325;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
org$frostlang$frostc$Type* $tmp1327 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local5) = $tmp1326;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:290
org$frostlang$frostc$Type* $tmp1328 = *(&local5);
org$frostlang$frostc$Type* $tmp1329 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp1328);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
org$frostlang$frostc$Type* $tmp1330 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local6) = $tmp1329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:291
org$frostlang$frostc$Type* $tmp1331 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1332 = &$tmp1331->typeKind;
org$frostlang$frostc$Type$Kind $tmp1333 = *$tmp1332;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1334;
$tmp1334 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1334->value = $tmp1333;
frost$core$Int $tmp1335 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:291:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1336 = &(&local8)->$rawValue;
*$tmp1336 = $tmp1335;
org$frostlang$frostc$Type$Kind $tmp1337 = *(&local8);
*(&local7) = $tmp1337;
org$frostlang$frostc$Type$Kind $tmp1338 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1339;
$tmp1339 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1339->value = $tmp1338;
ITable* $tmp1340 = ((frost$core$Equatable*) $tmp1334)->$class->itable;
while ($tmp1340->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[1];
frost$core$Bit $tmp1343 = $tmp1341(((frost$core$Equatable*) $tmp1334), ((frost$core$Equatable*) $tmp1339));
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block16; else goto block17;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:286
frost$core$Int $tmp1345 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1346, $tmp1345);
abort(); // unreachable
block17:;
frost$core$Int $tmp1347 = (frost$core$Int) {291u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1348, $tmp1347);
abort(); // unreachable
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1339)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1334)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:292
$fn1350 $tmp1349 = ($fn1350) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1351 = $tmp1349(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:292:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1352 = &$tmp1351->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1353 = *$tmp1352;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$core$Int $tmp1354 = (frost$core$Int) {2u};
frost$core$Object* $tmp1355 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1353, $tmp1354);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1355)));
org$frostlang$frostc$Type* $tmp1356 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1355);
frost$core$Frost$unref$frost$core$Object$Q($tmp1355);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:293
$fn1358 $tmp1357 = ($fn1358) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1359 = $tmp1357(param4);
org$frostlang$frostc$ClassDecl* $tmp1360 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1359);
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
org$frostlang$frostc$ClassDecl* $tmp1361 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
*(&local10) = $tmp1360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:294
org$frostlang$frostc$ClassDecl* $tmp1362 = *(&local10);
frost$core$Bit $tmp1363 = (frost$core$Bit) {$tmp1362 == NULL};
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:295
org$frostlang$frostc$ClassDecl* $tmp1365 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1366 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1367 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1368 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1369 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:297
org$frostlang$frostc$ClassDecl* $tmp1370 = *(&local10);
frost$collections$ListView* $tmp1371 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp1370);
*(&local11) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$collections$ListView* $tmp1372 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local11) = $tmp1371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:300
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1373 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1374 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1375 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1376 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1377 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1378 = *(&local11);
frost$core$Int $tmp1379 = (frost$core$Int) {0u};
ITable* $tmp1380 = $tmp1378->$class->itable;
while ($tmp1380->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1380 = $tmp1380->next;
}
$fn1382 $tmp1381 = $tmp1380->methods[0];
frost$core$Object* $tmp1383 = $tmp1381($tmp1378, $tmp1379);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1376, $tmp1377, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1383));
$fn1385 $tmp1384 = ($fn1385) $tmp1375->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1386 = $tmp1384($tmp1375, $tmp1376);
$fn1388 $tmp1387 = ($fn1388) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1389 = $tmp1387(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:302:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1390 = &$tmp1389->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1391 = *$tmp1390;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
frost$core$Int $tmp1392 = (frost$core$Int) {1u};
frost$core$Object* $tmp1393 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1391, $tmp1392);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1373, $tmp1374, $tmp1386, ((org$frostlang$frostc$Type*) $tmp1393));
org$frostlang$frostc$Type* $tmp1394 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:300:54
org$frostlang$frostc$Type** $tmp1395 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1396 = *$tmp1395;
ITable* $tmp1397 = ((frost$core$Equatable*) $tmp1394)->$class->itable;
while ($tmp1397->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1397 = $tmp1397->next;
}
$fn1399 $tmp1398 = $tmp1397->methods[1];
frost$core$Bit $tmp1400 = $tmp1398(((frost$core$Equatable*) $tmp1394), ((frost$core$Equatable*) $tmp1396));
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block23; else goto block24;
block24:;
frost$core$Int $tmp1402 = (frost$core$Int) {4101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1403, $tmp1402, &$s1404);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4102
frost$core$Bit $tmp1405 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp1406 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1373, $tmp1394, $tmp1405);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
org$frostlang$frostc$Type* $tmp1407 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1408 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1406, $tmp1407);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
org$frostlang$frostc$IR$Value* $tmp1409 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
*(&local12) = $tmp1408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q($tmp1393);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
frost$core$Frost$unref$frost$core$Object$Q($tmp1383);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:303
org$frostlang$frostc$IR$Value* $tmp1410 = *(&local12);
frost$core$Bit $tmp1411 = (frost$core$Bit) {$tmp1410 == NULL};
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:304
org$frostlang$frostc$IR$Value* $tmp1413 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1414 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1415 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1416 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1417 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1418 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1419 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:308
org$frostlang$frostc$IR* $tmp1420 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1421 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1422 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp1423 = *(&local12);
org$frostlang$frostc$Type* $tmp1424 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1425 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1423, $tmp1424);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1426 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1427 = (frost$core$Int) {2u};
frost$core$Int $tmp1428 = *(&local3);
org$frostlang$frostc$Type* $tmp1429 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp1426, $tmp1427, $tmp1428, $tmp1429);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1421, $tmp1422, param1, $tmp1425, $tmp1426);
$fn1431 $tmp1430 = ($fn1431) $tmp1420->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1432 = $tmp1430($tmp1420, $tmp1421);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:312
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1433 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1434 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1435 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1436 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1437 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1438 = *(&local11);
frost$core$Int $tmp1439 = (frost$core$Int) {1u};
ITable* $tmp1440 = $tmp1438->$class->itable;
while ($tmp1440->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1440 = $tmp1440->next;
}
$fn1442 $tmp1441 = $tmp1440->methods[0];
frost$core$Object* $tmp1443 = $tmp1441($tmp1438, $tmp1439);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1436, $tmp1437, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1443));
$fn1445 $tmp1444 = ($fn1445) $tmp1435->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1446 = $tmp1444($tmp1435, $tmp1436);
$fn1448 $tmp1447 = ($fn1448) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1449 = $tmp1447(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:314:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1450 = &$tmp1449->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1451 = *$tmp1450;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Int $tmp1452 = (frost$core$Int) {1u};
frost$core$Object* $tmp1453 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1451, $tmp1452);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1433, $tmp1434, $tmp1446, ((org$frostlang$frostc$Type*) $tmp1453));
org$frostlang$frostc$Type* $tmp1454 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:312:52
org$frostlang$frostc$Type** $tmp1455 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1456 = *$tmp1455;
ITable* $tmp1457 = ((frost$core$Equatable*) $tmp1454)->$class->itable;
while ($tmp1457->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1457 = $tmp1457->next;
}
$fn1459 $tmp1458 = $tmp1457->methods[1];
frost$core$Bit $tmp1460 = $tmp1458(((frost$core$Equatable*) $tmp1454), ((frost$core$Equatable*) $tmp1456));
bool $tmp1461 = $tmp1460.value;
if ($tmp1461) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1462 = (frost$core$Int) {4101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1463, $tmp1462, &$s1464);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4102
frost$core$Bit $tmp1465 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp1466 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1433, $tmp1454, $tmp1465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
org$frostlang$frostc$Type* $tmp1467 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1468 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1466, $tmp1467);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
org$frostlang$frostc$IR$Value* $tmp1469 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local13) = $tmp1468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Frost$unref$frost$core$Object$Q($tmp1453);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$Frost$unref$frost$core$Object$Q($tmp1443);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:315
org$frostlang$frostc$IR$Value* $tmp1470 = *(&local13);
frost$core$Bit $tmp1471 = (frost$core$Bit) {$tmp1470 == NULL};
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:316
org$frostlang$frostc$IR$Value* $tmp1473 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1474 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1475 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1476 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1477 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1478 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1479 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1480 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:320
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1481 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1482 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1483 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1484 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1485 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1486 = *(&local11);
frost$core$Int $tmp1487 = (frost$core$Int) {2u};
ITable* $tmp1488 = $tmp1486->$class->itable;
while ($tmp1488->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1488 = $tmp1488->next;
}
$fn1490 $tmp1489 = $tmp1488->methods[0];
frost$core$Object* $tmp1491 = $tmp1489($tmp1486, $tmp1487);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1484, $tmp1485, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1491));
$fn1493 $tmp1492 = ($fn1493) $tmp1483->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1494 = $tmp1492($tmp1483, $tmp1484);
org$frostlang$frostc$Type* $tmp1495 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1481, $tmp1482, $tmp1494, $tmp1495);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
org$frostlang$frostc$IR$Value* $tmp1496 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local14) = $tmp1481;
frost$core$Frost$unref$frost$core$Object$Q($tmp1491);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:322
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:323
org$frostlang$frostc$IR$Value* $tmp1497 = *(&local14);
$fn1499 $tmp1498 = ($fn1499) $tmp1497->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1500 = $tmp1498($tmp1497);
org$frostlang$frostc$Type** $tmp1501 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1502 = *$tmp1501;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:323:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1503 = &((org$frostlang$frostc$Symbol*) $tmp1500)->name;
frost$core$String* $tmp1504 = *$tmp1503;
frost$core$String** $tmp1505 = &((org$frostlang$frostc$Symbol*) $tmp1502)->name;
frost$core$String* $tmp1506 = *$tmp1505;
frost$core$Bit $tmp1507 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1504, $tmp1506);
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Type$Kind* $tmp1509 = &$tmp1500->typeKind;
org$frostlang$frostc$Type$Kind $tmp1510 = *$tmp1509;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1511;
$tmp1511 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1511->value = $tmp1510;
org$frostlang$frostc$Type$Kind* $tmp1512 = &$tmp1502->typeKind;
org$frostlang$frostc$Type$Kind $tmp1513 = *$tmp1512;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1514;
$tmp1514 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1514->value = $tmp1513;
ITable* $tmp1515 = ((frost$core$Equatable*) $tmp1511)->$class->itable;
while ($tmp1515->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1515 = $tmp1515->next;
}
$fn1517 $tmp1516 = $tmp1515->methods[0];
frost$core$Bit $tmp1518 = $tmp1516(((frost$core$Equatable*) $tmp1511), ((frost$core$Equatable*) $tmp1514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1514)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1511)));
*(&local16) = $tmp1518;
goto block39;
block38:;
*(&local16) = $tmp1507;
goto block39;
block39:;
frost$core$Bit $tmp1519 = *(&local16);
bool $tmp1520 = $tmp1519.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
if ($tmp1520) goto block33; else goto block35;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:324
org$frostlang$frostc$IR$Value* $tmp1521 = *(&local14);
org$frostlang$frostc$Type** $tmp1522 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1523 = *$tmp1522;
org$frostlang$frostc$IR$Value* $tmp1524 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1521, $tmp1523);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
org$frostlang$frostc$IR$Value* $tmp1525 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local15) = $tmp1524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:325
org$frostlang$frostc$IR$Value* $tmp1526 = *(&local15);
frost$core$Bit $tmp1527 = (frost$core$Bit) {$tmp1526 != NULL};
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block40; else goto block41;
block41:;
frost$core$Int $tmp1529 = (frost$core$Int) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1530, $tmp1529);
abort(); // unreachable
block40:;
goto block34;
block35:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:328
org$frostlang$frostc$IR$Value* $tmp1531 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
org$frostlang$frostc$IR$Value* $tmp1532 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
*(&local15) = $tmp1531;
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:330
org$frostlang$frostc$IR$Value* $tmp1533 = *(&local14);
org$frostlang$frostc$IR$Value* $tmp1534 = *(&local14);
$fn1536 $tmp1535 = ($fn1536) $tmp1534->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1537 = $tmp1535($tmp1534);
// begin inline call to function org.frostlang.frostc.statement.For.signed(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:330:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:48
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:48:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1538 = &$tmp1537->typeKind;
org$frostlang$frostc$Type$Kind $tmp1539 = *$tmp1538;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1540;
$tmp1540 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1540->value = $tmp1539;
frost$core$Int $tmp1541 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp1542 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp1541);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1543;
$tmp1543 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1543->value = $tmp1542;
ITable* $tmp1544 = ((frost$core$Equatable*) $tmp1540)->$class->itable;
while ($tmp1544->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1544 = $tmp1544->next;
}
$fn1546 $tmp1545 = $tmp1544->methods[1];
frost$core$Bit $tmp1547 = $tmp1545(((frost$core$Equatable*) $tmp1540), ((frost$core$Equatable*) $tmp1543));
bool $tmp1548 = $tmp1547.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1543)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1540)));
if ($tmp1548) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
*(&local18) = $tmp1537;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
goto block43;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp1549 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1537);
frost$core$Int $tmp1550 = (frost$core$Int) {0u};
frost$core$Object* $tmp1551 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1549, $tmp1550);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1551)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1551);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
*(&local18) = ((org$frostlang$frostc$Type*) $tmp1551);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1551)));
goto block43;
block43:;
org$frostlang$frostc$Type* $tmp1552 = *(&local18);
org$frostlang$frostc$Type** $tmp1553 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp1554 = *$tmp1553;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1555 = &((org$frostlang$frostc$Symbol*) $tmp1552)->name;
frost$core$String* $tmp1556 = *$tmp1555;
frost$core$String** $tmp1557 = &((org$frostlang$frostc$Symbol*) $tmp1554)->name;
frost$core$String* $tmp1558 = *$tmp1557;
frost$core$Bit $tmp1559 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1556, $tmp1558);
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Type$Kind* $tmp1561 = &$tmp1552->typeKind;
org$frostlang$frostc$Type$Kind $tmp1562 = *$tmp1561;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1563;
$tmp1563 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1563->value = $tmp1562;
org$frostlang$frostc$Type$Kind* $tmp1564 = &$tmp1554->typeKind;
org$frostlang$frostc$Type$Kind $tmp1565 = *$tmp1564;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1566;
$tmp1566 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1566->value = $tmp1565;
ITable* $tmp1567 = ((frost$core$Equatable*) $tmp1563)->$class->itable;
while ($tmp1567->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1567 = $tmp1567->next;
}
$fn1569 $tmp1568 = $tmp1567->methods[0];
frost$core$Bit $tmp1570 = $tmp1568(((frost$core$Equatable*) $tmp1563), ((frost$core$Equatable*) $tmp1566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1566)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1563)));
*(&local19) = $tmp1570;
goto block52;
block51:;
*(&local19) = $tmp1559;
goto block52;
block52:;
frost$core$Bit $tmp1571 = *(&local19);
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:49
org$frostlang$frostc$Type** $tmp1573 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp1574 = *$tmp1573;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
org$frostlang$frostc$Type* $tmp1575 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1574;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
goto block42;
block48:;
org$frostlang$frostc$Type** $tmp1576 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp1577 = *$tmp1576;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:50:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1578 = &((org$frostlang$frostc$Symbol*) $tmp1552)->name;
frost$core$String* $tmp1579 = *$tmp1578;
frost$core$String** $tmp1580 = &((org$frostlang$frostc$Symbol*) $tmp1577)->name;
frost$core$String* $tmp1581 = *$tmp1580;
frost$core$Bit $tmp1582 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1579, $tmp1581);
bool $tmp1583 = $tmp1582.value;
if ($tmp1583) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Type$Kind* $tmp1584 = &$tmp1552->typeKind;
org$frostlang$frostc$Type$Kind $tmp1585 = *$tmp1584;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1586;
$tmp1586 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1586->value = $tmp1585;
org$frostlang$frostc$Type$Kind* $tmp1587 = &$tmp1577->typeKind;
org$frostlang$frostc$Type$Kind $tmp1588 = *$tmp1587;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1589;
$tmp1589 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1589->value = $tmp1588;
ITable* $tmp1590 = ((frost$core$Equatable*) $tmp1586)->$class->itable;
while ($tmp1590->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1590 = $tmp1590->next;
}
$fn1592 $tmp1591 = $tmp1590->methods[0];
frost$core$Bit $tmp1593 = $tmp1591(((frost$core$Equatable*) $tmp1586), ((frost$core$Equatable*) $tmp1589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1589)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1586)));
*(&local20) = $tmp1593;
goto block58;
block57:;
*(&local20) = $tmp1582;
goto block58;
block58:;
frost$core$Bit $tmp1594 = *(&local20);
bool $tmp1595 = $tmp1594.value;
if ($tmp1595) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:50
org$frostlang$frostc$Type** $tmp1596 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp1597 = *$tmp1596;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
org$frostlang$frostc$Type* $tmp1598 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1597;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
goto block42;
block54:;
org$frostlang$frostc$Type** $tmp1599 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp1600 = *$tmp1599;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:51:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1601 = &((org$frostlang$frostc$Symbol*) $tmp1552)->name;
frost$core$String* $tmp1602 = *$tmp1601;
frost$core$String** $tmp1603 = &((org$frostlang$frostc$Symbol*) $tmp1600)->name;
frost$core$String* $tmp1604 = *$tmp1603;
frost$core$Bit $tmp1605 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1602, $tmp1604);
bool $tmp1606 = $tmp1605.value;
if ($tmp1606) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Type$Kind* $tmp1607 = &$tmp1552->typeKind;
org$frostlang$frostc$Type$Kind $tmp1608 = *$tmp1607;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1609;
$tmp1609 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1609->value = $tmp1608;
org$frostlang$frostc$Type$Kind* $tmp1610 = &$tmp1600->typeKind;
org$frostlang$frostc$Type$Kind $tmp1611 = *$tmp1610;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1612;
$tmp1612 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1612->value = $tmp1611;
ITable* $tmp1613 = ((frost$core$Equatable*) $tmp1609)->$class->itable;
while ($tmp1613->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1613 = $tmp1613->next;
}
$fn1615 $tmp1614 = $tmp1613->methods[0];
frost$core$Bit $tmp1616 = $tmp1614(((frost$core$Equatable*) $tmp1609), ((frost$core$Equatable*) $tmp1612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1612)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1609)));
*(&local21) = $tmp1616;
goto block64;
block63:;
*(&local21) = $tmp1605;
goto block64;
block64:;
frost$core$Bit $tmp1617 = *(&local21);
bool $tmp1618 = $tmp1617.value;
if ($tmp1618) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:51
org$frostlang$frostc$Type** $tmp1619 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp1620 = *$tmp1619;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
org$frostlang$frostc$Type* $tmp1621 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1620;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
goto block42;
block60:;
org$frostlang$frostc$Type** $tmp1622 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1623 = *$tmp1622;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:52:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1624 = &((org$frostlang$frostc$Symbol*) $tmp1552)->name;
frost$core$String* $tmp1625 = *$tmp1624;
frost$core$String** $tmp1626 = &((org$frostlang$frostc$Symbol*) $tmp1623)->name;
frost$core$String* $tmp1627 = *$tmp1626;
frost$core$Bit $tmp1628 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1625, $tmp1627);
bool $tmp1629 = $tmp1628.value;
if ($tmp1629) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Type$Kind* $tmp1630 = &$tmp1552->typeKind;
org$frostlang$frostc$Type$Kind $tmp1631 = *$tmp1630;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1632;
$tmp1632 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1632->value = $tmp1631;
org$frostlang$frostc$Type$Kind* $tmp1633 = &$tmp1623->typeKind;
org$frostlang$frostc$Type$Kind $tmp1634 = *$tmp1633;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1635;
$tmp1635 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1635->value = $tmp1634;
ITable* $tmp1636 = ((frost$core$Equatable*) $tmp1632)->$class->itable;
while ($tmp1636->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1636 = $tmp1636->next;
}
$fn1638 $tmp1637 = $tmp1636->methods[0];
frost$core$Bit $tmp1639 = $tmp1637(((frost$core$Equatable*) $tmp1632), ((frost$core$Equatable*) $tmp1635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1635)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1632)));
*(&local22) = $tmp1639;
goto block70;
block69:;
*(&local22) = $tmp1628;
goto block70;
block70:;
frost$core$Bit $tmp1640 = *(&local22);
bool $tmp1641 = $tmp1640.value;
if ($tmp1641) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:52
org$frostlang$frostc$Type** $tmp1642 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1643 = *$tmp1642;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
org$frostlang$frostc$Type* $tmp1644 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1643;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
goto block42;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
org$frostlang$frostc$Type* $tmp1645 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1537;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
goto block42;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
org$frostlang$frostc$Type* $tmp1646 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
goto block42;
block42:;
org$frostlang$frostc$Type* $tmp1647 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp1648 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1533, $tmp1647);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$IR$Value* $tmp1649 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local23) = $tmp1648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:331
org$frostlang$frostc$IR$Value* $tmp1650 = *(&local23);
frost$core$Bit $tmp1651 = (frost$core$Bit) {$tmp1650 != NULL};
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block71; else goto block72;
block72:;
frost$core$Int $tmp1653 = (frost$core$Int) {331u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1654, $tmp1653);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:332
org$frostlang$frostc$IR$Value* $tmp1655 = *(&local23);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1656 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1657 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp1656, $tmp1657);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1658 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1659 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1658, $tmp1659);
org$frostlang$frostc$IR$Value* $tmp1660 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1655, &$s1661, ((frost$collections$ListView*) $tmp1656), $tmp1658);
org$frostlang$frostc$Type* $tmp1662 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp1663 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1660, $tmp1662);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
org$frostlang$frostc$IR$Value* $tmp1664 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local24) = $tmp1663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:334
org$frostlang$frostc$IR$Value* $tmp1665 = *(&local24);
frost$core$Bit $tmp1666 = (frost$core$Bit) {$tmp1665 != NULL};
bool $tmp1667 = $tmp1666.value;
if ($tmp1667) goto block73; else goto block74;
block74:;
frost$core$Int $tmp1668 = (frost$core$Int) {334u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1669, $tmp1668);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:335
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:336
org$frostlang$frostc$IR$Value* $tmp1670 = *(&local14);
$fn1672 $tmp1671 = ($fn1672) $tmp1670->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1673 = $tmp1671($tmp1670);
org$frostlang$frostc$Type** $tmp1674 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1675 = *$tmp1674;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:336:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1676 = &((org$frostlang$frostc$Symbol*) $tmp1673)->name;
frost$core$String* $tmp1677 = *$tmp1676;
frost$core$String** $tmp1678 = &((org$frostlang$frostc$Symbol*) $tmp1675)->name;
frost$core$String* $tmp1679 = *$tmp1678;
frost$core$Bit $tmp1680 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1677, $tmp1679);
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block79; else goto block80;
block79:;
org$frostlang$frostc$Type$Kind* $tmp1682 = &$tmp1673->typeKind;
org$frostlang$frostc$Type$Kind $tmp1683 = *$tmp1682;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1684;
$tmp1684 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1684->value = $tmp1683;
org$frostlang$frostc$Type$Kind* $tmp1685 = &$tmp1675->typeKind;
org$frostlang$frostc$Type$Kind $tmp1686 = *$tmp1685;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1687;
$tmp1687 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1687->value = $tmp1686;
ITable* $tmp1688 = ((frost$core$Equatable*) $tmp1684)->$class->itable;
while ($tmp1688->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1688 = $tmp1688->next;
}
$fn1690 $tmp1689 = $tmp1688->methods[0];
frost$core$Bit $tmp1691 = $tmp1689(((frost$core$Equatable*) $tmp1684), ((frost$core$Equatable*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1687)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1684)));
*(&local26) = $tmp1691;
goto block81;
block80:;
*(&local26) = $tmp1680;
goto block81;
block81:;
frost$core$Bit $tmp1692 = *(&local26);
bool $tmp1693 = $tmp1692.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
if ($tmp1693) goto block75; else goto block77;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:337
org$frostlang$frostc$IR$Value* $tmp1694 = *(&local24);
org$frostlang$frostc$Type** $tmp1695 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1696 = *$tmp1695;
org$frostlang$frostc$IR$Value* $tmp1697 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1694, $tmp1696);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
org$frostlang$frostc$IR$Value* $tmp1698 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
*(&local25) = $tmp1697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:338
org$frostlang$frostc$IR$Value* $tmp1699 = *(&local25);
frost$core$Bit $tmp1700 = (frost$core$Bit) {$tmp1699 != NULL};
bool $tmp1701 = $tmp1700.value;
if ($tmp1701) goto block82; else goto block83;
block83:;
frost$core$Int $tmp1702 = (frost$core$Int) {338u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1703, $tmp1702);
abort(); // unreachable
block82:;
goto block76;
block77:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:341
org$frostlang$frostc$IR$Value* $tmp1704 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
org$frostlang$frostc$IR$Value* $tmp1705 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local25) = $tmp1704;
goto block76;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:345
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1706 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1707 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1708 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1709 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1710 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1711 = *(&local11);
frost$core$Int $tmp1712 = (frost$core$Int) {3u};
ITable* $tmp1713 = $tmp1711->$class->itable;
while ($tmp1713->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1713 = $tmp1713->next;
}
$fn1715 $tmp1714 = $tmp1713->methods[0];
frost$core$Object* $tmp1716 = $tmp1714($tmp1711, $tmp1712);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1709, $tmp1710, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1716));
$fn1718 $tmp1717 = ($fn1718) $tmp1708->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1719 = $tmp1717($tmp1708, $tmp1709);
org$frostlang$frostc$Type** $tmp1720 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1721 = *$tmp1720;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1706, $tmp1707, $tmp1719, $tmp1721);
org$frostlang$frostc$IR$Value* $tmp1722 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1706);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
org$frostlang$frostc$IR$Value* $tmp1723 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local27) = $tmp1722;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
frost$core$Frost$unref$frost$core$Object$Q($tmp1716);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:349
org$frostlang$frostc$IR* $tmp1724 = *(&local0);
$fn1726 $tmp1725 = ($fn1726) $tmp1724->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1727 = $tmp1725($tmp1724, &$s1728);
*(&local28) = $tmp1727;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:350
org$frostlang$frostc$IR* $tmp1729 = *(&local0);
$fn1731 $tmp1730 = ($fn1731) $tmp1729->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1732 = $tmp1730($tmp1729, &$s1733);
*(&local29) = $tmp1732;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:351
org$frostlang$frostc$IR* $tmp1734 = *(&local0);
$fn1736 $tmp1735 = ($fn1736) $tmp1734->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1737 = $tmp1735($tmp1734, &$s1738);
*(&local30) = $tmp1737;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:352
org$frostlang$frostc$IR* $tmp1739 = *(&local0);
$fn1741 $tmp1740 = ($fn1741) $tmp1739->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1742 = $tmp1740($tmp1739, &$s1743);
*(&local31) = $tmp1742;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:353
org$frostlang$frostc$IR* $tmp1744 = *(&local0);
$fn1746 $tmp1745 = ($fn1746) $tmp1744->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1747 = $tmp1745($tmp1744, &$s1748);
*(&local32) = $tmp1747;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:354
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:355
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp1749 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1750 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp1751 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1752 = *(&local29);
org$frostlang$frostc$IR$Block$ID $tmp1753 = *(&local30);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1750, $tmp1751, param2, $tmp1752, $tmp1753);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1749, param0, $tmp1750);
*(&local34) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
org$frostlang$frostc$Compiler$AutoContext* $tmp1754 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
*(&local34) = $tmp1749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:357
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp1755 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1755, param0);
*(&local35) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
org$frostlang$frostc$Compiler$AutoScope* $tmp1756 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
*(&local35) = $tmp1755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:358
org$frostlang$frostc$Type* $tmp1757 = *(&local9);
frost$core$String** $tmp1758 = &((org$frostlang$frostc$Symbol*) $tmp1757)->name;
frost$core$String* $tmp1759 = *$tmp1758;
frost$core$Bit $tmp1760 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1759, &$s1761);
bool $tmp1762 = $tmp1760.value;
if ($tmp1762) goto block84; else goto block87;
block87:;
org$frostlang$frostc$Type* $tmp1763 = *(&local9);
frost$core$String** $tmp1764 = &((org$frostlang$frostc$Symbol*) $tmp1763)->name;
frost$core$String* $tmp1765 = *$tmp1764;
frost$core$Bit $tmp1766 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1765, &$s1767);
bool $tmp1768 = $tmp1766.value;
if ($tmp1768) goto block84; else goto block86;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:360
org$frostlang$frostc$IR$Value* $tmp1769 = *(&local14);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1770 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1771 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1770, $tmp1771);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1772 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1773 = (frost$core$Int) {25u};
frost$core$UInt64 $tmp1774 = (frost$core$UInt64) {0u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp1772, $tmp1773, param1, $tmp1774);
frost$collections$Array$add$frost$collections$Array$T($tmp1770, ((frost$core$Object*) $tmp1772));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1775 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1776 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1777 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1778 = *$tmp1777;
frost$core$Bit $tmp1779 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1775, $tmp1776, $tmp1778, $tmp1779);
org$frostlang$frostc$IR$Value* $tmp1780 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1769, &$s1781, ((frost$collections$ListView*) $tmp1770), $tmp1775);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
org$frostlang$frostc$IR$Value* $tmp1782 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
*(&local36) = $tmp1780;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:362
org$frostlang$frostc$IR$Value* $tmp1783 = *(&local36);
frost$core$Bit $tmp1784 = (frost$core$Bit) {$tmp1783 != NULL};
bool $tmp1785 = $tmp1784.value;
if ($tmp1785) goto block88; else goto block89;
block89:;
frost$core$Int $tmp1786 = (frost$core$Int) {362u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1787, $tmp1786);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:363
org$frostlang$frostc$IR$Value* $tmp1788 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1789 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1788);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
org$frostlang$frostc$IR$Value* $tmp1790 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local33) = $tmp1789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
org$frostlang$frostc$IR$Value* $tmp1791 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block85;
block86:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:366
org$frostlang$frostc$Type* $tmp1792 = *(&local9);
frost$core$String** $tmp1793 = &((org$frostlang$frostc$Symbol*) $tmp1792)->name;
frost$core$String* $tmp1794 = *$tmp1793;
frost$core$Bit $tmp1795 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1794, &$s1796);
bool $tmp1797 = $tmp1795.value;
if ($tmp1797) goto block90; else goto block91;
block91:;
frost$core$Int $tmp1798 = (frost$core$Int) {366u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1799, $tmp1798);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:367
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1800 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1801 = (frost$core$Int) {0u};
frost$core$Bit $tmp1802 = (frost$core$Bit) {true};
org$frostlang$frostc$Type** $tmp1803 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1804 = *$tmp1803;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Bit$org$frostlang$frostc$Type($tmp1800, $tmp1801, $tmp1802, $tmp1804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
org$frostlang$frostc$IR$Value* $tmp1805 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
*(&local33) = $tmp1800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
goto block85;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:369
org$frostlang$frostc$IR* $tmp1806 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1807 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1808 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1809 = *(&local33);
org$frostlang$frostc$IR$Block$ID $tmp1810 = *(&local31);
org$frostlang$frostc$IR$Block$ID $tmp1811 = *(&local32);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1807, $tmp1808, param1, $tmp1809, $tmp1810, $tmp1811);
$fn1813 $tmp1812 = ($fn1813) $tmp1806->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1814 = $tmp1812($tmp1806, $tmp1807);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:370
org$frostlang$frostc$IR* $tmp1815 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1816 = *(&local31);
$fn1818 $tmp1817 = ($fn1818) $tmp1815->$class->vtable[4];
$tmp1817($tmp1815, $tmp1816);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:371
org$frostlang$frostc$IR* $tmp1819 = *(&local0);
$fn1821 $tmp1820 = ($fn1821) $tmp1819->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1822 = $tmp1820($tmp1819, &$s1823);
*(&local37) = $tmp1822;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:372
org$frostlang$frostc$IR* $tmp1824 = *(&local0);
$fn1826 $tmp1825 = ($fn1826) $tmp1824->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1827 = $tmp1825($tmp1824, &$s1828);
*(&local38) = $tmp1827;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:373
org$frostlang$frostc$IR* $tmp1829 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1830 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1831 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1832 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1833 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1834 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1830, $tmp1831, param1, $tmp1832, $tmp1833, $tmp1834);
$fn1836 $tmp1835 = ($fn1836) $tmp1829->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1837 = $tmp1835($tmp1829, $tmp1830);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:375
org$frostlang$frostc$IR* $tmp1838 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1839 = *(&local37);
$fn1841 $tmp1840 = ($fn1841) $tmp1838->$class->vtable[4];
$tmp1840($tmp1838, $tmp1839);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:376
org$frostlang$frostc$IR$Value* $tmp1842 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp1843 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:376:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1844 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1845 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1844, $tmp1845);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1846 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1847 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1848 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1846, $tmp1847, $tmp1848, $tmp1843);
frost$collections$Array$add$frost$collections$Array$T($tmp1844, ((frost$core$Object*) $tmp1846));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1844)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1849 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1850 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1851 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1852 = *$tmp1851;
frost$core$Bit $tmp1853 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1849, $tmp1850, $tmp1852, $tmp1853);
org$frostlang$frostc$IR$Value* $tmp1854 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1842, &$s1855, ((frost$collections$ListView*) $tmp1844), $tmp1849);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
org$frostlang$frostc$IR$Value* $tmp1856 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
*(&local39) = $tmp1854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1844)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:378
org$frostlang$frostc$IR$Value* $tmp1857 = *(&local39);
frost$core$Bit $tmp1858 = (frost$core$Bit) {$tmp1857 != NULL};
bool $tmp1859 = $tmp1858.value;
if ($tmp1859) goto block93; else goto block94;
block94:;
frost$core$Int $tmp1860 = (frost$core$Int) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1861, $tmp1860);
abort(); // unreachable
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:379
org$frostlang$frostc$IR$Value* $tmp1862 = *(&local39);
org$frostlang$frostc$IR$Value* $tmp1863 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1862);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
org$frostlang$frostc$IR$Value* $tmp1864 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local40) = $tmp1863;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:380
org$frostlang$frostc$IR* $tmp1865 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1866 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1867 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1868 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1869 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp1870 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1866, $tmp1867, param1, $tmp1868, $tmp1869, $tmp1870);
$fn1872 $tmp1871 = ($fn1872) $tmp1865->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1873 = $tmp1871($tmp1865, $tmp1866);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:382
org$frostlang$frostc$IR* $tmp1874 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1875 = *(&local38);
$fn1877 $tmp1876 = ($fn1877) $tmp1874->$class->vtable[4];
$tmp1876($tmp1874, $tmp1875);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:383
org$frostlang$frostc$IR$Value* $tmp1878 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp1879 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:383:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1880 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1881 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1880, $tmp1881);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1882 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1883 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1884 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1882, $tmp1883, $tmp1884, $tmp1879);
frost$collections$Array$add$frost$collections$Array$T($tmp1880, ((frost$core$Object*) $tmp1882));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1880)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1885 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1886 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1887 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1888 = *$tmp1887;
frost$core$Bit $tmp1889 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1885, $tmp1886, $tmp1888, $tmp1889);
org$frostlang$frostc$IR$Value* $tmp1890 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1878, &$s1891, ((frost$collections$ListView*) $tmp1880), $tmp1885);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
org$frostlang$frostc$IR$Value* $tmp1892 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local41) = $tmp1890;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1880)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:385
org$frostlang$frostc$IR$Value* $tmp1893 = *(&local41);
frost$core$Bit $tmp1894 = (frost$core$Bit) {$tmp1893 != NULL};
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block96; else goto block97;
block97:;
frost$core$Int $tmp1896 = (frost$core$Int) {385u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1897, $tmp1896);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:386
org$frostlang$frostc$IR$Value* $tmp1898 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1899 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1898);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
org$frostlang$frostc$IR$Value* $tmp1900 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local42) = $tmp1899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:387
org$frostlang$frostc$IR* $tmp1901 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1902 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1903 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1904 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1905 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp1906 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1902, $tmp1903, param1, $tmp1904, $tmp1905, $tmp1906);
$fn1908 $tmp1907 = ($fn1908) $tmp1901->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1909 = $tmp1907($tmp1901, $tmp1902);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:389
org$frostlang$frostc$IR* $tmp1910 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1911 = *(&local32);
$fn1913 $tmp1912 = ($fn1913) $tmp1910->$class->vtable[4];
$tmp1912($tmp1910, $tmp1911);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:390
org$frostlang$frostc$IR* $tmp1914 = *(&local0);
$fn1916 $tmp1915 = ($fn1916) $tmp1914->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1917 = $tmp1915($tmp1914, &$s1918);
*(&local43) = $tmp1917;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:391
org$frostlang$frostc$IR* $tmp1919 = *(&local0);
$fn1921 $tmp1920 = ($fn1921) $tmp1919->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1922 = $tmp1920($tmp1919, &$s1923);
*(&local44) = $tmp1922;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:392
org$frostlang$frostc$IR* $tmp1924 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1925 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1926 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1927 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1928 = *(&local43);
org$frostlang$frostc$IR$Block$ID $tmp1929 = *(&local44);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1925, $tmp1926, param1, $tmp1927, $tmp1928, $tmp1929);
$fn1931 $tmp1930 = ($fn1931) $tmp1924->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1932 = $tmp1930($tmp1924, $tmp1925);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:394
org$frostlang$frostc$IR* $tmp1933 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1934 = *(&local43);
$fn1936 $tmp1935 = ($fn1936) $tmp1933->$class->vtable[4];
$tmp1935($tmp1933, $tmp1934);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:395
org$frostlang$frostc$IR$Value* $tmp1937 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp1938 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:395:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1939 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1940 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1939, $tmp1940);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1941 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1942 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1943 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1941, $tmp1942, $tmp1943, $tmp1938);
frost$collections$Array$add$frost$collections$Array$T($tmp1939, ((frost$core$Object*) $tmp1941));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1939)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1944 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1945 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1946 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1947 = *$tmp1946;
frost$core$Bit $tmp1948 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1944, $tmp1945, $tmp1947, $tmp1948);
org$frostlang$frostc$IR$Value* $tmp1949 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1937, &$s1950, ((frost$collections$ListView*) $tmp1939), $tmp1944);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
org$frostlang$frostc$IR$Value* $tmp1951 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
*(&local45) = $tmp1949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1939)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:397
org$frostlang$frostc$IR$Value* $tmp1952 = *(&local45);
frost$core$Bit $tmp1953 = (frost$core$Bit) {$tmp1952 != NULL};
bool $tmp1954 = $tmp1953.value;
if ($tmp1954) goto block99; else goto block100;
block100:;
frost$core$Int $tmp1955 = (frost$core$Int) {397u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1956, $tmp1955);
abort(); // unreachable
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:398
org$frostlang$frostc$IR$Value* $tmp1957 = *(&local45);
org$frostlang$frostc$IR$Value* $tmp1958 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1957);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
org$frostlang$frostc$IR$Value* $tmp1959 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
*(&local46) = $tmp1958;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:399
org$frostlang$frostc$IR* $tmp1960 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1961 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1962 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1963 = *(&local46);
org$frostlang$frostc$IR$Block$ID $tmp1964 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp1965 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1961, $tmp1962, param1, $tmp1963, $tmp1964, $tmp1965);
$fn1967 $tmp1966 = ($fn1967) $tmp1960->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1968 = $tmp1966($tmp1960, $tmp1961);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:401
org$frostlang$frostc$IR* $tmp1969 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1970 = *(&local44);
$fn1972 $tmp1971 = ($fn1972) $tmp1969->$class->vtable[4];
$tmp1971($tmp1969, $tmp1970);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:402
org$frostlang$frostc$IR$Value* $tmp1973 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp1974 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:402:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1975 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1976 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1975, $tmp1976);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1977 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1978 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1979 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1977, $tmp1978, $tmp1979, $tmp1974);
frost$collections$Array$add$frost$collections$Array$T($tmp1975, ((frost$core$Object*) $tmp1977));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1975)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1980 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1981 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1982 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1983 = *$tmp1982;
frost$core$Bit $tmp1984 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1980, $tmp1981, $tmp1983, $tmp1984);
org$frostlang$frostc$IR$Value* $tmp1985 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1973, &$s1986, ((frost$collections$ListView*) $tmp1975), $tmp1980);
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
org$frostlang$frostc$IR$Value* $tmp1987 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
*(&local47) = $tmp1985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1975)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:404
org$frostlang$frostc$IR$Value* $tmp1988 = *(&local47);
frost$core$Bit $tmp1989 = (frost$core$Bit) {$tmp1988 != NULL};
bool $tmp1990 = $tmp1989.value;
if ($tmp1990) goto block102; else goto block103;
block103:;
frost$core$Int $tmp1991 = (frost$core$Int) {404u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1992, $tmp1991);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:405
org$frostlang$frostc$IR$Value* $tmp1993 = *(&local47);
org$frostlang$frostc$IR$Value* $tmp1994 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1993);
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
org$frostlang$frostc$IR$Value* $tmp1995 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local48) = $tmp1994;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:406
org$frostlang$frostc$IR* $tmp1996 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1997 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1998 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1999 = *(&local48);
org$frostlang$frostc$IR$Block$ID $tmp2000 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2001 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1997, $tmp1998, param1, $tmp1999, $tmp2000, $tmp2001);
$fn2003 $tmp2002 = ($fn2003) $tmp1996->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2004 = $tmp2002($tmp1996, $tmp1997);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:408
org$frostlang$frostc$IR* $tmp2005 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2006 = *(&local28);
$fn2008 $tmp2007 = ($fn2008) $tmp2005->$class->vtable[4];
$tmp2007($tmp2005, $tmp2006);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:409
ITable* $tmp2009 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2009->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2009 = $tmp2009->next;
}
$fn2011 $tmp2010 = $tmp2009->methods[0];
frost$collections$Iterator* $tmp2012 = $tmp2010(((frost$collections$Iterable*) param5));
goto block104;
block104:;
ITable* $tmp2013 = $tmp2012->$class->itable;
while ($tmp2013->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2013 = $tmp2013->next;
}
$fn2015 $tmp2014 = $tmp2013->methods[0];
frost$core$Bit $tmp2016 = $tmp2014($tmp2012);
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block106; else goto block105;
block105:;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2018 = $tmp2012->$class->itable;
while ($tmp2018->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2018 = $tmp2018->next;
}
$fn2020 $tmp2019 = $tmp2018->methods[1];
frost$core$Object* $tmp2021 = $tmp2019($tmp2012);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2021)));
org$frostlang$frostc$ASTNode* $tmp2022 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local49) = ((org$frostlang$frostc$ASTNode*) $tmp2021);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:410
org$frostlang$frostc$ASTNode* $tmp2023 = *(&local49);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp2023);
frost$core$Frost$unref$frost$core$Object$Q($tmp2021);
org$frostlang$frostc$ASTNode* $tmp2024 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block104;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
org$frostlang$frostc$IR$Value* $tmp2025 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2026 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2027 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2028 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2029 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2030 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2031 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2032 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2033 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
*(&local35) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:413
org$frostlang$frostc$IR* $tmp2034 = *(&local0);
$fn2036 $tmp2035 = ($fn2036) $tmp2034->$class->vtable[5];
frost$core$Bit $tmp2037 = $tmp2035($tmp2034);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:413:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2038 = $tmp2037.value;
bool $tmp2039 = !$tmp2038;
frost$core$Bit $tmp2040 = (frost$core$Bit) {$tmp2039};
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:414
org$frostlang$frostc$IR* $tmp2042 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2043 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2044 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp2045 = *(&local30);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2043, $tmp2044, param1, $tmp2045);
$fn2047 $tmp2046 = ($fn2047) $tmp2042->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2048 = $tmp2046($tmp2042, $tmp2043);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
goto block108;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:416
org$frostlang$frostc$IR* $tmp2049 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2050 = *(&local30);
$fn2052 $tmp2051 = ($fn2052) $tmp2049->$class->vtable[4];
$tmp2051($tmp2049, $tmp2050);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:417
org$frostlang$frostc$IR* $tmp2053 = *(&local0);
$fn2055 $tmp2054 = ($fn2055) $tmp2053->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2056 = $tmp2054($tmp2053, &$s2057);
*(&local50) = $tmp2056;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:419
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2058 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2059 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp2060 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2061 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2062 = (frost$core$Int) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2063 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2064 = (frost$core$Int) {2u};
frost$core$Int $tmp2065 = *(&local3);
org$frostlang$frostc$Type* $tmp2066 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp2063, $tmp2064, $tmp2065, $tmp2066);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2061, $tmp2062, param1, $tmp2063);
$fn2068 $tmp2067 = ($fn2068) $tmp2060->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2069 = $tmp2067($tmp2060, $tmp2061);
org$frostlang$frostc$Type* $tmp2070 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2058, $tmp2059, $tmp2069, $tmp2070);
org$frostlang$frostc$Type* $tmp2071 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2072 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2058, $tmp2071);
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
org$frostlang$frostc$IR$Value* $tmp2073 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
*(&local51) = $tmp2072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:421
org$frostlang$frostc$IR$Value* $tmp2074 = *(&local51);
frost$core$Bit $tmp2075 = (frost$core$Bit) {$tmp2074 != NULL};
bool $tmp2076 = $tmp2075.value;
if ($tmp2076) goto block110; else goto block111;
block111:;
frost$core$Int $tmp2077 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2078, $tmp2077);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:422
org$frostlang$frostc$IR* $tmp2079 = *(&local0);
$fn2081 $tmp2080 = ($fn2081) $tmp2079->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2082 = $tmp2080($tmp2079, &$s2083);
*(&local52) = $tmp2082;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:423
org$frostlang$frostc$IR* $tmp2084 = *(&local0);
$fn2086 $tmp2085 = ($fn2086) $tmp2084->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2087 = $tmp2085($tmp2084, &$s2088);
*(&local53) = $tmp2087;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:424
org$frostlang$frostc$IR* $tmp2089 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2090 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2091 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2092 = *(&local33);
org$frostlang$frostc$IR$Block$ID $tmp2093 = *(&local52);
org$frostlang$frostc$IR$Block$ID $tmp2094 = *(&local53);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2090, $tmp2091, param1, $tmp2092, $tmp2093, $tmp2094);
$fn2096 $tmp2095 = ($fn2096) $tmp2089->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2097 = $tmp2095($tmp2089, $tmp2090);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:428
org$frostlang$frostc$IR* $tmp2098 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2099 = *(&local52);
$fn2101 $tmp2100 = ($fn2101) $tmp2098->$class->vtable[4];
$tmp2100($tmp2098, $tmp2099);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:431
org$frostlang$frostc$IR$Value* $tmp2102 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp2103 = *(&local51);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:432:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2104 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2105 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2104, $tmp2105);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2106 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2107 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2108 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2106, $tmp2107, $tmp2108, $tmp2103);
frost$collections$Array$add$frost$collections$Array$T($tmp2104, ((frost$core$Object*) $tmp2106));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2104)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2109 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2110 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2109, $tmp2110);
org$frostlang$frostc$IR$Value* $tmp2111 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2102, &$s2112, ((frost$collections$ListView*) $tmp2104), $tmp2109);
org$frostlang$frostc$Type* $tmp2113 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:432:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2114 = &$tmp2113->typeKind;
org$frostlang$frostc$Type$Kind $tmp2115 = *$tmp2114;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2116;
$tmp2116 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2116->value = $tmp2115;
frost$core$Int $tmp2117 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp2118 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp2117);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2119;
$tmp2119 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2119->value = $tmp2118;
ITable* $tmp2120 = ((frost$core$Equatable*) $tmp2116)->$class->itable;
while ($tmp2120->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2120 = $tmp2120->next;
}
$fn2122 $tmp2121 = $tmp2120->methods[1];
frost$core$Bit $tmp2123 = $tmp2121(((frost$core$Equatable*) $tmp2116), ((frost$core$Equatable*) $tmp2119));
bool $tmp2124 = $tmp2123.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2119)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2116)));
if ($tmp2124) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
*(&local55) = $tmp2113;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
goto block114;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp2125 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2113);
frost$core$Int $tmp2126 = (frost$core$Int) {0u};
frost$core$Object* $tmp2127 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2125, $tmp2126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2127)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local55) = ((org$frostlang$frostc$Type*) $tmp2127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2127)));
goto block114;
block114:;
org$frostlang$frostc$Type* $tmp2128 = *(&local55);
org$frostlang$frostc$Type** $tmp2129 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2130 = *$tmp2129;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2131 = &((org$frostlang$frostc$Symbol*) $tmp2128)->name;
frost$core$String* $tmp2132 = *$tmp2131;
frost$core$String** $tmp2133 = &((org$frostlang$frostc$Symbol*) $tmp2130)->name;
frost$core$String* $tmp2134 = *$tmp2133;
frost$core$Bit $tmp2135 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2132, $tmp2134);
bool $tmp2136 = $tmp2135.value;
if ($tmp2136) goto block121; else goto block122;
block121:;
org$frostlang$frostc$Type$Kind* $tmp2137 = &$tmp2128->typeKind;
org$frostlang$frostc$Type$Kind $tmp2138 = *$tmp2137;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2139;
$tmp2139 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2139->value = $tmp2138;
org$frostlang$frostc$Type$Kind* $tmp2140 = &$tmp2130->typeKind;
org$frostlang$frostc$Type$Kind $tmp2141 = *$tmp2140;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2142;
$tmp2142 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2142->value = $tmp2141;
ITable* $tmp2143 = ((frost$core$Equatable*) $tmp2139)->$class->itable;
while ($tmp2143->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2143 = $tmp2143->next;
}
$fn2145 $tmp2144 = $tmp2143->methods[0];
frost$core$Bit $tmp2146 = $tmp2144(((frost$core$Equatable*) $tmp2139), ((frost$core$Equatable*) $tmp2142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2142)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2139)));
*(&local56) = $tmp2146;
goto block123;
block122:;
*(&local56) = $tmp2135;
goto block123;
block123:;
frost$core$Bit $tmp2147 = *(&local56);
bool $tmp2148 = $tmp2147.value;
if ($tmp2148) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp2149 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp2150 = *$tmp2149;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
org$frostlang$frostc$Type* $tmp2151 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2150;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
goto block113;
block119:;
org$frostlang$frostc$Type** $tmp2152 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp2153 = *$tmp2152;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2154 = &((org$frostlang$frostc$Symbol*) $tmp2128)->name;
frost$core$String* $tmp2155 = *$tmp2154;
frost$core$String** $tmp2156 = &((org$frostlang$frostc$Symbol*) $tmp2153)->name;
frost$core$String* $tmp2157 = *$tmp2156;
frost$core$Bit $tmp2158 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2155, $tmp2157);
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block127; else goto block128;
block127:;
org$frostlang$frostc$Type$Kind* $tmp2160 = &$tmp2128->typeKind;
org$frostlang$frostc$Type$Kind $tmp2161 = *$tmp2160;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2162;
$tmp2162 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2162->value = $tmp2161;
org$frostlang$frostc$Type$Kind* $tmp2163 = &$tmp2153->typeKind;
org$frostlang$frostc$Type$Kind $tmp2164 = *$tmp2163;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2165;
$tmp2165 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2165->value = $tmp2164;
ITable* $tmp2166 = ((frost$core$Equatable*) $tmp2162)->$class->itable;
while ($tmp2166->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2166 = $tmp2166->next;
}
$fn2168 $tmp2167 = $tmp2166->methods[0];
frost$core$Bit $tmp2169 = $tmp2167(((frost$core$Equatable*) $tmp2162), ((frost$core$Equatable*) $tmp2165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2165)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2162)));
*(&local57) = $tmp2169;
goto block129;
block128:;
*(&local57) = $tmp2158;
goto block129;
block129:;
frost$core$Bit $tmp2170 = *(&local57);
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp2172 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp2173 = *$tmp2172;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
org$frostlang$frostc$Type* $tmp2174 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2173;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
goto block113;
block125:;
org$frostlang$frostc$Type** $tmp2175 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp2176 = *$tmp2175;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2177 = &((org$frostlang$frostc$Symbol*) $tmp2128)->name;
frost$core$String* $tmp2178 = *$tmp2177;
frost$core$String** $tmp2179 = &((org$frostlang$frostc$Symbol*) $tmp2176)->name;
frost$core$String* $tmp2180 = *$tmp2179;
frost$core$Bit $tmp2181 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2178, $tmp2180);
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block133; else goto block134;
block133:;
org$frostlang$frostc$Type$Kind* $tmp2183 = &$tmp2128->typeKind;
org$frostlang$frostc$Type$Kind $tmp2184 = *$tmp2183;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2185;
$tmp2185 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2185->value = $tmp2184;
org$frostlang$frostc$Type$Kind* $tmp2186 = &$tmp2176->typeKind;
org$frostlang$frostc$Type$Kind $tmp2187 = *$tmp2186;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2188;
$tmp2188 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2188->value = $tmp2187;
ITable* $tmp2189 = ((frost$core$Equatable*) $tmp2185)->$class->itable;
while ($tmp2189->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2189 = $tmp2189->next;
}
$fn2191 $tmp2190 = $tmp2189->methods[0];
frost$core$Bit $tmp2192 = $tmp2190(((frost$core$Equatable*) $tmp2185), ((frost$core$Equatable*) $tmp2188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2188)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2185)));
*(&local58) = $tmp2192;
goto block135;
block134:;
*(&local58) = $tmp2181;
goto block135;
block135:;
frost$core$Bit $tmp2193 = *(&local58);
bool $tmp2194 = $tmp2193.value;
if ($tmp2194) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp2195 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp2196 = *$tmp2195;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
org$frostlang$frostc$Type* $tmp2197 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2196;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
goto block113;
block131:;
org$frostlang$frostc$Type** $tmp2198 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp2199 = *$tmp2198;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2200 = &((org$frostlang$frostc$Symbol*) $tmp2128)->name;
frost$core$String* $tmp2201 = *$tmp2200;
frost$core$String** $tmp2202 = &((org$frostlang$frostc$Symbol*) $tmp2199)->name;
frost$core$String* $tmp2203 = *$tmp2202;
frost$core$Bit $tmp2204 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2201, $tmp2203);
bool $tmp2205 = $tmp2204.value;
if ($tmp2205) goto block139; else goto block140;
block139:;
org$frostlang$frostc$Type$Kind* $tmp2206 = &$tmp2128->typeKind;
org$frostlang$frostc$Type$Kind $tmp2207 = *$tmp2206;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2208;
$tmp2208 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2208->value = $tmp2207;
org$frostlang$frostc$Type$Kind* $tmp2209 = &$tmp2199->typeKind;
org$frostlang$frostc$Type$Kind $tmp2210 = *$tmp2209;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2211;
$tmp2211 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2211->value = $tmp2210;
ITable* $tmp2212 = ((frost$core$Equatable*) $tmp2208)->$class->itable;
while ($tmp2212->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2212 = $tmp2212->next;
}
$fn2214 $tmp2213 = $tmp2212->methods[0];
frost$core$Bit $tmp2215 = $tmp2213(((frost$core$Equatable*) $tmp2208), ((frost$core$Equatable*) $tmp2211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2211)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2208)));
*(&local59) = $tmp2215;
goto block141;
block140:;
*(&local59) = $tmp2204;
goto block141;
block141:;
frost$core$Bit $tmp2216 = *(&local59);
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp2218 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp2219 = *$tmp2218;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
org$frostlang$frostc$Type* $tmp2220 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2219;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
goto block113;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
org$frostlang$frostc$Type* $tmp2221 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2113;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
goto block113;
block117:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
org$frostlang$frostc$Type* $tmp2222 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
goto block113;
block113:;
org$frostlang$frostc$Type* $tmp2223 = *(&local54);
org$frostlang$frostc$IR$Value* $tmp2224 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2111, $tmp2223);
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
org$frostlang$frostc$IR$Value* $tmp2225 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
*(&local60) = $tmp2224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:433
org$frostlang$frostc$IR$Value* $tmp2226 = *(&local60);
frost$core$Bit $tmp2227 = (frost$core$Bit) {$tmp2226 != NULL};
bool $tmp2228 = $tmp2227.value;
if ($tmp2228) goto block142; else goto block143;
block143:;
frost$core$Int $tmp2229 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2230, $tmp2229);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:436
org$frostlang$frostc$IR* $tmp2231 = *(&local0);
$fn2233 $tmp2232 = ($fn2233) $tmp2231->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2234 = $tmp2232($tmp2231, &$s2235);
*(&local61) = $tmp2234;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:437
org$frostlang$frostc$IR* $tmp2236 = *(&local0);
$fn2238 $tmp2237 = ($fn2238) $tmp2236->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2239 = $tmp2237($tmp2236, &$s2240);
*(&local62) = $tmp2239;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:438
org$frostlang$frostc$IR* $tmp2241 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2242 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2243 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2244 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2245 = *(&local61);
org$frostlang$frostc$IR$Block$ID $tmp2246 = *(&local62);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2242, $tmp2243, param1, $tmp2244, $tmp2245, $tmp2246);
$fn2248 $tmp2247 = ($fn2248) $tmp2241->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2249 = $tmp2247($tmp2241, $tmp2242);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:442
org$frostlang$frostc$IR* $tmp2250 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2251 = *(&local61);
$fn2253 $tmp2252 = ($fn2253) $tmp2250->$class->vtable[4];
$tmp2252($tmp2250, $tmp2251);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:443
org$frostlang$frostc$IR$Value* $tmp2254 = *(&local60);
org$frostlang$frostc$IR$Value* $tmp2255 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:443:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2256 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2257 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2256, $tmp2257);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2258 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2259 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2260 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2258, $tmp2259, $tmp2260, $tmp2255);
frost$collections$Array$add$frost$collections$Array$T($tmp2256, ((frost$core$Object*) $tmp2258));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2256)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2261 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2262 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2263 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2264 = *$tmp2263;
frost$core$Bit $tmp2265 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2261, $tmp2262, $tmp2264, $tmp2265);
org$frostlang$frostc$IR$Value* $tmp2266 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2254, &$s2267, ((frost$collections$ListView*) $tmp2256), $tmp2261);
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
org$frostlang$frostc$IR$Value* $tmp2268 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local63) = $tmp2266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2256)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:445
org$frostlang$frostc$IR$Value* $tmp2269 = *(&local63);
frost$core$Bit $tmp2270 = (frost$core$Bit) {$tmp2269 != NULL};
bool $tmp2271 = $tmp2270.value;
if ($tmp2271) goto block145; else goto block146;
block146:;
frost$core$Int $tmp2272 = (frost$core$Int) {445u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2273, $tmp2272);
abort(); // unreachable
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:446
org$frostlang$frostc$IR$Value* $tmp2274 = *(&local63);
org$frostlang$frostc$IR$Value* $tmp2275 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2274);
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
org$frostlang$frostc$IR$Value* $tmp2276 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
*(&local64) = $tmp2275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:447
org$frostlang$frostc$IR* $tmp2277 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2278 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2279 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2280 = *(&local64);
org$frostlang$frostc$IR$Block$ID $tmp2281 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2282 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2278, $tmp2279, param1, $tmp2280, $tmp2281, $tmp2282);
$fn2284 $tmp2283 = ($fn2284) $tmp2277->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2285 = $tmp2283($tmp2277, $tmp2278);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:450
org$frostlang$frostc$IR* $tmp2286 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2287 = *(&local62);
$fn2289 $tmp2288 = ($fn2289) $tmp2286->$class->vtable[4];
$tmp2288($tmp2286, $tmp2287);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:451
org$frostlang$frostc$IR$Value* $tmp2290 = *(&local60);
org$frostlang$frostc$IR$Value* $tmp2291 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:451:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2292 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2293 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2292, $tmp2293);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2294 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2295 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2296 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2294, $tmp2295, $tmp2296, $tmp2291);
frost$collections$Array$add$frost$collections$Array$T($tmp2292, ((frost$core$Object*) $tmp2294));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2292)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2297 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2298 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2299 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2300 = *$tmp2299;
frost$core$Bit $tmp2301 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2297, $tmp2298, $tmp2300, $tmp2301);
org$frostlang$frostc$IR$Value* $tmp2302 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2290, &$s2303, ((frost$collections$ListView*) $tmp2292), $tmp2297);
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
org$frostlang$frostc$IR$Value* $tmp2304 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
*(&local65) = $tmp2302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2292)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:453
org$frostlang$frostc$IR$Value* $tmp2305 = *(&local65);
frost$core$Bit $tmp2306 = (frost$core$Bit) {$tmp2305 != NULL};
bool $tmp2307 = $tmp2306.value;
if ($tmp2307) goto block148; else goto block149;
block149:;
frost$core$Int $tmp2308 = (frost$core$Int) {453u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2309, $tmp2308);
abort(); // unreachable
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:454
org$frostlang$frostc$IR$Value* $tmp2310 = *(&local65);
org$frostlang$frostc$IR$Value* $tmp2311 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2310);
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
org$frostlang$frostc$IR$Value* $tmp2312 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
*(&local66) = $tmp2311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:455
org$frostlang$frostc$IR* $tmp2313 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2314 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2315 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2316 = *(&local66);
org$frostlang$frostc$IR$Block$ID $tmp2317 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2318 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2314, $tmp2315, param1, $tmp2316, $tmp2317, $tmp2318);
$fn2320 $tmp2319 = ($fn2320) $tmp2313->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2321 = $tmp2319($tmp2313, $tmp2314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:459
org$frostlang$frostc$IR* $tmp2322 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2323 = *(&local53);
$fn2325 $tmp2324 = ($fn2325) $tmp2322->$class->vtable[4];
$tmp2324($tmp2322, $tmp2323);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:460
org$frostlang$frostc$IR$Value* $tmp2326 = *(&local51);
org$frostlang$frostc$IR$Value* $tmp2327 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:460:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2328 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2329 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2328, $tmp2329);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2330 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2331 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2332 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2330, $tmp2331, $tmp2332, $tmp2327);
frost$collections$Array$add$frost$collections$Array$T($tmp2328, ((frost$core$Object*) $tmp2330));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2328)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2333 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2334 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2333, $tmp2334);
org$frostlang$frostc$IR$Value* $tmp2335 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2326, &$s2336, ((frost$collections$ListView*) $tmp2328), $tmp2333);
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
org$frostlang$frostc$IR$Value* $tmp2337 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
*(&local67) = $tmp2335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2328)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:461
org$frostlang$frostc$IR$Value* $tmp2338 = *(&local67);
frost$core$Bit $tmp2339 = (frost$core$Bit) {$tmp2338 != NULL};
bool $tmp2340 = $tmp2339.value;
if ($tmp2340) goto block151; else goto block152;
block152:;
frost$core$Int $tmp2341 = (frost$core$Int) {461u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2342, $tmp2341);
abort(); // unreachable
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:462
org$frostlang$frostc$IR$Value* $tmp2343 = *(&local67);
org$frostlang$frostc$Type* $tmp2344 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:462:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2345 = &$tmp2344->typeKind;
org$frostlang$frostc$Type$Kind $tmp2346 = *$tmp2345;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2347;
$tmp2347 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2347->value = $tmp2346;
frost$core$Int $tmp2348 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp2349 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp2348);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2350;
$tmp2350 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2350->value = $tmp2349;
ITable* $tmp2351 = ((frost$core$Equatable*) $tmp2347)->$class->itable;
while ($tmp2351->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2351 = $tmp2351->next;
}
$fn2353 $tmp2352 = $tmp2351->methods[1];
frost$core$Bit $tmp2354 = $tmp2352(((frost$core$Equatable*) $tmp2347), ((frost$core$Equatable*) $tmp2350));
bool $tmp2355 = $tmp2354.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2350)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2347)));
if ($tmp2355) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
*(&local69) = $tmp2344;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
goto block154;
block156:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp2356 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2344);
frost$core$Int $tmp2357 = (frost$core$Int) {0u};
frost$core$Object* $tmp2358 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2356, $tmp2357);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2358)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2358);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2356));
*(&local69) = ((org$frostlang$frostc$Type*) $tmp2358);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2358)));
goto block154;
block154:;
org$frostlang$frostc$Type* $tmp2359 = *(&local69);
org$frostlang$frostc$Type** $tmp2360 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2361 = *$tmp2360;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2362 = &((org$frostlang$frostc$Symbol*) $tmp2359)->name;
frost$core$String* $tmp2363 = *$tmp2362;
frost$core$String** $tmp2364 = &((org$frostlang$frostc$Symbol*) $tmp2361)->name;
frost$core$String* $tmp2365 = *$tmp2364;
frost$core$Bit $tmp2366 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2363, $tmp2365);
bool $tmp2367 = $tmp2366.value;
if ($tmp2367) goto block161; else goto block162;
block161:;
org$frostlang$frostc$Type$Kind* $tmp2368 = &$tmp2359->typeKind;
org$frostlang$frostc$Type$Kind $tmp2369 = *$tmp2368;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2370;
$tmp2370 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2370->value = $tmp2369;
org$frostlang$frostc$Type$Kind* $tmp2371 = &$tmp2361->typeKind;
org$frostlang$frostc$Type$Kind $tmp2372 = *$tmp2371;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2373;
$tmp2373 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2373->value = $tmp2372;
ITable* $tmp2374 = ((frost$core$Equatable*) $tmp2370)->$class->itable;
while ($tmp2374->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2374 = $tmp2374->next;
}
$fn2376 $tmp2375 = $tmp2374->methods[0];
frost$core$Bit $tmp2377 = $tmp2375(((frost$core$Equatable*) $tmp2370), ((frost$core$Equatable*) $tmp2373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2373)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2370)));
*(&local70) = $tmp2377;
goto block163;
block162:;
*(&local70) = $tmp2366;
goto block163;
block163:;
frost$core$Bit $tmp2378 = *(&local70);
bool $tmp2379 = $tmp2378.value;
if ($tmp2379) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp2380 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp2381 = *$tmp2380;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$Type* $tmp2382 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2381;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
goto block153;
block159:;
org$frostlang$frostc$Type** $tmp2383 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp2384 = *$tmp2383;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2385 = &((org$frostlang$frostc$Symbol*) $tmp2359)->name;
frost$core$String* $tmp2386 = *$tmp2385;
frost$core$String** $tmp2387 = &((org$frostlang$frostc$Symbol*) $tmp2384)->name;
frost$core$String* $tmp2388 = *$tmp2387;
frost$core$Bit $tmp2389 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2386, $tmp2388);
bool $tmp2390 = $tmp2389.value;
if ($tmp2390) goto block167; else goto block168;
block167:;
org$frostlang$frostc$Type$Kind* $tmp2391 = &$tmp2359->typeKind;
org$frostlang$frostc$Type$Kind $tmp2392 = *$tmp2391;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2393;
$tmp2393 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2393->value = $tmp2392;
org$frostlang$frostc$Type$Kind* $tmp2394 = &$tmp2384->typeKind;
org$frostlang$frostc$Type$Kind $tmp2395 = *$tmp2394;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2396;
$tmp2396 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2396->value = $tmp2395;
ITable* $tmp2397 = ((frost$core$Equatable*) $tmp2393)->$class->itable;
while ($tmp2397->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2397 = $tmp2397->next;
}
$fn2399 $tmp2398 = $tmp2397->methods[0];
frost$core$Bit $tmp2400 = $tmp2398(((frost$core$Equatable*) $tmp2393), ((frost$core$Equatable*) $tmp2396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2396)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2393)));
*(&local71) = $tmp2400;
goto block169;
block168:;
*(&local71) = $tmp2389;
goto block169;
block169:;
frost$core$Bit $tmp2401 = *(&local71);
bool $tmp2402 = $tmp2401.value;
if ($tmp2402) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp2403 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp2404 = *$tmp2403;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$Type* $tmp2405 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2404;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
goto block153;
block165:;
org$frostlang$frostc$Type** $tmp2406 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp2407 = *$tmp2406;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2408 = &((org$frostlang$frostc$Symbol*) $tmp2359)->name;
frost$core$String* $tmp2409 = *$tmp2408;
frost$core$String** $tmp2410 = &((org$frostlang$frostc$Symbol*) $tmp2407)->name;
frost$core$String* $tmp2411 = *$tmp2410;
frost$core$Bit $tmp2412 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2409, $tmp2411);
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block173; else goto block174;
block173:;
org$frostlang$frostc$Type$Kind* $tmp2414 = &$tmp2359->typeKind;
org$frostlang$frostc$Type$Kind $tmp2415 = *$tmp2414;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2416;
$tmp2416 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2416->value = $tmp2415;
org$frostlang$frostc$Type$Kind* $tmp2417 = &$tmp2407->typeKind;
org$frostlang$frostc$Type$Kind $tmp2418 = *$tmp2417;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2419;
$tmp2419 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2419->value = $tmp2418;
ITable* $tmp2420 = ((frost$core$Equatable*) $tmp2416)->$class->itable;
while ($tmp2420->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2420 = $tmp2420->next;
}
$fn2422 $tmp2421 = $tmp2420->methods[0];
frost$core$Bit $tmp2423 = $tmp2421(((frost$core$Equatable*) $tmp2416), ((frost$core$Equatable*) $tmp2419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2419)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2416)));
*(&local72) = $tmp2423;
goto block175;
block174:;
*(&local72) = $tmp2412;
goto block175;
block175:;
frost$core$Bit $tmp2424 = *(&local72);
bool $tmp2425 = $tmp2424.value;
if ($tmp2425) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp2426 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp2427 = *$tmp2426;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$Type* $tmp2428 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2427;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
goto block153;
block171:;
org$frostlang$frostc$Type** $tmp2429 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp2430 = *$tmp2429;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2431 = &((org$frostlang$frostc$Symbol*) $tmp2359)->name;
frost$core$String* $tmp2432 = *$tmp2431;
frost$core$String** $tmp2433 = &((org$frostlang$frostc$Symbol*) $tmp2430)->name;
frost$core$String* $tmp2434 = *$tmp2433;
frost$core$Bit $tmp2435 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2432, $tmp2434);
bool $tmp2436 = $tmp2435.value;
if ($tmp2436) goto block179; else goto block180;
block179:;
org$frostlang$frostc$Type$Kind* $tmp2437 = &$tmp2359->typeKind;
org$frostlang$frostc$Type$Kind $tmp2438 = *$tmp2437;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2439;
$tmp2439 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2439->value = $tmp2438;
org$frostlang$frostc$Type$Kind* $tmp2440 = &$tmp2430->typeKind;
org$frostlang$frostc$Type$Kind $tmp2441 = *$tmp2440;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2442;
$tmp2442 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2442->value = $tmp2441;
ITable* $tmp2443 = ((frost$core$Equatable*) $tmp2439)->$class->itable;
while ($tmp2443->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2443 = $tmp2443->next;
}
$fn2445 $tmp2444 = $tmp2443->methods[0];
frost$core$Bit $tmp2446 = $tmp2444(((frost$core$Equatable*) $tmp2439), ((frost$core$Equatable*) $tmp2442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2442)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2439)));
*(&local73) = $tmp2446;
goto block181;
block180:;
*(&local73) = $tmp2435;
goto block181;
block181:;
frost$core$Bit $tmp2447 = *(&local73);
bool $tmp2448 = $tmp2447.value;
if ($tmp2448) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp2449 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp2450 = *$tmp2449;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$Type* $tmp2451 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2450;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
goto block153;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$Type* $tmp2452 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2344;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
goto block153;
block157:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$Type* $tmp2453 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
goto block153;
block153:;
org$frostlang$frostc$Type* $tmp2454 = *(&local68);
org$frostlang$frostc$IR$Value* $tmp2455 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2343, $tmp2454);
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
org$frostlang$frostc$IR$Value* $tmp2456 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
*(&local74) = $tmp2455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:463
org$frostlang$frostc$IR$Value* $tmp2457 = *(&local74);
frost$core$Bit $tmp2458 = (frost$core$Bit) {$tmp2457 != NULL};
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block182; else goto block183;
block183:;
frost$core$Int $tmp2460 = (frost$core$Int) {463u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2461, $tmp2460);
abort(); // unreachable
block182:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:466
org$frostlang$frostc$IR* $tmp2462 = *(&local0);
$fn2464 $tmp2463 = ($fn2464) $tmp2462->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2465 = $tmp2463($tmp2462, &$s2466);
*(&local75) = $tmp2465;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:467
org$frostlang$frostc$IR* $tmp2467 = *(&local0);
$fn2469 $tmp2468 = ($fn2469) $tmp2467->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2470 = $tmp2468($tmp2467, &$s2471);
*(&local76) = $tmp2470;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:468
org$frostlang$frostc$IR* $tmp2472 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2473 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2474 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2475 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2476 = *(&local75);
org$frostlang$frostc$IR$Block$ID $tmp2477 = *(&local76);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2473, $tmp2474, param1, $tmp2475, $tmp2476, $tmp2477);
$fn2479 $tmp2478 = ($fn2479) $tmp2472->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2480 = $tmp2478($tmp2472, $tmp2473);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:472
org$frostlang$frostc$IR* $tmp2481 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2482 = *(&local75);
$fn2484 $tmp2483 = ($fn2484) $tmp2481->$class->vtable[4];
$tmp2483($tmp2481, $tmp2482);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:473
org$frostlang$frostc$IR$Value* $tmp2485 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp2486 = *(&local25);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:473:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2487 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2488 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2487, $tmp2488);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2489 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2490 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2491 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2489, $tmp2490, $tmp2491, $tmp2486);
frost$collections$Array$add$frost$collections$Array$T($tmp2487, ((frost$core$Object*) $tmp2489));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2487)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2492 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2493 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2494 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2495 = *$tmp2494;
frost$core$Bit $tmp2496 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2492, $tmp2493, $tmp2495, $tmp2496);
org$frostlang$frostc$IR$Value* $tmp2497 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2485, &$s2498, ((frost$collections$ListView*) $tmp2487), $tmp2492);
*(&local77) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
org$frostlang$frostc$IR$Value* $tmp2499 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
*(&local77) = $tmp2497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2487)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:475
org$frostlang$frostc$IR$Value* $tmp2500 = *(&local77);
frost$core$Bit $tmp2501 = (frost$core$Bit) {$tmp2500 != NULL};
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block185; else goto block186;
block186:;
frost$core$Int $tmp2503 = (frost$core$Int) {475u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2504, $tmp2503);
abort(); // unreachable
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:476
org$frostlang$frostc$IR$Value* $tmp2505 = *(&local77);
org$frostlang$frostc$IR$Value* $tmp2506 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2505);
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
org$frostlang$frostc$IR$Value* $tmp2507 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local78) = $tmp2506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:477
org$frostlang$frostc$IR* $tmp2508 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2509 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2510 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2511 = *(&local78);
org$frostlang$frostc$IR$Block$ID $tmp2512 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2513 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2509, $tmp2510, param1, $tmp2511, $tmp2512, $tmp2513);
$fn2515 $tmp2514 = ($fn2515) $tmp2508->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2516 = $tmp2514($tmp2508, $tmp2509);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:481
org$frostlang$frostc$IR* $tmp2517 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2518 = *(&local76);
$fn2520 $tmp2519 = ($fn2520) $tmp2517->$class->vtable[4];
$tmp2519($tmp2517, $tmp2518);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:482
org$frostlang$frostc$IR$Value* $tmp2521 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp2522 = *(&local25);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:482:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2523 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2524 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2523, $tmp2524);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2525 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2526 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2527 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2525, $tmp2526, $tmp2527, $tmp2522);
frost$collections$Array$add$frost$collections$Array$T($tmp2523, ((frost$core$Object*) $tmp2525));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2523)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2528 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2529 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2530 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2531 = *$tmp2530;
frost$core$Bit $tmp2532 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2528, $tmp2529, $tmp2531, $tmp2532);
org$frostlang$frostc$IR$Value* $tmp2533 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2521, &$s2534, ((frost$collections$ListView*) $tmp2523), $tmp2528);
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
org$frostlang$frostc$IR$Value* $tmp2535 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local79) = $tmp2533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2523)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:484
org$frostlang$frostc$IR$Value* $tmp2536 = *(&local79);
frost$core$Bit $tmp2537 = (frost$core$Bit) {$tmp2536 != NULL};
bool $tmp2538 = $tmp2537.value;
if ($tmp2538) goto block188; else goto block189;
block189:;
frost$core$Int $tmp2539 = (frost$core$Int) {484u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2540, $tmp2539);
abort(); // unreachable
block188:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:485
org$frostlang$frostc$IR$Value* $tmp2541 = *(&local79);
org$frostlang$frostc$IR$Value* $tmp2542 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2541);
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
org$frostlang$frostc$IR$Value* $tmp2543 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
*(&local80) = $tmp2542;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:486
org$frostlang$frostc$IR* $tmp2544 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2545 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2546 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2547 = *(&local80);
org$frostlang$frostc$IR$Block$ID $tmp2548 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2549 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2545, $tmp2546, param1, $tmp2547, $tmp2548, $tmp2549);
$fn2551 $tmp2550 = ($fn2551) $tmp2544->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2552 = $tmp2550($tmp2544, $tmp2545);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:489
org$frostlang$frostc$IR* $tmp2553 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2554 = *(&local50);
$fn2556 $tmp2555 = ($fn2556) $tmp2553->$class->vtable[4];
$tmp2555($tmp2553, $tmp2554);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:490
org$frostlang$frostc$IR$Value* $tmp2557 = *(&local51);
org$frostlang$frostc$IR$Value* $tmp2558 = *(&local14);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:490:89
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2559 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2560 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2559, $tmp2560);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2561 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2562 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2563 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2561, $tmp2562, $tmp2563, $tmp2558);
frost$collections$Array$add$frost$collections$Array$T($tmp2559, ((frost$core$Object*) $tmp2561));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2559)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2564 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2565 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2564, $tmp2565);
org$frostlang$frostc$IR$Value* $tmp2566 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2557, &$s2567, ((frost$collections$ListView*) $tmp2559), $tmp2564);
org$frostlang$frostc$Type* $tmp2568 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2569 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2566, $tmp2568);
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
org$frostlang$frostc$IR$Value* $tmp2570 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
*(&local81) = $tmp2569;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2559)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:492
org$frostlang$frostc$IR$Value* $tmp2571 = *(&local81);
frost$core$Bit $tmp2572 = (frost$core$Bit) {$tmp2571 != NULL};
bool $tmp2573 = $tmp2572.value;
if ($tmp2573) goto block191; else goto block192;
block192:;
frost$core$Int $tmp2574 = (frost$core$Int) {492u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2575, $tmp2574);
abort(); // unreachable
block191:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:493
org$frostlang$frostc$IR* $tmp2576 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2577 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2578 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp2579 = *(&local81);
org$frostlang$frostc$Type* $tmp2580 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp2581 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2579, $tmp2580);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2582 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2583 = (frost$core$Int) {2u};
frost$core$Int $tmp2584 = *(&local3);
org$frostlang$frostc$Type* $tmp2585 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp2582, $tmp2583, $tmp2584, $tmp2585);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2577, $tmp2578, param1, $tmp2581, $tmp2582);
$fn2587 $tmp2586 = ($fn2587) $tmp2576->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2588 = $tmp2586($tmp2576, $tmp2577);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:495
org$frostlang$frostc$IR* $tmp2589 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2590 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2591 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp2592 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2590, $tmp2591, param1, $tmp2592);
$fn2594 $tmp2593 = ($fn2594) $tmp2589->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2595 = $tmp2593($tmp2589, $tmp2590);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:497
org$frostlang$frostc$IR* $tmp2596 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2597 = *(&local29);
$fn2599 $tmp2598 = ($fn2599) $tmp2596->$class->vtable[4];
$tmp2598($tmp2596, $tmp2597);
org$frostlang$frostc$IR$Value* $tmp2600 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2601 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2601));
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2602 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2603 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2604 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
*(&local77) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2605 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2606 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
*(&local68) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2607 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2608 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2609 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2610 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2611 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2612 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2613 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
*(&local54) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2104)));
org$frostlang$frostc$IR$Value* $tmp2614 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2615 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
*(&local34) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp2616 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2617 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2618 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2619 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2620 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2621 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
org$frostlang$frostc$IR$Value* $tmp2622 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2623 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2624 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2625 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp2626 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2627 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2628 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2629 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2630 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2631 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
frost$core$Bit local12;
org$frostlang$frostc$Compiler$AutoScope* local13 = NULL;
org$frostlang$frostc$Variable$Kind local14;
org$frostlang$frostc$Variable$Kind local15;
org$frostlang$frostc$Type* local16 = NULL;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Compiler$Target* local19 = NULL;
org$frostlang$frostc$Variable* local20 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:504
org$frostlang$frostc$IR** $tmp2632 = &param0->ir;
org$frostlang$frostc$IR* $tmp2633 = *$tmp2632;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
org$frostlang$frostc$IR* $tmp2634 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
*(&local0) = $tmp2633;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:505
$fn2636 $tmp2635 = ($fn2636) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2637 = $tmp2635(param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
org$frostlang$frostc$Type* $tmp2638 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
*(&local1) = $tmp2637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:506
org$frostlang$frostc$Type* $tmp2639 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:506:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp2640 = &((org$frostlang$frostc$Symbol*) $tmp2639)->name;
frost$core$String* $tmp2641 = *$tmp2640;
frost$core$Bit $tmp2642 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2641, &$s2643);
bool $tmp2644 = $tmp2642.value;
if ($tmp2644) goto block2; else goto block3;
block2:;
*(&local2) = $tmp2642;
goto block4;
block3:;
org$frostlang$frostc$Type* $tmp2645 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:506:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp2646 = &((org$frostlang$frostc$Symbol*) $tmp2645)->name;
frost$core$String* $tmp2647 = *$tmp2646;
frost$core$Bit $tmp2648 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2647, &$s2649);
*(&local2) = $tmp2648;
goto block4;
block4:;
frost$core$Bit $tmp2650 = *(&local2);
bool $tmp2651 = $tmp2650.value;
if ($tmp2651) goto block6; else goto block7;
block7:;
frost$core$Int $tmp2652 = (frost$core$Int) {506u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2653, $tmp2652);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:507
org$frostlang$frostc$Type* $tmp2654 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:507:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2655 = &$tmp2654->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2656 = *$tmp2655;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
frost$core$Int $tmp2657 = (frost$core$Int) {1u};
frost$core$Object* $tmp2658 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2656, $tmp2657);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from For.frost:507:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp2659 = &((org$frostlang$frostc$Type*) $tmp2658)->typeKind;
org$frostlang$frostc$Type$Kind $tmp2660 = *$tmp2659;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2661;
$tmp2661 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2661->value = $tmp2660;
frost$core$Int $tmp2662 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2663 = &(&local4)->$rawValue;
*$tmp2663 = $tmp2662;
org$frostlang$frostc$Type$Kind $tmp2664 = *(&local4);
*(&local3) = $tmp2664;
org$frostlang$frostc$Type$Kind $tmp2665 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2666;
$tmp2666 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2666->value = $tmp2665;
ITable* $tmp2667 = ((frost$core$Equatable*) $tmp2661)->$class->itable;
while ($tmp2667->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2667 = $tmp2667->next;
}
$fn2669 $tmp2668 = $tmp2667->methods[0];
frost$core$Bit $tmp2670 = $tmp2668(((frost$core$Equatable*) $tmp2661), ((frost$core$Equatable*) $tmp2666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2666)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2661)));
bool $tmp2671 = $tmp2670.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2658);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
if ($tmp2671) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:508
org$frostlang$frostc$Type* $tmp2672 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:508:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2674 $tmp2673 = ($fn2674) ((frost$core$Object*) $tmp2672)->$class->vtable[0];
frost$core$String* $tmp2675 = $tmp2673(((frost$core$Object*) $tmp2672));
frost$core$String* $tmp2676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2677, $tmp2675);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
frost$core$String* $tmp2678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2676, &$s2679);
frost$core$String* $tmp2680 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2678, &$s2681);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2680);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:511
$fn2683 $tmp2682 = ($fn2683) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2684 = $tmp2682(param4);
frost$core$Bit $tmp2685 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp2684);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:511:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2686 = $tmp2685.value;
bool $tmp2687 = !$tmp2686;
frost$core$Bit $tmp2688 = (frost$core$Bit) {$tmp2687};
bool $tmp2689 = $tmp2688.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
if ($tmp2689) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:512
org$frostlang$frostc$Type* $tmp2690 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2691 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:514
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:515
org$frostlang$frostc$Type* $tmp2692 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2693 = &$tmp2692->typeKind;
org$frostlang$frostc$Type$Kind $tmp2694 = *$tmp2693;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2695;
$tmp2695 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2695->value = $tmp2694;
frost$core$Int $tmp2696 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:515:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2697 = &(&local7)->$rawValue;
*$tmp2697 = $tmp2696;
org$frostlang$frostc$Type$Kind $tmp2698 = *(&local7);
*(&local6) = $tmp2698;
org$frostlang$frostc$Type$Kind $tmp2699 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2700;
$tmp2700 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2700->value = $tmp2699;
ITable* $tmp2701 = ((frost$core$Equatable*) $tmp2695)->$class->itable;
while ($tmp2701->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2701 = $tmp2701->next;
}
$fn2703 $tmp2702 = $tmp2701->methods[0];
frost$core$Bit $tmp2704 = $tmp2702(((frost$core$Equatable*) $tmp2695), ((frost$core$Equatable*) $tmp2700));
bool $tmp2705 = $tmp2704.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2700)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2695)));
if ($tmp2705) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:516
$fn2707 $tmp2706 = ($fn2707) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2708 = $tmp2706(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:516:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2709 = &$tmp2708->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2710 = *$tmp2709;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$core$Int $tmp2711 = (frost$core$Int) {0u};
frost$core$Object* $tmp2712 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2710, $tmp2711);
org$frostlang$frostc$Type$Kind* $tmp2713 = &((org$frostlang$frostc$Type*) $tmp2712)->typeKind;
org$frostlang$frostc$Type$Kind $tmp2714 = *$tmp2713;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2715;
$tmp2715 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2715->value = $tmp2714;
frost$core$Int $tmp2716 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:516:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2717 = &(&local9)->$rawValue;
*$tmp2717 = $tmp2716;
org$frostlang$frostc$Type$Kind $tmp2718 = *(&local9);
*(&local8) = $tmp2718;
org$frostlang$frostc$Type$Kind $tmp2719 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2720;
$tmp2720 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2720->value = $tmp2719;
ITable* $tmp2721 = ((frost$core$Equatable*) $tmp2715)->$class->itable;
while ($tmp2721->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2721 = $tmp2721->next;
}
$fn2723 $tmp2722 = $tmp2721->methods[0];
frost$core$Bit $tmp2724 = $tmp2722(((frost$core$Equatable*) $tmp2715), ((frost$core$Equatable*) $tmp2720));
bool $tmp2725 = $tmp2724.value;
if ($tmp2725) goto block23; else goto block24;
block24:;
frost$core$Int $tmp2726 = (frost$core$Int) {516u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2727, $tmp2726);
abort(); // unreachable
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2720)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2715)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2712);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:517
$fn2729 $tmp2728 = ($fn2729) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2730 = $tmp2728(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2731 = &$tmp2730->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2732 = *$tmp2731;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
frost$core$Int $tmp2733 = (frost$core$Int) {0u};
frost$core$Object* $tmp2734 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2732, $tmp2733);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2735 = &((org$frostlang$frostc$Type*) $tmp2734)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2736 = *$tmp2735;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
frost$core$Int $tmp2737 = (frost$core$Int) {1u};
frost$core$Object* $tmp2738 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2736, $tmp2737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2738)));
org$frostlang$frostc$Type* $tmp2739 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp2738);
frost$core$Frost$unref$frost$core$Object$Q($tmp2738);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
frost$core$Frost$unref$frost$core$Object$Q($tmp2734);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
goto block18;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:520
org$frostlang$frostc$Type* $tmp2740 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2741 = &$tmp2740->typeKind;
org$frostlang$frostc$Type$Kind $tmp2742 = *$tmp2741;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2743;
$tmp2743 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2743->value = $tmp2742;
frost$core$Int $tmp2744 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:520:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2745 = &(&local11)->$rawValue;
*$tmp2745 = $tmp2744;
org$frostlang$frostc$Type$Kind $tmp2746 = *(&local11);
*(&local10) = $tmp2746;
org$frostlang$frostc$Type$Kind $tmp2747 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2748;
$tmp2748 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2748->value = $tmp2747;
ITable* $tmp2749 = ((frost$core$Equatable*) $tmp2743)->$class->itable;
while ($tmp2749->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2749 = $tmp2749->next;
}
$fn2751 $tmp2750 = $tmp2749->methods[0];
frost$core$Bit $tmp2752 = $tmp2750(((frost$core$Equatable*) $tmp2743), ((frost$core$Equatable*) $tmp2748));
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block28; else goto block29;
block29:;
frost$core$Int $tmp2754 = (frost$core$Int) {520u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2755, $tmp2754);
abort(); // unreachable
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2748)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2743)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:521
$fn2757 $tmp2756 = ($fn2757) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2758 = $tmp2756(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:521:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2759 = &$tmp2758->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2760 = *$tmp2759;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
frost$core$Int $tmp2761 = (frost$core$Int) {1u};
frost$core$Object* $tmp2762 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2760, $tmp2761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2762)));
org$frostlang$frostc$Type* $tmp2763 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp2762);
frost$core$Frost$unref$frost$core$Object$Q($tmp2762);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:523
org$frostlang$frostc$Type* $tmp2764 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:523:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
frost$core$Bit $tmp2765 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp2764);
bool $tmp2766 = $tmp2765.value;
if ($tmp2766) goto block34; else goto block35;
block34:;
*(&local12) = $tmp2765;
goto block36;
block35:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:352:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp2767 = &((org$frostlang$frostc$Symbol*) $tmp2764)->name;
frost$core$String* $tmp2768 = *$tmp2767;
frost$core$Bit $tmp2769 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2768, &$s2770);
*(&local12) = $tmp2769;
goto block36;
block36:;
frost$core$Bit $tmp2771 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:523:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2772 = $tmp2771.value;
bool $tmp2773 = !$tmp2772;
frost$core$Bit $tmp2774 = (frost$core$Bit) {$tmp2773};
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:524
$fn2777 $tmp2776 = ($fn2777) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2778 = $tmp2776(param4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:525:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2780 $tmp2779 = ($fn2780) ((frost$core$Object*) $tmp2778)->$class->vtable[0];
frost$core$String* $tmp2781 = $tmp2779(((frost$core$Object*) $tmp2778));
frost$core$String* $tmp2782 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2783, $tmp2781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
frost$core$String* $tmp2784 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2782, &$s2785);
frost$core$String* $tmp2786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2787, $tmp2784);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2786);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:526
org$frostlang$frostc$Type* $tmp2788 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2789 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2790 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:528
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp2791 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2791, param0);
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
org$frostlang$frostc$Compiler$AutoScope* $tmp2792 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
*(&local13) = $tmp2791;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:529
frost$core$Int $tmp2793 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from For.frost:529:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp2794 = &(&local15)->$rawValue;
*$tmp2794 = $tmp2793;
org$frostlang$frostc$Variable$Kind $tmp2795 = *(&local15);
*(&local14) = $tmp2795;
org$frostlang$frostc$Variable$Kind $tmp2796 = *(&local14);
org$frostlang$frostc$Type* $tmp2797 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:530:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2798 = &$tmp2797->typeKind;
org$frostlang$frostc$Type$Kind $tmp2799 = *$tmp2798;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2800;
$tmp2800 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2800->value = $tmp2799;
frost$core$Int $tmp2801 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2802 = &(&local18)->$rawValue;
*$tmp2802 = $tmp2801;
org$frostlang$frostc$Type$Kind $tmp2803 = *(&local18);
*(&local17) = $tmp2803;
org$frostlang$frostc$Type$Kind $tmp2804 = *(&local17);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2805;
$tmp2805 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2805->value = $tmp2804;
ITable* $tmp2806 = ((frost$core$Equatable*) $tmp2800)->$class->itable;
while ($tmp2806->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2806 = $tmp2806->next;
}
$fn2808 $tmp2807 = $tmp2806->methods[1];
frost$core$Bit $tmp2809 = $tmp2807(((frost$core$Equatable*) $tmp2800), ((frost$core$Equatable*) $tmp2805));
bool $tmp2810 = $tmp2809.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2805)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2800)));
if ($tmp2810) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
*(&local16) = $tmp2797;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
goto block41;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2811 = &$tmp2797->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2812 = *$tmp2811;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
frost$core$Int $tmp2813 = (frost$core$Int) {0u};
frost$core$Object* $tmp2814 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2812, $tmp2813);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2814)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2814);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
*(&local16) = ((org$frostlang$frostc$Type*) $tmp2814);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2814)));
goto block41;
block41:;
org$frostlang$frostc$Type* $tmp2815 = *(&local16);
org$frostlang$frostc$Compiler$Target* $tmp2816 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp2796, ((org$frostlang$frostc$ASTNode*) NULL), $tmp2815);
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
org$frostlang$frostc$Compiler$Target* $tmp2817 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
*(&local19) = $tmp2816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:531
org$frostlang$frostc$Compiler$Target* $tmp2818 = *(&local19);
frost$core$Bit $tmp2819 = (frost$core$Bit) {$tmp2818 == NULL};
bool $tmp2820 = $tmp2819.value;
if ($tmp2820) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:532
org$frostlang$frostc$Compiler$Target* $tmp2821 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp2822 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2823 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp2824 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2825 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2826 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:534
org$frostlang$frostc$Compiler$Target* $tmp2827 = *(&local19);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp2827);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:535
org$frostlang$frostc$Compiler$Target* $tmp2828 = *(&local19);
frost$core$Int* $tmp2829 = &$tmp2828->$rawValue;
frost$core$Int $tmp2830 = *$tmp2829;
frost$core$Int $tmp2831 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:536:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2832 = $tmp2830.value;
int64_t $tmp2833 = $tmp2831.value;
bool $tmp2834 = $tmp2832 == $tmp2833;
frost$core$Bit $tmp2835 = (frost$core$Bit) {$tmp2834};
bool $tmp2836 = $tmp2835.value;
if ($tmp2836) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Variable** $tmp2837 = (org$frostlang$frostc$Variable**) ($tmp2828->$data + 0);
org$frostlang$frostc$Variable* $tmp2838 = *$tmp2837;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
org$frostlang$frostc$Variable* $tmp2839 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
*(&local20) = $tmp2838;
org$frostlang$frostc$IR$Value** $tmp2840 = (org$frostlang$frostc$IR$Value**) ($tmp2828->$data + 8);
org$frostlang$frostc$IR$Value* $tmp2841 = *$tmp2840;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:537
org$frostlang$frostc$Type* $tmp2842 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:537:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp2843 = &((org$frostlang$frostc$Symbol*) $tmp2842)->name;
frost$core$String* $tmp2844 = *$tmp2843;
frost$core$Bit $tmp2845 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2844, &$s2846);
bool $tmp2847 = $tmp2845.value;
if ($tmp2847) goto block52; else goto block54;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:538
org$frostlang$frostc$Variable* $tmp2848 = *(&local20);
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp2848, param4, param5);
goto block53;
block54:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:541
org$frostlang$frostc$Variable* $tmp2849 = *(&local20);
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp2849, param4, param5);
goto block53;
block53:;
org$frostlang$frostc$Variable* $tmp2850 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block48;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:545
frost$core$Bit $tmp2851 = (frost$core$Bit) {false};
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block56; else goto block57;
block57:;
frost$core$Int $tmp2853 = (frost$core$Int) {545u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2854, $tmp2853);
abort(); // unreachable
block56:;
goto block48;
block48:;
org$frostlang$frostc$Compiler$Target* $tmp2855 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp2856 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2857 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp2858 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2859 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2860 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$Position local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
frost$core$Bit local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Compiler$TypeContext* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type* local15 = NULL;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
frost$collections$Array* local18 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:554
org$frostlang$frostc$IR** $tmp2861 = &param0->ir;
org$frostlang$frostc$IR* $tmp2862 = *$tmp2861;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
org$frostlang$frostc$IR* $tmp2863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
*(&local0) = $tmp2862;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:555
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:556
frost$core$Int* $tmp2864 = &param3->$rawValue;
frost$core$Int $tmp2865 = *$tmp2864;
frost$core$Int $tmp2866 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:557:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2867 = $tmp2865.value;
int64_t $tmp2868 = $tmp2866.value;
bool $tmp2869 = $tmp2867 == $tmp2868;
frost$core$Bit $tmp2870 = (frost$core$Bit) {$tmp2869};
bool $tmp2871 = $tmp2870.value;
if ($tmp2871) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2872 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2873 = *$tmp2872;
*(&local2) = $tmp2873;
frost$core$String** $tmp2874 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2875 = *$tmp2874;
org$frostlang$frostc$ASTNode** $tmp2876 = (org$frostlang$frostc$ASTNode**) (param3->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2877 = *$tmp2876;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
org$frostlang$frostc$ASTNode* $tmp2878 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
*(&local3) = $tmp2877;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:558
org$frostlang$frostc$Scanner** $tmp2879 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2880 = *$tmp2879;
org$frostlang$frostc$ASTNode* $tmp2881 = *(&local3);
org$frostlang$frostc$Type* $tmp2882 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2880, $tmp2881);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from For.frost:558:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:965
frost$core$Bit $tmp2883 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2884 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2882, $tmp2883);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
org$frostlang$frostc$Type* $tmp2885 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
*(&local4) = $tmp2884;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:559
org$frostlang$frostc$Type* $tmp2886 = *(&local4);
frost$core$Bit $tmp2887 = (frost$core$Bit) {$tmp2886 == NULL};
bool $tmp2888 = $tmp2887.value;
if ($tmp2888) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:560
org$frostlang$frostc$Type* $tmp2889 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2890 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp2891 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2892 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:562
org$frostlang$frostc$Type* $tmp2893 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp2894 = &$tmp2893->typeKind;
org$frostlang$frostc$Type$Kind $tmp2895 = *$tmp2894;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2896;
$tmp2896 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2896->value = $tmp2895;
frost$core$Int $tmp2897 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:562:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2898 = &(&local6)->$rawValue;
*$tmp2898 = $tmp2897;
org$frostlang$frostc$Type$Kind $tmp2899 = *(&local6);
*(&local5) = $tmp2899;
org$frostlang$frostc$Type$Kind $tmp2900 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2901;
$tmp2901 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2901->value = $tmp2900;
ITable* $tmp2902 = ((frost$core$Equatable*) $tmp2896)->$class->itable;
while ($tmp2902->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2902 = $tmp2902->next;
}
$fn2904 $tmp2903 = $tmp2902->methods[0];
frost$core$Bit $tmp2905 = $tmp2903(((frost$core$Equatable*) $tmp2896), ((frost$core$Equatable*) $tmp2901));
bool $tmp2906 = $tmp2905.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2901)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2896)));
if ($tmp2906) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:563
org$frostlang$frostc$Position $tmp2907 = *(&local2);
org$frostlang$frostc$Type* $tmp2908 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:563:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2910 $tmp2909 = ($fn2910) ((frost$core$Object*) $tmp2908)->$class->vtable[0];
frost$core$String* $tmp2911 = $tmp2909(((frost$core$Object*) $tmp2908));
frost$core$String* $tmp2912 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2913, $tmp2911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
frost$core$String* $tmp2914 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2912, &$s2915);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2907, $tmp2914);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:564
org$frostlang$frostc$Type* $tmp2916 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2917 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp2918 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2919 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:566
org$frostlang$frostc$Type* $tmp2920 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:566:22
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
frost$core$Bit $tmp2921 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp2920);
bool $tmp2922 = $tmp2921.value;
if ($tmp2922) goto block15; else goto block16;
block15:;
*(&local7) = $tmp2921;
goto block17;
block16:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:352:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp2923 = &((org$frostlang$frostc$Symbol*) $tmp2920)->name;
frost$core$String* $tmp2924 = *$tmp2923;
frost$core$Bit $tmp2925 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2924, &$s2926);
*(&local7) = $tmp2925;
goto block17;
block17:;
frost$core$Bit $tmp2927 = *(&local7);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:566:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2928 = $tmp2927.value;
bool $tmp2929 = !$tmp2928;
frost$core$Bit $tmp2930 = (frost$core$Bit) {$tmp2929};
bool $tmp2931 = $tmp2930.value;
if ($tmp2931) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:567
org$frostlang$frostc$Position $tmp2932 = *(&local2);
org$frostlang$frostc$Type* $tmp2933 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:568:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2935 $tmp2934 = ($fn2935) ((frost$core$Object*) $tmp2933)->$class->vtable[0];
frost$core$String* $tmp2936 = $tmp2934(((frost$core$Object*) $tmp2933));
frost$core$String* $tmp2937 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2938, $tmp2936);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
frost$core$String* $tmp2939 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2937, &$s2940);
frost$core$String* $tmp2941 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2942, $tmp2939);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2932, $tmp2941);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:569
org$frostlang$frostc$Type* $tmp2943 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2944 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp2945 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2946 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:571
frost$core$Int* $tmp2947 = &param4->$rawValue;
frost$core$Int $tmp2948 = *$tmp2947;
frost$core$Int $tmp2949 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:572:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2950 = $tmp2948.value;
int64_t $tmp2951 = $tmp2949.value;
bool $tmp2952 = $tmp2950 == $tmp2951;
frost$core$Bit $tmp2953 = (frost$core$Bit) {$tmp2952};
bool $tmp2954 = $tmp2953.value;
if ($tmp2954) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2955 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp2956 = *$tmp2955;
org$frostlang$frostc$ASTNode** $tmp2957 = (org$frostlang$frostc$ASTNode**) (param4->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2958 = *$tmp2957;
frost$core$Bit* $tmp2959 = (frost$core$Bit*) (param4->$data + 32);
frost$core$Bit $tmp2960 = *$tmp2959;
org$frostlang$frostc$ASTNode** $tmp2961 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp2962 = *$tmp2961;
org$frostlang$frostc$ASTNode** $tmp2963 = (org$frostlang$frostc$ASTNode**) (param4->$data + 41);
org$frostlang$frostc$ASTNode* $tmp2964 = *$tmp2963;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
org$frostlang$frostc$ASTNode* $tmp2965 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
*(&local8) = $tmp2964;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:573
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:574
org$frostlang$frostc$ASTNode* $tmp2966 = *(&local8);
frost$core$Bit $tmp2967 = (frost$core$Bit) {$tmp2966 != NULL};
bool $tmp2968 = $tmp2967.value;
if ($tmp2968) goto block25; else goto block27;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:575
org$frostlang$frostc$Type* $tmp2969 = *(&local4);
org$frostlang$frostc$Type* $tmp2970 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp2969);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
org$frostlang$frostc$Type* $tmp2971 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local9) = $tmp2970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
goto block26;
block27:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:578
org$frostlang$frostc$Type* $tmp2972 = *(&local4);
// begin inline call to method org.frostlang.frostc.Type.RangeOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:578:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:298
org$frostlang$frostc$Type** $tmp2973 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp2974 = *$tmp2973;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2975 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2976 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2975, $tmp2976);
frost$collections$Array$add$frost$collections$Array$T($tmp2975, ((frost$core$Object*) $tmp2972));
org$frostlang$frostc$Type* $tmp2977 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2974, ((frost$collections$ListView*) $tmp2975));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
org$frostlang$frostc$Type* $tmp2978 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
*(&local9) = $tmp2977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:580
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2979 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2980 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp2981 = *(&local9);
frost$core$Bit $tmp2982 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2979, $tmp2980, $tmp2981, $tmp2982);
org$frostlang$frostc$IR$Value* $tmp2983 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp2979);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
org$frostlang$frostc$IR$Value* $tmp2984 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
*(&local1) = $tmp2983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
org$frostlang$frostc$Type* $tmp2985 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2986 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp2987 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2988 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:583
frost$core$Int $tmp2989 = (frost$core$Int) {583u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2990, $tmp2989);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:588
org$frostlang$frostc$Type* $tmp2991 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
org$frostlang$frostc$Type* $tmp2992 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
*(&local10) = $tmp2991;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:589
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2993 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2994 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2993, $tmp2994);
*(&local11) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
org$frostlang$frostc$Compiler$TypeContext* $tmp2995 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
*(&local11) = $tmp2993;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:590
org$frostlang$frostc$Type* $tmp2996 = *(&local10);
frost$core$Bit $tmp2997 = (frost$core$Bit) {$tmp2996 != NULL};
bool $tmp2998 = $tmp2997.value;
if ($tmp2998) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Type* $tmp2999 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:590:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp3000 = &((org$frostlang$frostc$Symbol*) $tmp2999)->name;
frost$core$String* $tmp3001 = *$tmp3000;
frost$core$Bit $tmp3002 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3001, &$s3003);
bool $tmp3004 = $tmp3002.value;
if ($tmp3004) goto block29; else goto block31;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:591
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3005 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3006 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp3007 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:592:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3008 = &$tmp3007->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3009 = *$tmp3008;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
frost$core$Int $tmp3010 = (frost$core$Int) {1u};
frost$core$Object* $tmp3011 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3009, $tmp3010);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:592:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp3012 = &((org$frostlang$frostc$Type*) $tmp3011)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3013 = *$tmp3012;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3014;
$tmp3014 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3014->value = $tmp3013;
frost$core$Int $tmp3015 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3016 = &(&local14)->$rawValue;
*$tmp3016 = $tmp3015;
org$frostlang$frostc$Type$Kind $tmp3017 = *(&local14);
*(&local13) = $tmp3017;
org$frostlang$frostc$Type$Kind $tmp3018 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3019;
$tmp3019 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3019->value = $tmp3018;
ITable* $tmp3020 = ((frost$core$Equatable*) $tmp3014)->$class->itable;
while ($tmp3020->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3020 = $tmp3020->next;
}
$fn3022 $tmp3021 = $tmp3020->methods[1];
frost$core$Bit $tmp3023 = $tmp3021(((frost$core$Equatable*) $tmp3014), ((frost$core$Equatable*) $tmp3019));
bool $tmp3024 = $tmp3023.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3019)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3014)));
if ($tmp3024) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3011)));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp3011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3011)));
goto block35;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3025 = &((org$frostlang$frostc$Type*) $tmp3011)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3026 = *$tmp3025;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
frost$core$Int $tmp3027 = (frost$core$Int) {0u};
frost$core$Object* $tmp3028 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3026, $tmp3027);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3028)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3028);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp3028);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3028)));
goto block35;
block35:;
org$frostlang$frostc$Type* $tmp3029 = *(&local12);
// begin inline call to method org.frostlang.frostc.Type.RangeOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:591:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:298
org$frostlang$frostc$Type** $tmp3030 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3031 = *$tmp3030;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3032 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3033 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp3032, $tmp3033);
frost$collections$Array$add$frost$collections$Array$T($tmp3032, ((frost$core$Object*) $tmp3029));
org$frostlang$frostc$Type* $tmp3034 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3031, ((frost$collections$ListView*) $tmp3032));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
frost$core$Bit $tmp3035 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3005, $tmp3006, $tmp3034, $tmp3035);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
org$frostlang$frostc$Compiler$TypeContext* $tmp3036 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
*(&local11) = $tmp3005;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
org$frostlang$frostc$Type* $tmp3037 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3011);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
goto block30;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:594
org$frostlang$frostc$Type* $tmp3038 = *(&local10);
frost$core$Bit $tmp3039 = (frost$core$Bit) {$tmp3038 != NULL};
bool $tmp3040 = $tmp3039.value;
if ($tmp3040) goto block43; else goto block42;
block43:;
org$frostlang$frostc$Type* $tmp3041 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:594:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp3042 = &((org$frostlang$frostc$Symbol*) $tmp3041)->name;
frost$core$String* $tmp3043 = *$tmp3042;
frost$core$Bit $tmp3044 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3043, &$s3045);
bool $tmp3046 = $tmp3044.value;
if ($tmp3046) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:595
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3047 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3048 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp3049 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3050 = &$tmp3049->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3051 = *$tmp3050;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
frost$core$Int $tmp3052 = (frost$core$Int) {1u};
frost$core$Object* $tmp3053 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3051, $tmp3052);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:596:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp3054 = &((org$frostlang$frostc$Type*) $tmp3053)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3055 = *$tmp3054;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3056;
$tmp3056 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3056->value = $tmp3055;
frost$core$Int $tmp3057 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3058 = &(&local17)->$rawValue;
*$tmp3058 = $tmp3057;
org$frostlang$frostc$Type$Kind $tmp3059 = *(&local17);
*(&local16) = $tmp3059;
org$frostlang$frostc$Type$Kind $tmp3060 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3061;
$tmp3061 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3061->value = $tmp3060;
ITable* $tmp3062 = ((frost$core$Equatable*) $tmp3056)->$class->itable;
while ($tmp3062->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3062 = $tmp3062->next;
}
$fn3064 $tmp3063 = $tmp3062->methods[1];
frost$core$Bit $tmp3065 = $tmp3063(((frost$core$Equatable*) $tmp3056), ((frost$core$Equatable*) $tmp3061));
bool $tmp3066 = $tmp3065.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3061)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3056)));
if ($tmp3066) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3053)));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3053);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3053)));
goto block46;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3067 = &((org$frostlang$frostc$Type*) $tmp3053)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3068 = *$tmp3067;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
frost$core$Int $tmp3069 = (frost$core$Int) {0u};
frost$core$Object* $tmp3070 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3068, $tmp3069);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3070)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3070);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3070);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3070)));
goto block46;
block46:;
org$frostlang$frostc$Type* $tmp3071 = *(&local15);
org$frostlang$frostc$Type* $tmp3072 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3073 = &$tmp3072->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3074 = *$tmp3073;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
frost$core$Int $tmp3075 = (frost$core$Int) {2u};
frost$core$Object* $tmp3076 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3074, $tmp3075);
// begin inline call to method org.frostlang.frostc.Type.SteppedRangeOf(compiler:org.frostlang.frostc.Compiler, endpoint:org.frostlang.frostc.Type, step:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:595:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:322
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3077 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3077);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
frost$collections$Array* $tmp3078 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
*(&local18) = $tmp3077;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:323
frost$collections$Array* $tmp3079 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp3079, ((frost$core$Object*) $tmp3071));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:324
frost$collections$Array* $tmp3080 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp3080, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3076)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:325
org$frostlang$frostc$Type** $tmp3081 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3082 = *$tmp3081;
frost$collections$Array* $tmp3083 = *(&local18);
org$frostlang$frostc$Type* $tmp3084 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3082, ((frost$collections$ListView*) $tmp3083));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
frost$collections$Array* $tmp3085 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Bit $tmp3086 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3047, $tmp3048, $tmp3084, $tmp3086);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
org$frostlang$frostc$Compiler$TypeContext* $tmp3087 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
*(&local11) = $tmp3047;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
frost$core$Frost$unref$frost$core$Object$Q($tmp3076);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
org$frostlang$frostc$Type* $tmp3088 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3053);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
goto block42;
block42:;
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:598
org$frostlang$frostc$Compiler$TypeContext* $tmp3089 = *(&local11);
org$frostlang$frostc$IR$Value* $tmp3090 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3089);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
org$frostlang$frostc$IR$Value* $tmp3091 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local1) = $tmp3090;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
org$frostlang$frostc$Compiler$TypeContext* $tmp3092 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local11) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp3093 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:601
org$frostlang$frostc$IR$Value* $tmp3094 = *(&local1);
frost$core$Bit $tmp3095 = (frost$core$Bit) {$tmp3094 == NULL};
bool $tmp3096 = $tmp3095.value;
if ($tmp3096) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:602
org$frostlang$frostc$IR$Value* $tmp3097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:604
org$frostlang$frostc$IR$Value* $tmp3099 = *(&local1);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3099, param5);
org$frostlang$frostc$IR$Value* $tmp3100 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Compiler$AutoContext* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
frost$core$Bit local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local10 = NULL;
org$frostlang$frostc$Compiler$Target* local11 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local12 = NULL;
org$frostlang$frostc$Variable$Kind local13;
org$frostlang$frostc$Variable$Kind local14;
org$frostlang$frostc$IR$Value* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:611
org$frostlang$frostc$IR** $tmp3102 = &param0->ir;
org$frostlang$frostc$IR* $tmp3103 = *$tmp3102;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
org$frostlang$frostc$IR* $tmp3104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
*(&local0) = $tmp3103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:612
org$frostlang$frostc$IR* $tmp3105 = *(&local0);
$fn3107 $tmp3106 = ($fn3107) $tmp3105->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3108 = $tmp3106($tmp3105, &$s3109);
*(&local1) = $tmp3108;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:613
org$frostlang$frostc$IR* $tmp3110 = *(&local0);
$fn3112 $tmp3111 = ($fn3112) $tmp3110->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3113 = $tmp3111($tmp3110, &$s3114);
*(&local2) = $tmp3113;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:614
org$frostlang$frostc$IR* $tmp3115 = *(&local0);
$fn3117 $tmp3116 = ($fn3117) $tmp3115->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3118 = $tmp3116($tmp3115, &$s3119);
*(&local3) = $tmp3118;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:615
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp3120 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3121 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp3122 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3123 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3124 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3121, $tmp3122, param2, $tmp3123, $tmp3124);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp3120, param0, $tmp3121);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
org$frostlang$frostc$Compiler$AutoContext* $tmp3125 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
*(&local4) = $tmp3120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:616
$fn3127 $tmp3126 = ($fn3127) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3128 = $tmp3126(param4);
org$frostlang$frostc$Type$Kind* $tmp3129 = &$tmp3128->typeKind;
org$frostlang$frostc$Type$Kind $tmp3130 = *$tmp3129;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3131;
$tmp3131 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3131->value = $tmp3130;
frost$core$Int $tmp3132 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:616:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3133 = &(&local7)->$rawValue;
*$tmp3133 = $tmp3132;
org$frostlang$frostc$Type$Kind $tmp3134 = *(&local7);
*(&local6) = $tmp3134;
org$frostlang$frostc$Type$Kind $tmp3135 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3136;
$tmp3136 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3136->value = $tmp3135;
ITable* $tmp3137 = ((frost$core$Equatable*) $tmp3131)->$class->itable;
while ($tmp3137->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3137 = $tmp3137->next;
}
$fn3139 $tmp3138 = $tmp3137->methods[0];
frost$core$Bit $tmp3140 = $tmp3138(((frost$core$Equatable*) $tmp3131), ((frost$core$Equatable*) $tmp3136));
bool $tmp3141 = $tmp3140.value;
if ($tmp3141) goto block2; else goto block3;
block2:;
$fn3143 $tmp3142 = ($fn3143) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3144 = $tmp3142(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:617:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3145 = &$tmp3144->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3146 = *$tmp3145;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
frost$core$Int $tmp3147 = (frost$core$Int) {0u};
frost$core$Object* $tmp3148 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3146, $tmp3147);
org$frostlang$frostc$Type** $tmp3149 = &param0->ITERATOR_TYPE;
org$frostlang$frostc$Type* $tmp3150 = *$tmp3149;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:617:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp3151 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3148))->name;
frost$core$String* $tmp3152 = *$tmp3151;
frost$core$String** $tmp3153 = &((org$frostlang$frostc$Symbol*) $tmp3150)->name;
frost$core$String* $tmp3154 = *$tmp3153;
frost$core$Bit $tmp3155 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3152, $tmp3154);
bool $tmp3156 = $tmp3155.value;
if ($tmp3156) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Type$Kind* $tmp3157 = &((org$frostlang$frostc$Type*) $tmp3148)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3158 = *$tmp3157;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3159;
$tmp3159 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3159->value = $tmp3158;
org$frostlang$frostc$Type$Kind* $tmp3160 = &$tmp3150->typeKind;
org$frostlang$frostc$Type$Kind $tmp3161 = *$tmp3160;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3162;
$tmp3162 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3162->value = $tmp3161;
ITable* $tmp3163 = ((frost$core$Equatable*) $tmp3159)->$class->itable;
while ($tmp3163->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3163 = $tmp3163->next;
}
$fn3165 $tmp3164 = $tmp3163->methods[0];
frost$core$Bit $tmp3166 = $tmp3164(((frost$core$Equatable*) $tmp3159), ((frost$core$Equatable*) $tmp3162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3162)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3159)));
*(&local8) = $tmp3166;
goto block9;
block8:;
*(&local8) = $tmp3155;
goto block9;
block9:;
frost$core$Bit $tmp3167 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q($tmp3148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
*(&local5) = $tmp3167;
goto block4;
block3:;
*(&local5) = $tmp3140;
goto block4;
block4:;
frost$core$Bit $tmp3168 = *(&local5);
bool $tmp3169 = $tmp3168.value;
if ($tmp3169) goto block10; else goto block11;
block11:;
frost$core$Int $tmp3170 = (frost$core$Int) {616u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3171, $tmp3170);
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3136)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3131)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:618
org$frostlang$frostc$IR* $tmp3172 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3173 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp3174 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3175 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3173, $tmp3174, param1, $tmp3175);
$fn3177 $tmp3176 = ($fn3177) $tmp3172->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3178 = $tmp3176($tmp3172, $tmp3173);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:619
org$frostlang$frostc$IR* $tmp3179 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3180 = *(&local1);
$fn3182 $tmp3181 = ($fn3182) $tmp3179->$class->vtable[4];
$tmp3181($tmp3179, $tmp3180);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:620
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3183 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3183);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3184 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3185 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp3186 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp3187 = *$tmp3186;
frost$core$Bit $tmp3188 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3184, $tmp3185, $tmp3187, $tmp3188);
org$frostlang$frostc$IR$Value* $tmp3189 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3190, ((frost$collections$ListView*) $tmp3183), $tmp3184);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
org$frostlang$frostc$IR$Value* $tmp3191 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
*(&local9) = $tmp3189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:622
org$frostlang$frostc$IR$Value* $tmp3192 = *(&local9);
frost$core$Bit $tmp3193 = (frost$core$Bit) {$tmp3192 == NULL};
bool $tmp3194 = $tmp3193.value;
if ($tmp3194) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:623
org$frostlang$frostc$IR$Value* $tmp3195 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3196 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:625
org$frostlang$frostc$IR* $tmp3198 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3199 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp3200 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp3201 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp3202 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp3201);
org$frostlang$frostc$IR$Block$ID $tmp3203 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3204 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3199, $tmp3200, param1, $tmp3202, $tmp3203, $tmp3204);
$fn3206 $tmp3205 = ($fn3206) $tmp3198->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3207 = $tmp3205($tmp3198, $tmp3199);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:627
org$frostlang$frostc$IR* $tmp3208 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3209 = *(&local2);
$fn3211 $tmp3210 = ($fn3211) $tmp3208->$class->vtable[4];
$tmp3210($tmp3208, $tmp3209);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:629
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp3212 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp3212, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
org$frostlang$frostc$Compiler$AutoScope* $tmp3213 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
*(&local10) = $tmp3212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:630
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:632
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3214 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp3214, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3215 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
*(&local12) = $tmp3214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:633
frost$core$Int $tmp3216 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from For.frost:633:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp3217 = &(&local14)->$rawValue;
*$tmp3217 = $tmp3216;
org$frostlang$frostc$Variable$Kind $tmp3218 = *(&local14);
*(&local13) = $tmp3218;
org$frostlang$frostc$Variable$Kind $tmp3219 = *(&local13);
$fn3221 $tmp3220 = ($fn3221) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3222 = $tmp3220(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:634:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3223 = &$tmp3222->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3224 = *$tmp3223;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
frost$core$Int $tmp3225 = (frost$core$Int) {1u};
frost$core$Object* $tmp3226 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3224, $tmp3225);
org$frostlang$frostc$Compiler$Target* $tmp3227 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp3219, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp3226));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
org$frostlang$frostc$Compiler$Target* $tmp3228 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3228));
*(&local11) = $tmp3227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
frost$core$Frost$unref$frost$core$Object$Q($tmp3226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:635
org$frostlang$frostc$Compiler$Target* $tmp3229 = *(&local11);
frost$core$Bit $tmp3230 = (frost$core$Bit) {$tmp3229 == NULL};
bool $tmp3231 = $tmp3230.value;
if ($tmp3231) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:636
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3232 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3233 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3233));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3234 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3235 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3236 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3237 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block17:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3238 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:639
org$frostlang$frostc$Compiler$Target* $tmp3239 = *(&local11);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp3239);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:640
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:641
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3240 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3240);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3241 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3242 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3241, $tmp3242);
org$frostlang$frostc$IR$Value* $tmp3243 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3244, ((frost$collections$ListView*) $tmp3240), $tmp3241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3243));
org$frostlang$frostc$IR$Value* $tmp3245 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
*(&local15) = $tmp3243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:643
org$frostlang$frostc$IR$Value* $tmp3246 = *(&local15);
frost$core$Bit $tmp3247 = (frost$core$Bit) {$tmp3246 == NULL};
bool $tmp3248 = $tmp3247.value;
if ($tmp3248) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:644
org$frostlang$frostc$IR$Value* $tmp3249 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3250 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3250));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3251 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3251));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3252 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3253 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3254 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:646
org$frostlang$frostc$Compiler$Target* $tmp3255 = *(&local11);
org$frostlang$frostc$IR$Value* $tmp3256 = *(&local15);
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, param1, $tmp3255, $tmp3256);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:647
ITable* $tmp3257 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp3257->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3257 = $tmp3257->next;
}
$fn3259 $tmp3258 = $tmp3257->methods[0];
frost$collections$Iterator* $tmp3260 = $tmp3258(((frost$collections$Iterable*) param5));
goto block20;
block20:;
ITable* $tmp3261 = $tmp3260->$class->itable;
while ($tmp3261->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3261 = $tmp3261->next;
}
$fn3263 $tmp3262 = $tmp3261->methods[0];
frost$core$Bit $tmp3264 = $tmp3262($tmp3260);
bool $tmp3265 = $tmp3264.value;
if ($tmp3265) goto block22; else goto block21;
block21:;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3266 = $tmp3260->$class->itable;
while ($tmp3266->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3266 = $tmp3266->next;
}
$fn3268 $tmp3267 = $tmp3266->methods[1];
frost$core$Object* $tmp3269 = $tmp3267($tmp3260);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3269)));
org$frostlang$frostc$ASTNode* $tmp3270 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3270));
*(&local16) = ((org$frostlang$frostc$ASTNode*) $tmp3269);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:648
org$frostlang$frostc$ASTNode* $tmp3271 = *(&local16);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp3271);
frost$core$Frost$unref$frost$core$Object$Q($tmp3269);
org$frostlang$frostc$ASTNode* $tmp3272 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
org$frostlang$frostc$IR$Value* $tmp3273 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3274 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3274));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3275 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3275));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:651
org$frostlang$frostc$IR* $tmp3276 = *(&local0);
$fn3278 $tmp3277 = ($fn3278) $tmp3276->$class->vtable[5];
frost$core$Bit $tmp3279 = $tmp3277($tmp3276);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:651:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3280 = $tmp3279.value;
bool $tmp3281 = !$tmp3280;
frost$core$Bit $tmp3282 = (frost$core$Bit) {$tmp3281};
bool $tmp3283 = $tmp3282.value;
if ($tmp3283) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:652
org$frostlang$frostc$IR* $tmp3284 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3285 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp3286 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3287 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3285, $tmp3286, param1, $tmp3287);
$fn3289 $tmp3288 = ($fn3289) $tmp3284->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3290 = $tmp3288($tmp3284, $tmp3285);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:654
org$frostlang$frostc$IR* $tmp3291 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3292 = *(&local3);
$fn3294 $tmp3293 = ($fn3294) $tmp3291->$class->vtable[4];
$tmp3293($tmp3291, $tmp3292);
org$frostlang$frostc$IR$Value* $tmp3295 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3295));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3296 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3296));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3297 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3297));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
frost$core$Bit local4;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
frost$core$Bit local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Value* local10 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:660
frost$core$Int* $tmp3298 = &param4->$rawValue;
frost$core$Int $tmp3299 = *$tmp3298;
frost$core$Int $tmp3300 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3301 = $tmp3299.value;
int64_t $tmp3302 = $tmp3300.value;
bool $tmp3303 = $tmp3301 == $tmp3302;
frost$core$Bit $tmp3304 = (frost$core$Bit) {$tmp3303};
bool $tmp3305 = $tmp3304.value;
if ($tmp3305) goto block2; else goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:664
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:665
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:668
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from For.frost:668:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5105
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3306 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3307 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3306, $tmp3307);
org$frostlang$frostc$IR$Value* $tmp3308 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3306);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
org$frostlang$frostc$IR$Value* $tmp3309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3309));
*(&local0) = $tmp3308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:669
org$frostlang$frostc$IR$Value* $tmp3310 = *(&local0);
frost$core$Bit $tmp3311 = (frost$core$Bit) {$tmp3310 == NULL};
bool $tmp3312 = $tmp3311.value;
if ($tmp3312) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:670
org$frostlang$frostc$IR$Value* $tmp3313 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:672
org$frostlang$frostc$IR$Value* $tmp3314 = *(&local0);
$fn3316 $tmp3315 = ($fn3316) $tmp3314->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3317 = $tmp3315($tmp3314);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:672:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp3318 = &((org$frostlang$frostc$Symbol*) $tmp3317)->name;
frost$core$String* $tmp3319 = *$tmp3318;
frost$core$Bit $tmp3320 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3319, &$s3321);
bool $tmp3322 = $tmp3320.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
if ($tmp3322) goto block7; else goto block10;
block10:;
org$frostlang$frostc$IR$Value* $tmp3323 = *(&local0);
$fn3325 $tmp3324 = ($fn3325) $tmp3323->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3326 = $tmp3324($tmp3323);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:672:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp3327 = &((org$frostlang$frostc$Symbol*) $tmp3326)->name;
frost$core$String* $tmp3328 = *$tmp3327;
frost$core$Bit $tmp3329 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3328, &$s3330);
bool $tmp3331 = $tmp3329.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3326));
if ($tmp3331) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:674
org$frostlang$frostc$IR$Value* $tmp3332 = *(&local0);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3332, param5);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:677
org$frostlang$frostc$IR$Value* $tmp3333 = *(&local0);
$fn3335 $tmp3334 = ($fn3335) $tmp3333->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3336 = $tmp3334($tmp3333);
frost$collections$HashSet* $tmp3337 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp3336);
ITable* $tmp3338 = ((frost$collections$Iterable*) $tmp3337)->$class->itable;
while ($tmp3338->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3338 = $tmp3338->next;
}
$fn3340 $tmp3339 = $tmp3338->methods[0];
frost$collections$Iterator* $tmp3341 = $tmp3339(((frost$collections$Iterable*) $tmp3337));
goto block13;
block13:;
ITable* $tmp3342 = $tmp3341->$class->itable;
while ($tmp3342->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3342 = $tmp3342->next;
}
$fn3344 $tmp3343 = $tmp3342->methods[0];
frost$core$Bit $tmp3345 = $tmp3343($tmp3341);
bool $tmp3346 = $tmp3345.value;
if ($tmp3346) goto block15; else goto block14;
block14:;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp3347 = $tmp3341->$class->itable;
while ($tmp3347->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3347 = $tmp3347->next;
}
$fn3349 $tmp3348 = $tmp3347->methods[1];
frost$core$Object* $tmp3350 = $tmp3348($tmp3341);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3350)));
org$frostlang$frostc$Type* $tmp3351 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3351));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp3350);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:678
org$frostlang$frostc$Type* $tmp3352 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3353 = &$tmp3352->typeKind;
org$frostlang$frostc$Type$Kind $tmp3354 = *$tmp3353;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3355;
$tmp3355 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3355->value = $tmp3354;
frost$core$Int $tmp3356 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:678:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3357 = &(&local3)->$rawValue;
*$tmp3357 = $tmp3356;
org$frostlang$frostc$Type$Kind $tmp3358 = *(&local3);
*(&local2) = $tmp3358;
org$frostlang$frostc$Type$Kind $tmp3359 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3360;
$tmp3360 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3360->value = $tmp3359;
ITable* $tmp3361 = ((frost$core$Equatable*) $tmp3355)->$class->itable;
while ($tmp3361->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3361 = $tmp3361->next;
}
$fn3363 $tmp3362 = $tmp3361->methods[0];
frost$core$Bit $tmp3364 = $tmp3362(((frost$core$Equatable*) $tmp3355), ((frost$core$Equatable*) $tmp3360));
bool $tmp3365 = $tmp3364.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3360)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3355)));
if ($tmp3365) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Type* $tmp3366 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:678:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3367 = &$tmp3366->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3368 = *$tmp3367;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
frost$core$Int $tmp3369 = (frost$core$Int) {0u};
frost$core$Object* $tmp3370 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3368, $tmp3369);
org$frostlang$frostc$Type** $tmp3371 = &param0->ITERATOR_TYPE;
org$frostlang$frostc$Type* $tmp3372 = *$tmp3371;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:678:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp3373 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3370))->name;
frost$core$String* $tmp3374 = *$tmp3373;
frost$core$String** $tmp3375 = &((org$frostlang$frostc$Symbol*) $tmp3372)->name;
frost$core$String* $tmp3376 = *$tmp3375;
frost$core$Bit $tmp3377 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3374, $tmp3376);
bool $tmp3378 = $tmp3377.value;
if ($tmp3378) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type$Kind* $tmp3379 = &((org$frostlang$frostc$Type*) $tmp3370)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3380 = *$tmp3379;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3381;
$tmp3381 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3381->value = $tmp3380;
org$frostlang$frostc$Type$Kind* $tmp3382 = &$tmp3372->typeKind;
org$frostlang$frostc$Type$Kind $tmp3383 = *$tmp3382;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3384;
$tmp3384 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3384->value = $tmp3383;
ITable* $tmp3385 = ((frost$core$Equatable*) $tmp3381)->$class->itable;
while ($tmp3385->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3385 = $tmp3385->next;
}
$fn3387 $tmp3386 = $tmp3385->methods[0];
frost$core$Bit $tmp3388 = $tmp3386(((frost$core$Equatable*) $tmp3381), ((frost$core$Equatable*) $tmp3384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3384)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3381)));
*(&local4) = $tmp3388;
goto block24;
block23:;
*(&local4) = $tmp3377;
goto block24;
block24:;
frost$core$Bit $tmp3389 = *(&local4);
bool $tmp3390 = $tmp3389.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3370);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
if ($tmp3390) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:679
$fn3392 $tmp3391 = ($fn3392) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3393 = $tmp3391(param4);
org$frostlang$frostc$IR$Value* $tmp3394 = *(&local0);
org$frostlang$frostc$Type* $tmp3395 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:679:52
org$frostlang$frostc$Type** $tmp3396 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3397 = *$tmp3396;
ITable* $tmp3398 = ((frost$core$Equatable*) $tmp3395)->$class->itable;
while ($tmp3398->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3398 = $tmp3398->next;
}
$fn3400 $tmp3399 = $tmp3398->methods[1];
frost$core$Bit $tmp3401 = $tmp3399(((frost$core$Equatable*) $tmp3395), ((frost$core$Equatable*) $tmp3397));
bool $tmp3402 = $tmp3401.value;
if ($tmp3402) goto block26; else goto block27;
block27:;
frost$core$Int $tmp3403 = (frost$core$Int) {4101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3404, $tmp3403, &$s3405);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4102
frost$core$Bit $tmp3406 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp3407 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp3393, $tmp3394, $tmp3395, $tmp3406);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
org$frostlang$frostc$IR$Value* $tmp3408 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
*(&local5) = $tmp3407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:680
org$frostlang$frostc$IR$Value* $tmp3409 = *(&local5);
frost$core$Bit $tmp3410 = (frost$core$Bit) {$tmp3409 == NULL};
bool $tmp3411 = $tmp3410.value;
if ($tmp3411) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:681
org$frostlang$frostc$IR$Value* $tmp3412 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3412));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3350);
org$frostlang$frostc$Type* $tmp3413 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3413));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
org$frostlang$frostc$IR$Value* $tmp3414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:683
org$frostlang$frostc$IR$Value* $tmp3415 = *(&local5);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3415, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:684
org$frostlang$frostc$IR$Value* $tmp3416 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3350);
org$frostlang$frostc$Type* $tmp3417 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
org$frostlang$frostc$IR$Value* $tmp3418 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:686
org$frostlang$frostc$Type* $tmp3419 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3420 = &$tmp3419->typeKind;
org$frostlang$frostc$Type$Kind $tmp3421 = *$tmp3420;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3422;
$tmp3422 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3422->value = $tmp3421;
frost$core$Int $tmp3423 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:686:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3424 = &(&local7)->$rawValue;
*$tmp3424 = $tmp3423;
org$frostlang$frostc$Type$Kind $tmp3425 = *(&local7);
*(&local6) = $tmp3425;
org$frostlang$frostc$Type$Kind $tmp3426 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3427;
$tmp3427 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3427->value = $tmp3426;
ITable* $tmp3428 = ((frost$core$Equatable*) $tmp3422)->$class->itable;
while ($tmp3428->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3428 = $tmp3428->next;
}
$fn3430 $tmp3429 = $tmp3428->methods[0];
frost$core$Bit $tmp3431 = $tmp3429(((frost$core$Equatable*) $tmp3422), ((frost$core$Equatable*) $tmp3427));
bool $tmp3432 = $tmp3431.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3427)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3422)));
if ($tmp3432) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Type* $tmp3433 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:686:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3434 = &$tmp3433->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3435 = *$tmp3434;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
frost$core$Int $tmp3436 = (frost$core$Int) {0u};
frost$core$Object* $tmp3437 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3435, $tmp3436);
org$frostlang$frostc$Type** $tmp3438 = &param0->ITERABLE_TYPE;
org$frostlang$frostc$Type* $tmp3439 = *$tmp3438;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:686:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp3440 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3437))->name;
frost$core$String* $tmp3441 = *$tmp3440;
frost$core$String** $tmp3442 = &((org$frostlang$frostc$Symbol*) $tmp3439)->name;
frost$core$String* $tmp3443 = *$tmp3442;
frost$core$Bit $tmp3444 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3441, $tmp3443);
bool $tmp3445 = $tmp3444.value;
if ($tmp3445) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Type$Kind* $tmp3446 = &((org$frostlang$frostc$Type*) $tmp3437)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3447 = *$tmp3446;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3448;
$tmp3448 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3448->value = $tmp3447;
org$frostlang$frostc$Type$Kind* $tmp3449 = &$tmp3439->typeKind;
org$frostlang$frostc$Type$Kind $tmp3450 = *$tmp3449;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3451;
$tmp3451 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3451->value = $tmp3450;
ITable* $tmp3452 = ((frost$core$Equatable*) $tmp3448)->$class->itable;
while ($tmp3452->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3452 = $tmp3452->next;
}
$fn3454 $tmp3453 = $tmp3452->methods[0];
frost$core$Bit $tmp3455 = $tmp3453(((frost$core$Equatable*) $tmp3448), ((frost$core$Equatable*) $tmp3451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3451)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3448)));
*(&local8) = $tmp3455;
goto block38;
block37:;
*(&local8) = $tmp3444;
goto block38;
block38:;
frost$core$Bit $tmp3456 = *(&local8);
bool $tmp3457 = $tmp3456.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3437);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
if ($tmp3457) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:687
$fn3459 $tmp3458 = ($fn3459) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3460 = $tmp3458(param4);
org$frostlang$frostc$IR$Value* $tmp3461 = *(&local0);
org$frostlang$frostc$Type* $tmp3462 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:687:52
org$frostlang$frostc$Type** $tmp3463 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3464 = *$tmp3463;
ITable* $tmp3465 = ((frost$core$Equatable*) $tmp3462)->$class->itable;
while ($tmp3465->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3465 = $tmp3465->next;
}
$fn3467 $tmp3466 = $tmp3465->methods[1];
frost$core$Bit $tmp3468 = $tmp3466(((frost$core$Equatable*) $tmp3462), ((frost$core$Equatable*) $tmp3464));
bool $tmp3469 = $tmp3468.value;
if ($tmp3469) goto block40; else goto block41;
block41:;
frost$core$Int $tmp3470 = (frost$core$Int) {4101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3471, $tmp3470, &$s3472);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4102
frost$core$Bit $tmp3473 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp3474 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp3460, $tmp3461, $tmp3462, $tmp3473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
org$frostlang$frostc$IR$Value* $tmp3475 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
*(&local9) = $tmp3474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:688
org$frostlang$frostc$IR$Value* $tmp3476 = *(&local9);
frost$core$Bit $tmp3477 = (frost$core$Bit) {$tmp3476 == NULL};
bool $tmp3478 = $tmp3477.value;
if ($tmp3478) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:689
org$frostlang$frostc$IR$Value* $tmp3479 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3479));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3350);
org$frostlang$frostc$Type* $tmp3480 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
org$frostlang$frostc$IR$Value* $tmp3481 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:691
org$frostlang$frostc$IR$Value* $tmp3482 = *(&local9);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3483 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3483);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3484 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3485 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3484, $tmp3485);
org$frostlang$frostc$IR$Value* $tmp3486 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3482, &$s3487, ((frost$collections$ListView*) $tmp3483), $tmp3484);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
org$frostlang$frostc$IR$Value* $tmp3488 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
*(&local10) = $tmp3486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:693
org$frostlang$frostc$IR$Value* $tmp3489 = *(&local10);
frost$core$Bit $tmp3490 = (frost$core$Bit) {$tmp3489 != NULL};
bool $tmp3491 = $tmp3490.value;
if ($tmp3491) goto block44; else goto block45;
block45:;
frost$core$Int $tmp3492 = (frost$core$Int) {693u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3493, $tmp3492);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:694
org$frostlang$frostc$IR$Value* $tmp3494 = *(&local10);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3494, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:695
org$frostlang$frostc$IR$Value* $tmp3495 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3496 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3350);
org$frostlang$frostc$Type* $tmp3497 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3497));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
org$frostlang$frostc$IR$Value* $tmp3498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block31:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3350);
org$frostlang$frostc$Type* $tmp3499 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3499));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:698
$fn3501 $tmp3500 = ($fn3501) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3502 = $tmp3500(param4);
org$frostlang$frostc$IR$Value* $tmp3503 = *(&local0);
$fn3505 $tmp3504 = ($fn3505) $tmp3503->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3506 = $tmp3504($tmp3503);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:699:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3508 $tmp3507 = ($fn3508) ((frost$core$Object*) $tmp3506)->$class->vtable[0];
frost$core$String* $tmp3509 = $tmp3507(((frost$core$Object*) $tmp3506));
frost$core$String* $tmp3510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3511, $tmp3509);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3509));
frost$core$String* $tmp3512 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3510, &$s3513);
frost$core$String* $tmp3514 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3515, $tmp3512);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3502, $tmp3514);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3506));
goto block8;
block8:;
org$frostlang$frostc$IR$Value* $tmp3516 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$statement$For$init(org$frostlang$frostc$statement$For* param0) {

return;

}
void org$frostlang$frostc$statement$For$cleanup(org$frostlang$frostc$statement$For* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:21
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

