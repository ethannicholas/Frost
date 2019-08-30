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
typedef frost$core$Bit (*$fn49)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn89)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn118)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn122)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn134)(frost$core$Object*);
typedef frost$core$Bit (*$fn157)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn186)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn209)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn232)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn255)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn273)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn302)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn325)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn348)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn371)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn394)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn407)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn438)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn460)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn482)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn489)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn505)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn526)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn536)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn548)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn554)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn565)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn576)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn614)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn639)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn642)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn645)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn661)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn692)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn703)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn706)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn709)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn725)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn755)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn758)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn787)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn805)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn831)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn836)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn841)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn846)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn851)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn869)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn874)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn905)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn910)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn941)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn946)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn949)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn953)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn958)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn970)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn981)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn986)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn989)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1002)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn1040)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1063)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1086)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1109)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1132)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1151)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1156)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1166)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1171)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1202)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1207)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1238)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1243)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1281)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1288)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1293)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1319)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1331)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1337)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn1348)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1359)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1407)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1415)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1428)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn1452)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1455)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1458)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1474)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1506)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn1517)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1520)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1523)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1539)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1570)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1573)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1579)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1597)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1616)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1626)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1649)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1672)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1695)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1718)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1752)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1770)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1795)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1798)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1806)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1811)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1816)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1821)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1826)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1893)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1898)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1901)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1906)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1916)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1921)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1952)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1957)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1988)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1993)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1996)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2001)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2011)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2016)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2047)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2052)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2083)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2088)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2091)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2095)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2100)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2116)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2127)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2132)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2135)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2148)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2161)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2166)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2176)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2181)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2202)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2225)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2248)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2271)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2294)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2313)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2318)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2328)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2333)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2364)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2369)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2400)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2405)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2433)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2456)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2479)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2502)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2525)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2544)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2549)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2559)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2564)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2595)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2600)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2631)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2636)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2667)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2674)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2679)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2716)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2754)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn2759)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn2768)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2788)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2792)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2813)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2819)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2851)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2857)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn2882)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn2885)(frost$core$Object*);
typedef frost$core$Bit (*$fn2913)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3014)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3020)(frost$core$Object*);
typedef frost$core$String* (*$fn3045)(frost$core$Object*);
typedef frost$core$Bit (*$fn3137)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3189)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3242)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3247)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3252)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn3262)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3274)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3278)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3305)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3317)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3322)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3346)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3351)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3361)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3404)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3408)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3413)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3423)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3434)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3439)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3461)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3470)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3480)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3485)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3489)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3494)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3508)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3537)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3542)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3550)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3580)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3609)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3614)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3622)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3656)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn3660)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn3663)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 34, 8035563818917771412, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, -3848379638281795678, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -3818102238453651865, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, -8243849900526105723, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, 2895801343972463081, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s652 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s729 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 6004887031425356233, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, -6773890575270984264, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, -5757260016675641217, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 7819478318269437571, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 862953121163133953, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s894 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s924 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s991 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 4129098721710860897, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s1029 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -2517180725123787287, NULL };
static frost$core$String $s1158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 371504587453742575, NULL };
static frost$core$String $s1185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s1260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -1657626740712006728, NULL };
static frost$core$String $s1376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s1544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s1610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s1749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 6004887031425356233, NULL };
static frost$core$String $s1813 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, -6773890575270984264, NULL };
static frost$core$String $s1818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, -5757260016675641217, NULL };
static frost$core$String $s1823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, 6835485881888488082, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 3156828070342271752, NULL };
static frost$core$String $s1841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s1867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s1879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, -3266654702256079504, NULL };
static frost$core$String $s1908 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, -1544085282621682558, NULL };
static frost$core$String $s1935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s1941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1977 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1998 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 1700389036629462354, NULL };
static frost$core$String $s2003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, -1590985972706820336, NULL };
static frost$core$String $s2030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2066 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 4129098721710860897, NULL };
static frost$core$String $s2158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, -9175798345561453926, NULL };
static frost$core$String $s2168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, 1352989231191166944, NULL };
static frost$core$String $s2192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, 8914406012094469804, NULL };
static frost$core$String $s2320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, 8797429780311193770, NULL };
static frost$core$String $s2347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, 583162507237697254, NULL };
static frost$core$String $s2551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -8356613504536380376, NULL };
static frost$core$String $s2578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s2655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s2729 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s2733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2740 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x6f\x72\x27\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x72\x61\x6e\x67\x65\x20\x27", 45, -6193764283733493999, NULL };
static frost$core$String $s2764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20", 3, -6196166834438432699, NULL };
static frost$core$String $s2766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x72\x61\x6e\x67\x65\x73\x20\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x62\x6f\x74\x68\x20\x73\x74\x61\x72\x74\x20\x61\x6e\x64\x20\x65\x6e\x64", 43, 7049180602675478362, NULL };
static frost$core$String $s2799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s2888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s2890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s2892 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, -5635255732749358298, NULL };
static frost$core$String $s2921 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2922 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s2964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, -4445134852680863373, NULL };
static frost$core$String $s3025 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s3048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, -4606220905787087156, NULL };
static frost$core$String $s3100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s3175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, -2208379357949812030, NULL };
static frost$core$String $s3249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 415422786092736210, NULL };
static frost$core$String $s3254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 4826375230611455343, NULL };
static frost$core$String $s3285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, -5672273796004150040, NULL };
static frost$core$String $s3368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, -1931643216358674392, NULL };
static frost$core$String $s3466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s3517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s3555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s3589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s3627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s3642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -1037217257710868414, NULL };
static frost$core$String $s3648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, -8670400631145364674, NULL };
static frost$core$String $s3668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -1132365909717631325, NULL };

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
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16 != NULL};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block5; else goto block6;
block6:;
frost$core$Int $tmp19 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Int $tmp22 = (frost$core$Int) {0u};
frost$core$Object* $tmp23 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp16, $tmp22);
frost$core$Bit $tmp24 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, ((org$frostlang$frostc$Type*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
return $tmp24;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:28
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp25 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp26 = *$tmp25;
frost$core$Bit $tmp27 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp26, &$s28);
bool $tmp29 = $tmp27.value;
if ($tmp29) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:29
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp30 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp31 = *$tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31 != NULL};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block11; else goto block12;
block12:;
frost$core$Int $tmp34 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, $tmp34, &$s36);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Int $tmp37 = (frost$core$Int) {1u};
frost$core$Object* $tmp38 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp31, $tmp37);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:29:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp39 = &((org$frostlang$frostc$Type*) $tmp38)->typeKind;
org$frostlang$frostc$Type$Kind $tmp40 = *$tmp39;
org$frostlang$frostc$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp41->value = $tmp40;
frost$core$Int $tmp42 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp43 = &(&local4)->$rawValue;
*$tmp43 = $tmp42;
org$frostlang$frostc$Type$Kind $tmp44 = *(&local4);
*(&local3) = $tmp44;
org$frostlang$frostc$Type$Kind $tmp45 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp46;
$tmp46 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp46->value = $tmp45;
ITable* $tmp47 = ((frost$core$Equatable*) $tmp41)->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[1];
frost$core$Bit $tmp50 = $tmp48(((frost$core$Equatable*) $tmp41), ((frost$core$Equatable*) $tmp46));
bool $tmp51 = $tmp50.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp46)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp41)));
if ($tmp51) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp38)));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp38)));
goto block13;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp52 = &((org$frostlang$frostc$Type*) $tmp38)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp53 = *$tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53 != NULL};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block18; else goto block19;
block19:;
frost$core$Int $tmp56 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s57, $tmp56, &$s58);
abort(); // unreachable
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Int $tmp59 = (frost$core$Int) {0u};
frost$core$Object* $tmp60 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp53, $tmp59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp60)));
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp60)));
goto block13;
block13:;
org$frostlang$frostc$Type* $tmp61 = *(&local2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$Type* $tmp62 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local5) = $tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:30
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:30:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp63 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp64 = *$tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64 != NULL};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block21; else goto block22;
block22:;
frost$core$Int $tmp67 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Int $tmp70 = (frost$core$Int) {2u};
frost$core$Object* $tmp71 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp64, $tmp70);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp71)));
org$frostlang$frostc$Type* $tmp72 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local6) = ((org$frostlang$frostc$Type*) $tmp71);
frost$core$Frost$unref$frost$core$Object$Q($tmp71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:31
org$frostlang$frostc$Type* $tmp73 = *(&local5);
org$frostlang$frostc$Type* $tmp74 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:31:22
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp75 = &((org$frostlang$frostc$Symbol*) $tmp73)->name;
frost$core$String* $tmp76 = *$tmp75;
frost$core$String** $tmp77 = &((org$frostlang$frostc$Symbol*) $tmp74)->name;
frost$core$String* $tmp78 = *$tmp77;
frost$core$Bit $tmp79 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp76, $tmp78);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp81 = &$tmp73->typeKind;
org$frostlang$frostc$Type$Kind $tmp82 = *$tmp81;
org$frostlang$frostc$Type$Kind$wrapper* $tmp83;
$tmp83 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp83->value = $tmp82;
org$frostlang$frostc$Type$Kind* $tmp84 = &$tmp74->typeKind;
org$frostlang$frostc$Type$Kind $tmp85 = *$tmp84;
org$frostlang$frostc$Type$Kind$wrapper* $tmp86;
$tmp86 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp86->value = $tmp85;
ITable* $tmp87 = ((frost$core$Equatable*) $tmp83)->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
frost$core$Bit $tmp90 = $tmp88(((frost$core$Equatable*) $tmp83), ((frost$core$Equatable*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp86)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp83)));
*(&local7) = $tmp90;
goto block28;
block27:;
*(&local7) = $tmp79;
goto block28;
block28:;
frost$core$Bit $tmp91 = *(&local7);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:32
frost$core$Bit $tmp93 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp94 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp95 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp96 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
return $tmp93;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:34
org$frostlang$frostc$Type* $tmp97 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from For.frost:34:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp98 = &((org$frostlang$frostc$Symbol*) $tmp97)->name;
frost$core$String* $tmp99 = *$tmp98;
frost$core$Bit $tmp100 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp99, &$s101);
bool $tmp102 = $tmp100.value;
if ($tmp102) goto block32; else goto block30;
block32:;
org$frostlang$frostc$Type* $tmp103 = *(&local6);
frost$core$String** $tmp104 = &((org$frostlang$frostc$Symbol*) $tmp103)->name;
frost$core$String* $tmp105 = *$tmp104;
frost$core$Bit $tmp106 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp105, &$s107);
bool $tmp108 = $tmp106.value;
if ($tmp108) goto block31; else goto block30;
block31:;
org$frostlang$frostc$Type* $tmp109 = *(&local5);
frost$core$String** $tmp110 = &((org$frostlang$frostc$Symbol*) $tmp109)->name;
frost$core$String* $tmp111 = *$tmp110;
org$frostlang$frostc$Type* $tmp112 = *(&local6);
frost$core$String** $tmp113 = &((org$frostlang$frostc$Symbol*) $tmp112)->name;
frost$core$String* $tmp114 = *$tmp113;
// begin inline call to function frost.core.String.get_length():frost.core.Int from For.frost:35:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp116 = ((frost$collections$Iterable*) &$s115)->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[0];
frost$collections$Iterator* $tmp119 = $tmp117(((frost$collections$Iterable*) &$s115));
ITable* $tmp120 = $tmp119->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[2];
frost$core$Int $tmp123 = $tmp121($tmp119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Bit $tmp124 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp125 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp123, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp124);
frost$core$String* $tmp126 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp114, $tmp125);
frost$core$Bit $tmp127 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp111, $tmp126);
bool $tmp128 = $tmp127.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
if ($tmp128) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:36
frost$core$Bit $tmp129 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp130 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp131 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp132 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
return $tmp129;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:38
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:38:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn134 $tmp133 = ($fn134) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp135 = $tmp133(((frost$core$Object*) param2));
frost$core$String* $tmp136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s137, $tmp135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp136, &$s139);
frost$core$String* $tmp140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp138, &$s141);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:40
frost$core$Bit $tmp142 = (frost$core$Bit) {false};
org$frostlang$frostc$Type* $tmp143 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp144 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
return $tmp142;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:42
frost$core$Bit $tmp146 = (frost$core$Bit) {true};
return $tmp146;

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
org$frostlang$frostc$Type$Kind* $tmp147 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp148 = *$tmp147;
org$frostlang$frostc$Type$Kind$wrapper* $tmp149;
$tmp149 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp149->value = $tmp148;
frost$core$Int $tmp150 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp151 = &(&local2)->$rawValue;
*$tmp151 = $tmp150;
org$frostlang$frostc$Type$Kind $tmp152 = *(&local2);
*(&local1) = $tmp152;
org$frostlang$frostc$Type$Kind $tmp153 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp154;
$tmp154 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp154->value = $tmp153;
ITable* $tmp155 = ((frost$core$Equatable*) $tmp149)->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[1];
frost$core$Bit $tmp158 = $tmp156(((frost$core$Equatable*) $tmp149), ((frost$core$Equatable*) $tmp154));
bool $tmp159 = $tmp158.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp154)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp149)));
if ($tmp159) goto block2; else goto block3;
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
org$frostlang$frostc$FixedArray** $tmp160 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp161 = *$tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161 != NULL};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block6; else goto block7;
block7:;
frost$core$Int $tmp164 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$Int $tmp167 = (frost$core$Int) {0u};
frost$core$Object* $tmp168 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp161, $tmp167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp168)));
frost$core$Frost$unref$frost$core$Object$Q($tmp168);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp168);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp168)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp169 = *(&local0);
org$frostlang$frostc$Type** $tmp170 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp171 = *$tmp170;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp172 = &((org$frostlang$frostc$Symbol*) $tmp169)->name;
frost$core$String* $tmp173 = *$tmp172;
frost$core$String** $tmp174 = &((org$frostlang$frostc$Symbol*) $tmp171)->name;
frost$core$String* $tmp175 = *$tmp174;
frost$core$Bit $tmp176 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp173, $tmp175);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp178 = &$tmp169->typeKind;
org$frostlang$frostc$Type$Kind $tmp179 = *$tmp178;
org$frostlang$frostc$Type$Kind$wrapper* $tmp180;
$tmp180 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp180->value = $tmp179;
org$frostlang$frostc$Type$Kind* $tmp181 = &$tmp171->typeKind;
org$frostlang$frostc$Type$Kind $tmp182 = *$tmp181;
org$frostlang$frostc$Type$Kind$wrapper* $tmp183;
$tmp183 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp183->value = $tmp182;
ITable* $tmp184 = ((frost$core$Equatable*) $tmp180)->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp184 = $tmp184->next;
}
$fn186 $tmp185 = $tmp184->methods[0];
frost$core$Bit $tmp187 = $tmp185(((frost$core$Equatable*) $tmp180), ((frost$core$Equatable*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp183)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp180)));
*(&local3) = $tmp187;
goto block14;
block13:;
*(&local3) = $tmp176;
goto block14;
block14:;
frost$core$Bit $tmp188 = *(&local3);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:49
org$frostlang$frostc$Type** $tmp190 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp191 = *$tmp190;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$Type* $tmp192 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp191;
block10:;
org$frostlang$frostc$Type** $tmp193 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp194 = *$tmp193;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:50:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp195 = &((org$frostlang$frostc$Symbol*) $tmp169)->name;
frost$core$String* $tmp196 = *$tmp195;
frost$core$String** $tmp197 = &((org$frostlang$frostc$Symbol*) $tmp194)->name;
frost$core$String* $tmp198 = *$tmp197;
frost$core$Bit $tmp199 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp196, $tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type$Kind* $tmp201 = &$tmp169->typeKind;
org$frostlang$frostc$Type$Kind $tmp202 = *$tmp201;
org$frostlang$frostc$Type$Kind$wrapper* $tmp203;
$tmp203 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp203->value = $tmp202;
org$frostlang$frostc$Type$Kind* $tmp204 = &$tmp194->typeKind;
org$frostlang$frostc$Type$Kind $tmp205 = *$tmp204;
org$frostlang$frostc$Type$Kind$wrapper* $tmp206;
$tmp206 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp206->value = $tmp205;
ITable* $tmp207 = ((frost$core$Equatable*) $tmp203)->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp207 = $tmp207->next;
}
$fn209 $tmp208 = $tmp207->methods[0];
frost$core$Bit $tmp210 = $tmp208(((frost$core$Equatable*) $tmp203), ((frost$core$Equatable*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp206)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp203)));
*(&local4) = $tmp210;
goto block20;
block19:;
*(&local4) = $tmp199;
goto block20;
block20:;
frost$core$Bit $tmp211 = *(&local4);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:50
org$frostlang$frostc$Type** $tmp213 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp214 = *$tmp213;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$Type* $tmp215 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp214;
block16:;
org$frostlang$frostc$Type** $tmp216 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp217 = *$tmp216;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:51:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp218 = &((org$frostlang$frostc$Symbol*) $tmp169)->name;
frost$core$String* $tmp219 = *$tmp218;
frost$core$String** $tmp220 = &((org$frostlang$frostc$Symbol*) $tmp217)->name;
frost$core$String* $tmp221 = *$tmp220;
frost$core$Bit $tmp222 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp219, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp224 = &$tmp169->typeKind;
org$frostlang$frostc$Type$Kind $tmp225 = *$tmp224;
org$frostlang$frostc$Type$Kind$wrapper* $tmp226;
$tmp226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp226->value = $tmp225;
org$frostlang$frostc$Type$Kind* $tmp227 = &$tmp217->typeKind;
org$frostlang$frostc$Type$Kind $tmp228 = *$tmp227;
org$frostlang$frostc$Type$Kind$wrapper* $tmp229;
$tmp229 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp229->value = $tmp228;
ITable* $tmp230 = ((frost$core$Equatable*) $tmp226)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$core$Bit $tmp233 = $tmp231(((frost$core$Equatable*) $tmp226), ((frost$core$Equatable*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp229)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp226)));
*(&local5) = $tmp233;
goto block26;
block25:;
*(&local5) = $tmp222;
goto block26;
block26:;
frost$core$Bit $tmp234 = *(&local5);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:51
org$frostlang$frostc$Type** $tmp236 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp237 = *$tmp236;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$Type* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp237;
block22:;
org$frostlang$frostc$Type** $tmp239 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp240 = *$tmp239;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:52:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp241 = &((org$frostlang$frostc$Symbol*) $tmp169)->name;
frost$core$String* $tmp242 = *$tmp241;
frost$core$String** $tmp243 = &((org$frostlang$frostc$Symbol*) $tmp240)->name;
frost$core$String* $tmp244 = *$tmp243;
frost$core$Bit $tmp245 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp242, $tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Type$Kind* $tmp247 = &$tmp169->typeKind;
org$frostlang$frostc$Type$Kind $tmp248 = *$tmp247;
org$frostlang$frostc$Type$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp249->value = $tmp248;
org$frostlang$frostc$Type$Kind* $tmp250 = &$tmp240->typeKind;
org$frostlang$frostc$Type$Kind $tmp251 = *$tmp250;
org$frostlang$frostc$Type$Kind$wrapper* $tmp252;
$tmp252 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp252->value = $tmp251;
ITable* $tmp253 = ((frost$core$Equatable*) $tmp249)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
frost$core$Bit $tmp256 = $tmp254(((frost$core$Equatable*) $tmp249), ((frost$core$Equatable*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp252)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp249)));
*(&local6) = $tmp256;
goto block32;
block31:;
*(&local6) = $tmp245;
goto block32;
block32:;
frost$core$Bit $tmp257 = *(&local6);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:52
org$frostlang$frostc$Type** $tmp259 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp260 = *$tmp259;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$Type* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp260;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$Type* $tmp262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
goto block33;
block33:;

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
org$frostlang$frostc$Type$Kind* $tmp263 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp264 = *$tmp263;
org$frostlang$frostc$Type$Kind$wrapper* $tmp265;
$tmp265 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp265->value = $tmp264;
frost$core$Int $tmp266 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp267 = &(&local2)->$rawValue;
*$tmp267 = $tmp266;
org$frostlang$frostc$Type$Kind $tmp268 = *(&local2);
*(&local1) = $tmp268;
org$frostlang$frostc$Type$Kind $tmp269 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp270->value = $tmp269;
ITable* $tmp271 = ((frost$core$Equatable*) $tmp265)->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[1];
frost$core$Bit $tmp274 = $tmp272(((frost$core$Equatable*) $tmp265), ((frost$core$Equatable*) $tmp270));
bool $tmp275 = $tmp274.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp270)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp265)));
if ($tmp275) goto block2; else goto block3;
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
org$frostlang$frostc$FixedArray** $tmp276 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp277 = *$tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277 != NULL};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block6; else goto block7;
block7:;
frost$core$Int $tmp280 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s281, $tmp280, &$s282);
abort(); // unreachable
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Int $tmp283 = (frost$core$Int) {0u};
frost$core$Object* $tmp284 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp277, $tmp283);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp284)));
frost$core$Frost$unref$frost$core$Object$Q($tmp284);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp284);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp284)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp285 = *(&local0);
org$frostlang$frostc$Type** $tmp286 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp287 = *$tmp286;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp288 = &((org$frostlang$frostc$Symbol*) $tmp285)->name;
frost$core$String* $tmp289 = *$tmp288;
frost$core$String** $tmp290 = &((org$frostlang$frostc$Symbol*) $tmp287)->name;
frost$core$String* $tmp291 = *$tmp290;
frost$core$Bit $tmp292 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp289, $tmp291);
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp294 = &$tmp285->typeKind;
org$frostlang$frostc$Type$Kind $tmp295 = *$tmp294;
org$frostlang$frostc$Type$Kind$wrapper* $tmp296;
$tmp296 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp296->value = $tmp295;
org$frostlang$frostc$Type$Kind* $tmp297 = &$tmp287->typeKind;
org$frostlang$frostc$Type$Kind $tmp298 = *$tmp297;
org$frostlang$frostc$Type$Kind$wrapper* $tmp299;
$tmp299 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp299->value = $tmp298;
ITable* $tmp300 = ((frost$core$Equatable*) $tmp296)->$class->itable;
while ($tmp300->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp300 = $tmp300->next;
}
$fn302 $tmp301 = $tmp300->methods[0];
frost$core$Bit $tmp303 = $tmp301(((frost$core$Equatable*) $tmp296), ((frost$core$Equatable*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp299)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp296)));
*(&local3) = $tmp303;
goto block14;
block13:;
*(&local3) = $tmp292;
goto block14;
block14:;
frost$core$Bit $tmp304 = *(&local3);
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp306 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp307 = *$tmp306;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Type* $tmp308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp307;
block10:;
org$frostlang$frostc$Type** $tmp309 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp310 = *$tmp309;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp311 = &((org$frostlang$frostc$Symbol*) $tmp285)->name;
frost$core$String* $tmp312 = *$tmp311;
frost$core$String** $tmp313 = &((org$frostlang$frostc$Symbol*) $tmp310)->name;
frost$core$String* $tmp314 = *$tmp313;
frost$core$Bit $tmp315 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp312, $tmp314);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type$Kind* $tmp317 = &$tmp285->typeKind;
org$frostlang$frostc$Type$Kind $tmp318 = *$tmp317;
org$frostlang$frostc$Type$Kind$wrapper* $tmp319;
$tmp319 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp319->value = $tmp318;
org$frostlang$frostc$Type$Kind* $tmp320 = &$tmp310->typeKind;
org$frostlang$frostc$Type$Kind $tmp321 = *$tmp320;
org$frostlang$frostc$Type$Kind$wrapper* $tmp322;
$tmp322 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp322->value = $tmp321;
ITable* $tmp323 = ((frost$core$Equatable*) $tmp319)->$class->itable;
while ($tmp323->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp323 = $tmp323->next;
}
$fn325 $tmp324 = $tmp323->methods[0];
frost$core$Bit $tmp326 = $tmp324(((frost$core$Equatable*) $tmp319), ((frost$core$Equatable*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp322)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp319)));
*(&local4) = $tmp326;
goto block20;
block19:;
*(&local4) = $tmp315;
goto block20;
block20:;
frost$core$Bit $tmp327 = *(&local4);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp329 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp330 = *$tmp329;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Type* $tmp331 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp330;
block16:;
org$frostlang$frostc$Type** $tmp332 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp333 = *$tmp332;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp334 = &((org$frostlang$frostc$Symbol*) $tmp285)->name;
frost$core$String* $tmp335 = *$tmp334;
frost$core$String** $tmp336 = &((org$frostlang$frostc$Symbol*) $tmp333)->name;
frost$core$String* $tmp337 = *$tmp336;
frost$core$Bit $tmp338 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp335, $tmp337);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp340 = &$tmp285->typeKind;
org$frostlang$frostc$Type$Kind $tmp341 = *$tmp340;
org$frostlang$frostc$Type$Kind$wrapper* $tmp342;
$tmp342 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp342->value = $tmp341;
org$frostlang$frostc$Type$Kind* $tmp343 = &$tmp333->typeKind;
org$frostlang$frostc$Type$Kind $tmp344 = *$tmp343;
org$frostlang$frostc$Type$Kind$wrapper* $tmp345;
$tmp345 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp345->value = $tmp344;
ITable* $tmp346 = ((frost$core$Equatable*) $tmp342)->$class->itable;
while ($tmp346->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp346 = $tmp346->next;
}
$fn348 $tmp347 = $tmp346->methods[0];
frost$core$Bit $tmp349 = $tmp347(((frost$core$Equatable*) $tmp342), ((frost$core$Equatable*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp345)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp342)));
*(&local5) = $tmp349;
goto block26;
block25:;
*(&local5) = $tmp338;
goto block26;
block26:;
frost$core$Bit $tmp350 = *(&local5);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp352 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp353 = *$tmp352;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Type* $tmp354 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp353;
block22:;
org$frostlang$frostc$Type** $tmp355 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp356 = *$tmp355;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp357 = &((org$frostlang$frostc$Symbol*) $tmp285)->name;
frost$core$String* $tmp358 = *$tmp357;
frost$core$String** $tmp359 = &((org$frostlang$frostc$Symbol*) $tmp356)->name;
frost$core$String* $tmp360 = *$tmp359;
frost$core$Bit $tmp361 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp358, $tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Type$Kind* $tmp363 = &$tmp285->typeKind;
org$frostlang$frostc$Type$Kind $tmp364 = *$tmp363;
org$frostlang$frostc$Type$Kind$wrapper* $tmp365;
$tmp365 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp365->value = $tmp364;
org$frostlang$frostc$Type$Kind* $tmp366 = &$tmp356->typeKind;
org$frostlang$frostc$Type$Kind $tmp367 = *$tmp366;
org$frostlang$frostc$Type$Kind$wrapper* $tmp368;
$tmp368 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp368->value = $tmp367;
ITable* $tmp369 = ((frost$core$Equatable*) $tmp365)->$class->itable;
while ($tmp369->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp369 = $tmp369->next;
}
$fn371 $tmp370 = $tmp369->methods[0];
frost$core$Bit $tmp372 = $tmp370(((frost$core$Equatable*) $tmp365), ((frost$core$Equatable*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp368)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp365)));
*(&local6) = $tmp372;
goto block32;
block31:;
*(&local6) = $tmp361;
goto block32;
block32:;
frost$core$Bit $tmp373 = *(&local6);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp375 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp376 = *$tmp375;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Type* $tmp377 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp376;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Type* $tmp378 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
goto block33;
block33:;

}
frost$collections$ListView* org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$IR$Value* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp379 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp380 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp379, $tmp380);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp381 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp382 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp383 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp381, $tmp382, $tmp383, param0);
frost$collections$Array$add$frost$collections$Array$T($tmp379, ((frost$core$Object*) $tmp381));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp379)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
return ((frost$collections$ListView*) $tmp379);

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
org$frostlang$frostc$Type$Kind* $tmp384 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp385 = *$tmp384;
org$frostlang$frostc$Type$Kind$wrapper* $tmp386;
$tmp386 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp386->value = $tmp385;
frost$core$Int $tmp387 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:78:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp388 = &(&local1)->$rawValue;
*$tmp388 = $tmp387;
org$frostlang$frostc$Type$Kind $tmp389 = *(&local1);
*(&local0) = $tmp389;
org$frostlang$frostc$Type$Kind $tmp390 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp391;
$tmp391 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp391->value = $tmp390;
ITable* $tmp392 = ((frost$core$Equatable*) $tmp386)->$class->itable;
while ($tmp392->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp392 = $tmp392->next;
}
$fn394 $tmp393 = $tmp392->methods[0];
frost$core$Bit $tmp395 = $tmp393(((frost$core$Equatable*) $tmp386), ((frost$core$Equatable*) $tmp391));
bool $tmp396 = $tmp395.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp391)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp386)));
if ($tmp396) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:79
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:79:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp397 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp398 = *$tmp397;
org$frostlang$frostc$Type$Kind$wrapper* $tmp399;
$tmp399 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp399->value = $tmp398;
frost$core$Int $tmp400 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp401 = &(&local4)->$rawValue;
*$tmp401 = $tmp400;
org$frostlang$frostc$Type$Kind $tmp402 = *(&local4);
*(&local3) = $tmp402;
org$frostlang$frostc$Type$Kind $tmp403 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp404;
$tmp404 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp404->value = $tmp403;
ITable* $tmp405 = ((frost$core$Equatable*) $tmp399)->$class->itable;
while ($tmp405->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp405 = $tmp405->next;
}
$fn407 $tmp406 = $tmp405->methods[1];
frost$core$Bit $tmp408 = $tmp406(((frost$core$Equatable*) $tmp399), ((frost$core$Equatable*) $tmp404));
bool $tmp409 = $tmp408.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp404)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp399)));
if ($tmp409) goto block5; else goto block6;
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
org$frostlang$frostc$FixedArray** $tmp410 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp411 = *$tmp410;
frost$core$Bit $tmp412 = (frost$core$Bit) {$tmp411 != NULL};
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block9; else goto block10;
block10:;
frost$core$Int $tmp414 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s415, $tmp414, &$s416);
abort(); // unreachable
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Int $tmp417 = (frost$core$Int) {0u};
frost$core$Object* $tmp418 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp411, $tmp417);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp418)));
frost$core$Frost$unref$frost$core$Object$Q($tmp418);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp418)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp419 = *(&local2);
org$frostlang$frostc$Type* $tmp420 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
org$frostlang$frostc$Type* $tmp421 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp420;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:81
org$frostlang$frostc$Type** $tmp422 = &param0->CHAR8_TYPE;
org$frostlang$frostc$Type* $tmp423 = *$tmp422;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:81:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp424 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp425 = *$tmp424;
frost$core$String** $tmp426 = &((org$frostlang$frostc$Symbol*) $tmp423)->name;
frost$core$String* $tmp427 = *$tmp426;
frost$core$Bit $tmp428 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp425, $tmp427);
bool $tmp429 = $tmp428.value;
if ($tmp429) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type$Kind* $tmp430 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp431 = *$tmp430;
org$frostlang$frostc$Type$Kind$wrapper* $tmp432;
$tmp432 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp432->value = $tmp431;
org$frostlang$frostc$Type$Kind* $tmp433 = &$tmp423->typeKind;
org$frostlang$frostc$Type$Kind $tmp434 = *$tmp433;
org$frostlang$frostc$Type$Kind$wrapper* $tmp435;
$tmp435 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp435->value = $tmp434;
ITable* $tmp436 = ((frost$core$Equatable*) $tmp432)->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp436 = $tmp436->next;
}
$fn438 $tmp437 = $tmp436->methods[0];
frost$core$Bit $tmp439 = $tmp437(((frost$core$Equatable*) $tmp432), ((frost$core$Equatable*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp435)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp432)));
*(&local5) = $tmp439;
goto block17;
block16:;
*(&local5) = $tmp428;
goto block17;
block17:;
frost$core$Bit $tmp440 = *(&local5);
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:82
org$frostlang$frostc$Type** $tmp442 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp443 = *$tmp442;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
return $tmp443;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:84
org$frostlang$frostc$Type** $tmp444 = &param0->CHAR16_TYPE;
org$frostlang$frostc$Type* $tmp445 = *$tmp444;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:84:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp446 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp447 = *$tmp446;
frost$core$String** $tmp448 = &((org$frostlang$frostc$Symbol*) $tmp445)->name;
frost$core$String* $tmp449 = *$tmp448;
frost$core$Bit $tmp450 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp447, $tmp449);
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type$Kind* $tmp452 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp453 = *$tmp452;
org$frostlang$frostc$Type$Kind$wrapper* $tmp454;
$tmp454 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp454->value = $tmp453;
org$frostlang$frostc$Type$Kind* $tmp455 = &$tmp445->typeKind;
org$frostlang$frostc$Type$Kind $tmp456 = *$tmp455;
org$frostlang$frostc$Type$Kind$wrapper* $tmp457;
$tmp457 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp457->value = $tmp456;
ITable* $tmp458 = ((frost$core$Equatable*) $tmp454)->$class->itable;
while ($tmp458->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp458 = $tmp458->next;
}
$fn460 $tmp459 = $tmp458->methods[0];
frost$core$Bit $tmp461 = $tmp459(((frost$core$Equatable*) $tmp454), ((frost$core$Equatable*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp457)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp454)));
*(&local6) = $tmp461;
goto block24;
block23:;
*(&local6) = $tmp450;
goto block24;
block24:;
frost$core$Bit $tmp462 = *(&local6);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:85
org$frostlang$frostc$Type** $tmp464 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp465 = *$tmp464;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
return $tmp465;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:87
org$frostlang$frostc$Type** $tmp466 = &param0->CHAR32_TYPE;
org$frostlang$frostc$Type* $tmp467 = *$tmp466;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:87:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp468 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp469 = *$tmp468;
frost$core$String** $tmp470 = &((org$frostlang$frostc$Symbol*) $tmp467)->name;
frost$core$String* $tmp471 = *$tmp470;
frost$core$Bit $tmp472 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp469, $tmp471);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Type$Kind* $tmp474 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp475 = *$tmp474;
org$frostlang$frostc$Type$Kind$wrapper* $tmp476;
$tmp476 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp476->value = $tmp475;
org$frostlang$frostc$Type$Kind* $tmp477 = &$tmp467->typeKind;
org$frostlang$frostc$Type$Kind $tmp478 = *$tmp477;
org$frostlang$frostc$Type$Kind$wrapper* $tmp479;
$tmp479 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp479->value = $tmp478;
ITable* $tmp480 = ((frost$core$Equatable*) $tmp476)->$class->itable;
while ($tmp480->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp480 = $tmp480->next;
}
$fn482 $tmp481 = $tmp480->methods[0];
frost$core$Bit $tmp483 = $tmp481(((frost$core$Equatable*) $tmp476), ((frost$core$Equatable*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp479)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp476)));
*(&local7) = $tmp483;
goto block31;
block30:;
*(&local7) = $tmp472;
goto block31;
block31:;
frost$core$Bit $tmp484 = *(&local7);
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block25; else goto block27;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:88
org$frostlang$frostc$Type** $tmp486 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp487 = *$tmp486;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
return $tmp487;
block27:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block26:;
goto block19;
block19:;
goto block12;
block12:;
goto block32;
block32:;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

frost$core$Bit local0;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:99
$fn489 $tmp488 = ($fn489) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp490 = $tmp488(param2);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:99:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp491 = &((org$frostlang$frostc$Symbol*) $tmp490)->name;
frost$core$String* $tmp492 = *$tmp491;
frost$core$String** $tmp493 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp494 = *$tmp493;
frost$core$Bit $tmp495 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp492, $tmp494);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind* $tmp497 = &$tmp490->typeKind;
org$frostlang$frostc$Type$Kind $tmp498 = *$tmp497;
org$frostlang$frostc$Type$Kind$wrapper* $tmp499;
$tmp499 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp499->value = $tmp498;
org$frostlang$frostc$Type$Kind* $tmp500 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp501 = *$tmp500;
org$frostlang$frostc$Type$Kind$wrapper* $tmp502;
$tmp502 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp502->value = $tmp501;
ITable* $tmp503 = ((frost$core$Equatable*) $tmp499)->$class->itable;
while ($tmp503->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[0];
frost$core$Bit $tmp506 = $tmp504(((frost$core$Equatable*) $tmp499), ((frost$core$Equatable*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp502)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp499)));
*(&local0) = $tmp506;
goto block6;
block5:;
*(&local0) = $tmp495;
goto block6;
block6:;
frost$core$Bit $tmp507 = *(&local0);
bool $tmp508 = $tmp507.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
if ($tmp508) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:102
org$frostlang$frostc$ClassDecl* $tmp509 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
org$frostlang$frostc$ClassDecl* $tmp510 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local1) = $tmp509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:103
org$frostlang$frostc$ClassDecl* $tmp511 = *(&local1);
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511 != NULL};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block7; else goto block8;
block8:;
frost$core$Int $tmp514 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s515, $tmp514);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:104
org$frostlang$frostc$IR** $tmp516 = &param0->ir;
org$frostlang$frostc$IR* $tmp517 = *$tmp516;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp518 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp519 = (frost$core$Int) {7u};
org$frostlang$frostc$ClassDecl* $tmp520 = *(&local1);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp521 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp522 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp521, $tmp522);
org$frostlang$frostc$IR$Value* $tmp523 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp521, ((frost$core$Object*) $tmp523));
org$frostlang$frostc$FixedArray* $tmp524 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp521);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp518, $tmp519, param1, $tmp520, $tmp524);
$fn526 $tmp525 = ($fn526) $tmp517->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp527 = $tmp525($tmp517, $tmp518);
*(&local2) = $tmp527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:106
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp528 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp529 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp530 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp528, $tmp529, $tmp530, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
org$frostlang$frostc$ClassDecl* $tmp531 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp528;

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
org$frostlang$frostc$IR** $tmp532 = &param0->ir;
org$frostlang$frostc$IR* $tmp533 = *$tmp532;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
org$frostlang$frostc$IR* $tmp534 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local0) = $tmp533;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:114
$fn536 $tmp535 = ($fn536) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp537 = $tmp535(param4);
org$frostlang$frostc$Type$Kind* $tmp538 = &$tmp537->typeKind;
org$frostlang$frostc$Type$Kind $tmp539 = *$tmp538;
org$frostlang$frostc$Type$Kind$wrapper* $tmp540;
$tmp540 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp540->value = $tmp539;
frost$core$Int $tmp541 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:114:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp542 = &(&local2)->$rawValue;
*$tmp542 = $tmp541;
org$frostlang$frostc$Type$Kind $tmp543 = *(&local2);
*(&local1) = $tmp543;
org$frostlang$frostc$Type$Kind $tmp544 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp545;
$tmp545 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp545->value = $tmp544;
ITable* $tmp546 = ((frost$core$Equatable*) $tmp540)->$class->itable;
while ($tmp546->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp546 = $tmp546->next;
}
$fn548 $tmp547 = $tmp546->methods[0];
frost$core$Bit $tmp549 = $tmp547(((frost$core$Equatable*) $tmp540), ((frost$core$Equatable*) $tmp545));
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block2; else goto block3;
block3:;
frost$core$Int $tmp551 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s552, $tmp551);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp545)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp540)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:115
$fn554 $tmp553 = ($fn554) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp555 = $tmp553(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:115:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp556 = &$tmp555->_subtypes;
org$frostlang$frostc$FixedArray* $tmp557 = *$tmp556;
frost$core$Bit $tmp558 = (frost$core$Bit) {$tmp557 != NULL};
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block5; else goto block6;
block6:;
frost$core$Int $tmp560 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s561, $tmp560, &$s562);
abort(); // unreachable
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
ITable* $tmp563 = ((frost$collections$CollectionView*) $tmp557)->$class->itable;
while ($tmp563->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp563 = $tmp563->next;
}
$fn565 $tmp564 = $tmp563->methods[0];
frost$core$Int $tmp566 = $tmp564(((frost$collections$CollectionView*) $tmp557));
frost$core$Int $tmp567 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:115:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567.value;
bool $tmp570 = $tmp568 == $tmp569;
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570};
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block8; else goto block9;
block9:;
frost$core$Int $tmp573 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s574, $tmp573);
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:116
$fn576 $tmp575 = ($fn576) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp577 = $tmp575(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:116:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp578 = &$tmp577->_subtypes;
org$frostlang$frostc$FixedArray* $tmp579 = *$tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579 != NULL};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block11; else goto block12;
block12:;
frost$core$Int $tmp582 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s583, $tmp582, &$s584);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Int $tmp585 = (frost$core$Int) {0u};
frost$core$Object* $tmp586 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp579, $tmp585);
frost$core$String** $tmp587 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp586))->name;
frost$core$String* $tmp588 = *$tmp587;
frost$core$Bit $tmp589 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp588, &$s590);
bool $tmp591 = $tmp589.value;
if ($tmp591) goto block13; else goto block14;
block14:;
frost$core$Int $tmp592 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s593, $tmp592);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp586);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:117
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:118
org$frostlang$frostc$Variable$Storage** $tmp594 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp595 = *$tmp594;
frost$core$Int* $tmp596 = &$tmp595->$rawValue;
frost$core$Int $tmp597 = *$tmp596;
frost$core$Int $tmp598 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:119:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp599 = $tmp597.value;
int64_t $tmp600 = $tmp598.value;
bool $tmp601 = $tmp599 == $tmp600;
frost$core$Bit $tmp602 = (frost$core$Bit) {$tmp601};
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block16; else goto block17;
block16:;
frost$core$Int* $tmp604 = (frost$core$Int*) ($tmp595->$data + 0);
frost$core$Int $tmp605 = *$tmp604;
*(&local4) = $tmp605;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:120
frost$core$Int $tmp606 = *(&local4);
*(&local3) = $tmp606;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:126
org$frostlang$frostc$Type** $tmp607 = &param3->type;
org$frostlang$frostc$Type* $tmp608 = *$tmp607;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
org$frostlang$frostc$Type* $tmp609 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local5) = $tmp608;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:127
org$frostlang$frostc$Type* $tmp610 = *(&local5);
org$frostlang$frostc$Type* $tmp611 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp610);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
org$frostlang$frostc$Type* $tmp612 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local6) = $tmp611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:129
$fn614 $tmp613 = ($fn614) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp615 = $tmp613(param4);
org$frostlang$frostc$ClassDecl* $tmp616 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp615);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
org$frostlang$frostc$ClassDecl* $tmp617 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local7) = $tmp616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:130
org$frostlang$frostc$ClassDecl* $tmp618 = *(&local7);
frost$core$Bit $tmp619 = (frost$core$Bit) {$tmp618 == NULL};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block19; else goto block20;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:123
frost$core$Int $tmp621 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s622, $tmp621);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:131
org$frostlang$frostc$ClassDecl* $tmp623 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp624 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp625 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp626 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:133
org$frostlang$frostc$ClassDecl* $tmp627 = *(&local7);
frost$collections$ListView* $tmp628 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp627);
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$collections$ListView* $tmp629 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local8) = $tmp628;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:136
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp630 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp631 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp632 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp633 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp634 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp635 = *(&local8);
frost$core$Int $tmp636 = (frost$core$Int) {0u};
ITable* $tmp637 = $tmp635->$class->itable;
while ($tmp637->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp637 = $tmp637->next;
}
$fn639 $tmp638 = $tmp637->methods[0];
frost$core$Object* $tmp640 = $tmp638($tmp635, $tmp636);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp633, $tmp634, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp640));
$fn642 $tmp641 = ($fn642) $tmp632->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp643 = $tmp641($tmp632, $tmp633);
$fn645 $tmp644 = ($fn645) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp646 = $tmp644(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:138:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp647 = &$tmp646->_subtypes;
org$frostlang$frostc$FixedArray* $tmp648 = *$tmp647;
frost$core$Bit $tmp649 = (frost$core$Bit) {$tmp648 != NULL};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block22; else goto block23;
block23:;
frost$core$Int $tmp651 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s652, $tmp651, &$s653);
abort(); // unreachable
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Int $tmp654 = (frost$core$Int) {1u};
frost$core$Object* $tmp655 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp648, $tmp654);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp630, $tmp631, $tmp643, ((org$frostlang$frostc$Type*) $tmp655));
org$frostlang$frostc$Type* $tmp656 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:136:54
org$frostlang$frostc$Type** $tmp657 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp658 = *$tmp657;
ITable* $tmp659 = ((frost$core$Equatable*) $tmp656)->$class->itable;
while ($tmp659->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp659 = $tmp659->next;
}
$fn661 $tmp660 = $tmp659->methods[1];
frost$core$Bit $tmp662 = $tmp660(((frost$core$Equatable*) $tmp656), ((frost$core$Equatable*) $tmp658));
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block25; else goto block26;
block26:;
frost$core$Int $tmp664 = (frost$core$Int) {4126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s665, $tmp664, &$s666);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4127
frost$core$Bit $tmp667 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp668 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp630, $tmp656, $tmp667);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
org$frostlang$frostc$Type* $tmp669 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp670 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp668, $tmp669);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
org$frostlang$frostc$IR$Value* $tmp671 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
*(&local9) = $tmp670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q($tmp655);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q($tmp640);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:139
org$frostlang$frostc$IR$Value* $tmp672 = *(&local9);
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672 == NULL};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:140
org$frostlang$frostc$IR$Value* $tmp675 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp676 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp677 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp678 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp679 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp680 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:144
org$frostlang$frostc$IR* $tmp681 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp682 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp683 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp684 = *(&local9);
org$frostlang$frostc$Type* $tmp685 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp686 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp684, $tmp685);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp687 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp688 = (frost$core$Int) {2u};
frost$core$Int $tmp689 = *(&local3);
org$frostlang$frostc$Type* $tmp690 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp687, $tmp688, $tmp689, $tmp690);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp682, $tmp683, param1, $tmp686, $tmp687);
$fn692 $tmp691 = ($fn692) $tmp681->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp693 = $tmp691($tmp681, $tmp682);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:148
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp694 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp695 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp696 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp697 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp698 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp699 = *(&local8);
frost$core$Int $tmp700 = (frost$core$Int) {1u};
ITable* $tmp701 = $tmp699->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[0];
frost$core$Object* $tmp704 = $tmp702($tmp699, $tmp700);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp697, $tmp698, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp704));
$fn706 $tmp705 = ($fn706) $tmp696->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp707 = $tmp705($tmp696, $tmp697);
$fn709 $tmp708 = ($fn709) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp710 = $tmp708(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:150:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp711 = &$tmp710->_subtypes;
org$frostlang$frostc$FixedArray* $tmp712 = *$tmp711;
frost$core$Bit $tmp713 = (frost$core$Bit) {$tmp712 != NULL};
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block30; else goto block31;
block31:;
frost$core$Int $tmp715 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s716, $tmp715, &$s717);
abort(); // unreachable
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Int $tmp718 = (frost$core$Int) {1u};
frost$core$Object* $tmp719 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp712, $tmp718);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp694, $tmp695, $tmp707, ((org$frostlang$frostc$Type*) $tmp719));
org$frostlang$frostc$Type* $tmp720 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:148:52
org$frostlang$frostc$Type** $tmp721 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp722 = *$tmp721;
ITable* $tmp723 = ((frost$core$Equatable*) $tmp720)->$class->itable;
while ($tmp723->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp723 = $tmp723->next;
}
$fn725 $tmp724 = $tmp723->methods[1];
frost$core$Bit $tmp726 = $tmp724(((frost$core$Equatable*) $tmp720), ((frost$core$Equatable*) $tmp722));
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block33; else goto block34;
block34:;
frost$core$Int $tmp728 = (frost$core$Int) {4126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s729, $tmp728, &$s730);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4127
frost$core$Bit $tmp731 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp732 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp694, $tmp720, $tmp731);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
org$frostlang$frostc$Type* $tmp733 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp734 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp732, $tmp733);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
org$frostlang$frostc$IR$Value* $tmp735 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local10) = $tmp734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q($tmp719);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q($tmp704);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:151
org$frostlang$frostc$IR$Value* $tmp736 = *(&local10);
frost$core$Bit $tmp737 = (frost$core$Bit) {$tmp736 == NULL};
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:152
org$frostlang$frostc$IR$Value* $tmp739 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp740 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp741 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp742 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp743 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp744 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:156
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp746 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp747 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp748 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp749 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp750 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp751 = *(&local8);
frost$core$Int $tmp752 = (frost$core$Int) {2u};
ITable* $tmp753 = $tmp751->$class->itable;
while ($tmp753->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[0];
frost$core$Object* $tmp756 = $tmp754($tmp751, $tmp752);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp749, $tmp750, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp756));
$fn758 $tmp757 = ($fn758) $tmp748->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp759 = $tmp757($tmp748, $tmp749);
org$frostlang$frostc$Type** $tmp760 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp761 = *$tmp760;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp746, $tmp747, $tmp759, $tmp761);
org$frostlang$frostc$IR$Value* $tmp762 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp746);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
org$frostlang$frostc$IR$Value* $tmp763 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local11) = $tmp762;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q($tmp756);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:159
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp764 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp765 = (frost$core$Int) {25u};
frost$core$UInt64 $tmp766 = (frost$core$UInt64) {1u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp764, $tmp765, param1, $tmp766);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp767 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp768 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp769 = *(&local6);
frost$core$Bit $tmp770 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp767, $tmp768, $tmp769, $tmp770);
org$frostlang$frostc$IR$Value* $tmp771 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp764, $tmp767);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
org$frostlang$frostc$IR$Value* $tmp772 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local12) = $tmp771;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:161
org$frostlang$frostc$IR$Value* $tmp773 = *(&local12);
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773 == NULL};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:162
org$frostlang$frostc$IR$Value* $tmp776 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp777 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp778 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp779 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp780 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp781 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp782 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp783 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp784 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:164
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:165
org$frostlang$frostc$IR$Value* $tmp785 = *(&local12);
$fn787 $tmp786 = ($fn787) $tmp785->$class->vtable[2];
org$frostlang$frostc$Type* $tmp788 = $tmp786($tmp785);
org$frostlang$frostc$Type** $tmp789 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp790 = *$tmp789;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:165:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp791 = &((org$frostlang$frostc$Symbol*) $tmp788)->name;
frost$core$String* $tmp792 = *$tmp791;
frost$core$String** $tmp793 = &((org$frostlang$frostc$Symbol*) $tmp790)->name;
frost$core$String* $tmp794 = *$tmp793;
frost$core$Bit $tmp795 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp792, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block43; else goto block44;
block43:;
org$frostlang$frostc$Type$Kind* $tmp797 = &$tmp788->typeKind;
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
*(&local14) = $tmp806;
goto block45;
block44:;
*(&local14) = $tmp795;
goto block45;
block45:;
frost$core$Bit $tmp807 = *(&local14);
bool $tmp808 = $tmp807.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
if ($tmp808) goto block39; else goto block41;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:166
org$frostlang$frostc$IR$Value* $tmp809 = *(&local12);
org$frostlang$frostc$Type** $tmp810 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp811 = *$tmp810;
org$frostlang$frostc$IR$Value* $tmp812 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp809, $tmp811);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
org$frostlang$frostc$IR$Value* $tmp813 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local13) = $tmp812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:167
org$frostlang$frostc$IR$Value* $tmp814 = *(&local13);
frost$core$Bit $tmp815 = (frost$core$Bit) {$tmp814 == NULL};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:168
org$frostlang$frostc$IR$Value* $tmp817 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp818 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp819 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp820 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp821 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp822 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp823 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp824 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp825 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp826 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block47:;
goto block40;
block41:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:172
org$frostlang$frostc$IR$Value* $tmp827 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
org$frostlang$frostc$IR$Value* $tmp828 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local13) = $tmp827;
goto block40;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:176
org$frostlang$frostc$IR* $tmp829 = *(&local0);
$fn831 $tmp830 = ($fn831) $tmp829->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp832 = $tmp830($tmp829, &$s833);
*(&local15) = $tmp832;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:177
org$frostlang$frostc$IR* $tmp834 = *(&local0);
$fn836 $tmp835 = ($fn836) $tmp834->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp837 = $tmp835($tmp834, &$s838);
*(&local16) = $tmp837;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:178
org$frostlang$frostc$IR* $tmp839 = *(&local0);
$fn841 $tmp840 = ($fn841) $tmp839->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp842 = $tmp840($tmp839, &$s843);
*(&local17) = $tmp842;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:179
org$frostlang$frostc$IR* $tmp844 = *(&local0);
$fn846 $tmp845 = ($fn846) $tmp844->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp847 = $tmp845($tmp844, &$s848);
*(&local18) = $tmp847;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:180
org$frostlang$frostc$IR* $tmp849 = *(&local0);
$fn851 $tmp850 = ($fn851) $tmp849->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp852 = $tmp850($tmp849, &$s853);
*(&local19) = $tmp852;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:181
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp854 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp855 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp856 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp857 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp858 = *(&local17);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp855, $tmp856, param2, $tmp857, $tmp858);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp854, param0, $tmp855);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
org$frostlang$frostc$Compiler$AutoContext* $tmp859 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local20) = $tmp854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:183
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp860 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp860, param0);
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
org$frostlang$frostc$Compiler$AutoScope* $tmp861 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local21) = $tmp860;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:184
org$frostlang$frostc$IR* $tmp862 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp863 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp864 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp865 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp866 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp867 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp863, $tmp864, param1, $tmp865, $tmp866, $tmp867);
$fn869 $tmp868 = ($fn869) $tmp862->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp870 = $tmp868($tmp862, $tmp863);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:186
org$frostlang$frostc$IR* $tmp871 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp872 = *(&local18);
$fn874 $tmp873 = ($fn874) $tmp871->$class->vtable[4];
$tmp873($tmp871, $tmp872);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:187
org$frostlang$frostc$IR$Value* $tmp875 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp876 = *(&local10);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:187:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp877 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp878 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp877, $tmp878);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp879 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp880 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp881 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp879, $tmp880, $tmp881, $tmp876);
frost$collections$Array$add$frost$collections$Array$T($tmp877, ((frost$core$Object*) $tmp879));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp877)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp882 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp883 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp884 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp885 = *$tmp884;
frost$core$Bit $tmp886 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp882, $tmp883, $tmp885, $tmp886);
org$frostlang$frostc$IR$Value* $tmp887 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp875, &$s888, ((frost$collections$ListView*) $tmp877), $tmp882);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
org$frostlang$frostc$IR$Value* $tmp889 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local22) = $tmp887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp877)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:189
org$frostlang$frostc$IR$Value* $tmp890 = *(&local22);
frost$core$Bit $tmp891 = (frost$core$Bit) {$tmp890 != NULL};
bool $tmp892 = $tmp891.value;
if ($tmp892) goto block49; else goto block50;
block50:;
frost$core$Int $tmp893 = (frost$core$Int) {189u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s894, $tmp893);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:190
org$frostlang$frostc$IR$Value* $tmp895 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp896 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp895);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
org$frostlang$frostc$IR$Value* $tmp897 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local23) = $tmp896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:191
org$frostlang$frostc$IR* $tmp898 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp899 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp900 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp901 = *(&local23);
org$frostlang$frostc$IR$Block$ID $tmp902 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp903 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp899, $tmp900, param1, $tmp901, $tmp902, $tmp903);
$fn905 $tmp904 = ($fn905) $tmp898->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp906 = $tmp904($tmp898, $tmp899);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:193
org$frostlang$frostc$IR* $tmp907 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp908 = *(&local19);
$fn910 $tmp909 = ($fn910) $tmp907->$class->vtable[4];
$tmp909($tmp907, $tmp908);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:194
org$frostlang$frostc$IR$Value* $tmp911 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp912 = *(&local10);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:194:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp913 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp914 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp913, $tmp914);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp915 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp916 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp917 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp915, $tmp916, $tmp917, $tmp912);
frost$collections$Array$add$frost$collections$Array$T($tmp913, ((frost$core$Object*) $tmp915));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp913)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp918 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp919 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp920 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp921 = *$tmp920;
frost$core$Bit $tmp922 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp918, $tmp919, $tmp921, $tmp922);
org$frostlang$frostc$IR$Value* $tmp923 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp911, &$s924, ((frost$collections$ListView*) $tmp913), $tmp918);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
org$frostlang$frostc$IR$Value* $tmp925 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local24) = $tmp923;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp913)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:196
org$frostlang$frostc$IR$Value* $tmp926 = *(&local24);
frost$core$Bit $tmp927 = (frost$core$Bit) {$tmp926 != NULL};
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block52; else goto block53;
block53:;
frost$core$Int $tmp929 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s930, $tmp929);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:197
org$frostlang$frostc$IR$Value* $tmp931 = *(&local24);
org$frostlang$frostc$IR$Value* $tmp932 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp931);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
org$frostlang$frostc$IR$Value* $tmp933 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local25) = $tmp932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:198
org$frostlang$frostc$IR* $tmp934 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp935 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp936 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp937 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp938 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp939 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp935, $tmp936, param1, $tmp937, $tmp938, $tmp939);
$fn941 $tmp940 = ($fn941) $tmp934->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp942 = $tmp940($tmp934, $tmp935);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:200
org$frostlang$frostc$IR* $tmp943 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp944 = *(&local15);
$fn946 $tmp945 = ($fn946) $tmp943->$class->vtable[4];
$tmp945($tmp943, $tmp944);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:201
ITable* $tmp947 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp947->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp947 = $tmp947->next;
}
$fn949 $tmp948 = $tmp947->methods[0];
frost$collections$Iterator* $tmp950 = $tmp948(((frost$collections$Iterable*) param5));
goto block54;
block54:;
ITable* $tmp951 = $tmp950->$class->itable;
while ($tmp951->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp951 = $tmp951->next;
}
$fn953 $tmp952 = $tmp951->methods[0];
frost$core$Bit $tmp954 = $tmp952($tmp950);
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block56; else goto block55;
block55:;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp956 = $tmp950->$class->itable;
while ($tmp956->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp956 = $tmp956->next;
}
$fn958 $tmp957 = $tmp956->methods[1];
frost$core$Object* $tmp959 = $tmp957($tmp950);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp959)));
org$frostlang$frostc$ASTNode* $tmp960 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
*(&local26) = ((org$frostlang$frostc$ASTNode*) $tmp959);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:202
org$frostlang$frostc$ASTNode* $tmp961 = *(&local26);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp961);
frost$core$Frost$unref$frost$core$Object$Q($tmp959);
org$frostlang$frostc$ASTNode* $tmp962 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
org$frostlang$frostc$IR$Value* $tmp963 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp964 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp965 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp966 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp967 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:205
org$frostlang$frostc$IR* $tmp968 = *(&local0);
$fn970 $tmp969 = ($fn970) $tmp968->$class->vtable[5];
frost$core$Bit $tmp971 = $tmp969($tmp968);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:205:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp972 = $tmp971.value;
bool $tmp973 = !$tmp972;
frost$core$Bit $tmp974 = (frost$core$Bit) {$tmp973};
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:206
org$frostlang$frostc$IR* $tmp976 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp977 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp978 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp979 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp977, $tmp978, param1, $tmp979);
$fn981 $tmp980 = ($fn981) $tmp976->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp982 = $tmp980($tmp976, $tmp977);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:208
org$frostlang$frostc$IR* $tmp983 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp984 = *(&local17);
$fn986 $tmp985 = ($fn986) $tmp983->$class->vtable[4];
$tmp985($tmp983, $tmp984);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:209
org$frostlang$frostc$IR* $tmp987 = *(&local0);
$fn989 $tmp988 = ($fn989) $tmp987->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp990 = $tmp988($tmp987, &$s991);
*(&local27) = $tmp990;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:212
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp992 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp993 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp994 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp995 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp996 = (frost$core$Int) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp997 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp998 = (frost$core$Int) {2u};
frost$core$Int $tmp999 = *(&local3);
org$frostlang$frostc$Type* $tmp1000 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp997, $tmp998, $tmp999, $tmp1000);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp995, $tmp996, param1, $tmp997);
$fn1002 $tmp1001 = ($fn1002) $tmp994->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1003 = $tmp1001($tmp994, $tmp995);
org$frostlang$frostc$Type* $tmp1004 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp992, $tmp993, $tmp1003, $tmp1004);
org$frostlang$frostc$Type* $tmp1005 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1006 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp992, $tmp1005);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
org$frostlang$frostc$IR$Value* $tmp1007 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local28) = $tmp1006;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:214
org$frostlang$frostc$IR$Value* $tmp1008 = *(&local28);
frost$core$Bit $tmp1009 = (frost$core$Bit) {$tmp1008 != NULL};
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block60; else goto block61;
block61:;
frost$core$Int $tmp1011 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1012, $tmp1011);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:217
org$frostlang$frostc$IR$Value* $tmp1013 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp1014 = *(&local28);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:217:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1015 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1016 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1015, $tmp1016);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1017 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1018 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1019 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1017, $tmp1018, $tmp1019, $tmp1014);
frost$collections$Array$add$frost$collections$Array$T($tmp1015, ((frost$core$Object*) $tmp1017));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1015)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1020 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1021 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1020, $tmp1021);
org$frostlang$frostc$IR$Value* $tmp1022 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1013, &$s1023, ((frost$collections$ListView*) $tmp1015), $tmp1020);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
org$frostlang$frostc$IR$Value* $tmp1024 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local29) = $tmp1022;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1015)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:218
org$frostlang$frostc$IR$Value* $tmp1025 = *(&local29);
frost$core$Bit $tmp1026 = (frost$core$Bit) {$tmp1025 != NULL};
bool $tmp1027 = $tmp1026.value;
if ($tmp1027) goto block63; else goto block64;
block64:;
frost$core$Int $tmp1028 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1029, $tmp1028);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:219
org$frostlang$frostc$IR$Value* $tmp1030 = *(&local29);
org$frostlang$frostc$Type* $tmp1031 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:219:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1032 = &$tmp1031->typeKind;
org$frostlang$frostc$Type$Kind $tmp1033 = *$tmp1032;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1034;
$tmp1034 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1034->value = $tmp1033;
frost$core$Int $tmp1035 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp1036 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp1035);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1037;
$tmp1037 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1037->value = $tmp1036;
ITable* $tmp1038 = ((frost$core$Equatable*) $tmp1034)->$class->itable;
while ($tmp1038->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1038 = $tmp1038->next;
}
$fn1040 $tmp1039 = $tmp1038->methods[1];
frost$core$Bit $tmp1041 = $tmp1039(((frost$core$Equatable*) $tmp1034), ((frost$core$Equatable*) $tmp1037));
bool $tmp1042 = $tmp1041.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1037)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1034)));
if ($tmp1042) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local31) = $tmp1031;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
goto block66;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp1043 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1031);
frost$core$Int $tmp1044 = (frost$core$Int) {0u};
frost$core$Object* $tmp1045 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1043, $tmp1044);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1045)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1045);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local31) = ((org$frostlang$frostc$Type*) $tmp1045);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1045)));
goto block66;
block66:;
org$frostlang$frostc$Type* $tmp1046 = *(&local31);
org$frostlang$frostc$Type** $tmp1047 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp1048 = *$tmp1047;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1049 = &((org$frostlang$frostc$Symbol*) $tmp1046)->name;
frost$core$String* $tmp1050 = *$tmp1049;
frost$core$String** $tmp1051 = &((org$frostlang$frostc$Symbol*) $tmp1048)->name;
frost$core$String* $tmp1052 = *$tmp1051;
frost$core$Bit $tmp1053 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1050, $tmp1052);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Type$Kind* $tmp1055 = &$tmp1046->typeKind;
org$frostlang$frostc$Type$Kind $tmp1056 = *$tmp1055;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1057;
$tmp1057 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1057->value = $tmp1056;
org$frostlang$frostc$Type$Kind* $tmp1058 = &$tmp1048->typeKind;
org$frostlang$frostc$Type$Kind $tmp1059 = *$tmp1058;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1060;
$tmp1060 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1060->value = $tmp1059;
ITable* $tmp1061 = ((frost$core$Equatable*) $tmp1057)->$class->itable;
while ($tmp1061->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1061 = $tmp1061->next;
}
$fn1063 $tmp1062 = $tmp1061->methods[0];
frost$core$Bit $tmp1064 = $tmp1062(((frost$core$Equatable*) $tmp1057), ((frost$core$Equatable*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1060)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1057)));
*(&local32) = $tmp1064;
goto block75;
block74:;
*(&local32) = $tmp1053;
goto block75;
block75:;
frost$core$Bit $tmp1065 = *(&local32);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp1067 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp1068 = *$tmp1067;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$Type* $tmp1069 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1068;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
goto block65;
block71:;
org$frostlang$frostc$Type** $tmp1070 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp1071 = *$tmp1070;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1072 = &((org$frostlang$frostc$Symbol*) $tmp1046)->name;
frost$core$String* $tmp1073 = *$tmp1072;
frost$core$String** $tmp1074 = &((org$frostlang$frostc$Symbol*) $tmp1071)->name;
frost$core$String* $tmp1075 = *$tmp1074;
frost$core$Bit $tmp1076 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1073, $tmp1075);
bool $tmp1077 = $tmp1076.value;
if ($tmp1077) goto block79; else goto block80;
block79:;
org$frostlang$frostc$Type$Kind* $tmp1078 = &$tmp1046->typeKind;
org$frostlang$frostc$Type$Kind $tmp1079 = *$tmp1078;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1080;
$tmp1080 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1080->value = $tmp1079;
org$frostlang$frostc$Type$Kind* $tmp1081 = &$tmp1071->typeKind;
org$frostlang$frostc$Type$Kind $tmp1082 = *$tmp1081;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1083;
$tmp1083 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1083->value = $tmp1082;
ITable* $tmp1084 = ((frost$core$Equatable*) $tmp1080)->$class->itable;
while ($tmp1084->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1084 = $tmp1084->next;
}
$fn1086 $tmp1085 = $tmp1084->methods[0];
frost$core$Bit $tmp1087 = $tmp1085(((frost$core$Equatable*) $tmp1080), ((frost$core$Equatable*) $tmp1083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1083)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1080)));
*(&local33) = $tmp1087;
goto block81;
block80:;
*(&local33) = $tmp1076;
goto block81;
block81:;
frost$core$Bit $tmp1088 = *(&local33);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp1090 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp1091 = *$tmp1090;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$Type* $tmp1092 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1091;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
goto block65;
block77:;
org$frostlang$frostc$Type** $tmp1093 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp1094 = *$tmp1093;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1095 = &((org$frostlang$frostc$Symbol*) $tmp1046)->name;
frost$core$String* $tmp1096 = *$tmp1095;
frost$core$String** $tmp1097 = &((org$frostlang$frostc$Symbol*) $tmp1094)->name;
frost$core$String* $tmp1098 = *$tmp1097;
frost$core$Bit $tmp1099 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1096, $tmp1098);
bool $tmp1100 = $tmp1099.value;
if ($tmp1100) goto block85; else goto block86;
block85:;
org$frostlang$frostc$Type$Kind* $tmp1101 = &$tmp1046->typeKind;
org$frostlang$frostc$Type$Kind $tmp1102 = *$tmp1101;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1103;
$tmp1103 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1103->value = $tmp1102;
org$frostlang$frostc$Type$Kind* $tmp1104 = &$tmp1094->typeKind;
org$frostlang$frostc$Type$Kind $tmp1105 = *$tmp1104;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1106;
$tmp1106 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1106->value = $tmp1105;
ITable* $tmp1107 = ((frost$core$Equatable*) $tmp1103)->$class->itable;
while ($tmp1107->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1107 = $tmp1107->next;
}
$fn1109 $tmp1108 = $tmp1107->methods[0];
frost$core$Bit $tmp1110 = $tmp1108(((frost$core$Equatable*) $tmp1103), ((frost$core$Equatable*) $tmp1106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1106)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1103)));
*(&local34) = $tmp1110;
goto block87;
block86:;
*(&local34) = $tmp1099;
goto block87;
block87:;
frost$core$Bit $tmp1111 = *(&local34);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp1113 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp1114 = *$tmp1113;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$Type* $tmp1115 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1114;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
goto block65;
block83:;
org$frostlang$frostc$Type** $tmp1116 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1117 = *$tmp1116;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1118 = &((org$frostlang$frostc$Symbol*) $tmp1046)->name;
frost$core$String* $tmp1119 = *$tmp1118;
frost$core$String** $tmp1120 = &((org$frostlang$frostc$Symbol*) $tmp1117)->name;
frost$core$String* $tmp1121 = *$tmp1120;
frost$core$Bit $tmp1122 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1119, $tmp1121);
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Type$Kind* $tmp1124 = &$tmp1046->typeKind;
org$frostlang$frostc$Type$Kind $tmp1125 = *$tmp1124;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1126;
$tmp1126 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1126->value = $tmp1125;
org$frostlang$frostc$Type$Kind* $tmp1127 = &$tmp1117->typeKind;
org$frostlang$frostc$Type$Kind $tmp1128 = *$tmp1127;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1129;
$tmp1129 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1129->value = $tmp1128;
ITable* $tmp1130 = ((frost$core$Equatable*) $tmp1126)->$class->itable;
while ($tmp1130->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1130 = $tmp1130->next;
}
$fn1132 $tmp1131 = $tmp1130->methods[0];
frost$core$Bit $tmp1133 = $tmp1131(((frost$core$Equatable*) $tmp1126), ((frost$core$Equatable*) $tmp1129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1129)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1126)));
*(&local35) = $tmp1133;
goto block93;
block92:;
*(&local35) = $tmp1122;
goto block93;
block93:;
frost$core$Bit $tmp1134 = *(&local35);
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp1136 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1137 = *$tmp1136;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$Type* $tmp1138 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1137;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
goto block65;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$Type* $tmp1139 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1031;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
goto block65;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$Type* $tmp1140 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
goto block65;
block65:;
org$frostlang$frostc$Type* $tmp1141 = *(&local30);
org$frostlang$frostc$IR$Value* $tmp1142 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1030, $tmp1141);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
org$frostlang$frostc$IR$Value* $tmp1143 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local36) = $tmp1142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:220
org$frostlang$frostc$IR$Value* $tmp1144 = *(&local36);
frost$core$Bit $tmp1145 = (frost$core$Bit) {$tmp1144 != NULL};
bool $tmp1146 = $tmp1145.value;
if ($tmp1146) goto block94; else goto block95;
block95:;
frost$core$Int $tmp1147 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1148, $tmp1147);
abort(); // unreachable
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:222
org$frostlang$frostc$IR* $tmp1149 = *(&local0);
$fn1151 $tmp1150 = ($fn1151) $tmp1149->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1152 = $tmp1150($tmp1149, &$s1153);
*(&local37) = $tmp1152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:223
org$frostlang$frostc$IR* $tmp1154 = *(&local0);
$fn1156 $tmp1155 = ($fn1156) $tmp1154->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1157 = $tmp1155($tmp1154, &$s1158);
*(&local38) = $tmp1157;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:224
org$frostlang$frostc$IR* $tmp1159 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1160 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1161 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1162 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp1163 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1164 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1160, $tmp1161, param1, $tmp1162, $tmp1163, $tmp1164);
$fn1166 $tmp1165 = ($fn1166) $tmp1159->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1167 = $tmp1165($tmp1159, $tmp1160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:227
org$frostlang$frostc$IR* $tmp1168 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1169 = *(&local37);
$fn1171 $tmp1170 = ($fn1171) $tmp1168->$class->vtable[4];
$tmp1170($tmp1168, $tmp1169);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:228
org$frostlang$frostc$IR$Value* $tmp1172 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1173 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:228:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1174 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1175 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1174, $tmp1175);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1176 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1177 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1178 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1176, $tmp1177, $tmp1178, $tmp1173);
frost$collections$Array$add$frost$collections$Array$T($tmp1174, ((frost$core$Object*) $tmp1176));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1174)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1179 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1180 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1181 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1182 = *$tmp1181;
frost$core$Bit $tmp1183 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1179, $tmp1180, $tmp1182, $tmp1183);
org$frostlang$frostc$IR$Value* $tmp1184 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1172, &$s1185, ((frost$collections$ListView*) $tmp1174), $tmp1179);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
org$frostlang$frostc$IR$Value* $tmp1186 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
*(&local39) = $tmp1184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1174)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:230
org$frostlang$frostc$IR$Value* $tmp1187 = *(&local39);
frost$core$Bit $tmp1188 = (frost$core$Bit) {$tmp1187 != NULL};
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block97; else goto block98;
block98:;
frost$core$Int $tmp1190 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1191, $tmp1190);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:231
org$frostlang$frostc$IR$Value* $tmp1192 = *(&local39);
org$frostlang$frostc$IR$Value* $tmp1193 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1192);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
org$frostlang$frostc$IR$Value* $tmp1194 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local40) = $tmp1193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:232
org$frostlang$frostc$IR* $tmp1195 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1196 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1197 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1198 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1199 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1200 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1196, $tmp1197, param1, $tmp1198, $tmp1199, $tmp1200);
$fn1202 $tmp1201 = ($fn1202) $tmp1195->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1203 = $tmp1201($tmp1195, $tmp1196);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:235
org$frostlang$frostc$IR* $tmp1204 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1205 = *(&local38);
$fn1207 $tmp1206 = ($fn1207) $tmp1204->$class->vtable[4];
$tmp1206($tmp1204, $tmp1205);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:236
org$frostlang$frostc$IR$Value* $tmp1208 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1209 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:236:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1210 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1211 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1210, $tmp1211);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1212 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1213 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1214 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1212, $tmp1213, $tmp1214, $tmp1209);
frost$collections$Array$add$frost$collections$Array$T($tmp1210, ((frost$core$Object*) $tmp1212));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1210)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1215 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1216 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1217 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1218 = *$tmp1217;
frost$core$Bit $tmp1219 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1215, $tmp1216, $tmp1218, $tmp1219);
org$frostlang$frostc$IR$Value* $tmp1220 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1208, &$s1221, ((frost$collections$ListView*) $tmp1210), $tmp1215);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
org$frostlang$frostc$IR$Value* $tmp1222 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local41) = $tmp1220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1210)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:238
org$frostlang$frostc$IR$Value* $tmp1223 = *(&local41);
frost$core$Bit $tmp1224 = (frost$core$Bit) {$tmp1223 != NULL};
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block100; else goto block101;
block101:;
frost$core$Int $tmp1226 = (frost$core$Int) {238u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1227, $tmp1226);
abort(); // unreachable
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:239
org$frostlang$frostc$IR$Value* $tmp1228 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1229 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1228);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
org$frostlang$frostc$IR$Value* $tmp1230 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local42) = $tmp1229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:240
org$frostlang$frostc$IR* $tmp1231 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1232 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1233 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1234 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1235 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1236 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1232, $tmp1233, param1, $tmp1234, $tmp1235, $tmp1236);
$fn1238 $tmp1237 = ($fn1238) $tmp1231->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1239 = $tmp1237($tmp1231, $tmp1232);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:242
org$frostlang$frostc$IR* $tmp1240 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1241 = *(&local27);
$fn1243 $tmp1242 = ($fn1243) $tmp1240->$class->vtable[4];
$tmp1242($tmp1240, $tmp1241);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:243
org$frostlang$frostc$IR$Value* $tmp1244 = *(&local28);
org$frostlang$frostc$IR$Value* $tmp1245 = *(&local12);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:243:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1246 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1247 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1246, $tmp1247);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1248 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1249 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1250 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1248, $tmp1249, $tmp1250, $tmp1245);
frost$collections$Array$add$frost$collections$Array$T($tmp1246, ((frost$core$Object*) $tmp1248));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1246)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1251 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1252 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1251, $tmp1252);
org$frostlang$frostc$IR$Value* $tmp1253 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1244, &$s1254, ((frost$collections$ListView*) $tmp1246), $tmp1251);
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
org$frostlang$frostc$IR$Value* $tmp1255 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local43) = $tmp1253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1246)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:244
org$frostlang$frostc$IR$Value* $tmp1256 = *(&local43);
frost$core$Bit $tmp1257 = (frost$core$Bit) {$tmp1256 != NULL};
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block103; else goto block104;
block104:;
frost$core$Int $tmp1259 = (frost$core$Int) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1260, $tmp1259);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:245
org$frostlang$frostc$IR$Value* $tmp1261 = *(&local43);
org$frostlang$frostc$Type* $tmp1262 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1263 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1261, $tmp1262);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
org$frostlang$frostc$IR$Value* $tmp1264 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local44) = $tmp1263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:246
org$frostlang$frostc$IR$Value* $tmp1265 = *(&local44);
frost$core$Bit $tmp1266 = (frost$core$Bit) {$tmp1265 != NULL};
bool $tmp1267 = $tmp1266.value;
if ($tmp1267) goto block105; else goto block106;
block106:;
frost$core$Int $tmp1268 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1269, $tmp1268);
abort(); // unreachable
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:247
org$frostlang$frostc$IR* $tmp1270 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1271 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1272 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp1273 = *(&local44);
org$frostlang$frostc$Type* $tmp1274 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1275 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1273, $tmp1274);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1276 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1277 = (frost$core$Int) {2u};
frost$core$Int $tmp1278 = *(&local3);
org$frostlang$frostc$Type* $tmp1279 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp1276, $tmp1277, $tmp1278, $tmp1279);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1271, $tmp1272, param1, $tmp1275, $tmp1276);
$fn1281 $tmp1280 = ($fn1281) $tmp1270->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1282 = $tmp1280($tmp1270, $tmp1271);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:250
org$frostlang$frostc$IR* $tmp1283 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1284 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1285 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1286 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1284, $tmp1285, param1, $tmp1286);
$fn1288 $tmp1287 = ($fn1288) $tmp1283->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1289 = $tmp1287($tmp1283, $tmp1284);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:252
org$frostlang$frostc$IR* $tmp1290 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1291 = *(&local16);
$fn1293 $tmp1292 = ($fn1293) $tmp1290->$class->vtable[4];
$tmp1292($tmp1290, $tmp1291);
org$frostlang$frostc$IR$Value* $tmp1294 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1295 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1296 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1297 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1298 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1299 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1300 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1301 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1302 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1303 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1304 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1305 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1306 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1307 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1308 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1309 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1310 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1311 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1312 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1313 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1314 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
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
org$frostlang$frostc$IR** $tmp1315 = &param0->ir;
org$frostlang$frostc$IR* $tmp1316 = *$tmp1315;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
org$frostlang$frostc$IR* $tmp1317 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local0) = $tmp1316;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:277
$fn1319 $tmp1318 = ($fn1319) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1320 = $tmp1318(param4);
org$frostlang$frostc$Type$Kind* $tmp1321 = &$tmp1320->typeKind;
org$frostlang$frostc$Type$Kind $tmp1322 = *$tmp1321;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1323;
$tmp1323 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1323->value = $tmp1322;
frost$core$Int $tmp1324 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:277:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1325 = &(&local2)->$rawValue;
*$tmp1325 = $tmp1324;
org$frostlang$frostc$Type$Kind $tmp1326 = *(&local2);
*(&local1) = $tmp1326;
org$frostlang$frostc$Type$Kind $tmp1327 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1328;
$tmp1328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1328->value = $tmp1327;
ITable* $tmp1329 = ((frost$core$Equatable*) $tmp1323)->$class->itable;
while ($tmp1329->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1329 = $tmp1329->next;
}
$fn1331 $tmp1330 = $tmp1329->methods[0];
frost$core$Bit $tmp1332 = $tmp1330(((frost$core$Equatable*) $tmp1323), ((frost$core$Equatable*) $tmp1328));
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block2; else goto block3;
block3:;
frost$core$Int $tmp1334 = (frost$core$Int) {277u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1335, $tmp1334);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1328)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1323)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:278
$fn1337 $tmp1336 = ($fn1337) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1338 = $tmp1336(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:278:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1339 = &$tmp1338->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1340 = *$tmp1339;
frost$core$Bit $tmp1341 = (frost$core$Bit) {$tmp1340 != NULL};
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block5; else goto block6;
block6:;
frost$core$Int $tmp1343 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1344, $tmp1343, &$s1345);
abort(); // unreachable
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
ITable* $tmp1346 = ((frost$collections$CollectionView*) $tmp1340)->$class->itable;
while ($tmp1346->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1346 = $tmp1346->next;
}
$fn1348 $tmp1347 = $tmp1346->methods[0];
frost$core$Int $tmp1349 = $tmp1347(((frost$collections$CollectionView*) $tmp1340));
frost$core$Int $tmp1350 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:278:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1351 = $tmp1349.value;
int64_t $tmp1352 = $tmp1350.value;
bool $tmp1353 = $tmp1351 == $tmp1352;
frost$core$Bit $tmp1354 = (frost$core$Bit) {$tmp1353};
bool $tmp1355 = $tmp1354.value;
if ($tmp1355) goto block8; else goto block9;
block9:;
frost$core$Int $tmp1356 = (frost$core$Int) {278u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1357, $tmp1356);
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:279
$fn1359 $tmp1358 = ($fn1359) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1360 = $tmp1358(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:279:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1361 = &$tmp1360->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1362 = *$tmp1361;
frost$core$Bit $tmp1363 = (frost$core$Bit) {$tmp1362 != NULL};
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block11; else goto block12;
block12:;
frost$core$Int $tmp1365 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1366, $tmp1365, &$s1367);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$core$Int $tmp1368 = (frost$core$Int) {0u};
frost$core$Object* $tmp1369 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1362, $tmp1368);
frost$core$String** $tmp1370 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp1369))->name;
frost$core$String* $tmp1371 = *$tmp1370;
frost$core$Bit $tmp1372 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1371, &$s1373);
bool $tmp1374 = $tmp1372.value;
if ($tmp1374) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1375 = (frost$core$Int) {279u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1376, $tmp1375);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1369);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:280
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:281
org$frostlang$frostc$Variable$Storage** $tmp1377 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp1378 = *$tmp1377;
frost$core$Int* $tmp1379 = &$tmp1378->$rawValue;
frost$core$Int $tmp1380 = *$tmp1379;
frost$core$Int $tmp1381 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:282:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1382 = $tmp1380.value;
int64_t $tmp1383 = $tmp1381.value;
bool $tmp1384 = $tmp1382 == $tmp1383;
frost$core$Bit $tmp1385 = (frost$core$Bit) {$tmp1384};
bool $tmp1386 = $tmp1385.value;
if ($tmp1386) goto block16; else goto block17;
block16:;
frost$core$Int* $tmp1387 = (frost$core$Int*) ($tmp1378->$data + 0);
frost$core$Int $tmp1388 = *$tmp1387;
*(&local4) = $tmp1388;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:283
frost$core$Int $tmp1389 = *(&local4);
*(&local3) = $tmp1389;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:289
org$frostlang$frostc$Type** $tmp1390 = &param3->type;
org$frostlang$frostc$Type* $tmp1391 = *$tmp1390;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
org$frostlang$frostc$Type* $tmp1392 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
*(&local5) = $tmp1391;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:290
org$frostlang$frostc$Type* $tmp1393 = *(&local5);
org$frostlang$frostc$Type* $tmp1394 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp1393);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
org$frostlang$frostc$Type* $tmp1395 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
*(&local6) = $tmp1394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:291
org$frostlang$frostc$Type* $tmp1396 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1397 = &$tmp1396->typeKind;
org$frostlang$frostc$Type$Kind $tmp1398 = *$tmp1397;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1399;
$tmp1399 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1399->value = $tmp1398;
frost$core$Int $tmp1400 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:291:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1401 = &(&local8)->$rawValue;
*$tmp1401 = $tmp1400;
org$frostlang$frostc$Type$Kind $tmp1402 = *(&local8);
*(&local7) = $tmp1402;
org$frostlang$frostc$Type$Kind $tmp1403 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1404;
$tmp1404 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1404->value = $tmp1403;
ITable* $tmp1405 = ((frost$core$Equatable*) $tmp1399)->$class->itable;
while ($tmp1405->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1405 = $tmp1405->next;
}
$fn1407 $tmp1406 = $tmp1405->methods[1];
frost$core$Bit $tmp1408 = $tmp1406(((frost$core$Equatable*) $tmp1399), ((frost$core$Equatable*) $tmp1404));
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block20; else goto block21;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:286
frost$core$Int $tmp1410 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1411, $tmp1410);
abort(); // unreachable
block21:;
frost$core$Int $tmp1412 = (frost$core$Int) {291u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1413, $tmp1412);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1404)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1399)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:292
$fn1415 $tmp1414 = ($fn1415) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1416 = $tmp1414(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:292:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1417 = &$tmp1416->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1418 = *$tmp1417;
frost$core$Bit $tmp1419 = (frost$core$Bit) {$tmp1418 != NULL};
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block23; else goto block24;
block24:;
frost$core$Int $tmp1421 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1422, $tmp1421, &$s1423);
abort(); // unreachable
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
frost$core$Int $tmp1424 = (frost$core$Int) {2u};
frost$core$Object* $tmp1425 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1418, $tmp1424);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1425)));
org$frostlang$frostc$Type* $tmp1426 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1425);
frost$core$Frost$unref$frost$core$Object$Q($tmp1425);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:293
$fn1428 $tmp1427 = ($fn1428) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1429 = $tmp1427(param4);
org$frostlang$frostc$ClassDecl* $tmp1430 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1429);
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
org$frostlang$frostc$ClassDecl* $tmp1431 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
*(&local10) = $tmp1430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:294
org$frostlang$frostc$ClassDecl* $tmp1432 = *(&local10);
frost$core$Bit $tmp1433 = (frost$core$Bit) {$tmp1432 == NULL};
bool $tmp1434 = $tmp1433.value;
if ($tmp1434) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:295
org$frostlang$frostc$ClassDecl* $tmp1435 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1436 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1437 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1438 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1439 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:297
org$frostlang$frostc$ClassDecl* $tmp1440 = *(&local10);
frost$collections$ListView* $tmp1441 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp1440);
*(&local11) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$collections$ListView* $tmp1442 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
*(&local11) = $tmp1441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:300
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1443 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1444 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1445 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1446 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1447 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1448 = *(&local11);
frost$core$Int $tmp1449 = (frost$core$Int) {0u};
ITable* $tmp1450 = $tmp1448->$class->itable;
while ($tmp1450->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1450 = $tmp1450->next;
}
$fn1452 $tmp1451 = $tmp1450->methods[0];
frost$core$Object* $tmp1453 = $tmp1451($tmp1448, $tmp1449);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1446, $tmp1447, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1453));
$fn1455 $tmp1454 = ($fn1455) $tmp1445->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1456 = $tmp1454($tmp1445, $tmp1446);
$fn1458 $tmp1457 = ($fn1458) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1459 = $tmp1457(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:302:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1460 = &$tmp1459->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1461 = *$tmp1460;
frost$core$Bit $tmp1462 = (frost$core$Bit) {$tmp1461 != NULL};
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block28; else goto block29;
block29:;
frost$core$Int $tmp1464 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1465, $tmp1464, &$s1466);
abort(); // unreachable
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Int $tmp1467 = (frost$core$Int) {1u};
frost$core$Object* $tmp1468 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1461, $tmp1467);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1443, $tmp1444, $tmp1456, ((org$frostlang$frostc$Type*) $tmp1468));
org$frostlang$frostc$Type* $tmp1469 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:300:54
org$frostlang$frostc$Type** $tmp1470 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1471 = *$tmp1470;
ITable* $tmp1472 = ((frost$core$Equatable*) $tmp1469)->$class->itable;
while ($tmp1472->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1472 = $tmp1472->next;
}
$fn1474 $tmp1473 = $tmp1472->methods[1];
frost$core$Bit $tmp1475 = $tmp1473(((frost$core$Equatable*) $tmp1469), ((frost$core$Equatable*) $tmp1471));
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block31; else goto block32;
block32:;
frost$core$Int $tmp1477 = (frost$core$Int) {4126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1478, $tmp1477, &$s1479);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4127
frost$core$Bit $tmp1480 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp1481 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1443, $tmp1469, $tmp1480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
org$frostlang$frostc$Type* $tmp1482 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1483 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1481, $tmp1482);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
org$frostlang$frostc$IR$Value* $tmp1484 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
*(&local12) = $tmp1483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q($tmp1468);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q($tmp1453);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:303
org$frostlang$frostc$IR$Value* $tmp1485 = *(&local12);
frost$core$Bit $tmp1486 = (frost$core$Bit) {$tmp1485 == NULL};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:304
org$frostlang$frostc$IR$Value* $tmp1488 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1489 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1490 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1491 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1492 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1493 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1494 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:308
org$frostlang$frostc$IR* $tmp1495 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1496 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1497 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp1498 = *(&local12);
org$frostlang$frostc$Type* $tmp1499 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1500 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1498, $tmp1499);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1501 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1502 = (frost$core$Int) {2u};
frost$core$Int $tmp1503 = *(&local3);
org$frostlang$frostc$Type* $tmp1504 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp1501, $tmp1502, $tmp1503, $tmp1504);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1496, $tmp1497, param1, $tmp1500, $tmp1501);
$fn1506 $tmp1505 = ($fn1506) $tmp1495->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1507 = $tmp1505($tmp1495, $tmp1496);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:312
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1508 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1509 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1510 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1511 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1512 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1513 = *(&local11);
frost$core$Int $tmp1514 = (frost$core$Int) {1u};
ITable* $tmp1515 = $tmp1513->$class->itable;
while ($tmp1515->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1515 = $tmp1515->next;
}
$fn1517 $tmp1516 = $tmp1515->methods[0];
frost$core$Object* $tmp1518 = $tmp1516($tmp1513, $tmp1514);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1511, $tmp1512, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1518));
$fn1520 $tmp1519 = ($fn1520) $tmp1510->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1521 = $tmp1519($tmp1510, $tmp1511);
$fn1523 $tmp1522 = ($fn1523) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1524 = $tmp1522(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:314:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1525 = &$tmp1524->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1526 = *$tmp1525;
frost$core$Bit $tmp1527 = (frost$core$Bit) {$tmp1526 != NULL};
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block36; else goto block37;
block37:;
frost$core$Int $tmp1529 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1530, $tmp1529, &$s1531);
abort(); // unreachable
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
frost$core$Int $tmp1532 = (frost$core$Int) {1u};
frost$core$Object* $tmp1533 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1526, $tmp1532);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1508, $tmp1509, $tmp1521, ((org$frostlang$frostc$Type*) $tmp1533));
org$frostlang$frostc$Type* $tmp1534 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:312:52
org$frostlang$frostc$Type** $tmp1535 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1536 = *$tmp1535;
ITable* $tmp1537 = ((frost$core$Equatable*) $tmp1534)->$class->itable;
while ($tmp1537->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1537 = $tmp1537->next;
}
$fn1539 $tmp1538 = $tmp1537->methods[1];
frost$core$Bit $tmp1540 = $tmp1538(((frost$core$Equatable*) $tmp1534), ((frost$core$Equatable*) $tmp1536));
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block39; else goto block40;
block40:;
frost$core$Int $tmp1542 = (frost$core$Int) {4126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1543, $tmp1542, &$s1544);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4127
frost$core$Bit $tmp1545 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp1546 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1508, $tmp1534, $tmp1545);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
org$frostlang$frostc$Type* $tmp1547 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1548 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1546, $tmp1547);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
org$frostlang$frostc$IR$Value* $tmp1549 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
*(&local13) = $tmp1548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
frost$core$Frost$unref$frost$core$Object$Q($tmp1533);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
frost$core$Frost$unref$frost$core$Object$Q($tmp1518);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:315
org$frostlang$frostc$IR$Value* $tmp1550 = *(&local13);
frost$core$Bit $tmp1551 = (frost$core$Bit) {$tmp1550 == NULL};
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:316
org$frostlang$frostc$IR$Value* $tmp1553 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1554 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1555 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1556 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1557 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1558 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1559 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1560 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:320
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1561 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1562 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1563 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1564 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1565 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1566 = *(&local11);
frost$core$Int $tmp1567 = (frost$core$Int) {2u};
ITable* $tmp1568 = $tmp1566->$class->itable;
while ($tmp1568->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1568 = $tmp1568->next;
}
$fn1570 $tmp1569 = $tmp1568->methods[0];
frost$core$Object* $tmp1571 = $tmp1569($tmp1566, $tmp1567);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1564, $tmp1565, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1571));
$fn1573 $tmp1572 = ($fn1573) $tmp1563->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1574 = $tmp1572($tmp1563, $tmp1564);
org$frostlang$frostc$Type* $tmp1575 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1561, $tmp1562, $tmp1574, $tmp1575);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
org$frostlang$frostc$IR$Value* $tmp1576 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
*(&local14) = $tmp1561;
frost$core$Frost$unref$frost$core$Object$Q($tmp1571);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:322
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:323
org$frostlang$frostc$IR$Value* $tmp1577 = *(&local14);
$fn1579 $tmp1578 = ($fn1579) $tmp1577->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1580 = $tmp1578($tmp1577);
org$frostlang$frostc$Type** $tmp1581 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1582 = *$tmp1581;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:323:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1583 = &((org$frostlang$frostc$Symbol*) $tmp1580)->name;
frost$core$String* $tmp1584 = *$tmp1583;
frost$core$String** $tmp1585 = &((org$frostlang$frostc$Symbol*) $tmp1582)->name;
frost$core$String* $tmp1586 = *$tmp1585;
frost$core$Bit $tmp1587 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1584, $tmp1586);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Type$Kind* $tmp1589 = &$tmp1580->typeKind;
org$frostlang$frostc$Type$Kind $tmp1590 = *$tmp1589;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1591;
$tmp1591 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1591->value = $tmp1590;
org$frostlang$frostc$Type$Kind* $tmp1592 = &$tmp1582->typeKind;
org$frostlang$frostc$Type$Kind $tmp1593 = *$tmp1592;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1594;
$tmp1594 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1594->value = $tmp1593;
ITable* $tmp1595 = ((frost$core$Equatable*) $tmp1591)->$class->itable;
while ($tmp1595->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1595 = $tmp1595->next;
}
$fn1597 $tmp1596 = $tmp1595->methods[0];
frost$core$Bit $tmp1598 = $tmp1596(((frost$core$Equatable*) $tmp1591), ((frost$core$Equatable*) $tmp1594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1594)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1591)));
*(&local16) = $tmp1598;
goto block49;
block48:;
*(&local16) = $tmp1587;
goto block49;
block49:;
frost$core$Bit $tmp1599 = *(&local16);
bool $tmp1600 = $tmp1599.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
if ($tmp1600) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:324
org$frostlang$frostc$IR$Value* $tmp1601 = *(&local14);
org$frostlang$frostc$Type** $tmp1602 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1603 = *$tmp1602;
org$frostlang$frostc$IR$Value* $tmp1604 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1601, $tmp1603);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
org$frostlang$frostc$IR$Value* $tmp1605 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
*(&local15) = $tmp1604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:325
org$frostlang$frostc$IR$Value* $tmp1606 = *(&local15);
frost$core$Bit $tmp1607 = (frost$core$Bit) {$tmp1606 != NULL};
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block50; else goto block51;
block51:;
frost$core$Int $tmp1609 = (frost$core$Int) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1610, $tmp1609);
abort(); // unreachable
block50:;
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:328
org$frostlang$frostc$IR$Value* $tmp1611 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
org$frostlang$frostc$IR$Value* $tmp1612 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local15) = $tmp1611;
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:330
org$frostlang$frostc$IR$Value* $tmp1613 = *(&local14);
org$frostlang$frostc$IR$Value* $tmp1614 = *(&local14);
$fn1616 $tmp1615 = ($fn1616) $tmp1614->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1617 = $tmp1615($tmp1614);
// begin inline call to function org.frostlang.frostc.statement.For.signed(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:330:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:48
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:48:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1618 = &$tmp1617->typeKind;
org$frostlang$frostc$Type$Kind $tmp1619 = *$tmp1618;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1620;
$tmp1620 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1620->value = $tmp1619;
frost$core$Int $tmp1621 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp1622 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp1621);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1623;
$tmp1623 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1623->value = $tmp1622;
ITable* $tmp1624 = ((frost$core$Equatable*) $tmp1620)->$class->itable;
while ($tmp1624->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1624 = $tmp1624->next;
}
$fn1626 $tmp1625 = $tmp1624->methods[1];
frost$core$Bit $tmp1627 = $tmp1625(((frost$core$Equatable*) $tmp1620), ((frost$core$Equatable*) $tmp1623));
bool $tmp1628 = $tmp1627.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1623)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1620)));
if ($tmp1628) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local18) = $tmp1617;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
goto block53;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp1629 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1617);
frost$core$Int $tmp1630 = (frost$core$Int) {0u};
frost$core$Object* $tmp1631 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1629, $tmp1630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1631)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1631);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local18) = ((org$frostlang$frostc$Type*) $tmp1631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1631)));
goto block53;
block53:;
org$frostlang$frostc$Type* $tmp1632 = *(&local18);
org$frostlang$frostc$Type** $tmp1633 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp1634 = *$tmp1633;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1635 = &((org$frostlang$frostc$Symbol*) $tmp1632)->name;
frost$core$String* $tmp1636 = *$tmp1635;
frost$core$String** $tmp1637 = &((org$frostlang$frostc$Symbol*) $tmp1634)->name;
frost$core$String* $tmp1638 = *$tmp1637;
frost$core$Bit $tmp1639 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1636, $tmp1638);
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Type$Kind* $tmp1641 = &$tmp1632->typeKind;
org$frostlang$frostc$Type$Kind $tmp1642 = *$tmp1641;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1643;
$tmp1643 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1643->value = $tmp1642;
org$frostlang$frostc$Type$Kind* $tmp1644 = &$tmp1634->typeKind;
org$frostlang$frostc$Type$Kind $tmp1645 = *$tmp1644;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1646;
$tmp1646 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1646->value = $tmp1645;
ITable* $tmp1647 = ((frost$core$Equatable*) $tmp1643)->$class->itable;
while ($tmp1647->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1647 = $tmp1647->next;
}
$fn1649 $tmp1648 = $tmp1647->methods[0];
frost$core$Bit $tmp1650 = $tmp1648(((frost$core$Equatable*) $tmp1643), ((frost$core$Equatable*) $tmp1646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1646)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1643)));
*(&local19) = $tmp1650;
goto block62;
block61:;
*(&local19) = $tmp1639;
goto block62;
block62:;
frost$core$Bit $tmp1651 = *(&local19);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:49
org$frostlang$frostc$Type** $tmp1653 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp1654 = *$tmp1653;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
org$frostlang$frostc$Type* $tmp1655 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1654;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
goto block52;
block58:;
org$frostlang$frostc$Type** $tmp1656 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp1657 = *$tmp1656;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:50:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1658 = &((org$frostlang$frostc$Symbol*) $tmp1632)->name;
frost$core$String* $tmp1659 = *$tmp1658;
frost$core$String** $tmp1660 = &((org$frostlang$frostc$Symbol*) $tmp1657)->name;
frost$core$String* $tmp1661 = *$tmp1660;
frost$core$Bit $tmp1662 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1659, $tmp1661);
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Type$Kind* $tmp1664 = &$tmp1632->typeKind;
org$frostlang$frostc$Type$Kind $tmp1665 = *$tmp1664;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1666;
$tmp1666 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1666->value = $tmp1665;
org$frostlang$frostc$Type$Kind* $tmp1667 = &$tmp1657->typeKind;
org$frostlang$frostc$Type$Kind $tmp1668 = *$tmp1667;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1669;
$tmp1669 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1669->value = $tmp1668;
ITable* $tmp1670 = ((frost$core$Equatable*) $tmp1666)->$class->itable;
while ($tmp1670->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1670 = $tmp1670->next;
}
$fn1672 $tmp1671 = $tmp1670->methods[0];
frost$core$Bit $tmp1673 = $tmp1671(((frost$core$Equatable*) $tmp1666), ((frost$core$Equatable*) $tmp1669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1669)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1666)));
*(&local20) = $tmp1673;
goto block68;
block67:;
*(&local20) = $tmp1662;
goto block68;
block68:;
frost$core$Bit $tmp1674 = *(&local20);
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:50
org$frostlang$frostc$Type** $tmp1676 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp1677 = *$tmp1676;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
org$frostlang$frostc$Type* $tmp1678 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1677;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
goto block52;
block64:;
org$frostlang$frostc$Type** $tmp1679 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp1680 = *$tmp1679;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:51:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1681 = &((org$frostlang$frostc$Symbol*) $tmp1632)->name;
frost$core$String* $tmp1682 = *$tmp1681;
frost$core$String** $tmp1683 = &((org$frostlang$frostc$Symbol*) $tmp1680)->name;
frost$core$String* $tmp1684 = *$tmp1683;
frost$core$Bit $tmp1685 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1682, $tmp1684);
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Type$Kind* $tmp1687 = &$tmp1632->typeKind;
org$frostlang$frostc$Type$Kind $tmp1688 = *$tmp1687;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1689;
$tmp1689 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1689->value = $tmp1688;
org$frostlang$frostc$Type$Kind* $tmp1690 = &$tmp1680->typeKind;
org$frostlang$frostc$Type$Kind $tmp1691 = *$tmp1690;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1692;
$tmp1692 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1692->value = $tmp1691;
ITable* $tmp1693 = ((frost$core$Equatable*) $tmp1689)->$class->itable;
while ($tmp1693->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1693 = $tmp1693->next;
}
$fn1695 $tmp1694 = $tmp1693->methods[0];
frost$core$Bit $tmp1696 = $tmp1694(((frost$core$Equatable*) $tmp1689), ((frost$core$Equatable*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1692)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1689)));
*(&local21) = $tmp1696;
goto block74;
block73:;
*(&local21) = $tmp1685;
goto block74;
block74:;
frost$core$Bit $tmp1697 = *(&local21);
bool $tmp1698 = $tmp1697.value;
if ($tmp1698) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:51
org$frostlang$frostc$Type** $tmp1699 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp1700 = *$tmp1699;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
org$frostlang$frostc$Type* $tmp1701 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1700;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
goto block52;
block70:;
org$frostlang$frostc$Type** $tmp1702 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1703 = *$tmp1702;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:52:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1704 = &((org$frostlang$frostc$Symbol*) $tmp1632)->name;
frost$core$String* $tmp1705 = *$tmp1704;
frost$core$String** $tmp1706 = &((org$frostlang$frostc$Symbol*) $tmp1703)->name;
frost$core$String* $tmp1707 = *$tmp1706;
frost$core$Bit $tmp1708 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1705, $tmp1707);
bool $tmp1709 = $tmp1708.value;
if ($tmp1709) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Type$Kind* $tmp1710 = &$tmp1632->typeKind;
org$frostlang$frostc$Type$Kind $tmp1711 = *$tmp1710;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1712;
$tmp1712 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1712->value = $tmp1711;
org$frostlang$frostc$Type$Kind* $tmp1713 = &$tmp1703->typeKind;
org$frostlang$frostc$Type$Kind $tmp1714 = *$tmp1713;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1715;
$tmp1715 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1715->value = $tmp1714;
ITable* $tmp1716 = ((frost$core$Equatable*) $tmp1712)->$class->itable;
while ($tmp1716->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1716 = $tmp1716->next;
}
$fn1718 $tmp1717 = $tmp1716->methods[0];
frost$core$Bit $tmp1719 = $tmp1717(((frost$core$Equatable*) $tmp1712), ((frost$core$Equatable*) $tmp1715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1715)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1712)));
*(&local22) = $tmp1719;
goto block80;
block79:;
*(&local22) = $tmp1708;
goto block80;
block80:;
frost$core$Bit $tmp1720 = *(&local22);
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:52
org$frostlang$frostc$Type** $tmp1722 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1723 = *$tmp1722;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
org$frostlang$frostc$Type* $tmp1724 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1723;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
goto block52;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
org$frostlang$frostc$Type* $tmp1725 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1617;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
goto block52;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
org$frostlang$frostc$Type* $tmp1726 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
goto block52;
block52:;
org$frostlang$frostc$Type* $tmp1727 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp1728 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1613, $tmp1727);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
org$frostlang$frostc$IR$Value* $tmp1729 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local23) = $tmp1728;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:331
org$frostlang$frostc$IR$Value* $tmp1730 = *(&local23);
frost$core$Bit $tmp1731 = (frost$core$Bit) {$tmp1730 != NULL};
bool $tmp1732 = $tmp1731.value;
if ($tmp1732) goto block81; else goto block82;
block82:;
frost$core$Int $tmp1733 = (frost$core$Int) {331u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1734, $tmp1733);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:332
org$frostlang$frostc$IR$Value* $tmp1735 = *(&local23);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1736 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1737 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp1736, $tmp1737);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1738 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1739 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1738, $tmp1739);
org$frostlang$frostc$IR$Value* $tmp1740 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1735, &$s1741, ((frost$collections$ListView*) $tmp1736), $tmp1738);
org$frostlang$frostc$Type* $tmp1742 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp1743 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1740, $tmp1742);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
org$frostlang$frostc$IR$Value* $tmp1744 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
*(&local24) = $tmp1743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:334
org$frostlang$frostc$IR$Value* $tmp1745 = *(&local24);
frost$core$Bit $tmp1746 = (frost$core$Bit) {$tmp1745 != NULL};
bool $tmp1747 = $tmp1746.value;
if ($tmp1747) goto block83; else goto block84;
block84:;
frost$core$Int $tmp1748 = (frost$core$Int) {334u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1749, $tmp1748);
abort(); // unreachable
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:335
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:336
org$frostlang$frostc$IR$Value* $tmp1750 = *(&local14);
$fn1752 $tmp1751 = ($fn1752) $tmp1750->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1753 = $tmp1751($tmp1750);
org$frostlang$frostc$Type** $tmp1754 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1755 = *$tmp1754;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:336:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1756 = &((org$frostlang$frostc$Symbol*) $tmp1753)->name;
frost$core$String* $tmp1757 = *$tmp1756;
frost$core$String** $tmp1758 = &((org$frostlang$frostc$Symbol*) $tmp1755)->name;
frost$core$String* $tmp1759 = *$tmp1758;
frost$core$Bit $tmp1760 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1757, $tmp1759);
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block89; else goto block90;
block89:;
org$frostlang$frostc$Type$Kind* $tmp1762 = &$tmp1753->typeKind;
org$frostlang$frostc$Type$Kind $tmp1763 = *$tmp1762;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1764;
$tmp1764 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1764->value = $tmp1763;
org$frostlang$frostc$Type$Kind* $tmp1765 = &$tmp1755->typeKind;
org$frostlang$frostc$Type$Kind $tmp1766 = *$tmp1765;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1767;
$tmp1767 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1767->value = $tmp1766;
ITable* $tmp1768 = ((frost$core$Equatable*) $tmp1764)->$class->itable;
while ($tmp1768->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1768 = $tmp1768->next;
}
$fn1770 $tmp1769 = $tmp1768->methods[0];
frost$core$Bit $tmp1771 = $tmp1769(((frost$core$Equatable*) $tmp1764), ((frost$core$Equatable*) $tmp1767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1767)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1764)));
*(&local26) = $tmp1771;
goto block91;
block90:;
*(&local26) = $tmp1760;
goto block91;
block91:;
frost$core$Bit $tmp1772 = *(&local26);
bool $tmp1773 = $tmp1772.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
if ($tmp1773) goto block85; else goto block87;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:337
org$frostlang$frostc$IR$Value* $tmp1774 = *(&local24);
org$frostlang$frostc$Type** $tmp1775 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1776 = *$tmp1775;
org$frostlang$frostc$IR$Value* $tmp1777 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1774, $tmp1776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
org$frostlang$frostc$IR$Value* $tmp1778 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
*(&local25) = $tmp1777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:338
org$frostlang$frostc$IR$Value* $tmp1779 = *(&local25);
frost$core$Bit $tmp1780 = (frost$core$Bit) {$tmp1779 != NULL};
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block92; else goto block93;
block93:;
frost$core$Int $tmp1782 = (frost$core$Int) {338u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1783, $tmp1782);
abort(); // unreachable
block92:;
goto block86;
block87:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:341
org$frostlang$frostc$IR$Value* $tmp1784 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
org$frostlang$frostc$IR$Value* $tmp1785 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
*(&local25) = $tmp1784;
goto block86;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:345
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1786 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1787 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1788 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1789 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1790 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1791 = *(&local11);
frost$core$Int $tmp1792 = (frost$core$Int) {3u};
ITable* $tmp1793 = $tmp1791->$class->itable;
while ($tmp1793->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1793 = $tmp1793->next;
}
$fn1795 $tmp1794 = $tmp1793->methods[0];
frost$core$Object* $tmp1796 = $tmp1794($tmp1791, $tmp1792);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1789, $tmp1790, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1796));
$fn1798 $tmp1797 = ($fn1798) $tmp1788->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1799 = $tmp1797($tmp1788, $tmp1789);
org$frostlang$frostc$Type** $tmp1800 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1801 = *$tmp1800;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1786, $tmp1787, $tmp1799, $tmp1801);
org$frostlang$frostc$IR$Value* $tmp1802 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1786);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
org$frostlang$frostc$IR$Value* $tmp1803 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
*(&local27) = $tmp1802;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$Frost$unref$frost$core$Object$Q($tmp1796);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:349
org$frostlang$frostc$IR* $tmp1804 = *(&local0);
$fn1806 $tmp1805 = ($fn1806) $tmp1804->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1807 = $tmp1805($tmp1804, &$s1808);
*(&local28) = $tmp1807;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:350
org$frostlang$frostc$IR* $tmp1809 = *(&local0);
$fn1811 $tmp1810 = ($fn1811) $tmp1809->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1812 = $tmp1810($tmp1809, &$s1813);
*(&local29) = $tmp1812;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:351
org$frostlang$frostc$IR* $tmp1814 = *(&local0);
$fn1816 $tmp1815 = ($fn1816) $tmp1814->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1817 = $tmp1815($tmp1814, &$s1818);
*(&local30) = $tmp1817;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:352
org$frostlang$frostc$IR* $tmp1819 = *(&local0);
$fn1821 $tmp1820 = ($fn1821) $tmp1819->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1822 = $tmp1820($tmp1819, &$s1823);
*(&local31) = $tmp1822;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:353
org$frostlang$frostc$IR* $tmp1824 = *(&local0);
$fn1826 $tmp1825 = ($fn1826) $tmp1824->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1827 = $tmp1825($tmp1824, &$s1828);
*(&local32) = $tmp1827;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:354
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:355
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp1829 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1830 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp1831 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1832 = *(&local29);
org$frostlang$frostc$IR$Block$ID $tmp1833 = *(&local30);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1830, $tmp1831, param2, $tmp1832, $tmp1833);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1829, param0, $tmp1830);
*(&local34) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
org$frostlang$frostc$Compiler$AutoContext* $tmp1834 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
*(&local34) = $tmp1829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:357
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp1835 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1835, param0);
*(&local35) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
org$frostlang$frostc$Compiler$AutoScope* $tmp1836 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
*(&local35) = $tmp1835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:358
org$frostlang$frostc$Type* $tmp1837 = *(&local9);
frost$core$String** $tmp1838 = &((org$frostlang$frostc$Symbol*) $tmp1837)->name;
frost$core$String* $tmp1839 = *$tmp1838;
frost$core$Bit $tmp1840 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1839, &$s1841);
bool $tmp1842 = $tmp1840.value;
if ($tmp1842) goto block94; else goto block97;
block97:;
org$frostlang$frostc$Type* $tmp1843 = *(&local9);
frost$core$String** $tmp1844 = &((org$frostlang$frostc$Symbol*) $tmp1843)->name;
frost$core$String* $tmp1845 = *$tmp1844;
frost$core$Bit $tmp1846 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1845, &$s1847);
bool $tmp1848 = $tmp1846.value;
if ($tmp1848) goto block94; else goto block96;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:360
org$frostlang$frostc$IR$Value* $tmp1849 = *(&local14);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1850 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1851 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1850, $tmp1851);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1852 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1853 = (frost$core$Int) {25u};
frost$core$UInt64 $tmp1854 = (frost$core$UInt64) {0u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp1852, $tmp1853, param1, $tmp1854);
frost$collections$Array$add$frost$collections$Array$T($tmp1850, ((frost$core$Object*) $tmp1852));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1855 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1856 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1857 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1858 = *$tmp1857;
frost$core$Bit $tmp1859 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1855, $tmp1856, $tmp1858, $tmp1859);
org$frostlang$frostc$IR$Value* $tmp1860 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1849, &$s1861, ((frost$collections$ListView*) $tmp1850), $tmp1855);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
org$frostlang$frostc$IR$Value* $tmp1862 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
*(&local36) = $tmp1860;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:362
org$frostlang$frostc$IR$Value* $tmp1863 = *(&local36);
frost$core$Bit $tmp1864 = (frost$core$Bit) {$tmp1863 != NULL};
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block98; else goto block99;
block99:;
frost$core$Int $tmp1866 = (frost$core$Int) {362u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1867, $tmp1866);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:363
org$frostlang$frostc$IR$Value* $tmp1868 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1869 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1868);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
org$frostlang$frostc$IR$Value* $tmp1870 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
*(&local33) = $tmp1869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
org$frostlang$frostc$IR$Value* $tmp1871 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block95;
block96:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:366
org$frostlang$frostc$Type* $tmp1872 = *(&local9);
frost$core$String** $tmp1873 = &((org$frostlang$frostc$Symbol*) $tmp1872)->name;
frost$core$String* $tmp1874 = *$tmp1873;
frost$core$Bit $tmp1875 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1874, &$s1876);
bool $tmp1877 = $tmp1875.value;
if ($tmp1877) goto block100; else goto block101;
block101:;
frost$core$Int $tmp1878 = (frost$core$Int) {366u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1879, $tmp1878);
abort(); // unreachable
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:367
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1880 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1881 = (frost$core$Int) {0u};
frost$core$Bit $tmp1882 = (frost$core$Bit) {true};
org$frostlang$frostc$Type** $tmp1883 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1884 = *$tmp1883;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Bit$org$frostlang$frostc$Type($tmp1880, $tmp1881, $tmp1882, $tmp1884);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
org$frostlang$frostc$IR$Value* $tmp1885 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
*(&local33) = $tmp1880;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
goto block95;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:369
org$frostlang$frostc$IR* $tmp1886 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1887 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1888 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1889 = *(&local33);
org$frostlang$frostc$IR$Block$ID $tmp1890 = *(&local31);
org$frostlang$frostc$IR$Block$ID $tmp1891 = *(&local32);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1887, $tmp1888, param1, $tmp1889, $tmp1890, $tmp1891);
$fn1893 $tmp1892 = ($fn1893) $tmp1886->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1894 = $tmp1892($tmp1886, $tmp1887);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:370
org$frostlang$frostc$IR* $tmp1895 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1896 = *(&local31);
$fn1898 $tmp1897 = ($fn1898) $tmp1895->$class->vtable[4];
$tmp1897($tmp1895, $tmp1896);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:371
org$frostlang$frostc$IR* $tmp1899 = *(&local0);
$fn1901 $tmp1900 = ($fn1901) $tmp1899->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1902 = $tmp1900($tmp1899, &$s1903);
*(&local37) = $tmp1902;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:372
org$frostlang$frostc$IR* $tmp1904 = *(&local0);
$fn1906 $tmp1905 = ($fn1906) $tmp1904->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1907 = $tmp1905($tmp1904, &$s1908);
*(&local38) = $tmp1907;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:373
org$frostlang$frostc$IR* $tmp1909 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1910 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1911 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1912 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1913 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1914 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1910, $tmp1911, param1, $tmp1912, $tmp1913, $tmp1914);
$fn1916 $tmp1915 = ($fn1916) $tmp1909->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1917 = $tmp1915($tmp1909, $tmp1910);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:375
org$frostlang$frostc$IR* $tmp1918 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1919 = *(&local37);
$fn1921 $tmp1920 = ($fn1921) $tmp1918->$class->vtable[4];
$tmp1920($tmp1918, $tmp1919);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:376
org$frostlang$frostc$IR$Value* $tmp1922 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp1923 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:376:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1924 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1925 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1924, $tmp1925);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1926 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1927 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1928 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1926, $tmp1927, $tmp1928, $tmp1923);
frost$collections$Array$add$frost$collections$Array$T($tmp1924, ((frost$core$Object*) $tmp1926));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1924)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1929 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1930 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1931 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1932 = *$tmp1931;
frost$core$Bit $tmp1933 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1929, $tmp1930, $tmp1932, $tmp1933);
org$frostlang$frostc$IR$Value* $tmp1934 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1922, &$s1935, ((frost$collections$ListView*) $tmp1924), $tmp1929);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
org$frostlang$frostc$IR$Value* $tmp1936 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
*(&local39) = $tmp1934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1924)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:378
org$frostlang$frostc$IR$Value* $tmp1937 = *(&local39);
frost$core$Bit $tmp1938 = (frost$core$Bit) {$tmp1937 != NULL};
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block103; else goto block104;
block104:;
frost$core$Int $tmp1940 = (frost$core$Int) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1941, $tmp1940);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:379
org$frostlang$frostc$IR$Value* $tmp1942 = *(&local39);
org$frostlang$frostc$IR$Value* $tmp1943 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1942);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
org$frostlang$frostc$IR$Value* $tmp1944 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local40) = $tmp1943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:380
org$frostlang$frostc$IR* $tmp1945 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1946 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1947 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1948 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1949 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp1950 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1946, $tmp1947, param1, $tmp1948, $tmp1949, $tmp1950);
$fn1952 $tmp1951 = ($fn1952) $tmp1945->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1953 = $tmp1951($tmp1945, $tmp1946);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:382
org$frostlang$frostc$IR* $tmp1954 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1955 = *(&local38);
$fn1957 $tmp1956 = ($fn1957) $tmp1954->$class->vtable[4];
$tmp1956($tmp1954, $tmp1955);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:383
org$frostlang$frostc$IR$Value* $tmp1958 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp1959 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:383:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1960 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1961 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1960, $tmp1961);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1962 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1963 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1964 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1962, $tmp1963, $tmp1964, $tmp1959);
frost$collections$Array$add$frost$collections$Array$T($tmp1960, ((frost$core$Object*) $tmp1962));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1960)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1965 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1966 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1967 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1968 = *$tmp1967;
frost$core$Bit $tmp1969 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1965, $tmp1966, $tmp1968, $tmp1969);
org$frostlang$frostc$IR$Value* $tmp1970 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1958, &$s1971, ((frost$collections$ListView*) $tmp1960), $tmp1965);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
org$frostlang$frostc$IR$Value* $tmp1972 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local41) = $tmp1970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1960)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:385
org$frostlang$frostc$IR$Value* $tmp1973 = *(&local41);
frost$core$Bit $tmp1974 = (frost$core$Bit) {$tmp1973 != NULL};
bool $tmp1975 = $tmp1974.value;
if ($tmp1975) goto block106; else goto block107;
block107:;
frost$core$Int $tmp1976 = (frost$core$Int) {385u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1977, $tmp1976);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:386
org$frostlang$frostc$IR$Value* $tmp1978 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1979 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1978);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
org$frostlang$frostc$IR$Value* $tmp1980 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
*(&local42) = $tmp1979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:387
org$frostlang$frostc$IR* $tmp1981 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1982 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1983 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1984 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1985 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp1986 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1982, $tmp1983, param1, $tmp1984, $tmp1985, $tmp1986);
$fn1988 $tmp1987 = ($fn1988) $tmp1981->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1989 = $tmp1987($tmp1981, $tmp1982);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:389
org$frostlang$frostc$IR* $tmp1990 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1991 = *(&local32);
$fn1993 $tmp1992 = ($fn1993) $tmp1990->$class->vtable[4];
$tmp1992($tmp1990, $tmp1991);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:390
org$frostlang$frostc$IR* $tmp1994 = *(&local0);
$fn1996 $tmp1995 = ($fn1996) $tmp1994->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1997 = $tmp1995($tmp1994, &$s1998);
*(&local43) = $tmp1997;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:391
org$frostlang$frostc$IR* $tmp1999 = *(&local0);
$fn2001 $tmp2000 = ($fn2001) $tmp1999->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2002 = $tmp2000($tmp1999, &$s2003);
*(&local44) = $tmp2002;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:392
org$frostlang$frostc$IR* $tmp2004 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2005 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2006 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2007 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2008 = *(&local43);
org$frostlang$frostc$IR$Block$ID $tmp2009 = *(&local44);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2005, $tmp2006, param1, $tmp2007, $tmp2008, $tmp2009);
$fn2011 $tmp2010 = ($fn2011) $tmp2004->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2012 = $tmp2010($tmp2004, $tmp2005);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:394
org$frostlang$frostc$IR* $tmp2013 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2014 = *(&local43);
$fn2016 $tmp2015 = ($fn2016) $tmp2013->$class->vtable[4];
$tmp2015($tmp2013, $tmp2014);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:395
org$frostlang$frostc$IR$Value* $tmp2017 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp2018 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:395:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2019 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2020 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2019, $tmp2020);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2021 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2022 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2023 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2021, $tmp2022, $tmp2023, $tmp2018);
frost$collections$Array$add$frost$collections$Array$T($tmp2019, ((frost$core$Object*) $tmp2021));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2019)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2024 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2025 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2026 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2027 = *$tmp2026;
frost$core$Bit $tmp2028 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2024, $tmp2025, $tmp2027, $tmp2028);
org$frostlang$frostc$IR$Value* $tmp2029 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2017, &$s2030, ((frost$collections$ListView*) $tmp2019), $tmp2024);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
org$frostlang$frostc$IR$Value* $tmp2031 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local45) = $tmp2029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2019)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:397
org$frostlang$frostc$IR$Value* $tmp2032 = *(&local45);
frost$core$Bit $tmp2033 = (frost$core$Bit) {$tmp2032 != NULL};
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block109; else goto block110;
block110:;
frost$core$Int $tmp2035 = (frost$core$Int) {397u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2036, $tmp2035);
abort(); // unreachable
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:398
org$frostlang$frostc$IR$Value* $tmp2037 = *(&local45);
org$frostlang$frostc$IR$Value* $tmp2038 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2037);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
org$frostlang$frostc$IR$Value* $tmp2039 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
*(&local46) = $tmp2038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:399
org$frostlang$frostc$IR* $tmp2040 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2041 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2042 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2043 = *(&local46);
org$frostlang$frostc$IR$Block$ID $tmp2044 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2045 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2041, $tmp2042, param1, $tmp2043, $tmp2044, $tmp2045);
$fn2047 $tmp2046 = ($fn2047) $tmp2040->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2048 = $tmp2046($tmp2040, $tmp2041);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:401
org$frostlang$frostc$IR* $tmp2049 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2050 = *(&local44);
$fn2052 $tmp2051 = ($fn2052) $tmp2049->$class->vtable[4];
$tmp2051($tmp2049, $tmp2050);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:402
org$frostlang$frostc$IR$Value* $tmp2053 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp2054 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:402:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2055 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2056 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2055, $tmp2056);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2057 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2058 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2059 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2057, $tmp2058, $tmp2059, $tmp2054);
frost$collections$Array$add$frost$collections$Array$T($tmp2055, ((frost$core$Object*) $tmp2057));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2055)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2060 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2061 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2062 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2063 = *$tmp2062;
frost$core$Bit $tmp2064 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2060, $tmp2061, $tmp2063, $tmp2064);
org$frostlang$frostc$IR$Value* $tmp2065 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2053, &$s2066, ((frost$collections$ListView*) $tmp2055), $tmp2060);
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
org$frostlang$frostc$IR$Value* $tmp2067 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local47) = $tmp2065;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2055)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:404
org$frostlang$frostc$IR$Value* $tmp2068 = *(&local47);
frost$core$Bit $tmp2069 = (frost$core$Bit) {$tmp2068 != NULL};
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block112; else goto block113;
block113:;
frost$core$Int $tmp2071 = (frost$core$Int) {404u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2072, $tmp2071);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:405
org$frostlang$frostc$IR$Value* $tmp2073 = *(&local47);
org$frostlang$frostc$IR$Value* $tmp2074 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2073);
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
org$frostlang$frostc$IR$Value* $tmp2075 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local48) = $tmp2074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:406
org$frostlang$frostc$IR* $tmp2076 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2077 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2078 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2079 = *(&local48);
org$frostlang$frostc$IR$Block$ID $tmp2080 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2081 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2077, $tmp2078, param1, $tmp2079, $tmp2080, $tmp2081);
$fn2083 $tmp2082 = ($fn2083) $tmp2076->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2084 = $tmp2082($tmp2076, $tmp2077);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:408
org$frostlang$frostc$IR* $tmp2085 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2086 = *(&local28);
$fn2088 $tmp2087 = ($fn2088) $tmp2085->$class->vtable[4];
$tmp2087($tmp2085, $tmp2086);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:409
ITable* $tmp2089 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2089->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2089 = $tmp2089->next;
}
$fn2091 $tmp2090 = $tmp2089->methods[0];
frost$collections$Iterator* $tmp2092 = $tmp2090(((frost$collections$Iterable*) param5));
goto block114;
block114:;
ITable* $tmp2093 = $tmp2092->$class->itable;
while ($tmp2093->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2093 = $tmp2093->next;
}
$fn2095 $tmp2094 = $tmp2093->methods[0];
frost$core$Bit $tmp2096 = $tmp2094($tmp2092);
bool $tmp2097 = $tmp2096.value;
if ($tmp2097) goto block116; else goto block115;
block115:;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2098 = $tmp2092->$class->itable;
while ($tmp2098->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2098 = $tmp2098->next;
}
$fn2100 $tmp2099 = $tmp2098->methods[1];
frost$core$Object* $tmp2101 = $tmp2099($tmp2092);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2101)));
org$frostlang$frostc$ASTNode* $tmp2102 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
*(&local49) = ((org$frostlang$frostc$ASTNode*) $tmp2101);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:410
org$frostlang$frostc$ASTNode* $tmp2103 = *(&local49);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp2103);
frost$core$Frost$unref$frost$core$Object$Q($tmp2101);
org$frostlang$frostc$ASTNode* $tmp2104 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block114;
block116:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
org$frostlang$frostc$IR$Value* $tmp2105 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2106 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2107 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2108 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2109 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2110 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2111 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2112 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2113 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
*(&local35) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:413
org$frostlang$frostc$IR* $tmp2114 = *(&local0);
$fn2116 $tmp2115 = ($fn2116) $tmp2114->$class->vtable[5];
frost$core$Bit $tmp2117 = $tmp2115($tmp2114);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:413:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2118 = $tmp2117.value;
bool $tmp2119 = !$tmp2118;
frost$core$Bit $tmp2120 = (frost$core$Bit) {$tmp2119};
bool $tmp2121 = $tmp2120.value;
if ($tmp2121) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:414
org$frostlang$frostc$IR* $tmp2122 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2123 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2124 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp2125 = *(&local30);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2123, $tmp2124, param1, $tmp2125);
$fn2127 $tmp2126 = ($fn2127) $tmp2122->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2128 = $tmp2126($tmp2122, $tmp2123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
goto block118;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:416
org$frostlang$frostc$IR* $tmp2129 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2130 = *(&local30);
$fn2132 $tmp2131 = ($fn2132) $tmp2129->$class->vtable[4];
$tmp2131($tmp2129, $tmp2130);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:417
org$frostlang$frostc$IR* $tmp2133 = *(&local0);
$fn2135 $tmp2134 = ($fn2135) $tmp2133->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2136 = $tmp2134($tmp2133, &$s2137);
*(&local50) = $tmp2136;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:419
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2138 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2139 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp2140 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2141 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2142 = (frost$core$Int) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2143 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2144 = (frost$core$Int) {2u};
frost$core$Int $tmp2145 = *(&local3);
org$frostlang$frostc$Type* $tmp2146 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp2143, $tmp2144, $tmp2145, $tmp2146);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2141, $tmp2142, param1, $tmp2143);
$fn2148 $tmp2147 = ($fn2148) $tmp2140->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2149 = $tmp2147($tmp2140, $tmp2141);
org$frostlang$frostc$Type* $tmp2150 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2138, $tmp2139, $tmp2149, $tmp2150);
org$frostlang$frostc$Type* $tmp2151 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2152 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2138, $tmp2151);
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
org$frostlang$frostc$IR$Value* $tmp2153 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
*(&local51) = $tmp2152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:421
org$frostlang$frostc$IR$Value* $tmp2154 = *(&local51);
frost$core$Bit $tmp2155 = (frost$core$Bit) {$tmp2154 != NULL};
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block120; else goto block121;
block121:;
frost$core$Int $tmp2157 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2158, $tmp2157);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:422
org$frostlang$frostc$IR* $tmp2159 = *(&local0);
$fn2161 $tmp2160 = ($fn2161) $tmp2159->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2162 = $tmp2160($tmp2159, &$s2163);
*(&local52) = $tmp2162;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:423
org$frostlang$frostc$IR* $tmp2164 = *(&local0);
$fn2166 $tmp2165 = ($fn2166) $tmp2164->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2167 = $tmp2165($tmp2164, &$s2168);
*(&local53) = $tmp2167;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:424
org$frostlang$frostc$IR* $tmp2169 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2170 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2171 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2172 = *(&local33);
org$frostlang$frostc$IR$Block$ID $tmp2173 = *(&local52);
org$frostlang$frostc$IR$Block$ID $tmp2174 = *(&local53);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2170, $tmp2171, param1, $tmp2172, $tmp2173, $tmp2174);
$fn2176 $tmp2175 = ($fn2176) $tmp2169->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2177 = $tmp2175($tmp2169, $tmp2170);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:428
org$frostlang$frostc$IR* $tmp2178 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2179 = *(&local52);
$fn2181 $tmp2180 = ($fn2181) $tmp2178->$class->vtable[4];
$tmp2180($tmp2178, $tmp2179);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:431
org$frostlang$frostc$IR$Value* $tmp2182 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp2183 = *(&local51);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:432:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2184 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2185 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2184, $tmp2185);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2186 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2187 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2188 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2186, $tmp2187, $tmp2188, $tmp2183);
frost$collections$Array$add$frost$collections$Array$T($tmp2184, ((frost$core$Object*) $tmp2186));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2184)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2189 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2190 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2189, $tmp2190);
org$frostlang$frostc$IR$Value* $tmp2191 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2182, &$s2192, ((frost$collections$ListView*) $tmp2184), $tmp2189);
org$frostlang$frostc$Type* $tmp2193 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:432:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2194 = &$tmp2193->typeKind;
org$frostlang$frostc$Type$Kind $tmp2195 = *$tmp2194;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2196;
$tmp2196 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2196->value = $tmp2195;
frost$core$Int $tmp2197 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp2198 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp2197);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2199;
$tmp2199 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2199->value = $tmp2198;
ITable* $tmp2200 = ((frost$core$Equatable*) $tmp2196)->$class->itable;
while ($tmp2200->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2200 = $tmp2200->next;
}
$fn2202 $tmp2201 = $tmp2200->methods[1];
frost$core$Bit $tmp2203 = $tmp2201(((frost$core$Equatable*) $tmp2196), ((frost$core$Equatable*) $tmp2199));
bool $tmp2204 = $tmp2203.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2199)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2196)));
if ($tmp2204) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
*(&local55) = $tmp2193;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
goto block124;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp2205 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2193);
frost$core$Int $tmp2206 = (frost$core$Int) {0u};
frost$core$Object* $tmp2207 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2205, $tmp2206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2207)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2207);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local55) = ((org$frostlang$frostc$Type*) $tmp2207);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2207)));
goto block124;
block124:;
org$frostlang$frostc$Type* $tmp2208 = *(&local55);
org$frostlang$frostc$Type** $tmp2209 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2210 = *$tmp2209;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2211 = &((org$frostlang$frostc$Symbol*) $tmp2208)->name;
frost$core$String* $tmp2212 = *$tmp2211;
frost$core$String** $tmp2213 = &((org$frostlang$frostc$Symbol*) $tmp2210)->name;
frost$core$String* $tmp2214 = *$tmp2213;
frost$core$Bit $tmp2215 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2212, $tmp2214);
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block131; else goto block132;
block131:;
org$frostlang$frostc$Type$Kind* $tmp2217 = &$tmp2208->typeKind;
org$frostlang$frostc$Type$Kind $tmp2218 = *$tmp2217;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2219;
$tmp2219 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2219->value = $tmp2218;
org$frostlang$frostc$Type$Kind* $tmp2220 = &$tmp2210->typeKind;
org$frostlang$frostc$Type$Kind $tmp2221 = *$tmp2220;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2222;
$tmp2222 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2222->value = $tmp2221;
ITable* $tmp2223 = ((frost$core$Equatable*) $tmp2219)->$class->itable;
while ($tmp2223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2223 = $tmp2223->next;
}
$fn2225 $tmp2224 = $tmp2223->methods[0];
frost$core$Bit $tmp2226 = $tmp2224(((frost$core$Equatable*) $tmp2219), ((frost$core$Equatable*) $tmp2222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2222)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2219)));
*(&local56) = $tmp2226;
goto block133;
block132:;
*(&local56) = $tmp2215;
goto block133;
block133:;
frost$core$Bit $tmp2227 = *(&local56);
bool $tmp2228 = $tmp2227.value;
if ($tmp2228) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp2229 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp2230 = *$tmp2229;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
org$frostlang$frostc$Type* $tmp2231 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2230;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
goto block123;
block129:;
org$frostlang$frostc$Type** $tmp2232 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp2233 = *$tmp2232;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2234 = &((org$frostlang$frostc$Symbol*) $tmp2208)->name;
frost$core$String* $tmp2235 = *$tmp2234;
frost$core$String** $tmp2236 = &((org$frostlang$frostc$Symbol*) $tmp2233)->name;
frost$core$String* $tmp2237 = *$tmp2236;
frost$core$Bit $tmp2238 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2235, $tmp2237);
bool $tmp2239 = $tmp2238.value;
if ($tmp2239) goto block137; else goto block138;
block137:;
org$frostlang$frostc$Type$Kind* $tmp2240 = &$tmp2208->typeKind;
org$frostlang$frostc$Type$Kind $tmp2241 = *$tmp2240;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2242;
$tmp2242 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2242->value = $tmp2241;
org$frostlang$frostc$Type$Kind* $tmp2243 = &$tmp2233->typeKind;
org$frostlang$frostc$Type$Kind $tmp2244 = *$tmp2243;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2245;
$tmp2245 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2245->value = $tmp2244;
ITable* $tmp2246 = ((frost$core$Equatable*) $tmp2242)->$class->itable;
while ($tmp2246->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2246 = $tmp2246->next;
}
$fn2248 $tmp2247 = $tmp2246->methods[0];
frost$core$Bit $tmp2249 = $tmp2247(((frost$core$Equatable*) $tmp2242), ((frost$core$Equatable*) $tmp2245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2242)));
*(&local57) = $tmp2249;
goto block139;
block138:;
*(&local57) = $tmp2238;
goto block139;
block139:;
frost$core$Bit $tmp2250 = *(&local57);
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp2252 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp2253 = *$tmp2252;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
org$frostlang$frostc$Type* $tmp2254 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2253;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
goto block123;
block135:;
org$frostlang$frostc$Type** $tmp2255 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp2256 = *$tmp2255;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2257 = &((org$frostlang$frostc$Symbol*) $tmp2208)->name;
frost$core$String* $tmp2258 = *$tmp2257;
frost$core$String** $tmp2259 = &((org$frostlang$frostc$Symbol*) $tmp2256)->name;
frost$core$String* $tmp2260 = *$tmp2259;
frost$core$Bit $tmp2261 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2258, $tmp2260);
bool $tmp2262 = $tmp2261.value;
if ($tmp2262) goto block143; else goto block144;
block143:;
org$frostlang$frostc$Type$Kind* $tmp2263 = &$tmp2208->typeKind;
org$frostlang$frostc$Type$Kind $tmp2264 = *$tmp2263;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2265;
$tmp2265 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2265->value = $tmp2264;
org$frostlang$frostc$Type$Kind* $tmp2266 = &$tmp2256->typeKind;
org$frostlang$frostc$Type$Kind $tmp2267 = *$tmp2266;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2268;
$tmp2268 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2268->value = $tmp2267;
ITable* $tmp2269 = ((frost$core$Equatable*) $tmp2265)->$class->itable;
while ($tmp2269->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2269 = $tmp2269->next;
}
$fn2271 $tmp2270 = $tmp2269->methods[0];
frost$core$Bit $tmp2272 = $tmp2270(((frost$core$Equatable*) $tmp2265), ((frost$core$Equatable*) $tmp2268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2268)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2265)));
*(&local58) = $tmp2272;
goto block145;
block144:;
*(&local58) = $tmp2261;
goto block145;
block145:;
frost$core$Bit $tmp2273 = *(&local58);
bool $tmp2274 = $tmp2273.value;
if ($tmp2274) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp2275 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp2276 = *$tmp2275;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
org$frostlang$frostc$Type* $tmp2277 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2276;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
goto block123;
block141:;
org$frostlang$frostc$Type** $tmp2278 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp2279 = *$tmp2278;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2280 = &((org$frostlang$frostc$Symbol*) $tmp2208)->name;
frost$core$String* $tmp2281 = *$tmp2280;
frost$core$String** $tmp2282 = &((org$frostlang$frostc$Symbol*) $tmp2279)->name;
frost$core$String* $tmp2283 = *$tmp2282;
frost$core$Bit $tmp2284 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2281, $tmp2283);
bool $tmp2285 = $tmp2284.value;
if ($tmp2285) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Type$Kind* $tmp2286 = &$tmp2208->typeKind;
org$frostlang$frostc$Type$Kind $tmp2287 = *$tmp2286;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2288;
$tmp2288 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2288->value = $tmp2287;
org$frostlang$frostc$Type$Kind* $tmp2289 = &$tmp2279->typeKind;
org$frostlang$frostc$Type$Kind $tmp2290 = *$tmp2289;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2291;
$tmp2291 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2291->value = $tmp2290;
ITable* $tmp2292 = ((frost$core$Equatable*) $tmp2288)->$class->itable;
while ($tmp2292->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2292 = $tmp2292->next;
}
$fn2294 $tmp2293 = $tmp2292->methods[0];
frost$core$Bit $tmp2295 = $tmp2293(((frost$core$Equatable*) $tmp2288), ((frost$core$Equatable*) $tmp2291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2291)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2288)));
*(&local59) = $tmp2295;
goto block151;
block150:;
*(&local59) = $tmp2284;
goto block151;
block151:;
frost$core$Bit $tmp2296 = *(&local59);
bool $tmp2297 = $tmp2296.value;
if ($tmp2297) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp2298 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp2299 = *$tmp2298;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
org$frostlang$frostc$Type* $tmp2300 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2299;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
goto block123;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
org$frostlang$frostc$Type* $tmp2301 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2193;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
goto block123;
block127:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
org$frostlang$frostc$Type* $tmp2302 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
goto block123;
block123:;
org$frostlang$frostc$Type* $tmp2303 = *(&local54);
org$frostlang$frostc$IR$Value* $tmp2304 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2191, $tmp2303);
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
org$frostlang$frostc$IR$Value* $tmp2305 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local60) = $tmp2304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:433
org$frostlang$frostc$IR$Value* $tmp2306 = *(&local60);
frost$core$Bit $tmp2307 = (frost$core$Bit) {$tmp2306 != NULL};
bool $tmp2308 = $tmp2307.value;
if ($tmp2308) goto block152; else goto block153;
block153:;
frost$core$Int $tmp2309 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2310, $tmp2309);
abort(); // unreachable
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:436
org$frostlang$frostc$IR* $tmp2311 = *(&local0);
$fn2313 $tmp2312 = ($fn2313) $tmp2311->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2314 = $tmp2312($tmp2311, &$s2315);
*(&local61) = $tmp2314;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:437
org$frostlang$frostc$IR* $tmp2316 = *(&local0);
$fn2318 $tmp2317 = ($fn2318) $tmp2316->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2319 = $tmp2317($tmp2316, &$s2320);
*(&local62) = $tmp2319;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:438
org$frostlang$frostc$IR* $tmp2321 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2322 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2323 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2324 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2325 = *(&local61);
org$frostlang$frostc$IR$Block$ID $tmp2326 = *(&local62);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2322, $tmp2323, param1, $tmp2324, $tmp2325, $tmp2326);
$fn2328 $tmp2327 = ($fn2328) $tmp2321->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2329 = $tmp2327($tmp2321, $tmp2322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:442
org$frostlang$frostc$IR* $tmp2330 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2331 = *(&local61);
$fn2333 $tmp2332 = ($fn2333) $tmp2330->$class->vtable[4];
$tmp2332($tmp2330, $tmp2331);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:443
org$frostlang$frostc$IR$Value* $tmp2334 = *(&local60);
org$frostlang$frostc$IR$Value* $tmp2335 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:443:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2336 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2337 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2336, $tmp2337);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2338 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2339 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2340 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2338, $tmp2339, $tmp2340, $tmp2335);
frost$collections$Array$add$frost$collections$Array$T($tmp2336, ((frost$core$Object*) $tmp2338));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2336)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2341 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2342 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2343 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2344 = *$tmp2343;
frost$core$Bit $tmp2345 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2341, $tmp2342, $tmp2344, $tmp2345);
org$frostlang$frostc$IR$Value* $tmp2346 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2334, &$s2347, ((frost$collections$ListView*) $tmp2336), $tmp2341);
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
org$frostlang$frostc$IR$Value* $tmp2348 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
*(&local63) = $tmp2346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2336)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:445
org$frostlang$frostc$IR$Value* $tmp2349 = *(&local63);
frost$core$Bit $tmp2350 = (frost$core$Bit) {$tmp2349 != NULL};
bool $tmp2351 = $tmp2350.value;
if ($tmp2351) goto block155; else goto block156;
block156:;
frost$core$Int $tmp2352 = (frost$core$Int) {445u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2353, $tmp2352);
abort(); // unreachable
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:446
org$frostlang$frostc$IR$Value* $tmp2354 = *(&local63);
org$frostlang$frostc$IR$Value* $tmp2355 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2354);
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
org$frostlang$frostc$IR$Value* $tmp2356 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2356));
*(&local64) = $tmp2355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:447
org$frostlang$frostc$IR* $tmp2357 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2358 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2359 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2360 = *(&local64);
org$frostlang$frostc$IR$Block$ID $tmp2361 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2362 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2358, $tmp2359, param1, $tmp2360, $tmp2361, $tmp2362);
$fn2364 $tmp2363 = ($fn2364) $tmp2357->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2365 = $tmp2363($tmp2357, $tmp2358);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:450
org$frostlang$frostc$IR* $tmp2366 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2367 = *(&local62);
$fn2369 $tmp2368 = ($fn2369) $tmp2366->$class->vtable[4];
$tmp2368($tmp2366, $tmp2367);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:451
org$frostlang$frostc$IR$Value* $tmp2370 = *(&local60);
org$frostlang$frostc$IR$Value* $tmp2371 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:451:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2372 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2373 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2372, $tmp2373);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2374 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2375 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2376 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2374, $tmp2375, $tmp2376, $tmp2371);
frost$collections$Array$add$frost$collections$Array$T($tmp2372, ((frost$core$Object*) $tmp2374));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2372)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2377 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2378 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2379 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2380 = *$tmp2379;
frost$core$Bit $tmp2381 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2377, $tmp2378, $tmp2380, $tmp2381);
org$frostlang$frostc$IR$Value* $tmp2382 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2370, &$s2383, ((frost$collections$ListView*) $tmp2372), $tmp2377);
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
org$frostlang$frostc$IR$Value* $tmp2384 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
*(&local65) = $tmp2382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2372)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:453
org$frostlang$frostc$IR$Value* $tmp2385 = *(&local65);
frost$core$Bit $tmp2386 = (frost$core$Bit) {$tmp2385 != NULL};
bool $tmp2387 = $tmp2386.value;
if ($tmp2387) goto block158; else goto block159;
block159:;
frost$core$Int $tmp2388 = (frost$core$Int) {453u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2389, $tmp2388);
abort(); // unreachable
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:454
org$frostlang$frostc$IR$Value* $tmp2390 = *(&local65);
org$frostlang$frostc$IR$Value* $tmp2391 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2390);
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
org$frostlang$frostc$IR$Value* $tmp2392 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
*(&local66) = $tmp2391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:455
org$frostlang$frostc$IR* $tmp2393 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2394 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2395 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2396 = *(&local66);
org$frostlang$frostc$IR$Block$ID $tmp2397 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2398 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2394, $tmp2395, param1, $tmp2396, $tmp2397, $tmp2398);
$fn2400 $tmp2399 = ($fn2400) $tmp2393->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2401 = $tmp2399($tmp2393, $tmp2394);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:459
org$frostlang$frostc$IR* $tmp2402 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2403 = *(&local53);
$fn2405 $tmp2404 = ($fn2405) $tmp2402->$class->vtable[4];
$tmp2404($tmp2402, $tmp2403);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:460
org$frostlang$frostc$IR$Value* $tmp2406 = *(&local51);
org$frostlang$frostc$IR$Value* $tmp2407 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:460:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2408 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2409 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2408, $tmp2409);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2410 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2411 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2412 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2410, $tmp2411, $tmp2412, $tmp2407);
frost$collections$Array$add$frost$collections$Array$T($tmp2408, ((frost$core$Object*) $tmp2410));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2408)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2413 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2414 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2413, $tmp2414);
org$frostlang$frostc$IR$Value* $tmp2415 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2406, &$s2416, ((frost$collections$ListView*) $tmp2408), $tmp2413);
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
org$frostlang$frostc$IR$Value* $tmp2417 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
*(&local67) = $tmp2415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2408)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:461
org$frostlang$frostc$IR$Value* $tmp2418 = *(&local67);
frost$core$Bit $tmp2419 = (frost$core$Bit) {$tmp2418 != NULL};
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block161; else goto block162;
block162:;
frost$core$Int $tmp2421 = (frost$core$Int) {461u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2422, $tmp2421);
abort(); // unreachable
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:462
org$frostlang$frostc$IR$Value* $tmp2423 = *(&local67);
org$frostlang$frostc$Type* $tmp2424 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:462:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2425 = &$tmp2424->typeKind;
org$frostlang$frostc$Type$Kind $tmp2426 = *$tmp2425;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2427;
$tmp2427 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2427->value = $tmp2426;
frost$core$Int $tmp2428 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp2429 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp2428);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2430;
$tmp2430 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2430->value = $tmp2429;
ITable* $tmp2431 = ((frost$core$Equatable*) $tmp2427)->$class->itable;
while ($tmp2431->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2431 = $tmp2431->next;
}
$fn2433 $tmp2432 = $tmp2431->methods[1];
frost$core$Bit $tmp2434 = $tmp2432(((frost$core$Equatable*) $tmp2427), ((frost$core$Equatable*) $tmp2430));
bool $tmp2435 = $tmp2434.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2430)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2427)));
if ($tmp2435) goto block165; else goto block166;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local69) = $tmp2424;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
goto block164;
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp2436 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2424);
frost$core$Int $tmp2437 = (frost$core$Int) {0u};
frost$core$Object* $tmp2438 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2436, $tmp2437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2438)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2438);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
*(&local69) = ((org$frostlang$frostc$Type*) $tmp2438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2438)));
goto block164;
block164:;
org$frostlang$frostc$Type* $tmp2439 = *(&local69);
org$frostlang$frostc$Type** $tmp2440 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2441 = *$tmp2440;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2442 = &((org$frostlang$frostc$Symbol*) $tmp2439)->name;
frost$core$String* $tmp2443 = *$tmp2442;
frost$core$String** $tmp2444 = &((org$frostlang$frostc$Symbol*) $tmp2441)->name;
frost$core$String* $tmp2445 = *$tmp2444;
frost$core$Bit $tmp2446 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2443, $tmp2445);
bool $tmp2447 = $tmp2446.value;
if ($tmp2447) goto block171; else goto block172;
block171:;
org$frostlang$frostc$Type$Kind* $tmp2448 = &$tmp2439->typeKind;
org$frostlang$frostc$Type$Kind $tmp2449 = *$tmp2448;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2450;
$tmp2450 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2450->value = $tmp2449;
org$frostlang$frostc$Type$Kind* $tmp2451 = &$tmp2441->typeKind;
org$frostlang$frostc$Type$Kind $tmp2452 = *$tmp2451;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2453;
$tmp2453 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2453->value = $tmp2452;
ITable* $tmp2454 = ((frost$core$Equatable*) $tmp2450)->$class->itable;
while ($tmp2454->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2454 = $tmp2454->next;
}
$fn2456 $tmp2455 = $tmp2454->methods[0];
frost$core$Bit $tmp2457 = $tmp2455(((frost$core$Equatable*) $tmp2450), ((frost$core$Equatable*) $tmp2453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2453)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2450)));
*(&local70) = $tmp2457;
goto block173;
block172:;
*(&local70) = $tmp2446;
goto block173;
block173:;
frost$core$Bit $tmp2458 = *(&local70);
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block168; else goto block169;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp2460 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp2461 = *$tmp2460;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$Type* $tmp2462 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2461;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
goto block163;
block169:;
org$frostlang$frostc$Type** $tmp2463 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp2464 = *$tmp2463;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2465 = &((org$frostlang$frostc$Symbol*) $tmp2439)->name;
frost$core$String* $tmp2466 = *$tmp2465;
frost$core$String** $tmp2467 = &((org$frostlang$frostc$Symbol*) $tmp2464)->name;
frost$core$String* $tmp2468 = *$tmp2467;
frost$core$Bit $tmp2469 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2466, $tmp2468);
bool $tmp2470 = $tmp2469.value;
if ($tmp2470) goto block177; else goto block178;
block177:;
org$frostlang$frostc$Type$Kind* $tmp2471 = &$tmp2439->typeKind;
org$frostlang$frostc$Type$Kind $tmp2472 = *$tmp2471;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2473;
$tmp2473 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2473->value = $tmp2472;
org$frostlang$frostc$Type$Kind* $tmp2474 = &$tmp2464->typeKind;
org$frostlang$frostc$Type$Kind $tmp2475 = *$tmp2474;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2476;
$tmp2476 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2476->value = $tmp2475;
ITable* $tmp2477 = ((frost$core$Equatable*) $tmp2473)->$class->itable;
while ($tmp2477->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2477 = $tmp2477->next;
}
$fn2479 $tmp2478 = $tmp2477->methods[0];
frost$core$Bit $tmp2480 = $tmp2478(((frost$core$Equatable*) $tmp2473), ((frost$core$Equatable*) $tmp2476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2476)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2473)));
*(&local71) = $tmp2480;
goto block179;
block178:;
*(&local71) = $tmp2469;
goto block179;
block179:;
frost$core$Bit $tmp2481 = *(&local71);
bool $tmp2482 = $tmp2481.value;
if ($tmp2482) goto block174; else goto block175;
block174:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp2483 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp2484 = *$tmp2483;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$Type* $tmp2485 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2484;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
goto block163;
block175:;
org$frostlang$frostc$Type** $tmp2486 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp2487 = *$tmp2486;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2488 = &((org$frostlang$frostc$Symbol*) $tmp2439)->name;
frost$core$String* $tmp2489 = *$tmp2488;
frost$core$String** $tmp2490 = &((org$frostlang$frostc$Symbol*) $tmp2487)->name;
frost$core$String* $tmp2491 = *$tmp2490;
frost$core$Bit $tmp2492 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2489, $tmp2491);
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block183; else goto block184;
block183:;
org$frostlang$frostc$Type$Kind* $tmp2494 = &$tmp2439->typeKind;
org$frostlang$frostc$Type$Kind $tmp2495 = *$tmp2494;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2496;
$tmp2496 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2496->value = $tmp2495;
org$frostlang$frostc$Type$Kind* $tmp2497 = &$tmp2487->typeKind;
org$frostlang$frostc$Type$Kind $tmp2498 = *$tmp2497;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2499;
$tmp2499 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2499->value = $tmp2498;
ITable* $tmp2500 = ((frost$core$Equatable*) $tmp2496)->$class->itable;
while ($tmp2500->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2500 = $tmp2500->next;
}
$fn2502 $tmp2501 = $tmp2500->methods[0];
frost$core$Bit $tmp2503 = $tmp2501(((frost$core$Equatable*) $tmp2496), ((frost$core$Equatable*) $tmp2499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2499)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2496)));
*(&local72) = $tmp2503;
goto block185;
block184:;
*(&local72) = $tmp2492;
goto block185;
block185:;
frost$core$Bit $tmp2504 = *(&local72);
bool $tmp2505 = $tmp2504.value;
if ($tmp2505) goto block180; else goto block181;
block180:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp2506 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp2507 = *$tmp2506;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$Type* $tmp2508 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2507;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
goto block163;
block181:;
org$frostlang$frostc$Type** $tmp2509 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp2510 = *$tmp2509;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2511 = &((org$frostlang$frostc$Symbol*) $tmp2439)->name;
frost$core$String* $tmp2512 = *$tmp2511;
frost$core$String** $tmp2513 = &((org$frostlang$frostc$Symbol*) $tmp2510)->name;
frost$core$String* $tmp2514 = *$tmp2513;
frost$core$Bit $tmp2515 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2512, $tmp2514);
bool $tmp2516 = $tmp2515.value;
if ($tmp2516) goto block189; else goto block190;
block189:;
org$frostlang$frostc$Type$Kind* $tmp2517 = &$tmp2439->typeKind;
org$frostlang$frostc$Type$Kind $tmp2518 = *$tmp2517;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2519;
$tmp2519 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2519->value = $tmp2518;
org$frostlang$frostc$Type$Kind* $tmp2520 = &$tmp2510->typeKind;
org$frostlang$frostc$Type$Kind $tmp2521 = *$tmp2520;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2522;
$tmp2522 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2522->value = $tmp2521;
ITable* $tmp2523 = ((frost$core$Equatable*) $tmp2519)->$class->itable;
while ($tmp2523->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2523 = $tmp2523->next;
}
$fn2525 $tmp2524 = $tmp2523->methods[0];
frost$core$Bit $tmp2526 = $tmp2524(((frost$core$Equatable*) $tmp2519), ((frost$core$Equatable*) $tmp2522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2522)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2519)));
*(&local73) = $tmp2526;
goto block191;
block190:;
*(&local73) = $tmp2515;
goto block191;
block191:;
frost$core$Bit $tmp2527 = *(&local73);
bool $tmp2528 = $tmp2527.value;
if ($tmp2528) goto block186; else goto block187;
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp2529 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp2530 = *$tmp2529;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$Type* $tmp2531 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2530;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
goto block163;
block187:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$Type* $tmp2532 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2424;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
goto block163;
block167:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$Type* $tmp2533 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
goto block163;
block163:;
org$frostlang$frostc$Type* $tmp2534 = *(&local68);
org$frostlang$frostc$IR$Value* $tmp2535 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2423, $tmp2534);
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
org$frostlang$frostc$IR$Value* $tmp2536 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local74) = $tmp2535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:463
org$frostlang$frostc$IR$Value* $tmp2537 = *(&local74);
frost$core$Bit $tmp2538 = (frost$core$Bit) {$tmp2537 != NULL};
bool $tmp2539 = $tmp2538.value;
if ($tmp2539) goto block192; else goto block193;
block193:;
frost$core$Int $tmp2540 = (frost$core$Int) {463u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2541, $tmp2540);
abort(); // unreachable
block192:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:466
org$frostlang$frostc$IR* $tmp2542 = *(&local0);
$fn2544 $tmp2543 = ($fn2544) $tmp2542->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2545 = $tmp2543($tmp2542, &$s2546);
*(&local75) = $tmp2545;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:467
org$frostlang$frostc$IR* $tmp2547 = *(&local0);
$fn2549 $tmp2548 = ($fn2549) $tmp2547->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2550 = $tmp2548($tmp2547, &$s2551);
*(&local76) = $tmp2550;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:468
org$frostlang$frostc$IR* $tmp2552 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2553 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2554 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2555 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2556 = *(&local75);
org$frostlang$frostc$IR$Block$ID $tmp2557 = *(&local76);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2553, $tmp2554, param1, $tmp2555, $tmp2556, $tmp2557);
$fn2559 $tmp2558 = ($fn2559) $tmp2552->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2560 = $tmp2558($tmp2552, $tmp2553);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2553));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:472
org$frostlang$frostc$IR* $tmp2561 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2562 = *(&local75);
$fn2564 $tmp2563 = ($fn2564) $tmp2561->$class->vtable[4];
$tmp2563($tmp2561, $tmp2562);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:473
org$frostlang$frostc$IR$Value* $tmp2565 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp2566 = *(&local25);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:473:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2567 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2568 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2567, $tmp2568);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2569 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2570 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2571 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2569, $tmp2570, $tmp2571, $tmp2566);
frost$collections$Array$add$frost$collections$Array$T($tmp2567, ((frost$core$Object*) $tmp2569));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2567)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2572 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2573 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2574 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2575 = *$tmp2574;
frost$core$Bit $tmp2576 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2572, $tmp2573, $tmp2575, $tmp2576);
org$frostlang$frostc$IR$Value* $tmp2577 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2565, &$s2578, ((frost$collections$ListView*) $tmp2567), $tmp2572);
*(&local77) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
org$frostlang$frostc$IR$Value* $tmp2579 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
*(&local77) = $tmp2577;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2567)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:475
org$frostlang$frostc$IR$Value* $tmp2580 = *(&local77);
frost$core$Bit $tmp2581 = (frost$core$Bit) {$tmp2580 != NULL};
bool $tmp2582 = $tmp2581.value;
if ($tmp2582) goto block195; else goto block196;
block196:;
frost$core$Int $tmp2583 = (frost$core$Int) {475u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2584, $tmp2583);
abort(); // unreachable
block195:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:476
org$frostlang$frostc$IR$Value* $tmp2585 = *(&local77);
org$frostlang$frostc$IR$Value* $tmp2586 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2585);
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
org$frostlang$frostc$IR$Value* $tmp2587 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
*(&local78) = $tmp2586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:477
org$frostlang$frostc$IR* $tmp2588 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2589 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2590 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2591 = *(&local78);
org$frostlang$frostc$IR$Block$ID $tmp2592 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2593 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2589, $tmp2590, param1, $tmp2591, $tmp2592, $tmp2593);
$fn2595 $tmp2594 = ($fn2595) $tmp2588->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2596 = $tmp2594($tmp2588, $tmp2589);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:481
org$frostlang$frostc$IR* $tmp2597 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2598 = *(&local76);
$fn2600 $tmp2599 = ($fn2600) $tmp2597->$class->vtable[4];
$tmp2599($tmp2597, $tmp2598);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:482
org$frostlang$frostc$IR$Value* $tmp2601 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp2602 = *(&local25);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:482:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2603 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2604 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2603, $tmp2604);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2605 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2606 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2607 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2605, $tmp2606, $tmp2607, $tmp2602);
frost$collections$Array$add$frost$collections$Array$T($tmp2603, ((frost$core$Object*) $tmp2605));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2603)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2608 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2609 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2610 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2611 = *$tmp2610;
frost$core$Bit $tmp2612 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2608, $tmp2609, $tmp2611, $tmp2612);
org$frostlang$frostc$IR$Value* $tmp2613 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2601, &$s2614, ((frost$collections$ListView*) $tmp2603), $tmp2608);
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
org$frostlang$frostc$IR$Value* $tmp2615 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
*(&local79) = $tmp2613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2603)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:484
org$frostlang$frostc$IR$Value* $tmp2616 = *(&local79);
frost$core$Bit $tmp2617 = (frost$core$Bit) {$tmp2616 != NULL};
bool $tmp2618 = $tmp2617.value;
if ($tmp2618) goto block198; else goto block199;
block199:;
frost$core$Int $tmp2619 = (frost$core$Int) {484u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2620, $tmp2619);
abort(); // unreachable
block198:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:485
org$frostlang$frostc$IR$Value* $tmp2621 = *(&local79);
org$frostlang$frostc$IR$Value* $tmp2622 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2621);
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
org$frostlang$frostc$IR$Value* $tmp2623 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
*(&local80) = $tmp2622;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:486
org$frostlang$frostc$IR* $tmp2624 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2625 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2626 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2627 = *(&local80);
org$frostlang$frostc$IR$Block$ID $tmp2628 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2629 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2625, $tmp2626, param1, $tmp2627, $tmp2628, $tmp2629);
$fn2631 $tmp2630 = ($fn2631) $tmp2624->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2632 = $tmp2630($tmp2624, $tmp2625);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:489
org$frostlang$frostc$IR* $tmp2633 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2634 = *(&local50);
$fn2636 $tmp2635 = ($fn2636) $tmp2633->$class->vtable[4];
$tmp2635($tmp2633, $tmp2634);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:490
org$frostlang$frostc$IR$Value* $tmp2637 = *(&local51);
org$frostlang$frostc$IR$Value* $tmp2638 = *(&local14);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:490:89
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2639 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2640 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2639, $tmp2640);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2641 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2642 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2643 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2641, $tmp2642, $tmp2643, $tmp2638);
frost$collections$Array$add$frost$collections$Array$T($tmp2639, ((frost$core$Object*) $tmp2641));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2639)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2644 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2645 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2644, $tmp2645);
org$frostlang$frostc$IR$Value* $tmp2646 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2637, &$s2647, ((frost$collections$ListView*) $tmp2639), $tmp2644);
org$frostlang$frostc$Type* $tmp2648 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2649 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2646, $tmp2648);
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
org$frostlang$frostc$IR$Value* $tmp2650 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
*(&local81) = $tmp2649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2639)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:492
org$frostlang$frostc$IR$Value* $tmp2651 = *(&local81);
frost$core$Bit $tmp2652 = (frost$core$Bit) {$tmp2651 != NULL};
bool $tmp2653 = $tmp2652.value;
if ($tmp2653) goto block201; else goto block202;
block202:;
frost$core$Int $tmp2654 = (frost$core$Int) {492u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2655, $tmp2654);
abort(); // unreachable
block201:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:493
org$frostlang$frostc$IR* $tmp2656 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2657 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2658 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp2659 = *(&local81);
org$frostlang$frostc$Type* $tmp2660 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp2661 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2659, $tmp2660);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2662 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2663 = (frost$core$Int) {2u};
frost$core$Int $tmp2664 = *(&local3);
org$frostlang$frostc$Type* $tmp2665 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp2662, $tmp2663, $tmp2664, $tmp2665);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2657, $tmp2658, param1, $tmp2661, $tmp2662);
$fn2667 $tmp2666 = ($fn2667) $tmp2656->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2668 = $tmp2666($tmp2656, $tmp2657);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:495
org$frostlang$frostc$IR* $tmp2669 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2670 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2671 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp2672 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2670, $tmp2671, param1, $tmp2672);
$fn2674 $tmp2673 = ($fn2674) $tmp2669->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2675 = $tmp2673($tmp2669, $tmp2670);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:497
org$frostlang$frostc$IR* $tmp2676 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2677 = *(&local29);
$fn2679 $tmp2678 = ($fn2679) $tmp2676->$class->vtable[4];
$tmp2678($tmp2676, $tmp2677);
org$frostlang$frostc$IR$Value* $tmp2680 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2681 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2682 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2683 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2684 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
*(&local77) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2685 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2686 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
*(&local68) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2687 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2688 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2689 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2690 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2691 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2692 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2693 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
*(&local54) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2184)));
org$frostlang$frostc$IR$Value* $tmp2694 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2695 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
*(&local34) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp2696 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2697 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2698 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2699 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2700 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2701 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
org$frostlang$frostc$IR$Value* $tmp2702 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2703 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2704 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2705 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp2706 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2707 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2708 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2709 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2710 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2711 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
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
org$frostlang$frostc$IR** $tmp2712 = &param0->ir;
org$frostlang$frostc$IR* $tmp2713 = *$tmp2712;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
org$frostlang$frostc$IR* $tmp2714 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
*(&local0) = $tmp2713;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:505
$fn2716 $tmp2715 = ($fn2716) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2717 = $tmp2715(param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
org$frostlang$frostc$Type* $tmp2718 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local1) = $tmp2717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:506
org$frostlang$frostc$Type* $tmp2719 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:506:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp2720 = &((org$frostlang$frostc$Symbol*) $tmp2719)->name;
frost$core$String* $tmp2721 = *$tmp2720;
frost$core$Bit $tmp2722 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2721, &$s2723);
bool $tmp2724 = $tmp2722.value;
if ($tmp2724) goto block2; else goto block3;
block2:;
*(&local2) = $tmp2722;
goto block4;
block3:;
org$frostlang$frostc$Type* $tmp2725 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:506:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp2726 = &((org$frostlang$frostc$Symbol*) $tmp2725)->name;
frost$core$String* $tmp2727 = *$tmp2726;
frost$core$Bit $tmp2728 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2727, &$s2729);
*(&local2) = $tmp2728;
goto block4;
block4:;
frost$core$Bit $tmp2730 = *(&local2);
bool $tmp2731 = $tmp2730.value;
if ($tmp2731) goto block6; else goto block7;
block7:;
frost$core$Int $tmp2732 = (frost$core$Int) {506u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2733, $tmp2732);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:507
org$frostlang$frostc$Type* $tmp2734 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:507:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2735 = &$tmp2734->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2736 = *$tmp2735;
frost$core$Bit $tmp2737 = (frost$core$Bit) {$tmp2736 != NULL};
bool $tmp2738 = $tmp2737.value;
if ($tmp2738) goto block11; else goto block12;
block12:;
frost$core$Int $tmp2739 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2740, $tmp2739, &$s2741);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
frost$core$Int $tmp2742 = (frost$core$Int) {1u};
frost$core$Object* $tmp2743 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2736, $tmp2742);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from For.frost:507:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp2744 = &((org$frostlang$frostc$Type*) $tmp2743)->typeKind;
org$frostlang$frostc$Type$Kind $tmp2745 = *$tmp2744;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2746;
$tmp2746 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2746->value = $tmp2745;
frost$core$Int $tmp2747 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2748 = &(&local4)->$rawValue;
*$tmp2748 = $tmp2747;
org$frostlang$frostc$Type$Kind $tmp2749 = *(&local4);
*(&local3) = $tmp2749;
org$frostlang$frostc$Type$Kind $tmp2750 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2751;
$tmp2751 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2751->value = $tmp2750;
ITable* $tmp2752 = ((frost$core$Equatable*) $tmp2746)->$class->itable;
while ($tmp2752->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2752 = $tmp2752->next;
}
$fn2754 $tmp2753 = $tmp2752->methods[0];
frost$core$Bit $tmp2755 = $tmp2753(((frost$core$Equatable*) $tmp2746), ((frost$core$Equatable*) $tmp2751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2751)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2746)));
bool $tmp2756 = $tmp2755.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2743);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
if ($tmp2756) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:508
org$frostlang$frostc$Type* $tmp2757 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:508:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2759 $tmp2758 = ($fn2759) ((frost$core$Object*) $tmp2757)->$class->vtable[0];
frost$core$String* $tmp2760 = $tmp2758(((frost$core$Object*) $tmp2757));
frost$core$String* $tmp2761 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2762, $tmp2760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
frost$core$String* $tmp2763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2761, &$s2764);
frost$core$String* $tmp2765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2763, &$s2766);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2765);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:511
$fn2768 $tmp2767 = ($fn2768) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2769 = $tmp2767(param4);
frost$core$Bit $tmp2770 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp2769);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:511:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2771 = $tmp2770.value;
bool $tmp2772 = !$tmp2771;
frost$core$Bit $tmp2773 = (frost$core$Bit) {$tmp2772};
bool $tmp2774 = $tmp2773.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
if ($tmp2774) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:512
org$frostlang$frostc$Type* $tmp2775 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2776 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:514
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:515
org$frostlang$frostc$Type* $tmp2777 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2778 = &$tmp2777->typeKind;
org$frostlang$frostc$Type$Kind $tmp2779 = *$tmp2778;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2780;
$tmp2780 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2780->value = $tmp2779;
frost$core$Int $tmp2781 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:515:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2782 = &(&local7)->$rawValue;
*$tmp2782 = $tmp2781;
org$frostlang$frostc$Type$Kind $tmp2783 = *(&local7);
*(&local6) = $tmp2783;
org$frostlang$frostc$Type$Kind $tmp2784 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2785;
$tmp2785 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2785->value = $tmp2784;
ITable* $tmp2786 = ((frost$core$Equatable*) $tmp2780)->$class->itable;
while ($tmp2786->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2786 = $tmp2786->next;
}
$fn2788 $tmp2787 = $tmp2786->methods[0];
frost$core$Bit $tmp2789 = $tmp2787(((frost$core$Equatable*) $tmp2780), ((frost$core$Equatable*) $tmp2785));
bool $tmp2790 = $tmp2789.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2785)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2780)));
if ($tmp2790) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:516
$fn2792 $tmp2791 = ($fn2792) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2793 = $tmp2791(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:516:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2794 = &$tmp2793->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2795 = *$tmp2794;
frost$core$Bit $tmp2796 = (frost$core$Bit) {$tmp2795 != NULL};
bool $tmp2797 = $tmp2796.value;
if ($tmp2797) goto block24; else goto block25;
block25:;
frost$core$Int $tmp2798 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2799, $tmp2798, &$s2800);
abort(); // unreachable
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
frost$core$Int $tmp2801 = (frost$core$Int) {0u};
frost$core$Object* $tmp2802 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2795, $tmp2801);
org$frostlang$frostc$Type$Kind* $tmp2803 = &((org$frostlang$frostc$Type*) $tmp2802)->typeKind;
org$frostlang$frostc$Type$Kind $tmp2804 = *$tmp2803;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2805;
$tmp2805 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2805->value = $tmp2804;
frost$core$Int $tmp2806 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:516:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2807 = &(&local9)->$rawValue;
*$tmp2807 = $tmp2806;
org$frostlang$frostc$Type$Kind $tmp2808 = *(&local9);
*(&local8) = $tmp2808;
org$frostlang$frostc$Type$Kind $tmp2809 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2810;
$tmp2810 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2810->value = $tmp2809;
ITable* $tmp2811 = ((frost$core$Equatable*) $tmp2805)->$class->itable;
while ($tmp2811->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2811 = $tmp2811->next;
}
$fn2813 $tmp2812 = $tmp2811->methods[0];
frost$core$Bit $tmp2814 = $tmp2812(((frost$core$Equatable*) $tmp2805), ((frost$core$Equatable*) $tmp2810));
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block27; else goto block28;
block28:;
frost$core$Int $tmp2816 = (frost$core$Int) {516u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2817, $tmp2816);
abort(); // unreachable
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2810)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2805)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2802);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:517
$fn2819 $tmp2818 = ($fn2819) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2820 = $tmp2818(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2821 = &$tmp2820->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2822 = *$tmp2821;
frost$core$Bit $tmp2823 = (frost$core$Bit) {$tmp2822 != NULL};
bool $tmp2824 = $tmp2823.value;
if ($tmp2824) goto block30; else goto block31;
block31:;
frost$core$Int $tmp2825 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2826, $tmp2825, &$s2827);
abort(); // unreachable
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
frost$core$Int $tmp2828 = (frost$core$Int) {0u};
frost$core$Object* $tmp2829 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2822, $tmp2828);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2830 = &((org$frostlang$frostc$Type*) $tmp2829)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2831 = *$tmp2830;
frost$core$Bit $tmp2832 = (frost$core$Bit) {$tmp2831 != NULL};
bool $tmp2833 = $tmp2832.value;
if ($tmp2833) goto block33; else goto block34;
block34:;
frost$core$Int $tmp2834 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2835, $tmp2834, &$s2836);
abort(); // unreachable
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
frost$core$Int $tmp2837 = (frost$core$Int) {1u};
frost$core$Object* $tmp2838 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2831, $tmp2837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2838)));
org$frostlang$frostc$Type* $tmp2839 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp2838);
frost$core$Frost$unref$frost$core$Object$Q($tmp2838);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
frost$core$Frost$unref$frost$core$Object$Q($tmp2829);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:520
org$frostlang$frostc$Type* $tmp2840 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2841 = &$tmp2840->typeKind;
org$frostlang$frostc$Type$Kind $tmp2842 = *$tmp2841;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2843;
$tmp2843 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2843->value = $tmp2842;
frost$core$Int $tmp2844 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:520:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2845 = &(&local11)->$rawValue;
*$tmp2845 = $tmp2844;
org$frostlang$frostc$Type$Kind $tmp2846 = *(&local11);
*(&local10) = $tmp2846;
org$frostlang$frostc$Type$Kind $tmp2847 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2848;
$tmp2848 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2848->value = $tmp2847;
ITable* $tmp2849 = ((frost$core$Equatable*) $tmp2843)->$class->itable;
while ($tmp2849->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2849 = $tmp2849->next;
}
$fn2851 $tmp2850 = $tmp2849->methods[0];
frost$core$Bit $tmp2852 = $tmp2850(((frost$core$Equatable*) $tmp2843), ((frost$core$Equatable*) $tmp2848));
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block36; else goto block37;
block37:;
frost$core$Int $tmp2854 = (frost$core$Int) {520u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2855, $tmp2854);
abort(); // unreachable
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2848)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2843)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:521
$fn2857 $tmp2856 = ($fn2857) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2858 = $tmp2856(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:521:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2859 = &$tmp2858->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2860 = *$tmp2859;
frost$core$Bit $tmp2861 = (frost$core$Bit) {$tmp2860 != NULL};
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block39; else goto block40;
block40:;
frost$core$Int $tmp2863 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2864, $tmp2863, &$s2865);
abort(); // unreachable
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
frost$core$Int $tmp2866 = (frost$core$Int) {1u};
frost$core$Object* $tmp2867 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2860, $tmp2866);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2867)));
org$frostlang$frostc$Type* $tmp2868 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp2867);
frost$core$Frost$unref$frost$core$Object$Q($tmp2867);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:523
org$frostlang$frostc$Type* $tmp2869 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:523:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
frost$core$Bit $tmp2870 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp2869);
bool $tmp2871 = $tmp2870.value;
if ($tmp2871) goto block44; else goto block45;
block44:;
*(&local12) = $tmp2870;
goto block46;
block45:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:352:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp2872 = &((org$frostlang$frostc$Symbol*) $tmp2869)->name;
frost$core$String* $tmp2873 = *$tmp2872;
frost$core$Bit $tmp2874 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2873, &$s2875);
*(&local12) = $tmp2874;
goto block46;
block46:;
frost$core$Bit $tmp2876 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:523:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2877 = $tmp2876.value;
bool $tmp2878 = !$tmp2877;
frost$core$Bit $tmp2879 = (frost$core$Bit) {$tmp2878};
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:524
$fn2882 $tmp2881 = ($fn2882) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2883 = $tmp2881(param4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:525:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2885 $tmp2884 = ($fn2885) ((frost$core$Object*) $tmp2883)->$class->vtable[0];
frost$core$String* $tmp2886 = $tmp2884(((frost$core$Object*) $tmp2883));
frost$core$String* $tmp2887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2888, $tmp2886);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
frost$core$String* $tmp2889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2887, &$s2890);
frost$core$String* $tmp2891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2892, $tmp2889);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2891);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:526
org$frostlang$frostc$Type* $tmp2893 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2894 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2895 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:528
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp2896 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2896, param0);
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
org$frostlang$frostc$Compiler$AutoScope* $tmp2897 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
*(&local13) = $tmp2896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:529
frost$core$Int $tmp2898 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from For.frost:529:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp2899 = &(&local15)->$rawValue;
*$tmp2899 = $tmp2898;
org$frostlang$frostc$Variable$Kind $tmp2900 = *(&local15);
*(&local14) = $tmp2900;
org$frostlang$frostc$Variable$Kind $tmp2901 = *(&local14);
org$frostlang$frostc$Type* $tmp2902 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:530:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2903 = &$tmp2902->typeKind;
org$frostlang$frostc$Type$Kind $tmp2904 = *$tmp2903;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2905;
$tmp2905 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2905->value = $tmp2904;
frost$core$Int $tmp2906 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2907 = &(&local18)->$rawValue;
*$tmp2907 = $tmp2906;
org$frostlang$frostc$Type$Kind $tmp2908 = *(&local18);
*(&local17) = $tmp2908;
org$frostlang$frostc$Type$Kind $tmp2909 = *(&local17);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2910;
$tmp2910 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2910->value = $tmp2909;
ITable* $tmp2911 = ((frost$core$Equatable*) $tmp2905)->$class->itable;
while ($tmp2911->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2911 = $tmp2911->next;
}
$fn2913 $tmp2912 = $tmp2911->methods[1];
frost$core$Bit $tmp2914 = $tmp2912(((frost$core$Equatable*) $tmp2905), ((frost$core$Equatable*) $tmp2910));
bool $tmp2915 = $tmp2914.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2910)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2905)));
if ($tmp2915) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
*(&local16) = $tmp2902;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2916 = &$tmp2902->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2917 = *$tmp2916;
frost$core$Bit $tmp2918 = (frost$core$Bit) {$tmp2917 != NULL};
bool $tmp2919 = $tmp2918.value;
if ($tmp2919) goto block56; else goto block57;
block57:;
frost$core$Int $tmp2920 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2921, $tmp2920, &$s2922);
abort(); // unreachable
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
frost$core$Int $tmp2923 = (frost$core$Int) {0u};
frost$core$Object* $tmp2924 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2917, $tmp2923);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2924)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2924);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local16) = ((org$frostlang$frostc$Type*) $tmp2924);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2924)));
goto block51;
block51:;
org$frostlang$frostc$Type* $tmp2925 = *(&local16);
org$frostlang$frostc$Compiler$Target* $tmp2926 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp2901, ((org$frostlang$frostc$ASTNode*) NULL), $tmp2925);
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
org$frostlang$frostc$Compiler$Target* $tmp2927 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
*(&local19) = $tmp2926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:531
org$frostlang$frostc$Compiler$Target* $tmp2928 = *(&local19);
frost$core$Bit $tmp2929 = (frost$core$Bit) {$tmp2928 == NULL};
bool $tmp2930 = $tmp2929.value;
if ($tmp2930) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:532
org$frostlang$frostc$Compiler$Target* $tmp2931 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp2932 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2933 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp2934 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2935 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2936 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:534
org$frostlang$frostc$Compiler$Target* $tmp2937 = *(&local19);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp2937);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:535
org$frostlang$frostc$Compiler$Target* $tmp2938 = *(&local19);
frost$core$Int* $tmp2939 = &$tmp2938->$rawValue;
frost$core$Int $tmp2940 = *$tmp2939;
frost$core$Int $tmp2941 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:536:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2942 = $tmp2940.value;
int64_t $tmp2943 = $tmp2941.value;
bool $tmp2944 = $tmp2942 == $tmp2943;
frost$core$Bit $tmp2945 = (frost$core$Bit) {$tmp2944};
bool $tmp2946 = $tmp2945.value;
if ($tmp2946) goto block61; else goto block62;
block61:;
org$frostlang$frostc$Variable** $tmp2947 = (org$frostlang$frostc$Variable**) ($tmp2938->$data + 0);
org$frostlang$frostc$Variable* $tmp2948 = *$tmp2947;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
org$frostlang$frostc$Variable* $tmp2949 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
*(&local20) = $tmp2948;
org$frostlang$frostc$IR$Value** $tmp2950 = (org$frostlang$frostc$IR$Value**) ($tmp2938->$data + 8);
org$frostlang$frostc$IR$Value* $tmp2951 = *$tmp2950;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:537
org$frostlang$frostc$Type* $tmp2952 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:537:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp2953 = &((org$frostlang$frostc$Symbol*) $tmp2952)->name;
frost$core$String* $tmp2954 = *$tmp2953;
frost$core$Bit $tmp2955 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2954, &$s2956);
bool $tmp2957 = $tmp2955.value;
if ($tmp2957) goto block64; else goto block66;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:538
org$frostlang$frostc$Variable* $tmp2958 = *(&local20);
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp2958, param4, param5);
goto block65;
block66:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:541
org$frostlang$frostc$Variable* $tmp2959 = *(&local20);
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp2959, param4, param5);
goto block65;
block65:;
org$frostlang$frostc$Variable* $tmp2960 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:545
frost$core$Bit $tmp2961 = (frost$core$Bit) {false};
bool $tmp2962 = $tmp2961.value;
if ($tmp2962) goto block68; else goto block69;
block69:;
frost$core$Int $tmp2963 = (frost$core$Int) {545u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2964, $tmp2963);
abort(); // unreachable
block68:;
goto block60;
block60:;
org$frostlang$frostc$Compiler$Target* $tmp2965 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp2966 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2967 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp2968 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2969 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2970 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
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
org$frostlang$frostc$IR** $tmp2971 = &param0->ir;
org$frostlang$frostc$IR* $tmp2972 = *$tmp2971;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
org$frostlang$frostc$IR* $tmp2973 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
*(&local0) = $tmp2972;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:555
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:556
frost$core$Int* $tmp2974 = &param3->$rawValue;
frost$core$Int $tmp2975 = *$tmp2974;
frost$core$Int $tmp2976 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:557:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2977 = $tmp2975.value;
int64_t $tmp2978 = $tmp2976.value;
bool $tmp2979 = $tmp2977 == $tmp2978;
frost$core$Bit $tmp2980 = (frost$core$Bit) {$tmp2979};
bool $tmp2981 = $tmp2980.value;
if ($tmp2981) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2982 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2983 = *$tmp2982;
*(&local2) = $tmp2983;
frost$core$String** $tmp2984 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2985 = *$tmp2984;
org$frostlang$frostc$ASTNode** $tmp2986 = (org$frostlang$frostc$ASTNode**) (param3->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2987 = *$tmp2986;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
org$frostlang$frostc$ASTNode* $tmp2988 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
*(&local3) = $tmp2987;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:558
org$frostlang$frostc$Scanner** $tmp2989 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2990 = *$tmp2989;
org$frostlang$frostc$ASTNode* $tmp2991 = *(&local3);
org$frostlang$frostc$Type* $tmp2992 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2990, $tmp2991);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from For.frost:558:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:889
frost$core$Bit $tmp2993 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2994 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2992, $tmp2993);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
org$frostlang$frostc$Type* $tmp2995 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
*(&local4) = $tmp2994;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:559
org$frostlang$frostc$Type* $tmp2996 = *(&local4);
frost$core$Bit $tmp2997 = (frost$core$Bit) {$tmp2996 == NULL};
bool $tmp2998 = $tmp2997.value;
if ($tmp2998) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:560
org$frostlang$frostc$Type* $tmp2999 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3000 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3001 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3002 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:562
org$frostlang$frostc$Type* $tmp3003 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp3004 = &$tmp3003->typeKind;
org$frostlang$frostc$Type$Kind $tmp3005 = *$tmp3004;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3006;
$tmp3006 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3006->value = $tmp3005;
frost$core$Int $tmp3007 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:562:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3008 = &(&local6)->$rawValue;
*$tmp3008 = $tmp3007;
org$frostlang$frostc$Type$Kind $tmp3009 = *(&local6);
*(&local5) = $tmp3009;
org$frostlang$frostc$Type$Kind $tmp3010 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3011;
$tmp3011 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3011->value = $tmp3010;
ITable* $tmp3012 = ((frost$core$Equatable*) $tmp3006)->$class->itable;
while ($tmp3012->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3012 = $tmp3012->next;
}
$fn3014 $tmp3013 = $tmp3012->methods[0];
frost$core$Bit $tmp3015 = $tmp3013(((frost$core$Equatable*) $tmp3006), ((frost$core$Equatable*) $tmp3011));
bool $tmp3016 = $tmp3015.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3011)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3006)));
if ($tmp3016) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:563
org$frostlang$frostc$Position $tmp3017 = *(&local2);
org$frostlang$frostc$Type* $tmp3018 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:563:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3020 $tmp3019 = ($fn3020) ((frost$core$Object*) $tmp3018)->$class->vtable[0];
frost$core$String* $tmp3021 = $tmp3019(((frost$core$Object*) $tmp3018));
frost$core$String* $tmp3022 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3023, $tmp3021);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
frost$core$String* $tmp3024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3022, &$s3025);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3017, $tmp3024);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:564
org$frostlang$frostc$Type* $tmp3026 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3027 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3028 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3029 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:566
org$frostlang$frostc$Type* $tmp3030 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:566:22
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
frost$core$Bit $tmp3031 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp3030);
bool $tmp3032 = $tmp3031.value;
if ($tmp3032) goto block15; else goto block16;
block15:;
*(&local7) = $tmp3031;
goto block17;
block16:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:352:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp3033 = &((org$frostlang$frostc$Symbol*) $tmp3030)->name;
frost$core$String* $tmp3034 = *$tmp3033;
frost$core$Bit $tmp3035 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3034, &$s3036);
*(&local7) = $tmp3035;
goto block17;
block17:;
frost$core$Bit $tmp3037 = *(&local7);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:566:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3038 = $tmp3037.value;
bool $tmp3039 = !$tmp3038;
frost$core$Bit $tmp3040 = (frost$core$Bit) {$tmp3039};
bool $tmp3041 = $tmp3040.value;
if ($tmp3041) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:567
org$frostlang$frostc$Position $tmp3042 = *(&local2);
org$frostlang$frostc$Type* $tmp3043 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:568:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3045 $tmp3044 = ($fn3045) ((frost$core$Object*) $tmp3043)->$class->vtable[0];
frost$core$String* $tmp3046 = $tmp3044(((frost$core$Object*) $tmp3043));
frost$core$String* $tmp3047 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3048, $tmp3046);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
frost$core$String* $tmp3049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3047, &$s3050);
frost$core$String* $tmp3051 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3052, $tmp3049);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3042, $tmp3051);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:569
org$frostlang$frostc$Type* $tmp3053 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3054 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3055 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3056 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:571
frost$core$Int* $tmp3057 = &param4->$rawValue;
frost$core$Int $tmp3058 = *$tmp3057;
frost$core$Int $tmp3059 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:572:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3060 = $tmp3058.value;
int64_t $tmp3061 = $tmp3059.value;
bool $tmp3062 = $tmp3060 == $tmp3061;
frost$core$Bit $tmp3063 = (frost$core$Bit) {$tmp3062};
bool $tmp3064 = $tmp3063.value;
if ($tmp3064) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp3065 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp3066 = *$tmp3065;
org$frostlang$frostc$ASTNode** $tmp3067 = (org$frostlang$frostc$ASTNode**) (param4->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3068 = *$tmp3067;
frost$core$Bit* $tmp3069 = (frost$core$Bit*) (param4->$data + 32);
frost$core$Bit $tmp3070 = *$tmp3069;
org$frostlang$frostc$ASTNode** $tmp3071 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp3072 = *$tmp3071;
org$frostlang$frostc$ASTNode** $tmp3073 = (org$frostlang$frostc$ASTNode**) (param4->$data + 41);
org$frostlang$frostc$ASTNode* $tmp3074 = *$tmp3073;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
org$frostlang$frostc$ASTNode* $tmp3075 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local8) = $tmp3074;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:573
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:574
org$frostlang$frostc$ASTNode* $tmp3076 = *(&local8);
frost$core$Bit $tmp3077 = (frost$core$Bit) {$tmp3076 != NULL};
bool $tmp3078 = $tmp3077.value;
if ($tmp3078) goto block25; else goto block27;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:575
org$frostlang$frostc$Type* $tmp3079 = *(&local4);
org$frostlang$frostc$Type* $tmp3080 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp3079);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
org$frostlang$frostc$Type* $tmp3081 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
*(&local9) = $tmp3080;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
goto block26;
block27:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:578
org$frostlang$frostc$Type* $tmp3082 = *(&local4);
// begin inline call to method org.frostlang.frostc.Type.RangeOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:578:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:298
org$frostlang$frostc$Type** $tmp3083 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3084 = *$tmp3083;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3085 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3086 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp3085, $tmp3086);
frost$collections$Array$add$frost$collections$Array$T($tmp3085, ((frost$core$Object*) $tmp3082));
org$frostlang$frostc$Type* $tmp3087 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3084, ((frost$collections$ListView*) $tmp3085));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
org$frostlang$frostc$Type* $tmp3088 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
*(&local9) = $tmp3087;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:580
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3089 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3090 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp3091 = *(&local9);
frost$core$Bit $tmp3092 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3089, $tmp3090, $tmp3091, $tmp3092);
org$frostlang$frostc$IR$Value* $tmp3093 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3089);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
org$frostlang$frostc$IR$Value* $tmp3094 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
*(&local1) = $tmp3093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
org$frostlang$frostc$Type* $tmp3095 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3096 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp3097 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3098 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:583
frost$core$Int $tmp3099 = (frost$core$Int) {583u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3100, $tmp3099);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:588
org$frostlang$frostc$Type* $tmp3101 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
org$frostlang$frostc$Type* $tmp3102 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
*(&local10) = $tmp3101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:589
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3103 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3104 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3103, $tmp3104);
*(&local11) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
org$frostlang$frostc$Compiler$TypeContext* $tmp3105 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
*(&local11) = $tmp3103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:590
org$frostlang$frostc$Type* $tmp3106 = *(&local10);
frost$core$Bit $tmp3107 = (frost$core$Bit) {$tmp3106 != NULL};
bool $tmp3108 = $tmp3107.value;
if ($tmp3108) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Type* $tmp3109 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:590:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp3110 = &((org$frostlang$frostc$Symbol*) $tmp3109)->name;
frost$core$String* $tmp3111 = *$tmp3110;
frost$core$Bit $tmp3112 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3111, &$s3113);
bool $tmp3114 = $tmp3112.value;
if ($tmp3114) goto block29; else goto block31;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:591
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3115 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3116 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp3117 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:592:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3118 = &$tmp3117->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3119 = *$tmp3118;
frost$core$Bit $tmp3120 = (frost$core$Bit) {$tmp3119 != NULL};
bool $tmp3121 = $tmp3120.value;
if ($tmp3121) goto block35; else goto block36;
block36:;
frost$core$Int $tmp3122 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3123, $tmp3122, &$s3124);
abort(); // unreachable
block35:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
frost$core$Int $tmp3125 = (frost$core$Int) {1u};
frost$core$Object* $tmp3126 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3119, $tmp3125);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:592:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp3127 = &((org$frostlang$frostc$Type*) $tmp3126)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3128 = *$tmp3127;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3129;
$tmp3129 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3129->value = $tmp3128;
frost$core$Int $tmp3130 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3131 = &(&local14)->$rawValue;
*$tmp3131 = $tmp3130;
org$frostlang$frostc$Type$Kind $tmp3132 = *(&local14);
*(&local13) = $tmp3132;
org$frostlang$frostc$Type$Kind $tmp3133 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3134;
$tmp3134 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3134->value = $tmp3133;
ITable* $tmp3135 = ((frost$core$Equatable*) $tmp3129)->$class->itable;
while ($tmp3135->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3135 = $tmp3135->next;
}
$fn3137 $tmp3136 = $tmp3135->methods[1];
frost$core$Bit $tmp3138 = $tmp3136(((frost$core$Equatable*) $tmp3129), ((frost$core$Equatable*) $tmp3134));
bool $tmp3139 = $tmp3138.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3134)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3129)));
if ($tmp3139) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3126)));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp3126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3126)));
goto block37;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3140 = &((org$frostlang$frostc$Type*) $tmp3126)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3141 = *$tmp3140;
frost$core$Bit $tmp3142 = (frost$core$Bit) {$tmp3141 != NULL};
bool $tmp3143 = $tmp3142.value;
if ($tmp3143) goto block42; else goto block43;
block43:;
frost$core$Int $tmp3144 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3145, $tmp3144, &$s3146);
abort(); // unreachable
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
frost$core$Int $tmp3147 = (frost$core$Int) {0u};
frost$core$Object* $tmp3148 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3141, $tmp3147);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3148)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp3148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3148)));
goto block37;
block37:;
org$frostlang$frostc$Type* $tmp3149 = *(&local12);
// begin inline call to method org.frostlang.frostc.Type.RangeOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:591:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:298
org$frostlang$frostc$Type** $tmp3150 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3151 = *$tmp3150;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3152 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3153 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp3152, $tmp3153);
frost$collections$Array$add$frost$collections$Array$T($tmp3152, ((frost$core$Object*) $tmp3149));
org$frostlang$frostc$Type* $tmp3154 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3151, ((frost$collections$ListView*) $tmp3152));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
frost$core$Bit $tmp3155 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3115, $tmp3116, $tmp3154, $tmp3155);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
org$frostlang$frostc$Compiler$TypeContext* $tmp3156 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
*(&local11) = $tmp3115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
org$frostlang$frostc$Type* $tmp3157 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
goto block30;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:594
org$frostlang$frostc$Type* $tmp3158 = *(&local10);
frost$core$Bit $tmp3159 = (frost$core$Bit) {$tmp3158 != NULL};
bool $tmp3160 = $tmp3159.value;
if ($tmp3160) goto block47; else goto block46;
block47:;
org$frostlang$frostc$Type* $tmp3161 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:594:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp3162 = &((org$frostlang$frostc$Symbol*) $tmp3161)->name;
frost$core$String* $tmp3163 = *$tmp3162;
frost$core$Bit $tmp3164 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3163, &$s3165);
bool $tmp3166 = $tmp3164.value;
if ($tmp3166) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:595
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3167 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3168 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp3169 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3170 = &$tmp3169->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3171 = *$tmp3170;
frost$core$Bit $tmp3172 = (frost$core$Bit) {$tmp3171 != NULL};
bool $tmp3173 = $tmp3172.value;
if ($tmp3173) goto block50; else goto block51;
block51:;
frost$core$Int $tmp3174 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3175, $tmp3174, &$s3176);
abort(); // unreachable
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
frost$core$Int $tmp3177 = (frost$core$Int) {1u};
frost$core$Object* $tmp3178 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3171, $tmp3177);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:596:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp3179 = &((org$frostlang$frostc$Type*) $tmp3178)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3180 = *$tmp3179;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3181;
$tmp3181 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3181->value = $tmp3180;
frost$core$Int $tmp3182 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3183 = &(&local17)->$rawValue;
*$tmp3183 = $tmp3182;
org$frostlang$frostc$Type$Kind $tmp3184 = *(&local17);
*(&local16) = $tmp3184;
org$frostlang$frostc$Type$Kind $tmp3185 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3186;
$tmp3186 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3186->value = $tmp3185;
ITable* $tmp3187 = ((frost$core$Equatable*) $tmp3181)->$class->itable;
while ($tmp3187->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3187 = $tmp3187->next;
}
$fn3189 $tmp3188 = $tmp3187->methods[1];
frost$core$Bit $tmp3190 = $tmp3188(((frost$core$Equatable*) $tmp3181), ((frost$core$Equatable*) $tmp3186));
bool $tmp3191 = $tmp3190.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3186)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3181)));
if ($tmp3191) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3178)));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3178)));
goto block52;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3192 = &((org$frostlang$frostc$Type*) $tmp3178)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3193 = *$tmp3192;
frost$core$Bit $tmp3194 = (frost$core$Bit) {$tmp3193 != NULL};
bool $tmp3195 = $tmp3194.value;
if ($tmp3195) goto block57; else goto block58;
block58:;
frost$core$Int $tmp3196 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3197, $tmp3196, &$s3198);
abort(); // unreachable
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
frost$core$Int $tmp3199 = (frost$core$Int) {0u};
frost$core$Object* $tmp3200 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3193, $tmp3199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3200)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3200);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3200);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3200)));
goto block52;
block52:;
org$frostlang$frostc$Type* $tmp3201 = *(&local15);
org$frostlang$frostc$Type* $tmp3202 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3203 = &$tmp3202->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3204 = *$tmp3203;
frost$core$Bit $tmp3205 = (frost$core$Bit) {$tmp3204 != NULL};
bool $tmp3206 = $tmp3205.value;
if ($tmp3206) goto block60; else goto block61;
block61:;
frost$core$Int $tmp3207 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3208, $tmp3207, &$s3209);
abort(); // unreachable
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
frost$core$Int $tmp3210 = (frost$core$Int) {2u};
frost$core$Object* $tmp3211 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3204, $tmp3210);
// begin inline call to method org.frostlang.frostc.Type.SteppedRangeOf(compiler:org.frostlang.frostc.Compiler, endpoint:org.frostlang.frostc.Type, step:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:595:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:322
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3212 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3212);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
frost$collections$Array* $tmp3213 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
*(&local18) = $tmp3212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:323
frost$collections$Array* $tmp3214 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp3214, ((frost$core$Object*) $tmp3201));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:324
frost$collections$Array* $tmp3215 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp3215, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3211)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:325
org$frostlang$frostc$Type** $tmp3216 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3217 = *$tmp3216;
frost$collections$Array* $tmp3218 = *(&local18);
org$frostlang$frostc$Type* $tmp3219 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3217, ((frost$collections$ListView*) $tmp3218));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
frost$collections$Array* $tmp3220 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Bit $tmp3221 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3167, $tmp3168, $tmp3219, $tmp3221);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
org$frostlang$frostc$Compiler$TypeContext* $tmp3222 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
*(&local11) = $tmp3167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
frost$core$Frost$unref$frost$core$Object$Q($tmp3211);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
org$frostlang$frostc$Type* $tmp3223 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3178);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
goto block46;
block46:;
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:598
org$frostlang$frostc$Compiler$TypeContext* $tmp3224 = *(&local11);
org$frostlang$frostc$IR$Value* $tmp3225 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
org$frostlang$frostc$IR$Value* $tmp3226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
*(&local1) = $tmp3225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
org$frostlang$frostc$Compiler$TypeContext* $tmp3227 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
*(&local11) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp3228 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3228));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:601
org$frostlang$frostc$IR$Value* $tmp3229 = *(&local1);
frost$core$Bit $tmp3230 = (frost$core$Bit) {$tmp3229 == NULL};
bool $tmp3231 = $tmp3230.value;
if ($tmp3231) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:602
org$frostlang$frostc$IR$Value* $tmp3232 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3233));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:604
org$frostlang$frostc$IR$Value* $tmp3234 = *(&local1);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3234, param5);
org$frostlang$frostc$IR$Value* $tmp3235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
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
org$frostlang$frostc$IR** $tmp3237 = &param0->ir;
org$frostlang$frostc$IR* $tmp3238 = *$tmp3237;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
org$frostlang$frostc$IR* $tmp3239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
*(&local0) = $tmp3238;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:612
org$frostlang$frostc$IR* $tmp3240 = *(&local0);
$fn3242 $tmp3241 = ($fn3242) $tmp3240->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3243 = $tmp3241($tmp3240, &$s3244);
*(&local1) = $tmp3243;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:613
org$frostlang$frostc$IR* $tmp3245 = *(&local0);
$fn3247 $tmp3246 = ($fn3247) $tmp3245->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3248 = $tmp3246($tmp3245, &$s3249);
*(&local2) = $tmp3248;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:614
org$frostlang$frostc$IR* $tmp3250 = *(&local0);
$fn3252 $tmp3251 = ($fn3252) $tmp3250->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3253 = $tmp3251($tmp3250, &$s3254);
*(&local3) = $tmp3253;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:615
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp3255 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3256 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp3257 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3258 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3259 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3256, $tmp3257, param2, $tmp3258, $tmp3259);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp3255, param0, $tmp3256);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
org$frostlang$frostc$Compiler$AutoContext* $tmp3260 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
*(&local4) = $tmp3255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:616
$fn3262 $tmp3261 = ($fn3262) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3263 = $tmp3261(param4);
org$frostlang$frostc$Type$Kind* $tmp3264 = &$tmp3263->typeKind;
org$frostlang$frostc$Type$Kind $tmp3265 = *$tmp3264;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3266;
$tmp3266 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3266->value = $tmp3265;
frost$core$Int $tmp3267 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:616:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3268 = &(&local7)->$rawValue;
*$tmp3268 = $tmp3267;
org$frostlang$frostc$Type$Kind $tmp3269 = *(&local7);
*(&local6) = $tmp3269;
org$frostlang$frostc$Type$Kind $tmp3270 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3271;
$tmp3271 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3271->value = $tmp3270;
ITable* $tmp3272 = ((frost$core$Equatable*) $tmp3266)->$class->itable;
while ($tmp3272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3272 = $tmp3272->next;
}
$fn3274 $tmp3273 = $tmp3272->methods[0];
frost$core$Bit $tmp3275 = $tmp3273(((frost$core$Equatable*) $tmp3266), ((frost$core$Equatable*) $tmp3271));
bool $tmp3276 = $tmp3275.value;
if ($tmp3276) goto block2; else goto block3;
block2:;
$fn3278 $tmp3277 = ($fn3278) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3279 = $tmp3277(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:617:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3280 = &$tmp3279->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3281 = *$tmp3280;
frost$core$Bit $tmp3282 = (frost$core$Bit) {$tmp3281 != NULL};
bool $tmp3283 = $tmp3282.value;
if ($tmp3283) goto block6; else goto block7;
block7:;
frost$core$Int $tmp3284 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3285, $tmp3284, &$s3286);
abort(); // unreachable
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3281));
frost$core$Int $tmp3287 = (frost$core$Int) {0u};
frost$core$Object* $tmp3288 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3281, $tmp3287);
org$frostlang$frostc$Type** $tmp3289 = &param0->ITERATOR_TYPE;
org$frostlang$frostc$Type* $tmp3290 = *$tmp3289;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:617:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp3291 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3288))->name;
frost$core$String* $tmp3292 = *$tmp3291;
frost$core$String** $tmp3293 = &((org$frostlang$frostc$Symbol*) $tmp3290)->name;
frost$core$String* $tmp3294 = *$tmp3293;
frost$core$Bit $tmp3295 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3292, $tmp3294);
bool $tmp3296 = $tmp3295.value;
if ($tmp3296) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp3297 = &((org$frostlang$frostc$Type*) $tmp3288)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3298 = *$tmp3297;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3299;
$tmp3299 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3299->value = $tmp3298;
org$frostlang$frostc$Type$Kind* $tmp3300 = &$tmp3290->typeKind;
org$frostlang$frostc$Type$Kind $tmp3301 = *$tmp3300;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3302;
$tmp3302 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3302->value = $tmp3301;
ITable* $tmp3303 = ((frost$core$Equatable*) $tmp3299)->$class->itable;
while ($tmp3303->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3303 = $tmp3303->next;
}
$fn3305 $tmp3304 = $tmp3303->methods[0];
frost$core$Bit $tmp3306 = $tmp3304(((frost$core$Equatable*) $tmp3299), ((frost$core$Equatable*) $tmp3302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3302)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3299)));
*(&local8) = $tmp3306;
goto block11;
block10:;
*(&local8) = $tmp3295;
goto block11;
block11:;
frost$core$Bit $tmp3307 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q($tmp3288);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3279));
*(&local5) = $tmp3307;
goto block4;
block3:;
*(&local5) = $tmp3275;
goto block4;
block4:;
frost$core$Bit $tmp3308 = *(&local5);
bool $tmp3309 = $tmp3308.value;
if ($tmp3309) goto block12; else goto block13;
block13:;
frost$core$Int $tmp3310 = (frost$core$Int) {616u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3311, $tmp3310);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3271)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3266)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:618
org$frostlang$frostc$IR* $tmp3312 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3313 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp3314 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3315 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3313, $tmp3314, param1, $tmp3315);
$fn3317 $tmp3316 = ($fn3317) $tmp3312->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3318 = $tmp3316($tmp3312, $tmp3313);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:619
org$frostlang$frostc$IR* $tmp3319 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3320 = *(&local1);
$fn3322 $tmp3321 = ($fn3322) $tmp3319->$class->vtable[4];
$tmp3321($tmp3319, $tmp3320);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:620
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3323 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3323);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3324 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3325 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp3326 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp3327 = *$tmp3326;
frost$core$Bit $tmp3328 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3324, $tmp3325, $tmp3327, $tmp3328);
org$frostlang$frostc$IR$Value* $tmp3329 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3330, ((frost$collections$ListView*) $tmp3323), $tmp3324);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
org$frostlang$frostc$IR$Value* $tmp3331 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3331));
*(&local9) = $tmp3329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:622
org$frostlang$frostc$IR$Value* $tmp3332 = *(&local9);
frost$core$Bit $tmp3333 = (frost$core$Bit) {$tmp3332 == NULL};
bool $tmp3334 = $tmp3333.value;
if ($tmp3334) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:623
org$frostlang$frostc$IR$Value* $tmp3335 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3336 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3337 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:625
org$frostlang$frostc$IR* $tmp3338 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3339 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp3340 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp3341 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp3342 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp3341);
org$frostlang$frostc$IR$Block$ID $tmp3343 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3344 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3339, $tmp3340, param1, $tmp3342, $tmp3343, $tmp3344);
$fn3346 $tmp3345 = ($fn3346) $tmp3338->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3347 = $tmp3345($tmp3338, $tmp3339);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:627
org$frostlang$frostc$IR* $tmp3348 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3349 = *(&local2);
$fn3351 $tmp3350 = ($fn3351) $tmp3348->$class->vtable[4];
$tmp3350($tmp3348, $tmp3349);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:629
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp3352 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp3352, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
org$frostlang$frostc$Compiler$AutoScope* $tmp3353 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3353));
*(&local10) = $tmp3352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:630
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:632
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3354 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp3354, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3355 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
*(&local12) = $tmp3354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:633
frost$core$Int $tmp3356 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from For.frost:633:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp3357 = &(&local14)->$rawValue;
*$tmp3357 = $tmp3356;
org$frostlang$frostc$Variable$Kind $tmp3358 = *(&local14);
*(&local13) = $tmp3358;
org$frostlang$frostc$Variable$Kind $tmp3359 = *(&local13);
$fn3361 $tmp3360 = ($fn3361) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3362 = $tmp3360(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:634:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3363 = &$tmp3362->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3364 = *$tmp3363;
frost$core$Bit $tmp3365 = (frost$core$Bit) {$tmp3364 != NULL};
bool $tmp3366 = $tmp3365.value;
if ($tmp3366) goto block18; else goto block19;
block19:;
frost$core$Int $tmp3367 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3368, $tmp3367, &$s3369);
abort(); // unreachable
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
frost$core$Int $tmp3370 = (frost$core$Int) {1u};
frost$core$Object* $tmp3371 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3364, $tmp3370);
org$frostlang$frostc$Compiler$Target* $tmp3372 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp3359, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp3371));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
org$frostlang$frostc$Compiler$Target* $tmp3373 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
*(&local11) = $tmp3372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
frost$core$Frost$unref$frost$core$Object$Q($tmp3371);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:635
org$frostlang$frostc$Compiler$Target* $tmp3374 = *(&local11);
frost$core$Bit $tmp3375 = (frost$core$Bit) {$tmp3374 == NULL};
bool $tmp3376 = $tmp3375.value;
if ($tmp3376) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:636
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3377 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3378 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3379 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3379));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3380 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3380));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3381 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block21:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3383 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:639
org$frostlang$frostc$Compiler$Target* $tmp3384 = *(&local11);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp3384);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:640
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:641
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3385 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3385);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3386 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3387 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3386, $tmp3387);
org$frostlang$frostc$IR$Value* $tmp3388 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3389, ((frost$collections$ListView*) $tmp3385), $tmp3386);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3388));
org$frostlang$frostc$IR$Value* $tmp3390 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
*(&local15) = $tmp3388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3385));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:643
org$frostlang$frostc$IR$Value* $tmp3391 = *(&local15);
frost$core$Bit $tmp3392 = (frost$core$Bit) {$tmp3391 == NULL};
bool $tmp3393 = $tmp3392.value;
if ($tmp3393) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:644
org$frostlang$frostc$IR$Value* $tmp3394 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3395 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3396 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3397 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3398 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3399));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:646
org$frostlang$frostc$Compiler$Target* $tmp3400 = *(&local11);
org$frostlang$frostc$IR$Value* $tmp3401 = *(&local15);
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, param1, $tmp3400, $tmp3401);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:647
ITable* $tmp3402 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp3402->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3402 = $tmp3402->next;
}
$fn3404 $tmp3403 = $tmp3402->methods[0];
frost$collections$Iterator* $tmp3405 = $tmp3403(((frost$collections$Iterable*) param5));
goto block24;
block24:;
ITable* $tmp3406 = $tmp3405->$class->itable;
while ($tmp3406->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3406 = $tmp3406->next;
}
$fn3408 $tmp3407 = $tmp3406->methods[0];
frost$core$Bit $tmp3409 = $tmp3407($tmp3405);
bool $tmp3410 = $tmp3409.value;
if ($tmp3410) goto block26; else goto block25;
block25:;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3411 = $tmp3405->$class->itable;
while ($tmp3411->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3411 = $tmp3411->next;
}
$fn3413 $tmp3412 = $tmp3411->methods[1];
frost$core$Object* $tmp3414 = $tmp3412($tmp3405);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3414)));
org$frostlang$frostc$ASTNode* $tmp3415 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
*(&local16) = ((org$frostlang$frostc$ASTNode*) $tmp3414);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:648
org$frostlang$frostc$ASTNode* $tmp3416 = *(&local16);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp3416);
frost$core$Frost$unref$frost$core$Object$Q($tmp3414);
org$frostlang$frostc$ASTNode* $tmp3417 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
org$frostlang$frostc$IR$Value* $tmp3418 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3419 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3420 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:651
org$frostlang$frostc$IR* $tmp3421 = *(&local0);
$fn3423 $tmp3422 = ($fn3423) $tmp3421->$class->vtable[5];
frost$core$Bit $tmp3424 = $tmp3422($tmp3421);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:651:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3425 = $tmp3424.value;
bool $tmp3426 = !$tmp3425;
frost$core$Bit $tmp3427 = (frost$core$Bit) {$tmp3426};
bool $tmp3428 = $tmp3427.value;
if ($tmp3428) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:652
org$frostlang$frostc$IR* $tmp3429 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3430 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp3431 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3432 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3430, $tmp3431, param1, $tmp3432);
$fn3434 $tmp3433 = ($fn3434) $tmp3429->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3435 = $tmp3433($tmp3429, $tmp3430);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3430));
goto block28;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:654
org$frostlang$frostc$IR* $tmp3436 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3437 = *(&local3);
$fn3439 $tmp3438 = ($fn3439) $tmp3436->$class->vtable[4];
$tmp3438($tmp3436, $tmp3437);
org$frostlang$frostc$IR$Value* $tmp3440 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3441 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3441));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3442 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3442));
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
frost$core$Int* $tmp3443 = &param4->$rawValue;
frost$core$Int $tmp3444 = *$tmp3443;
frost$core$Int $tmp3445 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3446 = $tmp3444.value;
int64_t $tmp3447 = $tmp3445.value;
bool $tmp3448 = $tmp3446 == $tmp3447;
frost$core$Bit $tmp3449 = (frost$core$Bit) {$tmp3448};
bool $tmp3450 = $tmp3449.value;
if ($tmp3450) goto block2; else goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:664
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:665
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:668
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from For.frost:668:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5136
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3451 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3452 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3451, $tmp3452);
org$frostlang$frostc$IR$Value* $tmp3453 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3451);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
org$frostlang$frostc$IR$Value* $tmp3454 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3454));
*(&local0) = $tmp3453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:669
org$frostlang$frostc$IR$Value* $tmp3455 = *(&local0);
frost$core$Bit $tmp3456 = (frost$core$Bit) {$tmp3455 == NULL};
bool $tmp3457 = $tmp3456.value;
if ($tmp3457) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:670
org$frostlang$frostc$IR$Value* $tmp3458 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:672
org$frostlang$frostc$IR$Value* $tmp3459 = *(&local0);
$fn3461 $tmp3460 = ($fn3461) $tmp3459->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3462 = $tmp3460($tmp3459);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:672:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp3463 = &((org$frostlang$frostc$Symbol*) $tmp3462)->name;
frost$core$String* $tmp3464 = *$tmp3463;
frost$core$Bit $tmp3465 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3464, &$s3466);
bool $tmp3467 = $tmp3465.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3462));
if ($tmp3467) goto block7; else goto block10;
block10:;
org$frostlang$frostc$IR$Value* $tmp3468 = *(&local0);
$fn3470 $tmp3469 = ($fn3470) $tmp3468->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3471 = $tmp3469($tmp3468);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:672:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp3472 = &((org$frostlang$frostc$Symbol*) $tmp3471)->name;
frost$core$String* $tmp3473 = *$tmp3472;
frost$core$Bit $tmp3474 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3473, &$s3475);
bool $tmp3476 = $tmp3474.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
if ($tmp3476) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:674
org$frostlang$frostc$IR$Value* $tmp3477 = *(&local0);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3477, param5);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:677
org$frostlang$frostc$IR$Value* $tmp3478 = *(&local0);
$fn3480 $tmp3479 = ($fn3480) $tmp3478->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3481 = $tmp3479($tmp3478);
frost$collections$HashSet* $tmp3482 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp3481);
ITable* $tmp3483 = ((frost$collections$Iterable*) $tmp3482)->$class->itable;
while ($tmp3483->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3483 = $tmp3483->next;
}
$fn3485 $tmp3484 = $tmp3483->methods[0];
frost$collections$Iterator* $tmp3486 = $tmp3484(((frost$collections$Iterable*) $tmp3482));
goto block13;
block13:;
ITable* $tmp3487 = $tmp3486->$class->itable;
while ($tmp3487->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3487 = $tmp3487->next;
}
$fn3489 $tmp3488 = $tmp3487->methods[0];
frost$core$Bit $tmp3490 = $tmp3488($tmp3486);
bool $tmp3491 = $tmp3490.value;
if ($tmp3491) goto block15; else goto block14;
block14:;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp3492 = $tmp3486->$class->itable;
while ($tmp3492->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3492 = $tmp3492->next;
}
$fn3494 $tmp3493 = $tmp3492->methods[1];
frost$core$Object* $tmp3495 = $tmp3493($tmp3486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3495)));
org$frostlang$frostc$Type* $tmp3496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp3495);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:678
org$frostlang$frostc$Type* $tmp3497 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3498 = &$tmp3497->typeKind;
org$frostlang$frostc$Type$Kind $tmp3499 = *$tmp3498;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3500;
$tmp3500 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3500->value = $tmp3499;
frost$core$Int $tmp3501 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:678:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3502 = &(&local3)->$rawValue;
*$tmp3502 = $tmp3501;
org$frostlang$frostc$Type$Kind $tmp3503 = *(&local3);
*(&local2) = $tmp3503;
org$frostlang$frostc$Type$Kind $tmp3504 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3505;
$tmp3505 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3505->value = $tmp3504;
ITable* $tmp3506 = ((frost$core$Equatable*) $tmp3500)->$class->itable;
while ($tmp3506->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3506 = $tmp3506->next;
}
$fn3508 $tmp3507 = $tmp3506->methods[0];
frost$core$Bit $tmp3509 = $tmp3507(((frost$core$Equatable*) $tmp3500), ((frost$core$Equatable*) $tmp3505));
bool $tmp3510 = $tmp3509.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3505)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3500)));
if ($tmp3510) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Type* $tmp3511 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:678:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3512 = &$tmp3511->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3513 = *$tmp3512;
frost$core$Bit $tmp3514 = (frost$core$Bit) {$tmp3513 != NULL};
bool $tmp3515 = $tmp3514.value;
if ($tmp3515) goto block21; else goto block22;
block22:;
frost$core$Int $tmp3516 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3517, $tmp3516, &$s3518);
abort(); // unreachable
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
frost$core$Int $tmp3519 = (frost$core$Int) {0u};
frost$core$Object* $tmp3520 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3513, $tmp3519);
org$frostlang$frostc$Type** $tmp3521 = &param0->ITERATOR_TYPE;
org$frostlang$frostc$Type* $tmp3522 = *$tmp3521;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:678:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp3523 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3520))->name;
frost$core$String* $tmp3524 = *$tmp3523;
frost$core$String** $tmp3525 = &((org$frostlang$frostc$Symbol*) $tmp3522)->name;
frost$core$String* $tmp3526 = *$tmp3525;
frost$core$Bit $tmp3527 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3524, $tmp3526);
bool $tmp3528 = $tmp3527.value;
if ($tmp3528) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp3529 = &((org$frostlang$frostc$Type*) $tmp3520)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3530 = *$tmp3529;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3531;
$tmp3531 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3531->value = $tmp3530;
org$frostlang$frostc$Type$Kind* $tmp3532 = &$tmp3522->typeKind;
org$frostlang$frostc$Type$Kind $tmp3533 = *$tmp3532;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3534;
$tmp3534 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3534->value = $tmp3533;
ITable* $tmp3535 = ((frost$core$Equatable*) $tmp3531)->$class->itable;
while ($tmp3535->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3535 = $tmp3535->next;
}
$fn3537 $tmp3536 = $tmp3535->methods[0];
frost$core$Bit $tmp3538 = $tmp3536(((frost$core$Equatable*) $tmp3531), ((frost$core$Equatable*) $tmp3534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3534)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3531)));
*(&local4) = $tmp3538;
goto block26;
block25:;
*(&local4) = $tmp3527;
goto block26;
block26:;
frost$core$Bit $tmp3539 = *(&local4);
bool $tmp3540 = $tmp3539.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3520);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
if ($tmp3540) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:679
$fn3542 $tmp3541 = ($fn3542) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3543 = $tmp3541(param4);
org$frostlang$frostc$IR$Value* $tmp3544 = *(&local0);
org$frostlang$frostc$Type* $tmp3545 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:679:52
org$frostlang$frostc$Type** $tmp3546 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3547 = *$tmp3546;
ITable* $tmp3548 = ((frost$core$Equatable*) $tmp3545)->$class->itable;
while ($tmp3548->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3548 = $tmp3548->next;
}
$fn3550 $tmp3549 = $tmp3548->methods[1];
frost$core$Bit $tmp3551 = $tmp3549(((frost$core$Equatable*) $tmp3545), ((frost$core$Equatable*) $tmp3547));
bool $tmp3552 = $tmp3551.value;
if ($tmp3552) goto block28; else goto block29;
block29:;
frost$core$Int $tmp3553 = (frost$core$Int) {4126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3554, $tmp3553, &$s3555);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4127
frost$core$Bit $tmp3556 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp3557 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp3543, $tmp3544, $tmp3545, $tmp3556);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
org$frostlang$frostc$IR$Value* $tmp3558 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
*(&local5) = $tmp3557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:680
org$frostlang$frostc$IR$Value* $tmp3559 = *(&local5);
frost$core$Bit $tmp3560 = (frost$core$Bit) {$tmp3559 == NULL};
bool $tmp3561 = $tmp3560.value;
if ($tmp3561) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:681
org$frostlang$frostc$IR$Value* $tmp3562 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3495);
org$frostlang$frostc$Type* $tmp3563 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3563));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
org$frostlang$frostc$IR$Value* $tmp3564 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:683
org$frostlang$frostc$IR$Value* $tmp3565 = *(&local5);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3565, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:684
org$frostlang$frostc$IR$Value* $tmp3566 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3566));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3495);
org$frostlang$frostc$Type* $tmp3567 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
org$frostlang$frostc$IR$Value* $tmp3568 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3568));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:686
org$frostlang$frostc$Type* $tmp3569 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3570 = &$tmp3569->typeKind;
org$frostlang$frostc$Type$Kind $tmp3571 = *$tmp3570;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3572;
$tmp3572 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3572->value = $tmp3571;
frost$core$Int $tmp3573 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:686:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3574 = &(&local7)->$rawValue;
*$tmp3574 = $tmp3573;
org$frostlang$frostc$Type$Kind $tmp3575 = *(&local7);
*(&local6) = $tmp3575;
org$frostlang$frostc$Type$Kind $tmp3576 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3577;
$tmp3577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3577->value = $tmp3576;
ITable* $tmp3578 = ((frost$core$Equatable*) $tmp3572)->$class->itable;
while ($tmp3578->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3578 = $tmp3578->next;
}
$fn3580 $tmp3579 = $tmp3578->methods[0];
frost$core$Bit $tmp3581 = $tmp3579(((frost$core$Equatable*) $tmp3572), ((frost$core$Equatable*) $tmp3577));
bool $tmp3582 = $tmp3581.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3577)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3572)));
if ($tmp3582) goto block34; else goto block33;
block34:;
org$frostlang$frostc$Type* $tmp3583 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:686:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3584 = &$tmp3583->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3585 = *$tmp3584;
frost$core$Bit $tmp3586 = (frost$core$Bit) {$tmp3585 != NULL};
bool $tmp3587 = $tmp3586.value;
if ($tmp3587) goto block37; else goto block38;
block38:;
frost$core$Int $tmp3588 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3589, $tmp3588, &$s3590);
abort(); // unreachable
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3585));
frost$core$Int $tmp3591 = (frost$core$Int) {0u};
frost$core$Object* $tmp3592 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3585, $tmp3591);
org$frostlang$frostc$Type** $tmp3593 = &param0->ITERABLE_TYPE;
org$frostlang$frostc$Type* $tmp3594 = *$tmp3593;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:686:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp3595 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3592))->name;
frost$core$String* $tmp3596 = *$tmp3595;
frost$core$String** $tmp3597 = &((org$frostlang$frostc$Symbol*) $tmp3594)->name;
frost$core$String* $tmp3598 = *$tmp3597;
frost$core$Bit $tmp3599 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3596, $tmp3598);
bool $tmp3600 = $tmp3599.value;
if ($tmp3600) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Type$Kind* $tmp3601 = &((org$frostlang$frostc$Type*) $tmp3592)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3602 = *$tmp3601;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3603;
$tmp3603 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3603->value = $tmp3602;
org$frostlang$frostc$Type$Kind* $tmp3604 = &$tmp3594->typeKind;
org$frostlang$frostc$Type$Kind $tmp3605 = *$tmp3604;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3606;
$tmp3606 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3606->value = $tmp3605;
ITable* $tmp3607 = ((frost$core$Equatable*) $tmp3603)->$class->itable;
while ($tmp3607->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3607 = $tmp3607->next;
}
$fn3609 $tmp3608 = $tmp3607->methods[0];
frost$core$Bit $tmp3610 = $tmp3608(((frost$core$Equatable*) $tmp3603), ((frost$core$Equatable*) $tmp3606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3606)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3603)));
*(&local8) = $tmp3610;
goto block42;
block41:;
*(&local8) = $tmp3599;
goto block42;
block42:;
frost$core$Bit $tmp3611 = *(&local8);
bool $tmp3612 = $tmp3611.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3592);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3585));
if ($tmp3612) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:687
$fn3614 $tmp3613 = ($fn3614) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3615 = $tmp3613(param4);
org$frostlang$frostc$IR$Value* $tmp3616 = *(&local0);
org$frostlang$frostc$Type* $tmp3617 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:687:52
org$frostlang$frostc$Type** $tmp3618 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3619 = *$tmp3618;
ITable* $tmp3620 = ((frost$core$Equatable*) $tmp3617)->$class->itable;
while ($tmp3620->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3620 = $tmp3620->next;
}
$fn3622 $tmp3621 = $tmp3620->methods[1];
frost$core$Bit $tmp3623 = $tmp3621(((frost$core$Equatable*) $tmp3617), ((frost$core$Equatable*) $tmp3619));
bool $tmp3624 = $tmp3623.value;
if ($tmp3624) goto block44; else goto block45;
block45:;
frost$core$Int $tmp3625 = (frost$core$Int) {4126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3626, $tmp3625, &$s3627);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4127
frost$core$Bit $tmp3628 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp3629 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp3615, $tmp3616, $tmp3617, $tmp3628);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
org$frostlang$frostc$IR$Value* $tmp3630 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
*(&local9) = $tmp3629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:688
org$frostlang$frostc$IR$Value* $tmp3631 = *(&local9);
frost$core$Bit $tmp3632 = (frost$core$Bit) {$tmp3631 == NULL};
bool $tmp3633 = $tmp3632.value;
if ($tmp3633) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:689
org$frostlang$frostc$IR$Value* $tmp3634 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3634));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3495);
org$frostlang$frostc$Type* $tmp3635 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
org$frostlang$frostc$IR$Value* $tmp3636 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:691
org$frostlang$frostc$IR$Value* $tmp3637 = *(&local9);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3638 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3638);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3639 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3640 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3639, $tmp3640);
org$frostlang$frostc$IR$Value* $tmp3641 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3637, &$s3642, ((frost$collections$ListView*) $tmp3638), $tmp3639);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3641));
org$frostlang$frostc$IR$Value* $tmp3643 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
*(&local10) = $tmp3641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3638));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:693
org$frostlang$frostc$IR$Value* $tmp3644 = *(&local10);
frost$core$Bit $tmp3645 = (frost$core$Bit) {$tmp3644 != NULL};
bool $tmp3646 = $tmp3645.value;
if ($tmp3646) goto block48; else goto block49;
block49:;
frost$core$Int $tmp3647 = (frost$core$Int) {693u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3648, $tmp3647);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:694
org$frostlang$frostc$IR$Value* $tmp3649 = *(&local10);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3649, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:695
org$frostlang$frostc$IR$Value* $tmp3650 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3650));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3651 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3651));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3495);
org$frostlang$frostc$Type* $tmp3652 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
org$frostlang$frostc$IR$Value* $tmp3653 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3495);
org$frostlang$frostc$Type* $tmp3654 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:698
$fn3656 $tmp3655 = ($fn3656) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3657 = $tmp3655(param4);
org$frostlang$frostc$IR$Value* $tmp3658 = *(&local0);
$fn3660 $tmp3659 = ($fn3660) $tmp3658->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3661 = $tmp3659($tmp3658);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:699:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3663 $tmp3662 = ($fn3663) ((frost$core$Object*) $tmp3661)->$class->vtable[0];
frost$core$String* $tmp3664 = $tmp3662(((frost$core$Object*) $tmp3661));
frost$core$String* $tmp3665 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3666, $tmp3664);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
frost$core$String* $tmp3667 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3665, &$s3668);
frost$core$String* $tmp3669 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3670, $tmp3667);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3657, $tmp3669);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
goto block8;
block8:;
org$frostlang$frostc$IR$Value* $tmp3671 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3671));
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

