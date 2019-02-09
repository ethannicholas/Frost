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
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
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
typedef frost$core$Bit (*$fn51)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn93)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn122)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn126)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn138)(frost$core$Object*);
typedef frost$core$Bit (*$fn161)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn197)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn232)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn267)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn302)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn326)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn362)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn397)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn432)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn467)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn496)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn509)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn547)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn581)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn615)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn628)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn644)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn665)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn675)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn687)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn693)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn705)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn716)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn755)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn780)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn783)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn786)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn807)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn838)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn849)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn852)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn855)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn876)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn906)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn909)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn944)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn968)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1000)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1005)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1010)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1015)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1020)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1038)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1043)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1080)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1085)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1122)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1127)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn1130)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1134)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1139)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1151)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1162)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1167)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1170)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1183)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn1221)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1248)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1279)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1310)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1341)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1364)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1369)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1379)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1384)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1421)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1426)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1463)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1468)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1506)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1513)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1518)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1544)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1556)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1562)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn1574)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1585)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1634)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1642)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1656)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn1680)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1683)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1686)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1707)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1739)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn1750)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1753)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1756)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1777)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1808)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1811)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1817)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1841)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1866)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1876)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1903)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1934)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1965)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1996)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2034)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2058)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn2089)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2092)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2106)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2111)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2116)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2121)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2126)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2197)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2202)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2205)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2210)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2220)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2225)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2262)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2267)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2304)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2309)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2312)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2317)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2327)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2332)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2369)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2374)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2411)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2416)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2419)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2423)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2428)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2444)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2455)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2460)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2463)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2476)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2489)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2494)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2504)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2509)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2530)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2557)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2588)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2619)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2650)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2673)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2678)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2688)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2693)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2730)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2735)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2772)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2777)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2805)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2832)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2863)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2894)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2925)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2948)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2953)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2963)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2968)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3005)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3010)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3047)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3052)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3083)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3090)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3095)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3132)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3171)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3176)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn3185)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3205)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3209)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3231)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3237)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3271)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3277)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3303)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn3306)(frost$core$Object*);
typedef frost$core$Bit (*$fn3334)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3436)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3442)(frost$core$Object*);
typedef frost$core$String* (*$fn3467)(frost$core$Object*);
typedef frost$core$Bit (*$fn3569)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3632)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3679)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3684)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3689)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn3699)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3711)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3715)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3749)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3761)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3766)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3796)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3801)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3811)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3855)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3859)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3864)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3874)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3885)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3890)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3912)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3921)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3931)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3936)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3940)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3945)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3959)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3995)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn4000)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4012)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4042)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4078)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn4083)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4095)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn4129)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn4133)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn4136)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 34, -8546630798215305666, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -6141706979506087981, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, 887845124229666251, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -4860172027847442545, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -4860172027847442545, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s953 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s1002 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s1007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s1017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 4811197024876024889, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 4768954892003008695, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s1193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s1257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s1288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s1295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s1319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s1326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s1350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s1361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 2844931745703816479, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -455373131340085827, NULL };
static frost$core$String $s1401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s1404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s1446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s1485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s1603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s1711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s1712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -4860172027847442545, NULL };
static frost$core$String $s1763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1774 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s1781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s1782 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -4860172027847442545, NULL };
static frost$core$String $s1826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s1853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s1860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s1912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s1919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s1943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s1950 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s1974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s2005 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s2016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s2070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s2077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s2118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s2123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, -1187102215809495364, NULL };
static frost$core$String $s2128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 8849330406844689506, NULL };
static frost$core$String $s2141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s2147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s2164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s2185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, 7122045963489035426, NULL };
static frost$core$String $s2212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, 7079803830616019232, NULL };
static frost$core$String $s2242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 6333775125262994784, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, 6291532992389978590, NULL };
static frost$core$String $s2349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s2486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, 4554272273549316022, NULL };
static frost$core$String $s2496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, -277664928109136540, NULL };
static frost$core$String $s2520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s2566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s2573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s2597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s2604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s2628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s2659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s2670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -3159342566116007212, NULL };
static frost$core$String $s2680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -6459647443159909518, NULL };
static frost$core$String $s2710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2752 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s2841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s2848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s2872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s2879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s2903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s2910 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s2934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s2945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2950 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -2984506197447853638, NULL };
static frost$core$String $s2955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -6284811074491755944, NULL };
static frost$core$String $s2985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2994 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s3027 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s3030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s3036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s3063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s3071 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s3139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s3145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s3149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s3156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x6f\x72\x27\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x72\x61\x6e\x67\x65\x20\x27", 45, -9140460092722261265, NULL };
static frost$core$String $s3181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20", 3, 1434131, NULL };
static frost$core$String $s3183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x72\x61\x6e\x67\x65\x73\x20\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x62\x6f\x74\x68\x20\x73\x74\x61\x72\x74\x20\x61\x6e\x64\x20\x65\x6e\x64", 43, 1427544015783743636, NULL };
static frost$core$String $s3216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s3244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s3284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s3309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, 3720736478287834632, NULL };
static frost$core$String $s3342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s3386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s3445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static frost$core$String $s3447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s3470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, 1889696216129743228, NULL };
static frost$core$String $s3515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s3531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s3544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s3554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s3607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s3617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3652 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, 2360750919238593240, NULL };
static frost$core$String $s3686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 2166892977325889322, NULL };
static frost$core$String $s3691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 21774959319579203, NULL };
static frost$core$String $s3722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s3755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s3777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s3780 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static frost$core$String $s3818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static frost$core$String $s3917 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s3926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s3968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s4009 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s4016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s4017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -4860172027847442545, NULL };
static frost$core$String $s4051 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s4063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };
static frost$core$String $s4092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s4099 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s4100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -4860172027847442545, NULL };
static frost$core$String $s4115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -672936363034691282, NULL };
static frost$core$String $s4121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s4139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s4141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s4143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -3631308317942430713, NULL };

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
frost$core$Int64 $tmp5 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:25:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp6 = &(&local1)->$rawValue;
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
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s20, $tmp19);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp21 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp22 = *$tmp21;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Int64 $tmp23 = (frost$core$Int64) {0};
frost$core$Object* $tmp24 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp22, $tmp23);
frost$core$Bit $tmp25 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, ((org$frostlang$frostc$Type*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q($tmp24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
return $tmp25;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:28
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:626
frost$core$String** $tmp26 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp27 = *$tmp26;
frost$core$Bit $tmp28 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp27, &$s29);
bool $tmp30 = $tmp28.value;
if ($tmp30) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:29
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp31 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp32 = *$tmp31;
frost$core$Bit $tmp33 = frost$core$Bit$init$builtin_bit($tmp32 != NULL);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp35 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s36, $tmp35);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp37 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp38 = *$tmp37;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Int64 $tmp39 = (frost$core$Int64) {1};
frost$core$Object* $tmp40 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp38, $tmp39);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:29:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp41 = &((org$frostlang$frostc$Type*) $tmp40)->typeKind;
org$frostlang$frostc$Type$Kind $tmp42 = *$tmp41;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = $tmp42;
frost$core$Int64 $tmp44 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp45 = &(&local4)->$rawValue;
*$tmp45 = $tmp44;
org$frostlang$frostc$Type$Kind $tmp46 = *(&local4);
*(&local3) = $tmp46;
org$frostlang$frostc$Type$Kind $tmp47 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp48;
$tmp48 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp48->value = $tmp47;
ITable* $tmp49 = ((frost$core$Equatable*) $tmp43)->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[1];
frost$core$Bit $tmp52 = $tmp50(((frost$core$Equatable*) $tmp43), ((frost$core$Equatable*) $tmp48));
bool $tmp53 = $tmp52.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp48)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
if ($tmp53) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp40)));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp40)));
goto block13;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp54 = &((org$frostlang$frostc$Type*) $tmp40)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit($tmp55 != NULL);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp58 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s59, $tmp58);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp60 = &((org$frostlang$frostc$Type*) $tmp40)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp61 = *$tmp60;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
frost$core$Object* $tmp63 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp61, $tmp62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp63)));
frost$core$Frost$unref$frost$core$Object$Q($tmp63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp63);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp63)));
goto block13;
block13:;
org$frostlang$frostc$Type* $tmp64 = *(&local2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$Type* $tmp65 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local5) = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:30
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:30:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp66 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp67 = *$tmp66;
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67 != NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s71, $tmp70);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp72 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp73 = *$tmp72;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Int64 $tmp74 = (frost$core$Int64) {2};
frost$core$Object* $tmp75 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp73, $tmp74);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp75)));
org$frostlang$frostc$Type* $tmp76 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local6) = ((org$frostlang$frostc$Type*) $tmp75);
frost$core$Frost$unref$frost$core$Object$Q($tmp75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:31
org$frostlang$frostc$Type* $tmp77 = *(&local5);
org$frostlang$frostc$Type* $tmp78 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:31:22
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp79 = &((org$frostlang$frostc$Symbol*) $tmp77)->name;
frost$core$String* $tmp80 = *$tmp79;
frost$core$String** $tmp81 = &((org$frostlang$frostc$Symbol*) $tmp78)->name;
frost$core$String* $tmp82 = *$tmp81;
frost$core$Bit $tmp83 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp80, $tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp85 = &$tmp77->typeKind;
org$frostlang$frostc$Type$Kind $tmp86 = *$tmp85;
org$frostlang$frostc$Type$Kind$wrapper* $tmp87;
$tmp87 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp87->value = $tmp86;
org$frostlang$frostc$Type$Kind* $tmp88 = &$tmp78->typeKind;
org$frostlang$frostc$Type$Kind $tmp89 = *$tmp88;
org$frostlang$frostc$Type$Kind$wrapper* $tmp90;
$tmp90 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp90->value = $tmp89;
ITable* $tmp91 = ((frost$core$Equatable*) $tmp87)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Bit $tmp94 = $tmp92(((frost$core$Equatable*) $tmp87), ((frost$core$Equatable*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp90)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp87)));
*(&local7) = $tmp94;
goto block28;
block27:;
*(&local7) = $tmp83;
goto block28;
block28:;
frost$core$Bit $tmp95 = *(&local7);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:32
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp98 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp99 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp100 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return $tmp97;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:34
org$frostlang$frostc$Type* $tmp101 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from For.frost:34:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:578
frost$core$String** $tmp102 = &((org$frostlang$frostc$Symbol*) $tmp101)->name;
frost$core$String* $tmp103 = *$tmp102;
frost$core$Bit $tmp104 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp103, &$s105);
bool $tmp106 = $tmp104.value;
if ($tmp106) goto block32; else goto block30;
block32:;
org$frostlang$frostc$Type* $tmp107 = *(&local6);
frost$core$String** $tmp108 = &((org$frostlang$frostc$Symbol*) $tmp107)->name;
frost$core$String* $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp109, &$s111);
bool $tmp112 = $tmp110.value;
if ($tmp112) goto block31; else goto block30;
block31:;
org$frostlang$frostc$Type* $tmp113 = *(&local5);
frost$core$String** $tmp114 = &((org$frostlang$frostc$Symbol*) $tmp113)->name;
frost$core$String* $tmp115 = *$tmp114;
org$frostlang$frostc$Type* $tmp116 = *(&local6);
frost$core$String** $tmp117 = &((org$frostlang$frostc$Symbol*) $tmp116)->name;
frost$core$String* $tmp118 = *$tmp117;
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from For.frost:35:68
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:138
ITable* $tmp120 = ((frost$collections$Iterable*) &$s119)->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
frost$collections$Iterator* $tmp123 = $tmp121(((frost$collections$Iterable*) &$s119));
ITable* $tmp124 = $tmp123->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[2];
frost$core$Int64 $tmp127 = $tmp125($tmp123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp129 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp127, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp128);
frost$core$String* $tmp130 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp118, $tmp129);
frost$core$Bit $tmp131 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp115, $tmp130);
bool $tmp132 = $tmp131.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
if ($tmp132) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:36
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp134 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp135 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp136 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return $tmp133;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:38
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:38:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn138 $tmp137 = ($fn138) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp139 = $tmp137(((frost$core$Object*) param2));
frost$core$String* $tmp140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s141, $tmp139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$String* $tmp142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp140, &$s143);
frost$core$String* $tmp144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp142, &$s145);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:40
frost$core$Bit $tmp146 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp147 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp148 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return $tmp146;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:42
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit(true);
return $tmp150;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
frost$core$Bit local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
frost$core$Bit local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
frost$core$Bit local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
frost$core$Bit local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:48
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:48:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp151 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp152 = *$tmp151;
org$frostlang$frostc$Type$Kind$wrapper* $tmp153;
$tmp153 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp153->value = $tmp152;
frost$core$Int64 $tmp154 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp155 = &(&local2)->$rawValue;
*$tmp155 = $tmp154;
org$frostlang$frostc$Type$Kind $tmp156 = *(&local2);
*(&local1) = $tmp156;
org$frostlang$frostc$Type$Kind $tmp157 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp158;
$tmp158 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp158->value = $tmp157;
ITable* $tmp159 = ((frost$core$Equatable*) $tmp153)->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[1];
frost$core$Bit $tmp162 = $tmp160(((frost$core$Equatable*) $tmp153), ((frost$core$Equatable*) $tmp158));
bool $tmp163 = $tmp162.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp158)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp153)));
if ($tmp163) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp164 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp165 = *$tmp164;
frost$core$Bit $tmp166 = frost$core$Bit$init$builtin_bit($tmp165 != NULL);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp168 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s169, $tmp168);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp170 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp171 = *$tmp170;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Int64 $tmp172 = (frost$core$Int64) {0};
frost$core$Object* $tmp173 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp171, $tmp172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp173)));
frost$core$Frost$unref$frost$core$Object$Q($tmp173);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp173)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp174 = *(&local0);
// begin inline call to method org.frostlang.frostc.Type.UInt8():org.frostlang.frostc.Type from For.frost:49:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp175 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp176 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:380:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp177 = &(&local4)->$rawValue;
*$tmp177 = $tmp176;
org$frostlang$frostc$Type$Kind $tmp178 = *(&local4);
*(&local3) = $tmp178;
org$frostlang$frostc$Type$Kind $tmp179 = *(&local3);
org$frostlang$frostc$Position $tmp180 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp175, &$s182, $tmp179, $tmp180, $tmp181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:49:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp183 = &((org$frostlang$frostc$Symbol*) $tmp174)->name;
frost$core$String* $tmp184 = *$tmp183;
frost$core$String** $tmp185 = &((org$frostlang$frostc$Symbol*) $tmp175)->name;
frost$core$String* $tmp186 = *$tmp185;
frost$core$Bit $tmp187 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp184, $tmp186);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Type$Kind* $tmp189 = &$tmp174->typeKind;
org$frostlang$frostc$Type$Kind $tmp190 = *$tmp189;
org$frostlang$frostc$Type$Kind$wrapper* $tmp191;
$tmp191 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp191->value = $tmp190;
org$frostlang$frostc$Type$Kind* $tmp192 = &$tmp175->typeKind;
org$frostlang$frostc$Type$Kind $tmp193 = *$tmp192;
org$frostlang$frostc$Type$Kind$wrapper* $tmp194;
$tmp194 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp194->value = $tmp193;
ITable* $tmp195 = ((frost$core$Equatable*) $tmp191)->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp195 = $tmp195->next;
}
$fn197 $tmp196 = $tmp195->methods[0];
frost$core$Bit $tmp198 = $tmp196(((frost$core$Equatable*) $tmp191), ((frost$core$Equatable*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp194)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp191)));
*(&local5) = $tmp198;
goto block16;
block15:;
*(&local5) = $tmp187;
goto block16;
block16:;
frost$core$Bit $tmp199 = *(&local5);
bool $tmp200 = $tmp199.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
if ($tmp200) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:49
// begin inline call to method org.frostlang.frostc.Type.Int8():org.frostlang.frostc.Type from For.frost:49:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp201 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp202 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:360:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp203 = &(&local7)->$rawValue;
*$tmp203 = $tmp202;
org$frostlang$frostc$Type$Kind $tmp204 = *(&local7);
*(&local6) = $tmp204;
org$frostlang$frostc$Type$Kind $tmp205 = *(&local6);
org$frostlang$frostc$Position $tmp206 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp201, &$s208, $tmp205, $tmp206, $tmp207);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp209 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp201;
block10:;
// begin inline call to method org.frostlang.frostc.Type.UInt16():org.frostlang.frostc.Type from For.frost:50:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:385
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp210 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp211 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:385:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp212 = &(&local9)->$rawValue;
*$tmp212 = $tmp211;
org$frostlang$frostc$Type$Kind $tmp213 = *(&local9);
*(&local8) = $tmp213;
org$frostlang$frostc$Type$Kind $tmp214 = *(&local8);
org$frostlang$frostc$Position $tmp215 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp216 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp210, &$s217, $tmp214, $tmp215, $tmp216);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:50:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp218 = &((org$frostlang$frostc$Symbol*) $tmp174)->name;
frost$core$String* $tmp219 = *$tmp218;
frost$core$String** $tmp220 = &((org$frostlang$frostc$Symbol*) $tmp210)->name;
frost$core$String* $tmp221 = *$tmp220;
frost$core$Bit $tmp222 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp219, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp224 = &$tmp174->typeKind;
org$frostlang$frostc$Type$Kind $tmp225 = *$tmp224;
org$frostlang$frostc$Type$Kind$wrapper* $tmp226;
$tmp226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp226->value = $tmp225;
org$frostlang$frostc$Type$Kind* $tmp227 = &$tmp210->typeKind;
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
*(&local10) = $tmp233;
goto block26;
block25:;
*(&local10) = $tmp222;
goto block26;
block26:;
frost$core$Bit $tmp234 = *(&local10);
bool $tmp235 = $tmp234.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
if ($tmp235) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:50
// begin inline call to method org.frostlang.frostc.Type.Int16():org.frostlang.frostc.Type from For.frost:50:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:365
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp236 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp237 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:365:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp238 = &(&local12)->$rawValue;
*$tmp238 = $tmp237;
org$frostlang$frostc$Type$Kind $tmp239 = *(&local12);
*(&local11) = $tmp239;
org$frostlang$frostc$Type$Kind $tmp240 = *(&local11);
org$frostlang$frostc$Position $tmp241 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp236, &$s243, $tmp240, $tmp241, $tmp242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp236;
block20:;
// begin inline call to method org.frostlang.frostc.Type.UInt32():org.frostlang.frostc.Type from For.frost:51:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp245 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp246 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:390:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp247 = &(&local14)->$rawValue;
*$tmp247 = $tmp246;
org$frostlang$frostc$Type$Kind $tmp248 = *(&local14);
*(&local13) = $tmp248;
org$frostlang$frostc$Type$Kind $tmp249 = *(&local13);
org$frostlang$frostc$Position $tmp250 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp245, &$s252, $tmp249, $tmp250, $tmp251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:51:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp253 = &((org$frostlang$frostc$Symbol*) $tmp174)->name;
frost$core$String* $tmp254 = *$tmp253;
frost$core$String** $tmp255 = &((org$frostlang$frostc$Symbol*) $tmp245)->name;
frost$core$String* $tmp256 = *$tmp255;
frost$core$Bit $tmp257 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp254, $tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Type$Kind* $tmp259 = &$tmp174->typeKind;
org$frostlang$frostc$Type$Kind $tmp260 = *$tmp259;
org$frostlang$frostc$Type$Kind$wrapper* $tmp261;
$tmp261 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp261->value = $tmp260;
org$frostlang$frostc$Type$Kind* $tmp262 = &$tmp245->typeKind;
org$frostlang$frostc$Type$Kind $tmp263 = *$tmp262;
org$frostlang$frostc$Type$Kind$wrapper* $tmp264;
$tmp264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp264->value = $tmp263;
ITable* $tmp265 = ((frost$core$Equatable*) $tmp261)->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
frost$core$Bit $tmp268 = $tmp266(((frost$core$Equatable*) $tmp261), ((frost$core$Equatable*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp264)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp261)));
*(&local15) = $tmp268;
goto block36;
block35:;
*(&local15) = $tmp257;
goto block36;
block36:;
frost$core$Bit $tmp269 = *(&local15);
bool $tmp270 = $tmp269.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
if ($tmp270) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:51
// begin inline call to method org.frostlang.frostc.Type.Int32():org.frostlang.frostc.Type from For.frost:51:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp271 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp272 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:370:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp273 = &(&local17)->$rawValue;
*$tmp273 = $tmp272;
org$frostlang$frostc$Type$Kind $tmp274 = *(&local17);
*(&local16) = $tmp274;
org$frostlang$frostc$Type$Kind $tmp275 = *(&local16);
org$frostlang$frostc$Position $tmp276 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp277 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp271, &$s278, $tmp275, $tmp276, $tmp277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp279 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp271;
block30:;
// begin inline call to method org.frostlang.frostc.Type.UInt64():org.frostlang.frostc.Type from For.frost:52:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp280 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp281 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:395:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp282 = &(&local19)->$rawValue;
*$tmp282 = $tmp281;
org$frostlang$frostc$Type$Kind $tmp283 = *(&local19);
*(&local18) = $tmp283;
org$frostlang$frostc$Type$Kind $tmp284 = *(&local18);
org$frostlang$frostc$Position $tmp285 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp286 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp280, &$s287, $tmp284, $tmp285, $tmp286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:52:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp288 = &((org$frostlang$frostc$Symbol*) $tmp174)->name;
frost$core$String* $tmp289 = *$tmp288;
frost$core$String** $tmp290 = &((org$frostlang$frostc$Symbol*) $tmp280)->name;
frost$core$String* $tmp291 = *$tmp290;
frost$core$Bit $tmp292 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp289, $tmp291);
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Type$Kind* $tmp294 = &$tmp174->typeKind;
org$frostlang$frostc$Type$Kind $tmp295 = *$tmp294;
org$frostlang$frostc$Type$Kind$wrapper* $tmp296;
$tmp296 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp296->value = $tmp295;
org$frostlang$frostc$Type$Kind* $tmp297 = &$tmp280->typeKind;
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
*(&local20) = $tmp303;
goto block46;
block45:;
*(&local20) = $tmp292;
goto block46;
block46:;
frost$core$Bit $tmp304 = *(&local20);
bool $tmp305 = $tmp304.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
if ($tmp305) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:52
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from For.frost:52:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp306 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp307 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:375:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp308 = &(&local22)->$rawValue;
*$tmp308 = $tmp307;
org$frostlang$frostc$Type$Kind $tmp309 = *(&local22);
*(&local21) = $tmp309;
org$frostlang$frostc$Type$Kind $tmp310 = *(&local21);
org$frostlang$frostc$Position $tmp311 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp312 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp306, &$s313, $tmp310, $tmp311, $tmp312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp314 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp306;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp315 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param0;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
goto block49;
block49:;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
frost$core$Bit local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
frost$core$Bit local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
frost$core$Bit local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
frost$core$Bit local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp316 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp317 = *$tmp316;
org$frostlang$frostc$Type$Kind$wrapper* $tmp318;
$tmp318 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp318->value = $tmp317;
frost$core$Int64 $tmp319 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp320 = &(&local2)->$rawValue;
*$tmp320 = $tmp319;
org$frostlang$frostc$Type$Kind $tmp321 = *(&local2);
*(&local1) = $tmp321;
org$frostlang$frostc$Type$Kind $tmp322 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp323;
$tmp323 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp323->value = $tmp322;
ITable* $tmp324 = ((frost$core$Equatable*) $tmp318)->$class->itable;
while ($tmp324->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[1];
frost$core$Bit $tmp327 = $tmp325(((frost$core$Equatable*) $tmp318), ((frost$core$Equatable*) $tmp323));
bool $tmp328 = $tmp327.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp323)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp318)));
if ($tmp328) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp329 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp330 = *$tmp329;
frost$core$Bit $tmp331 = frost$core$Bit$init$builtin_bit($tmp330 != NULL);
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp333 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s334, $tmp333);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp335 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp336 = *$tmp335;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Int64 $tmp337 = (frost$core$Int64) {0};
frost$core$Object* $tmp338 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp336, $tmp337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp338)));
frost$core$Frost$unref$frost$core$Object$Q($tmp338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp338)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp339 = *(&local0);
// begin inline call to method org.frostlang.frostc.Type.Int8():org.frostlang.frostc.Type from For.frost:61:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp340 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp341 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:360:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp342 = &(&local4)->$rawValue;
*$tmp342 = $tmp341;
org$frostlang$frostc$Type$Kind $tmp343 = *(&local4);
*(&local3) = $tmp343;
org$frostlang$frostc$Type$Kind $tmp344 = *(&local3);
org$frostlang$frostc$Position $tmp345 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp346 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp340, &$s347, $tmp344, $tmp345, $tmp346);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp348 = &((org$frostlang$frostc$Symbol*) $tmp339)->name;
frost$core$String* $tmp349 = *$tmp348;
frost$core$String** $tmp350 = &((org$frostlang$frostc$Symbol*) $tmp340)->name;
frost$core$String* $tmp351 = *$tmp350;
frost$core$Bit $tmp352 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp349, $tmp351);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Type$Kind* $tmp354 = &$tmp339->typeKind;
org$frostlang$frostc$Type$Kind $tmp355 = *$tmp354;
org$frostlang$frostc$Type$Kind$wrapper* $tmp356;
$tmp356 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp356->value = $tmp355;
org$frostlang$frostc$Type$Kind* $tmp357 = &$tmp340->typeKind;
org$frostlang$frostc$Type$Kind $tmp358 = *$tmp357;
org$frostlang$frostc$Type$Kind$wrapper* $tmp359;
$tmp359 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp359->value = $tmp358;
ITable* $tmp360 = ((frost$core$Equatable*) $tmp356)->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[0];
frost$core$Bit $tmp363 = $tmp361(((frost$core$Equatable*) $tmp356), ((frost$core$Equatable*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp359)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp356)));
*(&local5) = $tmp363;
goto block16;
block15:;
*(&local5) = $tmp352;
goto block16;
block16:;
frost$core$Bit $tmp364 = *(&local5);
bool $tmp365 = $tmp364.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
if ($tmp365) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
// begin inline call to method org.frostlang.frostc.Type.UInt8():org.frostlang.frostc.Type from For.frost:61:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp366 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp367 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:380:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp368 = &(&local7)->$rawValue;
*$tmp368 = $tmp367;
org$frostlang$frostc$Type$Kind $tmp369 = *(&local7);
*(&local6) = $tmp369;
org$frostlang$frostc$Type$Kind $tmp370 = *(&local6);
org$frostlang$frostc$Position $tmp371 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp366, &$s373, $tmp370, $tmp371, $tmp372);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$Type* $tmp374 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp366;
block10:;
// begin inline call to method org.frostlang.frostc.Type.Int16():org.frostlang.frostc.Type from For.frost:62:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:365
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp375 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp376 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:365:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp377 = &(&local9)->$rawValue;
*$tmp377 = $tmp376;
org$frostlang$frostc$Type$Kind $tmp378 = *(&local9);
*(&local8) = $tmp378;
org$frostlang$frostc$Type$Kind $tmp379 = *(&local8);
org$frostlang$frostc$Position $tmp380 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp381 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp375, &$s382, $tmp379, $tmp380, $tmp381);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp383 = &((org$frostlang$frostc$Symbol*) $tmp339)->name;
frost$core$String* $tmp384 = *$tmp383;
frost$core$String** $tmp385 = &((org$frostlang$frostc$Symbol*) $tmp375)->name;
frost$core$String* $tmp386 = *$tmp385;
frost$core$Bit $tmp387 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp384, $tmp386);
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp389 = &$tmp339->typeKind;
org$frostlang$frostc$Type$Kind $tmp390 = *$tmp389;
org$frostlang$frostc$Type$Kind$wrapper* $tmp391;
$tmp391 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp391->value = $tmp390;
org$frostlang$frostc$Type$Kind* $tmp392 = &$tmp375->typeKind;
org$frostlang$frostc$Type$Kind $tmp393 = *$tmp392;
org$frostlang$frostc$Type$Kind$wrapper* $tmp394;
$tmp394 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp394->value = $tmp393;
ITable* $tmp395 = ((frost$core$Equatable*) $tmp391)->$class->itable;
while ($tmp395->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp395 = $tmp395->next;
}
$fn397 $tmp396 = $tmp395->methods[0];
frost$core$Bit $tmp398 = $tmp396(((frost$core$Equatable*) $tmp391), ((frost$core$Equatable*) $tmp394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp394)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp391)));
*(&local10) = $tmp398;
goto block26;
block25:;
*(&local10) = $tmp387;
goto block26;
block26:;
frost$core$Bit $tmp399 = *(&local10);
bool $tmp400 = $tmp399.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
if ($tmp400) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
// begin inline call to method org.frostlang.frostc.Type.UInt16():org.frostlang.frostc.Type from For.frost:62:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:385
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp401 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp402 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:385:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp403 = &(&local12)->$rawValue;
*$tmp403 = $tmp402;
org$frostlang$frostc$Type$Kind $tmp404 = *(&local12);
*(&local11) = $tmp404;
org$frostlang$frostc$Type$Kind $tmp405 = *(&local11);
org$frostlang$frostc$Position $tmp406 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp401, &$s408, $tmp405, $tmp406, $tmp407);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$Type* $tmp409 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp401;
block20:;
// begin inline call to method org.frostlang.frostc.Type.Int32():org.frostlang.frostc.Type from For.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp410 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp411 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:370:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp412 = &(&local14)->$rawValue;
*$tmp412 = $tmp411;
org$frostlang$frostc$Type$Kind $tmp413 = *(&local14);
*(&local13) = $tmp413;
org$frostlang$frostc$Type$Kind $tmp414 = *(&local13);
org$frostlang$frostc$Position $tmp415 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp416 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp410, &$s417, $tmp414, $tmp415, $tmp416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp418 = &((org$frostlang$frostc$Symbol*) $tmp339)->name;
frost$core$String* $tmp419 = *$tmp418;
frost$core$String** $tmp420 = &((org$frostlang$frostc$Symbol*) $tmp410)->name;
frost$core$String* $tmp421 = *$tmp420;
frost$core$Bit $tmp422 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp419, $tmp421);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Type$Kind* $tmp424 = &$tmp339->typeKind;
org$frostlang$frostc$Type$Kind $tmp425 = *$tmp424;
org$frostlang$frostc$Type$Kind$wrapper* $tmp426;
$tmp426 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp426->value = $tmp425;
org$frostlang$frostc$Type$Kind* $tmp427 = &$tmp410->typeKind;
org$frostlang$frostc$Type$Kind $tmp428 = *$tmp427;
org$frostlang$frostc$Type$Kind$wrapper* $tmp429;
$tmp429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp429->value = $tmp428;
ITable* $tmp430 = ((frost$core$Equatable*) $tmp426)->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp430 = $tmp430->next;
}
$fn432 $tmp431 = $tmp430->methods[0];
frost$core$Bit $tmp433 = $tmp431(((frost$core$Equatable*) $tmp426), ((frost$core$Equatable*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp429)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp426)));
*(&local15) = $tmp433;
goto block36;
block35:;
*(&local15) = $tmp422;
goto block36;
block36:;
frost$core$Bit $tmp434 = *(&local15);
bool $tmp435 = $tmp434.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
if ($tmp435) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
// begin inline call to method org.frostlang.frostc.Type.UInt32():org.frostlang.frostc.Type from For.frost:63:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp436 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp437 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:390:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp438 = &(&local17)->$rawValue;
*$tmp438 = $tmp437;
org$frostlang$frostc$Type$Kind $tmp439 = *(&local17);
*(&local16) = $tmp439;
org$frostlang$frostc$Type$Kind $tmp440 = *(&local16);
org$frostlang$frostc$Position $tmp441 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp442 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp436, &$s443, $tmp440, $tmp441, $tmp442);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$Type* $tmp444 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp436;
block30:;
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from For.frost:64:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp445 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp446 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:375:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp447 = &(&local19)->$rawValue;
*$tmp447 = $tmp446;
org$frostlang$frostc$Type$Kind $tmp448 = *(&local19);
*(&local18) = $tmp448;
org$frostlang$frostc$Type$Kind $tmp449 = *(&local18);
org$frostlang$frostc$Position $tmp450 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp451 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp445, &$s452, $tmp449, $tmp450, $tmp451);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp453 = &((org$frostlang$frostc$Symbol*) $tmp339)->name;
frost$core$String* $tmp454 = *$tmp453;
frost$core$String** $tmp455 = &((org$frostlang$frostc$Symbol*) $tmp445)->name;
frost$core$String* $tmp456 = *$tmp455;
frost$core$Bit $tmp457 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp454, $tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Type$Kind* $tmp459 = &$tmp339->typeKind;
org$frostlang$frostc$Type$Kind $tmp460 = *$tmp459;
org$frostlang$frostc$Type$Kind$wrapper* $tmp461;
$tmp461 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp461->value = $tmp460;
org$frostlang$frostc$Type$Kind* $tmp462 = &$tmp445->typeKind;
org$frostlang$frostc$Type$Kind $tmp463 = *$tmp462;
org$frostlang$frostc$Type$Kind$wrapper* $tmp464;
$tmp464 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp464->value = $tmp463;
ITable* $tmp465 = ((frost$core$Equatable*) $tmp461)->$class->itable;
while ($tmp465->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp465 = $tmp465->next;
}
$fn467 $tmp466 = $tmp465->methods[0];
frost$core$Bit $tmp468 = $tmp466(((frost$core$Equatable*) $tmp461), ((frost$core$Equatable*) $tmp464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp464)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp461)));
*(&local20) = $tmp468;
goto block46;
block45:;
*(&local20) = $tmp457;
goto block46;
block46:;
frost$core$Bit $tmp469 = *(&local20);
bool $tmp470 = $tmp469.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
if ($tmp470) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
// begin inline call to method org.frostlang.frostc.Type.UInt64():org.frostlang.frostc.Type from For.frost:64:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp471 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp472 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:395:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp473 = &(&local22)->$rawValue;
*$tmp473 = $tmp472;
org$frostlang$frostc$Type$Kind $tmp474 = *(&local22);
*(&local21) = $tmp474;
org$frostlang$frostc$Type$Kind $tmp475 = *(&local21);
org$frostlang$frostc$Position $tmp476 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp477 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp471, &$s478, $tmp475, $tmp476, $tmp477);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$Type* $tmp479 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp471;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$Type* $tmp480 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param0;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
goto block49;
block49:;

}
frost$collections$ListView* org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$IR$Value* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp481 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp482 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp481, $tmp482);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp483 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp484 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp485 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp483, $tmp484, $tmp485, param0);
frost$collections$Array$add$frost$collections$Array$T($tmp481, ((frost$core$Object*) $tmp483));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp481)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
return ((frost$collections$ListView*) $tmp481);

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
frost$core$Bit local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
frost$core$Bit local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
frost$core$Bit local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:78
org$frostlang$frostc$Type$Kind* $tmp486 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp487 = *$tmp486;
org$frostlang$frostc$Type$Kind$wrapper* $tmp488;
$tmp488 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp488->value = $tmp487;
frost$core$Int64 $tmp489 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:78:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp490 = &(&local1)->$rawValue;
*$tmp490 = $tmp489;
org$frostlang$frostc$Type$Kind $tmp491 = *(&local1);
*(&local0) = $tmp491;
org$frostlang$frostc$Type$Kind $tmp492 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp493;
$tmp493 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp493->value = $tmp492;
ITable* $tmp494 = ((frost$core$Equatable*) $tmp488)->$class->itable;
while ($tmp494->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp494 = $tmp494->next;
}
$fn496 $tmp495 = $tmp494->methods[0];
frost$core$Bit $tmp497 = $tmp495(((frost$core$Equatable*) $tmp488), ((frost$core$Equatable*) $tmp493));
bool $tmp498 = $tmp497.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp493)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp488)));
if ($tmp498) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:79
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:79:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp499 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp500 = *$tmp499;
org$frostlang$frostc$Type$Kind$wrapper* $tmp501;
$tmp501 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp501->value = $tmp500;
frost$core$Int64 $tmp502 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp503 = &(&local4)->$rawValue;
*$tmp503 = $tmp502;
org$frostlang$frostc$Type$Kind $tmp504 = *(&local4);
*(&local3) = $tmp504;
org$frostlang$frostc$Type$Kind $tmp505 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp506;
$tmp506 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp506->value = $tmp505;
ITable* $tmp507 = ((frost$core$Equatable*) $tmp501)->$class->itable;
while ($tmp507->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp507 = $tmp507->next;
}
$fn509 $tmp508 = $tmp507->methods[1];
frost$core$Bit $tmp510 = $tmp508(((frost$core$Equatable*) $tmp501), ((frost$core$Equatable*) $tmp506));
bool $tmp511 = $tmp510.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp506)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp501)));
if ($tmp511) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local2) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp512 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp513 = *$tmp512;
frost$core$Bit $tmp514 = frost$core$Bit$init$builtin_bit($tmp513 != NULL);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s517, $tmp516);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp518 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp519 = *$tmp518;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Int64 $tmp520 = (frost$core$Int64) {0};
frost$core$Object* $tmp521 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp519, $tmp520);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp521)));
frost$core$Frost$unref$frost$core$Object$Q($tmp521);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp521);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp521)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp522 = *(&local2);
org$frostlang$frostc$Type* $tmp523 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp522);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
org$frostlang$frostc$Type* $tmp524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp523;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:81
// begin inline call to method org.frostlang.frostc.Type.Char8():org.frostlang.frostc.Type from For.frost:81:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:410
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp525 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp526 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:410:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp527 = &(&local6)->$rawValue;
*$tmp527 = $tmp526;
org$frostlang$frostc$Type$Kind $tmp528 = *(&local6);
*(&local5) = $tmp528;
org$frostlang$frostc$Type$Kind $tmp529 = *(&local5);
org$frostlang$frostc$Position $tmp530 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp531 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp525, &$s532, $tmp529, $tmp530, $tmp531);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:81:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp533 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp534 = *$tmp533;
frost$core$String** $tmp535 = &((org$frostlang$frostc$Symbol*) $tmp525)->name;
frost$core$String* $tmp536 = *$tmp535;
frost$core$Bit $tmp537 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp534, $tmp536);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Type$Kind* $tmp539 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp540 = *$tmp539;
org$frostlang$frostc$Type$Kind$wrapper* $tmp541;
$tmp541 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp541->value = $tmp540;
org$frostlang$frostc$Type$Kind* $tmp542 = &$tmp525->typeKind;
org$frostlang$frostc$Type$Kind $tmp543 = *$tmp542;
org$frostlang$frostc$Type$Kind$wrapper* $tmp544;
$tmp544 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp544->value = $tmp543;
ITable* $tmp545 = ((frost$core$Equatable*) $tmp541)->$class->itable;
while ($tmp545->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp545 = $tmp545->next;
}
$fn547 $tmp546 = $tmp545->methods[0];
frost$core$Bit $tmp548 = $tmp546(((frost$core$Equatable*) $tmp541), ((frost$core$Equatable*) $tmp544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp544)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp541)));
*(&local7) = $tmp548;
goto block19;
block18:;
*(&local7) = $tmp537;
goto block19;
block19:;
frost$core$Bit $tmp549 = *(&local7);
bool $tmp550 = $tmp549.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
if ($tmp550) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:82
// begin inline call to method org.frostlang.frostc.Type.UInt8():org.frostlang.frostc.Type from For.frost:82:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp551 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp552 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:380:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp553 = &(&local9)->$rawValue;
*$tmp553 = $tmp552;
org$frostlang$frostc$Type$Kind $tmp554 = *(&local9);
*(&local8) = $tmp554;
org$frostlang$frostc$Type$Kind $tmp555 = *(&local8);
org$frostlang$frostc$Position $tmp556 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp557 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp551, &$s558, $tmp555, $tmp556, $tmp557);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
return $tmp551;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:84
// begin inline call to method org.frostlang.frostc.Type.Char16():org.frostlang.frostc.Type from For.frost:84:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp559 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp560 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:415:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp561 = &(&local11)->$rawValue;
*$tmp561 = $tmp560;
org$frostlang$frostc$Type$Kind $tmp562 = *(&local11);
*(&local10) = $tmp562;
org$frostlang$frostc$Type$Kind $tmp563 = *(&local10);
org$frostlang$frostc$Position $tmp564 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp565 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp559, &$s566, $tmp563, $tmp564, $tmp565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:84:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp567 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp568 = *$tmp567;
frost$core$String** $tmp569 = &((org$frostlang$frostc$Symbol*) $tmp559)->name;
frost$core$String* $tmp570 = *$tmp569;
frost$core$Bit $tmp571 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp568, $tmp570);
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type$Kind* $tmp573 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp574 = *$tmp573;
org$frostlang$frostc$Type$Kind$wrapper* $tmp575;
$tmp575 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp575->value = $tmp574;
org$frostlang$frostc$Type$Kind* $tmp576 = &$tmp559->typeKind;
org$frostlang$frostc$Type$Kind $tmp577 = *$tmp576;
org$frostlang$frostc$Type$Kind$wrapper* $tmp578;
$tmp578 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp578->value = $tmp577;
ITable* $tmp579 = ((frost$core$Equatable*) $tmp575)->$class->itable;
while ($tmp579->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp579 = $tmp579->next;
}
$fn581 $tmp580 = $tmp579->methods[0];
frost$core$Bit $tmp582 = $tmp580(((frost$core$Equatable*) $tmp575), ((frost$core$Equatable*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp578)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp575)));
*(&local12) = $tmp582;
goto block30;
block29:;
*(&local12) = $tmp571;
goto block30;
block30:;
frost$core$Bit $tmp583 = *(&local12);
bool $tmp584 = $tmp583.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
if ($tmp584) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:85
// begin inline call to method org.frostlang.frostc.Type.UInt16():org.frostlang.frostc.Type from For.frost:85:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:385
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp585 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp586 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:385:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp587 = &(&local14)->$rawValue;
*$tmp587 = $tmp586;
org$frostlang$frostc$Type$Kind $tmp588 = *(&local14);
*(&local13) = $tmp588;
org$frostlang$frostc$Type$Kind $tmp589 = *(&local13);
org$frostlang$frostc$Position $tmp590 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp591 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp585, &$s592, $tmp589, $tmp590, $tmp591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
return $tmp585;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:87
// begin inline call to method org.frostlang.frostc.Type.Char32():org.frostlang.frostc.Type from For.frost:87:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:420
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp593 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp594 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:420:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp595 = &(&local16)->$rawValue;
*$tmp595 = $tmp594;
org$frostlang$frostc$Type$Kind $tmp596 = *(&local16);
*(&local15) = $tmp596;
org$frostlang$frostc$Type$Kind $tmp597 = *(&local15);
org$frostlang$frostc$Position $tmp598 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp599 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp593, &$s600, $tmp597, $tmp598, $tmp599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:87:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp601 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp602 = *$tmp601;
frost$core$String** $tmp603 = &((org$frostlang$frostc$Symbol*) $tmp593)->name;
frost$core$String* $tmp604 = *$tmp603;
frost$core$Bit $tmp605 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp602, $tmp604);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Type$Kind* $tmp607 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp608 = *$tmp607;
org$frostlang$frostc$Type$Kind$wrapper* $tmp609;
$tmp609 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp609->value = $tmp608;
org$frostlang$frostc$Type$Kind* $tmp610 = &$tmp593->typeKind;
org$frostlang$frostc$Type$Kind $tmp611 = *$tmp610;
org$frostlang$frostc$Type$Kind$wrapper* $tmp612;
$tmp612 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp612->value = $tmp611;
ITable* $tmp613 = ((frost$core$Equatable*) $tmp609)->$class->itable;
while ($tmp613->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp613 = $tmp613->next;
}
$fn615 $tmp614 = $tmp613->methods[0];
frost$core$Bit $tmp616 = $tmp614(((frost$core$Equatable*) $tmp609), ((frost$core$Equatable*) $tmp612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp612)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp609)));
*(&local17) = $tmp616;
goto block41;
block40:;
*(&local17) = $tmp605;
goto block41;
block41:;
frost$core$Bit $tmp617 = *(&local17);
bool $tmp618 = $tmp617.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
if ($tmp618) goto block33; else goto block35;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:88
// begin inline call to method org.frostlang.frostc.Type.Int32():org.frostlang.frostc.Type from For.frost:88:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp619 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp620 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:370:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp621 = &(&local19)->$rawValue;
*$tmp621 = $tmp620;
org$frostlang$frostc$Type$Kind $tmp622 = *(&local19);
*(&local18) = $tmp622;
org$frostlang$frostc$Type$Kind $tmp623 = *(&local18);
org$frostlang$frostc$Position $tmp624 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp625 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp619, &$s626, $tmp623, $tmp624, $tmp625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
return $tmp619;
block35:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block34:;
goto block23;
block23:;
goto block12;
block12:;
goto block44;
block44:;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

frost$core$Bit local0;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:99
$fn628 $tmp627 = ($fn628) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp629 = $tmp627(param2);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:99:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp630 = &((org$frostlang$frostc$Symbol*) $tmp629)->name;
frost$core$String* $tmp631 = *$tmp630;
frost$core$String** $tmp632 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp633 = *$tmp632;
frost$core$Bit $tmp634 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp631, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind* $tmp636 = &$tmp629->typeKind;
org$frostlang$frostc$Type$Kind $tmp637 = *$tmp636;
org$frostlang$frostc$Type$Kind$wrapper* $tmp638;
$tmp638 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp638->value = $tmp637;
org$frostlang$frostc$Type$Kind* $tmp639 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp640 = *$tmp639;
org$frostlang$frostc$Type$Kind$wrapper* $tmp641;
$tmp641 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp641->value = $tmp640;
ITable* $tmp642 = ((frost$core$Equatable*) $tmp638)->$class->itable;
while ($tmp642->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp642 = $tmp642->next;
}
$fn644 $tmp643 = $tmp642->methods[0];
frost$core$Bit $tmp645 = $tmp643(((frost$core$Equatable*) $tmp638), ((frost$core$Equatable*) $tmp641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp641)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp638)));
*(&local0) = $tmp645;
goto block6;
block5:;
*(&local0) = $tmp634;
goto block6;
block6:;
frost$core$Bit $tmp646 = *(&local0);
bool $tmp647 = $tmp646.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
if ($tmp647) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:102
org$frostlang$frostc$ClassDecl* $tmp648 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
org$frostlang$frostc$ClassDecl* $tmp649 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local1) = $tmp648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:103
org$frostlang$frostc$ClassDecl* $tmp650 = *(&local1);
frost$core$Bit $tmp651 = frost$core$Bit$init$builtin_bit($tmp650 != NULL);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp653 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s654, $tmp653);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:104
org$frostlang$frostc$IR** $tmp655 = &param0->ir;
org$frostlang$frostc$IR* $tmp656 = *$tmp655;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp657 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp658 = (frost$core$Int64) {7};
org$frostlang$frostc$ClassDecl* $tmp659 = *(&local1);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp660 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp661 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp660, $tmp661);
org$frostlang$frostc$IR$Value* $tmp662 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp660, ((frost$core$Object*) $tmp662));
org$frostlang$frostc$FixedArray* $tmp663 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp660);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp657, $tmp658, param1, $tmp659, $tmp663);
$fn665 $tmp664 = ($fn665) $tmp656->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp666 = $tmp664($tmp656, $tmp657);
*(&local2) = $tmp666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:106
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp667 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp668 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp669 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp667, $tmp668, $tmp669, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
org$frostlang$frostc$ClassDecl* $tmp670 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp667;

}
void org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$Variable* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$ClassDecl* local7 = NULL;
frost$collections$ListView* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
org$frostlang$frostc$IR$Value* local15 = NULL;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
frost$core$Bit local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$IR$Block$ID local21;
org$frostlang$frostc$IR$Block$ID local22;
org$frostlang$frostc$IR$Block$ID local23;
org$frostlang$frostc$IR$Block$ID local24;
org$frostlang$frostc$IR$Block$ID local25;
org$frostlang$frostc$Compiler$AutoContext* local26 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local27 = NULL;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$IR$Value* local31 = NULL;
org$frostlang$frostc$Type$Kind local32;
org$frostlang$frostc$Type$Kind local33;
org$frostlang$frostc$IR$Value* local34 = NULL;
org$frostlang$frostc$IR$Value* local35 = NULL;
org$frostlang$frostc$ASTNode* local36 = NULL;
org$frostlang$frostc$IR$Block$ID local37;
org$frostlang$frostc$IR$Value* local38 = NULL;
org$frostlang$frostc$IR$Value* local39 = NULL;
org$frostlang$frostc$Type* local40 = NULL;
org$frostlang$frostc$Type* local41 = NULL;
frost$core$Bit local42;
frost$core$Bit local43;
frost$core$Bit local44;
frost$core$Bit local45;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$IR$Block$ID local47;
org$frostlang$frostc$IR$Block$ID local48;
org$frostlang$frostc$Type$Kind local49;
org$frostlang$frostc$Type$Kind local50;
org$frostlang$frostc$IR$Value* local51 = NULL;
org$frostlang$frostc$IR$Value* local52 = NULL;
org$frostlang$frostc$Type$Kind local53;
org$frostlang$frostc$Type$Kind local54;
org$frostlang$frostc$IR$Value* local55 = NULL;
org$frostlang$frostc$IR$Value* local56 = NULL;
org$frostlang$frostc$IR$Value* local57 = NULL;
org$frostlang$frostc$IR$Value* local58 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:113
org$frostlang$frostc$IR** $tmp671 = &param0->ir;
org$frostlang$frostc$IR* $tmp672 = *$tmp671;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
org$frostlang$frostc$IR* $tmp673 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local0) = $tmp672;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:114
$fn675 $tmp674 = ($fn675) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp676 = $tmp674(param4);
org$frostlang$frostc$Type$Kind* $tmp677 = &$tmp676->typeKind;
org$frostlang$frostc$Type$Kind $tmp678 = *$tmp677;
org$frostlang$frostc$Type$Kind$wrapper* $tmp679;
$tmp679 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp679->value = $tmp678;
frost$core$Int64 $tmp680 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:114:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp681 = &(&local2)->$rawValue;
*$tmp681 = $tmp680;
org$frostlang$frostc$Type$Kind $tmp682 = *(&local2);
*(&local1) = $tmp682;
org$frostlang$frostc$Type$Kind $tmp683 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp684;
$tmp684 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp684->value = $tmp683;
ITable* $tmp685 = ((frost$core$Equatable*) $tmp679)->$class->itable;
while ($tmp685->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp685 = $tmp685->next;
}
$fn687 $tmp686 = $tmp685->methods[0];
frost$core$Bit $tmp688 = $tmp686(((frost$core$Equatable*) $tmp679), ((frost$core$Equatable*) $tmp684));
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp690 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s691, $tmp690);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp684)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp679)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:115
$fn693 $tmp692 = ($fn693) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp694 = $tmp692(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:115:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp695 = &$tmp694->_subtypes;
org$frostlang$frostc$FixedArray* $tmp696 = *$tmp695;
frost$core$Bit $tmp697 = frost$core$Bit$init$builtin_bit($tmp696 != NULL);
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp699 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s700, $tmp699);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp701 = &$tmp694->_subtypes;
org$frostlang$frostc$FixedArray* $tmp702 = *$tmp701;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
ITable* $tmp703 = ((frost$collections$CollectionView*) $tmp702)->$class->itable;
while ($tmp703->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp703 = $tmp703->next;
}
$fn705 $tmp704 = $tmp703->methods[0];
frost$core$Int64 $tmp706 = $tmp704(((frost$collections$CollectionView*) $tmp702));
frost$core$Int64 $tmp707 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:115:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp708 = $tmp706.value;
int64_t $tmp709 = $tmp707.value;
bool $tmp710 = $tmp708 == $tmp709;
frost$core$Bit $tmp711 = frost$core$Bit$init$builtin_bit($tmp710);
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp713 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s714, $tmp713);
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:116
$fn716 $tmp715 = ($fn716) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp717 = $tmp715(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:116:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp718 = &$tmp717->_subtypes;
org$frostlang$frostc$FixedArray* $tmp719 = *$tmp718;
frost$core$Bit $tmp720 = frost$core$Bit$init$builtin_bit($tmp719 != NULL);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp722 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s723, $tmp722);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp724 = &$tmp717->_subtypes;
org$frostlang$frostc$FixedArray* $tmp725 = *$tmp724;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Int64 $tmp726 = (frost$core$Int64) {0};
frost$core$Object* $tmp727 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp725, $tmp726);
frost$core$String** $tmp728 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp727))->name;
frost$core$String* $tmp729 = *$tmp728;
frost$core$Bit $tmp730 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp729, &$s731);
bool $tmp732 = $tmp730.value;
if ($tmp732) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp733 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s734, $tmp733);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp727);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:117
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:118
org$frostlang$frostc$Variable$Storage** $tmp735 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp736 = *$tmp735;
frost$core$Int64* $tmp737 = &$tmp736->$rawValue;
frost$core$Int64 $tmp738 = *$tmp737;
frost$core$Int64 $tmp739 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:119:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp740 = $tmp738.value;
int64_t $tmp741 = $tmp739.value;
bool $tmp742 = $tmp740 == $tmp741;
frost$core$Bit $tmp743 = frost$core$Bit$init$builtin_bit($tmp742);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block16; else goto block17;
block16:;
frost$core$Int64* $tmp745 = (frost$core$Int64*) ($tmp736->$data + 0);
frost$core$Int64 $tmp746 = *$tmp745;
*(&local4) = $tmp746;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:120
frost$core$Int64 $tmp747 = *(&local4);
*(&local3) = $tmp747;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:126
org$frostlang$frostc$Type** $tmp748 = &param3->type;
org$frostlang$frostc$Type* $tmp749 = *$tmp748;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
org$frostlang$frostc$Type* $tmp750 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local5) = $tmp749;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:127
org$frostlang$frostc$Type* $tmp751 = *(&local5);
org$frostlang$frostc$Type* $tmp752 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp751);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
org$frostlang$frostc$Type* $tmp753 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local6) = $tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:129
$fn755 $tmp754 = ($fn755) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp756 = $tmp754(param4);
org$frostlang$frostc$ClassDecl* $tmp757 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp756);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
org$frostlang$frostc$ClassDecl* $tmp758 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local7) = $tmp757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:130
org$frostlang$frostc$ClassDecl* $tmp759 = *(&local7);
frost$core$Bit $tmp760 = frost$core$Bit$init$builtin_bit($tmp759 == NULL);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block19; else goto block20;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:123
frost$core$Int64 $tmp762 = (frost$core$Int64) {123};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s763, $tmp762);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:131
org$frostlang$frostc$ClassDecl* $tmp764 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp765 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp766 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp767 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:133
org$frostlang$frostc$ClassDecl* $tmp768 = *(&local7);
frost$collections$ListView* $tmp769 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp768);
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
frost$collections$ListView* $tmp770 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local8) = $tmp769;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:136
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp771 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp772 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp773 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp774 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp775 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp776 = *(&local8);
frost$core$Int64 $tmp777 = (frost$core$Int64) {0};
ITable* $tmp778 = $tmp776->$class->itable;
while ($tmp778->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp778 = $tmp778->next;
}
$fn780 $tmp779 = $tmp778->methods[0];
frost$core$Object* $tmp781 = $tmp779($tmp776, $tmp777);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp774, $tmp775, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp781));
$fn783 $tmp782 = ($fn783) $tmp773->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp784 = $tmp782($tmp773, $tmp774);
$fn786 $tmp785 = ($fn786) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp787 = $tmp785(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:138:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp788 = &$tmp787->_subtypes;
org$frostlang$frostc$FixedArray* $tmp789 = *$tmp788;
frost$core$Bit $tmp790 = frost$core$Bit$init$builtin_bit($tmp789 != NULL);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp792 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s793, $tmp792);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp794 = &$tmp787->_subtypes;
org$frostlang$frostc$FixedArray* $tmp795 = *$tmp794;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Int64 $tmp796 = (frost$core$Int64) {1};
frost$core$Object* $tmp797 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp795, $tmp796);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp771, $tmp772, $tmp784, ((org$frostlang$frostc$Type*) $tmp797));
org$frostlang$frostc$Type* $tmp798 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:136:54
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Compiler.frost:3992:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp799 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp800 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp801 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp800);
org$frostlang$frostc$Position $tmp802 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp803 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp799, &$s804, $tmp801, $tmp802, $tmp803);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
ITable* $tmp805 = ((frost$core$Equatable*) $tmp798)->$class->itable;
while ($tmp805->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp805 = $tmp805->next;
}
$fn807 $tmp806 = $tmp805->methods[1];
frost$core$Bit $tmp808 = $tmp806(((frost$core$Equatable*) $tmp798), ((frost$core$Equatable*) $tmp799));
bool $tmp809 = $tmp808.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
if ($tmp809) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp810 = (frost$core$Int64) {3993};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s811, $tmp810, &$s812);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3994
frost$core$Bit $tmp813 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp814 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp771, $tmp798, $tmp813);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
org$frostlang$frostc$Type* $tmp815 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp816 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp814, $tmp815);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
org$frostlang$frostc$IR$Value* $tmp817 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local9) = $tmp816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q($tmp797);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q($tmp781);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:139
org$frostlang$frostc$IR$Value* $tmp818 = *(&local9);
frost$core$Bit $tmp819 = frost$core$Bit$init$builtin_bit($tmp818 == NULL);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:140
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
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:144
org$frostlang$frostc$IR* $tmp827 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp828 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp829 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp830 = *(&local9);
org$frostlang$frostc$Type* $tmp831 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp832 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp830, $tmp831);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp833 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp834 = (frost$core$Int64) {2};
frost$core$Int64 $tmp835 = *(&local3);
org$frostlang$frostc$Type* $tmp836 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp833, $tmp834, $tmp835, $tmp836);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp828, $tmp829, param1, $tmp832, $tmp833);
$fn838 $tmp837 = ($fn838) $tmp827->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp839 = $tmp837($tmp827, $tmp828);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:148
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp840 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp841 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp842 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp843 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp844 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp845 = *(&local8);
frost$core$Int64 $tmp846 = (frost$core$Int64) {1};
ITable* $tmp847 = $tmp845->$class->itable;
while ($tmp847->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp847 = $tmp847->next;
}
$fn849 $tmp848 = $tmp847->methods[0];
frost$core$Object* $tmp850 = $tmp848($tmp845, $tmp846);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp843, $tmp844, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp850));
$fn852 $tmp851 = ($fn852) $tmp842->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp853 = $tmp851($tmp842, $tmp843);
$fn855 $tmp854 = ($fn855) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp856 = $tmp854(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:150:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp857 = &$tmp856->_subtypes;
org$frostlang$frostc$FixedArray* $tmp858 = *$tmp857;
frost$core$Bit $tmp859 = frost$core$Bit$init$builtin_bit($tmp858 != NULL);
bool $tmp860 = $tmp859.value;
if ($tmp860) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp861 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s862, $tmp861);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp863 = &$tmp856->_subtypes;
org$frostlang$frostc$FixedArray* $tmp864 = *$tmp863;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Int64 $tmp865 = (frost$core$Int64) {1};
frost$core$Object* $tmp866 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp864, $tmp865);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp840, $tmp841, $tmp853, ((org$frostlang$frostc$Type*) $tmp866));
org$frostlang$frostc$Type* $tmp867 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:148:52
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Compiler.frost:3992:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp868 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp869 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp870 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp869);
org$frostlang$frostc$Position $tmp871 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp872 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp868, &$s873, $tmp870, $tmp871, $tmp872);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
ITable* $tmp874 = ((frost$core$Equatable*) $tmp867)->$class->itable;
while ($tmp874->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp874 = $tmp874->next;
}
$fn876 $tmp875 = $tmp874->methods[1];
frost$core$Bit $tmp877 = $tmp875(((frost$core$Equatable*) $tmp867), ((frost$core$Equatable*) $tmp868));
bool $tmp878 = $tmp877.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
if ($tmp878) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp879 = (frost$core$Int64) {3993};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s880, $tmp879, &$s881);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3994
frost$core$Bit $tmp882 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp883 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp840, $tmp867, $tmp882);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
org$frostlang$frostc$Type* $tmp884 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp885 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp883, $tmp884);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
org$frostlang$frostc$IR$Value* $tmp886 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local10) = $tmp885;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q($tmp866);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q($tmp850);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:151
org$frostlang$frostc$IR$Value* $tmp887 = *(&local10);
frost$core$Bit $tmp888 = frost$core$Bit$init$builtin_bit($tmp887 == NULL);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:152
org$frostlang$frostc$IR$Value* $tmp890 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp891 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp892 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp893 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp894 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp895 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp896 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:156
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp897 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp898 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp899 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp900 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp901 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp902 = *(&local8);
frost$core$Int64 $tmp903 = (frost$core$Int64) {2};
ITable* $tmp904 = $tmp902->$class->itable;
while ($tmp904->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[0];
frost$core$Object* $tmp907 = $tmp905($tmp902, $tmp903);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp900, $tmp901, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp907));
$fn909 $tmp908 = ($fn909) $tmp899->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp910 = $tmp908($tmp899, $tmp900);
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:157:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp911 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp912 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp913 = &(&local12)->$rawValue;
*$tmp913 = $tmp912;
org$frostlang$frostc$Type$Kind $tmp914 = *(&local12);
*(&local11) = $tmp914;
org$frostlang$frostc$Type$Kind $tmp915 = *(&local11);
org$frostlang$frostc$Position $tmp916 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp917 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp911, &$s918, $tmp915, $tmp916, $tmp917);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp897, $tmp898, $tmp910, $tmp911);
org$frostlang$frostc$IR$Value* $tmp919 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp897);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
org$frostlang$frostc$IR$Value* $tmp920 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
*(&local13) = $tmp919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$Frost$unref$frost$core$Object$Q($tmp907);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:159
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp921 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp922 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp923 = (frost$core$UInt64) {1};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp921, $tmp922, param1, $tmp923);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp924 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp925 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp926 = *(&local6);
frost$core$Bit $tmp927 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp924, $tmp925, $tmp926, $tmp927);
org$frostlang$frostc$IR$Value* $tmp928 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp921, $tmp924);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
org$frostlang$frostc$IR$Value* $tmp929 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local14) = $tmp928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:161
org$frostlang$frostc$IR$Value* $tmp930 = *(&local14);
frost$core$Bit $tmp931 = frost$core$Bit$init$builtin_bit($tmp930 == NULL);
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:162
org$frostlang$frostc$IR$Value* $tmp933 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp934 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp935 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp936 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp937 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp938 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp939 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp940 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp941 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:164
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:165
org$frostlang$frostc$IR$Value* $tmp942 = *(&local14);
$fn944 $tmp943 = ($fn944) $tmp942->$class->vtable[2];
org$frostlang$frostc$Type* $tmp945 = $tmp943($tmp942);
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from For.frost:165:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp946 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp947 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:375:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp948 = &(&local17)->$rawValue;
*$tmp948 = $tmp947;
org$frostlang$frostc$Type$Kind $tmp949 = *(&local17);
*(&local16) = $tmp949;
org$frostlang$frostc$Type$Kind $tmp950 = *(&local16);
org$frostlang$frostc$Position $tmp951 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp952 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp946, &$s953, $tmp950, $tmp951, $tmp952);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:165:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp954 = &((org$frostlang$frostc$Symbol*) $tmp945)->name;
frost$core$String* $tmp955 = *$tmp954;
frost$core$String** $tmp956 = &((org$frostlang$frostc$Symbol*) $tmp946)->name;
frost$core$String* $tmp957 = *$tmp956;
frost$core$Bit $tmp958 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp955, $tmp957);
bool $tmp959 = $tmp958.value;
if ($tmp959) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Type$Kind* $tmp960 = &$tmp945->typeKind;
org$frostlang$frostc$Type$Kind $tmp961 = *$tmp960;
org$frostlang$frostc$Type$Kind$wrapper* $tmp962;
$tmp962 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp962->value = $tmp961;
org$frostlang$frostc$Type$Kind* $tmp963 = &$tmp946->typeKind;
org$frostlang$frostc$Type$Kind $tmp964 = *$tmp963;
org$frostlang$frostc$Type$Kind$wrapper* $tmp965;
$tmp965 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp965->value = $tmp964;
ITable* $tmp966 = ((frost$core$Equatable*) $tmp962)->$class->itable;
while ($tmp966->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp966 = $tmp966->next;
}
$fn968 $tmp967 = $tmp966->methods[0];
frost$core$Bit $tmp969 = $tmp967(((frost$core$Equatable*) $tmp962), ((frost$core$Equatable*) $tmp965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp965)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp962)));
*(&local18) = $tmp969;
goto block51;
block50:;
*(&local18) = $tmp958;
goto block51;
block51:;
frost$core$Bit $tmp970 = *(&local18);
bool $tmp971 = $tmp970.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
if ($tmp971) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:166
org$frostlang$frostc$IR$Value* $tmp972 = *(&local14);
// begin inline call to method org.frostlang.frostc.Type.UInt64():org.frostlang.frostc.Type from For.frost:166:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp973 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp974 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:395:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp975 = &(&local20)->$rawValue;
*$tmp975 = $tmp974;
org$frostlang$frostc$Type$Kind $tmp976 = *(&local20);
*(&local19) = $tmp976;
org$frostlang$frostc$Type$Kind $tmp977 = *(&local19);
org$frostlang$frostc$Position $tmp978 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp979 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp973, &$s980, $tmp977, $tmp978, $tmp979);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
org$frostlang$frostc$IR$Value* $tmp981 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp972, $tmp973);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
org$frostlang$frostc$IR$Value* $tmp982 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local15) = $tmp981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:167
org$frostlang$frostc$IR$Value* $tmp983 = *(&local15);
frost$core$Bit $tmp984 = frost$core$Bit$init$builtin_bit($tmp983 == NULL);
bool $tmp985 = $tmp984.value;
if ($tmp985) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:168
org$frostlang$frostc$IR$Value* $tmp986 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp987 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp988 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp989 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp990 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp991 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp992 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp993 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp994 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp995 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block55:;
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:172
org$frostlang$frostc$IR$Value* $tmp996 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
org$frostlang$frostc$IR$Value* $tmp997 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local15) = $tmp996;
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:176
org$frostlang$frostc$IR* $tmp998 = *(&local0);
$fn1000 $tmp999 = ($fn1000) $tmp998->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1001 = $tmp999($tmp998, &$s1002);
*(&local21) = $tmp1001;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:177
org$frostlang$frostc$IR* $tmp1003 = *(&local0);
$fn1005 $tmp1004 = ($fn1005) $tmp1003->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1006 = $tmp1004($tmp1003, &$s1007);
*(&local22) = $tmp1006;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:178
org$frostlang$frostc$IR* $tmp1008 = *(&local0);
$fn1010 $tmp1009 = ($fn1010) $tmp1008->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1011 = $tmp1009($tmp1008, &$s1012);
*(&local23) = $tmp1011;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:179
org$frostlang$frostc$IR* $tmp1013 = *(&local0);
$fn1015 $tmp1014 = ($fn1015) $tmp1013->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1016 = $tmp1014($tmp1013, &$s1017);
*(&local24) = $tmp1016;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:180
org$frostlang$frostc$IR* $tmp1018 = *(&local0);
$fn1020 $tmp1019 = ($fn1020) $tmp1018->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1021 = $tmp1019($tmp1018, &$s1022);
*(&local25) = $tmp1021;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:181
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp1023 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1024 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1025 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1026 = *(&local22);
org$frostlang$frostc$IR$Block$ID $tmp1027 = *(&local23);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1024, $tmp1025, param2, $tmp1026, $tmp1027);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1023, param0, $tmp1024);
*(&local26) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
org$frostlang$frostc$Compiler$AutoContext* $tmp1028 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local26) = $tmp1023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:183
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp1029 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1029, param0);
*(&local27) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
org$frostlang$frostc$Compiler$AutoScope* $tmp1030 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local27) = $tmp1029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:184
org$frostlang$frostc$IR* $tmp1031 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1032 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1033 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1034 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1035 = *(&local24);
org$frostlang$frostc$IR$Block$ID $tmp1036 = *(&local25);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1032, $tmp1033, param1, $tmp1034, $tmp1035, $tmp1036);
$fn1038 $tmp1037 = ($fn1038) $tmp1031->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1039 = $tmp1037($tmp1031, $tmp1032);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:186
org$frostlang$frostc$IR* $tmp1040 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1041 = *(&local24);
$fn1043 $tmp1042 = ($fn1043) $tmp1040->$class->vtable[4];
$tmp1042($tmp1040, $tmp1041);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:187
org$frostlang$frostc$IR$Value* $tmp1044 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp1045 = *(&local10);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:187:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1046 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1047 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1046, $tmp1047);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1048 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1049 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp1050 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1048, $tmp1049, $tmp1050, $tmp1045);
frost$collections$Array$add$frost$collections$Array$T($tmp1046, ((frost$core$Object*) $tmp1048));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1046)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1051 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1052 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:188:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1053 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1054 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1055 = &(&local29)->$rawValue;
*$tmp1055 = $tmp1054;
org$frostlang$frostc$Type$Kind $tmp1056 = *(&local29);
*(&local28) = $tmp1056;
org$frostlang$frostc$Type$Kind $tmp1057 = *(&local28);
org$frostlang$frostc$Position $tmp1058 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1059 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1053, &$s1060, $tmp1057, $tmp1058, $tmp1059);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1051, $tmp1052, $tmp1053, $tmp1061);
org$frostlang$frostc$IR$Value* $tmp1062 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1044, &$s1063, ((frost$collections$ListView*) $tmp1046), $tmp1051);
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
org$frostlang$frostc$IR$Value* $tmp1064 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local30) = $tmp1062;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1046)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:189
org$frostlang$frostc$IR$Value* $tmp1065 = *(&local30);
frost$core$Bit $tmp1066 = frost$core$Bit$init$builtin_bit($tmp1065 != NULL);
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp1068 = (frost$core$Int64) {189};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1069, $tmp1068);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:190
org$frostlang$frostc$IR$Value* $tmp1070 = *(&local30);
org$frostlang$frostc$IR$Value* $tmp1071 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1070);
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
org$frostlang$frostc$IR$Value* $tmp1072 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local31) = $tmp1071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:191
org$frostlang$frostc$IR* $tmp1073 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1074 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1075 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1076 = *(&local31);
org$frostlang$frostc$IR$Block$ID $tmp1077 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp1078 = *(&local22);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1074, $tmp1075, param1, $tmp1076, $tmp1077, $tmp1078);
$fn1080 $tmp1079 = ($fn1080) $tmp1073->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1081 = $tmp1079($tmp1073, $tmp1074);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:193
org$frostlang$frostc$IR* $tmp1082 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1083 = *(&local25);
$fn1085 $tmp1084 = ($fn1085) $tmp1082->$class->vtable[4];
$tmp1084($tmp1082, $tmp1083);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:194
org$frostlang$frostc$IR$Value* $tmp1086 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp1087 = *(&local10);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:194:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1088 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1089 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1088, $tmp1089);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1090 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1091 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp1092 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1090, $tmp1091, $tmp1092, $tmp1087);
frost$collections$Array$add$frost$collections$Array$T($tmp1088, ((frost$core$Object*) $tmp1090));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1088)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1093 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1094 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:195:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1095 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1096 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1097 = &(&local33)->$rawValue;
*$tmp1097 = $tmp1096;
org$frostlang$frostc$Type$Kind $tmp1098 = *(&local33);
*(&local32) = $tmp1098;
org$frostlang$frostc$Type$Kind $tmp1099 = *(&local32);
org$frostlang$frostc$Position $tmp1100 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1101 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1095, &$s1102, $tmp1099, $tmp1100, $tmp1101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
frost$core$Bit $tmp1103 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1093, $tmp1094, $tmp1095, $tmp1103);
org$frostlang$frostc$IR$Value* $tmp1104 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1086, &$s1105, ((frost$collections$ListView*) $tmp1088), $tmp1093);
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
org$frostlang$frostc$IR$Value* $tmp1106 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local34) = $tmp1104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1088)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:196
org$frostlang$frostc$IR$Value* $tmp1107 = *(&local34);
frost$core$Bit $tmp1108 = frost$core$Bit$init$builtin_bit($tmp1107 != NULL);
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1110 = (frost$core$Int64) {196};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1111, $tmp1110);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:197
org$frostlang$frostc$IR$Value* $tmp1112 = *(&local34);
org$frostlang$frostc$IR$Value* $tmp1113 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1112);
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
org$frostlang$frostc$IR$Value* $tmp1114 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local35) = $tmp1113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:198
org$frostlang$frostc$IR* $tmp1115 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1116 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1117 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1118 = *(&local35);
org$frostlang$frostc$IR$Block$ID $tmp1119 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp1120 = *(&local22);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1116, $tmp1117, param1, $tmp1118, $tmp1119, $tmp1120);
$fn1122 $tmp1121 = ($fn1122) $tmp1115->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1123 = $tmp1121($tmp1115, $tmp1116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:200
org$frostlang$frostc$IR* $tmp1124 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1125 = *(&local21);
$fn1127 $tmp1126 = ($fn1127) $tmp1124->$class->vtable[4];
$tmp1126($tmp1124, $tmp1125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:201
ITable* $tmp1128 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1128->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1128 = $tmp1128->next;
}
$fn1130 $tmp1129 = $tmp1128->methods[0];
frost$collections$Iterator* $tmp1131 = $tmp1129(((frost$collections$Iterable*) param5));
goto block66;
block66:;
ITable* $tmp1132 = $tmp1131->$class->itable;
while ($tmp1132->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1132 = $tmp1132->next;
}
$fn1134 $tmp1133 = $tmp1132->methods[0];
frost$core$Bit $tmp1135 = $tmp1133($tmp1131);
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block68; else goto block67;
block67:;
*(&local36) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1137 = $tmp1131->$class->itable;
while ($tmp1137->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1137 = $tmp1137->next;
}
$fn1139 $tmp1138 = $tmp1137->methods[1];
frost$core$Object* $tmp1140 = $tmp1138($tmp1131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1140)));
org$frostlang$frostc$ASTNode* $tmp1141 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local36) = ((org$frostlang$frostc$ASTNode*) $tmp1140);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:202
org$frostlang$frostc$ASTNode* $tmp1142 = *(&local36);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1142);
frost$core$Frost$unref$frost$core$Object$Q($tmp1140);
org$frostlang$frostc$ASTNode* $tmp1143 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local36) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
org$frostlang$frostc$IR$Value* $tmp1144 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1145 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1146 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1147 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1148 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local27) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:205
org$frostlang$frostc$IR* $tmp1149 = *(&local0);
$fn1151 $tmp1150 = ($fn1151) $tmp1149->$class->vtable[5];
frost$core$Bit $tmp1152 = $tmp1150($tmp1149);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:205:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp1153 = $tmp1152.value;
bool $tmp1154 = !$tmp1153;
frost$core$Bit $tmp1155 = (frost$core$Bit) {$tmp1154};
bool $tmp1156 = $tmp1155.value;
if ($tmp1156) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:206
org$frostlang$frostc$IR* $tmp1157 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1158 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1159 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1160 = *(&local23);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1158, $tmp1159, param1, $tmp1160);
$fn1162 $tmp1161 = ($fn1162) $tmp1157->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1163 = $tmp1161($tmp1157, $tmp1158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
goto block70;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:208
org$frostlang$frostc$IR* $tmp1164 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1165 = *(&local23);
$fn1167 $tmp1166 = ($fn1167) $tmp1164->$class->vtable[4];
$tmp1166($tmp1164, $tmp1165);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:209
org$frostlang$frostc$IR* $tmp1168 = *(&local0);
$fn1170 $tmp1169 = ($fn1170) $tmp1168->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1171 = $tmp1169($tmp1168, &$s1172);
*(&local37) = $tmp1171;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:212
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1173 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1174 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1175 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1176 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1177 = (frost$core$Int64) {14};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1178 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1179 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1180 = *(&local3);
org$frostlang$frostc$Type* $tmp1181 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1178, $tmp1179, $tmp1180, $tmp1181);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1176, $tmp1177, param1, $tmp1178);
$fn1183 $tmp1182 = ($fn1183) $tmp1175->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1184 = $tmp1182($tmp1175, $tmp1176);
org$frostlang$frostc$Type* $tmp1185 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1173, $tmp1174, $tmp1184, $tmp1185);
org$frostlang$frostc$Type* $tmp1186 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1187 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1173, $tmp1186);
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
org$frostlang$frostc$IR$Value* $tmp1188 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
*(&local38) = $tmp1187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:214
org$frostlang$frostc$IR$Value* $tmp1189 = *(&local38);
frost$core$Bit $tmp1190 = frost$core$Bit$init$builtin_bit($tmp1189 != NULL);
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp1192 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1193, $tmp1192);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:217
org$frostlang$frostc$IR$Value* $tmp1194 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp1195 = *(&local38);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:217:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1196 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1197 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1196, $tmp1197);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1198 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1199 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp1200 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1198, $tmp1199, $tmp1200, $tmp1195);
frost$collections$Array$add$frost$collections$Array$T($tmp1196, ((frost$core$Object*) $tmp1198));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1196)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1201 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1202 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1201, $tmp1202);
org$frostlang$frostc$IR$Value* $tmp1203 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1194, &$s1204, ((frost$collections$ListView*) $tmp1196), $tmp1201);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
org$frostlang$frostc$IR$Value* $tmp1205 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local39) = $tmp1203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1196)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:218
org$frostlang$frostc$IR$Value* $tmp1206 = *(&local39);
frost$core$Bit $tmp1207 = frost$core$Bit$init$builtin_bit($tmp1206 != NULL);
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp1209 = (frost$core$Int64) {218};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1210, $tmp1209);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:219
org$frostlang$frostc$IR$Value* $tmp1211 = *(&local39);
org$frostlang$frostc$Type* $tmp1212 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:219:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1213 = &$tmp1212->typeKind;
org$frostlang$frostc$Type$Kind $tmp1214 = *$tmp1213;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1215;
$tmp1215 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1215->value = $tmp1214;
frost$core$Int64 $tmp1216 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1217 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1216);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1218;
$tmp1218 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1218->value = $tmp1217;
ITable* $tmp1219 = ((frost$core$Equatable*) $tmp1215)->$class->itable;
while ($tmp1219->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1219 = $tmp1219->next;
}
$fn1221 $tmp1220 = $tmp1219->methods[1];
frost$core$Bit $tmp1222 = $tmp1220(((frost$core$Equatable*) $tmp1215), ((frost$core$Equatable*) $tmp1218));
bool $tmp1223 = $tmp1222.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1218)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1215)));
if ($tmp1223) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local41) = $tmp1212;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
goto block78;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
org$frostlang$frostc$FixedArray* $tmp1224 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1212);
frost$core$Int64 $tmp1225 = (frost$core$Int64) {0};
frost$core$Object* $tmp1226 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1224, $tmp1225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1226)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local41) = ((org$frostlang$frostc$Type*) $tmp1226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1226)));
goto block78;
block78:;
org$frostlang$frostc$Type* $tmp1227 = *(&local41);
// begin inline call to method org.frostlang.frostc.Type.Int8():org.frostlang.frostc.Type from For.frost:61:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1228 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1229 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1230 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1229);
org$frostlang$frostc$Position $tmp1231 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1232 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1228, &$s1233, $tmp1230, $tmp1231, $tmp1232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1234 = &((org$frostlang$frostc$Symbol*) $tmp1227)->name;
frost$core$String* $tmp1235 = *$tmp1234;
frost$core$String** $tmp1236 = &((org$frostlang$frostc$Symbol*) $tmp1228)->name;
frost$core$String* $tmp1237 = *$tmp1236;
frost$core$Bit $tmp1238 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1235, $tmp1237);
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Type$Kind* $tmp1240 = &$tmp1227->typeKind;
org$frostlang$frostc$Type$Kind $tmp1241 = *$tmp1240;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1242;
$tmp1242 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1242->value = $tmp1241;
org$frostlang$frostc$Type$Kind* $tmp1243 = &$tmp1228->typeKind;
org$frostlang$frostc$Type$Kind $tmp1244 = *$tmp1243;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1245;
$tmp1245 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1245->value = $tmp1244;
ITable* $tmp1246 = ((frost$core$Equatable*) $tmp1242)->$class->itable;
while ($tmp1246->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1246 = $tmp1246->next;
}
$fn1248 $tmp1247 = $tmp1246->methods[0];
frost$core$Bit $tmp1249 = $tmp1247(((frost$core$Equatable*) $tmp1242), ((frost$core$Equatable*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1242)));
*(&local42) = $tmp1249;
goto block88;
block87:;
*(&local42) = $tmp1238;
goto block88;
block88:;
frost$core$Bit $tmp1250 = *(&local42);
bool $tmp1251 = $tmp1250.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
if ($tmp1251) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
// begin inline call to method org.frostlang.frostc.Type.UInt8():org.frostlang.frostc.Type from For.frost:61:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1252 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1253 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1254 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1253);
org$frostlang$frostc$Position $tmp1255 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1256 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1252, &$s1257, $tmp1254, $tmp1255, $tmp1256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
org$frostlang$frostc$Type* $tmp1258 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
*(&local40) = $tmp1252;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
goto block77;
block83:;
// begin inline call to method org.frostlang.frostc.Type.Int16():org.frostlang.frostc.Type from For.frost:62:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:365
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1259 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1260 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1261 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1260);
org$frostlang$frostc$Position $tmp1262 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1263 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1259, &$s1264, $tmp1261, $tmp1262, $tmp1263);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1265 = &((org$frostlang$frostc$Symbol*) $tmp1227)->name;
frost$core$String* $tmp1266 = *$tmp1265;
frost$core$String** $tmp1267 = &((org$frostlang$frostc$Symbol*) $tmp1259)->name;
frost$core$String* $tmp1268 = *$tmp1267;
frost$core$Bit $tmp1269 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1266, $tmp1268);
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Type$Kind* $tmp1271 = &$tmp1227->typeKind;
org$frostlang$frostc$Type$Kind $tmp1272 = *$tmp1271;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1273;
$tmp1273 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1273->value = $tmp1272;
org$frostlang$frostc$Type$Kind* $tmp1274 = &$tmp1259->typeKind;
org$frostlang$frostc$Type$Kind $tmp1275 = *$tmp1274;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1276;
$tmp1276 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1276->value = $tmp1275;
ITable* $tmp1277 = ((frost$core$Equatable*) $tmp1273)->$class->itable;
while ($tmp1277->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1277 = $tmp1277->next;
}
$fn1279 $tmp1278 = $tmp1277->methods[0];
frost$core$Bit $tmp1280 = $tmp1278(((frost$core$Equatable*) $tmp1273), ((frost$core$Equatable*) $tmp1276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1276)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1273)));
*(&local43) = $tmp1280;
goto block96;
block95:;
*(&local43) = $tmp1269;
goto block96;
block96:;
frost$core$Bit $tmp1281 = *(&local43);
bool $tmp1282 = $tmp1281.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
if ($tmp1282) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
// begin inline call to method org.frostlang.frostc.Type.UInt16():org.frostlang.frostc.Type from For.frost:62:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:385
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1283 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1284 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1285 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1284);
org$frostlang$frostc$Position $tmp1286 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1287 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1283, &$s1288, $tmp1285, $tmp1286, $tmp1287);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
org$frostlang$frostc$Type* $tmp1289 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
*(&local40) = $tmp1283;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
goto block77;
block91:;
// begin inline call to method org.frostlang.frostc.Type.Int32():org.frostlang.frostc.Type from For.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1290 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1291 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1292 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1291);
org$frostlang$frostc$Position $tmp1293 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1294 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1290, &$s1295, $tmp1292, $tmp1293, $tmp1294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1296 = &((org$frostlang$frostc$Symbol*) $tmp1227)->name;
frost$core$String* $tmp1297 = *$tmp1296;
frost$core$String** $tmp1298 = &((org$frostlang$frostc$Symbol*) $tmp1290)->name;
frost$core$String* $tmp1299 = *$tmp1298;
frost$core$Bit $tmp1300 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1297, $tmp1299);
bool $tmp1301 = $tmp1300.value;
if ($tmp1301) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Type$Kind* $tmp1302 = &$tmp1227->typeKind;
org$frostlang$frostc$Type$Kind $tmp1303 = *$tmp1302;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1304;
$tmp1304 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1304->value = $tmp1303;
org$frostlang$frostc$Type$Kind* $tmp1305 = &$tmp1290->typeKind;
org$frostlang$frostc$Type$Kind $tmp1306 = *$tmp1305;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1307;
$tmp1307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1307->value = $tmp1306;
ITable* $tmp1308 = ((frost$core$Equatable*) $tmp1304)->$class->itable;
while ($tmp1308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1308 = $tmp1308->next;
}
$fn1310 $tmp1309 = $tmp1308->methods[0];
frost$core$Bit $tmp1311 = $tmp1309(((frost$core$Equatable*) $tmp1304), ((frost$core$Equatable*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1307)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1304)));
*(&local44) = $tmp1311;
goto block104;
block103:;
*(&local44) = $tmp1300;
goto block104;
block104:;
frost$core$Bit $tmp1312 = *(&local44);
bool $tmp1313 = $tmp1312.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
if ($tmp1313) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
// begin inline call to method org.frostlang.frostc.Type.UInt32():org.frostlang.frostc.Type from For.frost:63:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1314 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1315 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1316 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1315);
org$frostlang$frostc$Position $tmp1317 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1318 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1314, &$s1319, $tmp1316, $tmp1317, $tmp1318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
org$frostlang$frostc$Type* $tmp1320 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
*(&local40) = $tmp1314;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
goto block77;
block99:;
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from For.frost:64:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1321 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1322 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1323 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1322);
org$frostlang$frostc$Position $tmp1324 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1325 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1321, &$s1326, $tmp1323, $tmp1324, $tmp1325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1327 = &((org$frostlang$frostc$Symbol*) $tmp1227)->name;
frost$core$String* $tmp1328 = *$tmp1327;
frost$core$String** $tmp1329 = &((org$frostlang$frostc$Symbol*) $tmp1321)->name;
frost$core$String* $tmp1330 = *$tmp1329;
frost$core$Bit $tmp1331 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1328, $tmp1330);
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Type$Kind* $tmp1333 = &$tmp1227->typeKind;
org$frostlang$frostc$Type$Kind $tmp1334 = *$tmp1333;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1335;
$tmp1335 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1335->value = $tmp1334;
org$frostlang$frostc$Type$Kind* $tmp1336 = &$tmp1321->typeKind;
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
*(&local45) = $tmp1342;
goto block112;
block111:;
*(&local45) = $tmp1331;
goto block112;
block112:;
frost$core$Bit $tmp1343 = *(&local45);
bool $tmp1344 = $tmp1343.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
if ($tmp1344) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
// begin inline call to method org.frostlang.frostc.Type.UInt64():org.frostlang.frostc.Type from For.frost:64:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1345 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1346 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1347 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1346);
org$frostlang$frostc$Position $tmp1348 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1349 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1345, &$s1350, $tmp1347, $tmp1348, $tmp1349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
org$frostlang$frostc$Type* $tmp1351 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
*(&local40) = $tmp1345;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
goto block77;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
org$frostlang$frostc$Type* $tmp1352 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
*(&local40) = $tmp1212;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
goto block77;
block81:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
org$frostlang$frostc$Type* $tmp1353 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local41) = ((org$frostlang$frostc$Type*) NULL);
goto block77;
block77:;
org$frostlang$frostc$Type* $tmp1354 = *(&local40);
org$frostlang$frostc$IR$Value* $tmp1355 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1211, $tmp1354);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
org$frostlang$frostc$IR$Value* $tmp1356 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local46) = $tmp1355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:220
org$frostlang$frostc$IR$Value* $tmp1357 = *(&local46);
frost$core$Bit $tmp1358 = frost$core$Bit$init$builtin_bit($tmp1357 != NULL);
bool $tmp1359 = $tmp1358.value;
if ($tmp1359) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp1360 = (frost$core$Int64) {220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1361, $tmp1360);
abort(); // unreachable
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:222
org$frostlang$frostc$IR* $tmp1362 = *(&local0);
$fn1364 $tmp1363 = ($fn1364) $tmp1362->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1365 = $tmp1363($tmp1362, &$s1366);
*(&local47) = $tmp1365;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:223
org$frostlang$frostc$IR* $tmp1367 = *(&local0);
$fn1369 $tmp1368 = ($fn1369) $tmp1367->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1370 = $tmp1368($tmp1367, &$s1371);
*(&local48) = $tmp1370;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:224
org$frostlang$frostc$IR* $tmp1372 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1373 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1374 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1375 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1376 = *(&local47);
org$frostlang$frostc$IR$Block$ID $tmp1377 = *(&local48);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1373, $tmp1374, param1, $tmp1375, $tmp1376, $tmp1377);
$fn1379 $tmp1378 = ($fn1379) $tmp1372->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1380 = $tmp1378($tmp1372, $tmp1373);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:227
org$frostlang$frostc$IR* $tmp1381 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1382 = *(&local47);
$fn1384 $tmp1383 = ($fn1384) $tmp1381->$class->vtable[4];
$tmp1383($tmp1381, $tmp1382);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:228
org$frostlang$frostc$IR$Value* $tmp1385 = *(&local46);
org$frostlang$frostc$IR$Value* $tmp1386 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:228:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1387 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1388 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1387, $tmp1388);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1389 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1390 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp1391 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1389, $tmp1390, $tmp1391, $tmp1386);
frost$collections$Array$add$frost$collections$Array$T($tmp1387, ((frost$core$Object*) $tmp1389));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1387)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1392 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1393 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:229:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1394 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1395 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1396 = &(&local50)->$rawValue;
*$tmp1396 = $tmp1395;
org$frostlang$frostc$Type$Kind $tmp1397 = *(&local50);
*(&local49) = $tmp1397;
org$frostlang$frostc$Type$Kind $tmp1398 = *(&local49);
org$frostlang$frostc$Position $tmp1399 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1400 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1394, &$s1401, $tmp1398, $tmp1399, $tmp1400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Bit $tmp1402 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1392, $tmp1393, $tmp1394, $tmp1402);
org$frostlang$frostc$IR$Value* $tmp1403 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1385, &$s1404, ((frost$collections$ListView*) $tmp1387), $tmp1392);
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
org$frostlang$frostc$IR$Value* $tmp1405 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local51) = $tmp1403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1387)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:230
org$frostlang$frostc$IR$Value* $tmp1406 = *(&local51);
frost$core$Bit $tmp1407 = frost$core$Bit$init$builtin_bit($tmp1406 != NULL);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block119; else goto block120;
block120:;
frost$core$Int64 $tmp1409 = (frost$core$Int64) {230};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1410, $tmp1409);
abort(); // unreachable
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:231
org$frostlang$frostc$IR$Value* $tmp1411 = *(&local51);
org$frostlang$frostc$IR$Value* $tmp1412 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1411);
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
org$frostlang$frostc$IR$Value* $tmp1413 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local52) = $tmp1412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:232
org$frostlang$frostc$IR* $tmp1414 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1415 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1416 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1417 = *(&local52);
org$frostlang$frostc$IR$Block$ID $tmp1418 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1419 = *(&local22);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1415, $tmp1416, param1, $tmp1417, $tmp1418, $tmp1419);
$fn1421 $tmp1420 = ($fn1421) $tmp1414->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1422 = $tmp1420($tmp1414, $tmp1415);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:235
org$frostlang$frostc$IR* $tmp1423 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1424 = *(&local48);
$fn1426 $tmp1425 = ($fn1426) $tmp1423->$class->vtable[4];
$tmp1425($tmp1423, $tmp1424);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:236
org$frostlang$frostc$IR$Value* $tmp1427 = *(&local46);
org$frostlang$frostc$IR$Value* $tmp1428 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:236:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1429 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1430 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1429, $tmp1430);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1431 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1432 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp1433 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1431, $tmp1432, $tmp1433, $tmp1428);
frost$collections$Array$add$frost$collections$Array$T($tmp1429, ((frost$core$Object*) $tmp1431));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1429)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1434 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1435 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:237:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1436 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1437 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1438 = &(&local54)->$rawValue;
*$tmp1438 = $tmp1437;
org$frostlang$frostc$Type$Kind $tmp1439 = *(&local54);
*(&local53) = $tmp1439;
org$frostlang$frostc$Type$Kind $tmp1440 = *(&local53);
org$frostlang$frostc$Position $tmp1441 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1442 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1436, &$s1443, $tmp1440, $tmp1441, $tmp1442);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Bit $tmp1444 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1434, $tmp1435, $tmp1436, $tmp1444);
org$frostlang$frostc$IR$Value* $tmp1445 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1427, &$s1446, ((frost$collections$ListView*) $tmp1429), $tmp1434);
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
org$frostlang$frostc$IR$Value* $tmp1447 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local55) = $tmp1445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1429)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:238
org$frostlang$frostc$IR$Value* $tmp1448 = *(&local55);
frost$core$Bit $tmp1449 = frost$core$Bit$init$builtin_bit($tmp1448 != NULL);
bool $tmp1450 = $tmp1449.value;
if ($tmp1450) goto block124; else goto block125;
block125:;
frost$core$Int64 $tmp1451 = (frost$core$Int64) {238};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1452, $tmp1451);
abort(); // unreachable
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:239
org$frostlang$frostc$IR$Value* $tmp1453 = *(&local55);
org$frostlang$frostc$IR$Value* $tmp1454 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1453);
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
org$frostlang$frostc$IR$Value* $tmp1455 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local56) = $tmp1454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:240
org$frostlang$frostc$IR* $tmp1456 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1457 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1458 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1459 = *(&local56);
org$frostlang$frostc$IR$Block$ID $tmp1460 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1461 = *(&local22);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1457, $tmp1458, param1, $tmp1459, $tmp1460, $tmp1461);
$fn1463 $tmp1462 = ($fn1463) $tmp1456->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1464 = $tmp1462($tmp1456, $tmp1457);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:242
org$frostlang$frostc$IR* $tmp1465 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1466 = *(&local37);
$fn1468 $tmp1467 = ($fn1468) $tmp1465->$class->vtable[4];
$tmp1467($tmp1465, $tmp1466);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:243
org$frostlang$frostc$IR$Value* $tmp1469 = *(&local38);
org$frostlang$frostc$IR$Value* $tmp1470 = *(&local14);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:243:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1471 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1472 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1471, $tmp1472);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1473 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1474 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp1475 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1473, $tmp1474, $tmp1475, $tmp1470);
frost$collections$Array$add$frost$collections$Array$T($tmp1471, ((frost$core$Object*) $tmp1473));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1471)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1476 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1477 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1476, $tmp1477);
org$frostlang$frostc$IR$Value* $tmp1478 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1469, &$s1479, ((frost$collections$ListView*) $tmp1471), $tmp1476);
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
org$frostlang$frostc$IR$Value* $tmp1480 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local57) = $tmp1478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1471)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:244
org$frostlang$frostc$IR$Value* $tmp1481 = *(&local57);
frost$core$Bit $tmp1482 = frost$core$Bit$init$builtin_bit($tmp1481 != NULL);
bool $tmp1483 = $tmp1482.value;
if ($tmp1483) goto block127; else goto block128;
block128:;
frost$core$Int64 $tmp1484 = (frost$core$Int64) {244};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1485, $tmp1484);
abort(); // unreachable
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:245
org$frostlang$frostc$IR$Value* $tmp1486 = *(&local57);
org$frostlang$frostc$Type* $tmp1487 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1488 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1486, $tmp1487);
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
org$frostlang$frostc$IR$Value* $tmp1489 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local58) = $tmp1488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:246
org$frostlang$frostc$IR$Value* $tmp1490 = *(&local58);
frost$core$Bit $tmp1491 = frost$core$Bit$init$builtin_bit($tmp1490 != NULL);
bool $tmp1492 = $tmp1491.value;
if ($tmp1492) goto block129; else goto block130;
block130:;
frost$core$Int64 $tmp1493 = (frost$core$Int64) {246};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1494, $tmp1493);
abort(); // unreachable
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:247
org$frostlang$frostc$IR* $tmp1495 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1496 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1497 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp1498 = *(&local58);
org$frostlang$frostc$Type* $tmp1499 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1500 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1498, $tmp1499);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1501 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1502 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1503 = *(&local3);
org$frostlang$frostc$Type* $tmp1504 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1501, $tmp1502, $tmp1503, $tmp1504);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1496, $tmp1497, param1, $tmp1500, $tmp1501);
$fn1506 $tmp1505 = ($fn1506) $tmp1495->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1507 = $tmp1505($tmp1495, $tmp1496);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:250
org$frostlang$frostc$IR* $tmp1508 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1509 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1510 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1511 = *(&local21);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1509, $tmp1510, param1, $tmp1511);
$fn1513 $tmp1512 = ($fn1513) $tmp1508->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1514 = $tmp1512($tmp1508, $tmp1509);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:252
org$frostlang$frostc$IR* $tmp1515 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1516 = *(&local22);
$fn1518 $tmp1517 = ($fn1518) $tmp1515->$class->vtable[4];
$tmp1517($tmp1515, $tmp1516);
org$frostlang$frostc$IR$Value* $tmp1519 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1520 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1521 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1522 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1523 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1524 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1525 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1526 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1527 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1528 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1529 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local26) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1530 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1531 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1532 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1533 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1534 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1535 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1536 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1537 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1538 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1539 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$Variable* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
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
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
frost$core$Bit local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type* local21 = NULL;
org$frostlang$frostc$Type* local22 = NULL;
frost$core$Bit local23;
frost$core$Bit local24;
frost$core$Bit local25;
frost$core$Bit local26;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$IR$Value* local29 = NULL;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Type$Kind local31;
frost$core$Bit local32;
org$frostlang$frostc$Type$Kind local33;
org$frostlang$frostc$Type$Kind local34;
org$frostlang$frostc$Type$Kind local35;
org$frostlang$frostc$Type$Kind local36;
org$frostlang$frostc$IR$Value* local37 = NULL;
org$frostlang$frostc$IR$Block$ID local38;
org$frostlang$frostc$IR$Block$ID local39;
org$frostlang$frostc$IR$Block$ID local40;
org$frostlang$frostc$IR$Block$ID local41;
org$frostlang$frostc$IR$Block$ID local42;
org$frostlang$frostc$IR$Value* local43 = NULL;
org$frostlang$frostc$Compiler$AutoContext* local44 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local45 = NULL;
org$frostlang$frostc$Type$Kind local46;
org$frostlang$frostc$Type$Kind local47;
org$frostlang$frostc$IR$Value* local48 = NULL;
org$frostlang$frostc$IR$Block$ID local49;
org$frostlang$frostc$IR$Block$ID local50;
org$frostlang$frostc$Type$Kind local51;
org$frostlang$frostc$Type$Kind local52;
org$frostlang$frostc$IR$Value* local53 = NULL;
org$frostlang$frostc$IR$Value* local54 = NULL;
org$frostlang$frostc$Type$Kind local55;
org$frostlang$frostc$Type$Kind local56;
org$frostlang$frostc$IR$Value* local57 = NULL;
org$frostlang$frostc$IR$Value* local58 = NULL;
org$frostlang$frostc$IR$Block$ID local59;
org$frostlang$frostc$IR$Block$ID local60;
org$frostlang$frostc$Type$Kind local61;
org$frostlang$frostc$Type$Kind local62;
org$frostlang$frostc$IR$Value* local63 = NULL;
org$frostlang$frostc$IR$Value* local64 = NULL;
org$frostlang$frostc$Type$Kind local65;
org$frostlang$frostc$Type$Kind local66;
org$frostlang$frostc$IR$Value* local67 = NULL;
org$frostlang$frostc$IR$Value* local68 = NULL;
org$frostlang$frostc$ASTNode* local69 = NULL;
org$frostlang$frostc$IR$Block$ID local70;
org$frostlang$frostc$IR$Value* local71 = NULL;
org$frostlang$frostc$IR$Block$ID local72;
org$frostlang$frostc$IR$Block$ID local73;
org$frostlang$frostc$Type* local74 = NULL;
org$frostlang$frostc$Type* local75 = NULL;
frost$core$Bit local76;
frost$core$Bit local77;
frost$core$Bit local78;
frost$core$Bit local79;
org$frostlang$frostc$IR$Value* local80 = NULL;
org$frostlang$frostc$IR$Block$ID local81;
org$frostlang$frostc$IR$Block$ID local82;
org$frostlang$frostc$Type$Kind local83;
org$frostlang$frostc$Type$Kind local84;
org$frostlang$frostc$IR$Value* local85 = NULL;
org$frostlang$frostc$IR$Value* local86 = NULL;
org$frostlang$frostc$Type$Kind local87;
org$frostlang$frostc$Type$Kind local88;
org$frostlang$frostc$IR$Value* local89 = NULL;
org$frostlang$frostc$IR$Value* local90 = NULL;
org$frostlang$frostc$IR$Value* local91 = NULL;
org$frostlang$frostc$Type* local92 = NULL;
org$frostlang$frostc$Type* local93 = NULL;
frost$core$Bit local94;
frost$core$Bit local95;
frost$core$Bit local96;
frost$core$Bit local97;
org$frostlang$frostc$IR$Value* local98 = NULL;
org$frostlang$frostc$IR$Block$ID local99;
org$frostlang$frostc$IR$Block$ID local100;
org$frostlang$frostc$Type$Kind local101;
org$frostlang$frostc$Type$Kind local102;
org$frostlang$frostc$IR$Value* local103 = NULL;
org$frostlang$frostc$IR$Value* local104 = NULL;
org$frostlang$frostc$Type$Kind local105;
org$frostlang$frostc$Type$Kind local106;
org$frostlang$frostc$IR$Value* local107 = NULL;
org$frostlang$frostc$IR$Value* local108 = NULL;
org$frostlang$frostc$IR$Value* local109 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:276
org$frostlang$frostc$IR** $tmp1540 = &param0->ir;
org$frostlang$frostc$IR* $tmp1541 = *$tmp1540;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
org$frostlang$frostc$IR* $tmp1542 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local0) = $tmp1541;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:277
$fn1544 $tmp1543 = ($fn1544) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1545 = $tmp1543(param4);
org$frostlang$frostc$Type$Kind* $tmp1546 = &$tmp1545->typeKind;
org$frostlang$frostc$Type$Kind $tmp1547 = *$tmp1546;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1548;
$tmp1548 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1548->value = $tmp1547;
frost$core$Int64 $tmp1549 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:277:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1550 = &(&local2)->$rawValue;
*$tmp1550 = $tmp1549;
org$frostlang$frostc$Type$Kind $tmp1551 = *(&local2);
*(&local1) = $tmp1551;
org$frostlang$frostc$Type$Kind $tmp1552 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1553;
$tmp1553 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1553->value = $tmp1552;
ITable* $tmp1554 = ((frost$core$Equatable*) $tmp1548)->$class->itable;
while ($tmp1554->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1554 = $tmp1554->next;
}
$fn1556 $tmp1555 = $tmp1554->methods[0];
frost$core$Bit $tmp1557 = $tmp1555(((frost$core$Equatable*) $tmp1548), ((frost$core$Equatable*) $tmp1553));
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1559 = (frost$core$Int64) {277};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1560, $tmp1559);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1553)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1548)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:278
$fn1562 $tmp1561 = ($fn1562) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1563 = $tmp1561(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:278:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1564 = &$tmp1563->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1565 = *$tmp1564;
frost$core$Bit $tmp1566 = frost$core$Bit$init$builtin_bit($tmp1565 != NULL);
bool $tmp1567 = $tmp1566.value;
if ($tmp1567) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1568 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1569, $tmp1568);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1570 = &$tmp1563->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1571 = *$tmp1570;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
ITable* $tmp1572 = ((frost$collections$CollectionView*) $tmp1571)->$class->itable;
while ($tmp1572->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[0];
frost$core$Int64 $tmp1575 = $tmp1573(((frost$collections$CollectionView*) $tmp1571));
frost$core$Int64 $tmp1576 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:278:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1577 = $tmp1575.value;
int64_t $tmp1578 = $tmp1576.value;
bool $tmp1579 = $tmp1577 == $tmp1578;
frost$core$Bit $tmp1580 = frost$core$Bit$init$builtin_bit($tmp1579);
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1582 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1583, $tmp1582);
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:279
$fn1585 $tmp1584 = ($fn1585) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1586 = $tmp1584(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:279:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1587 = &$tmp1586->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1588 = *$tmp1587;
frost$core$Bit $tmp1589 = frost$core$Bit$init$builtin_bit($tmp1588 != NULL);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1591 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1592, $tmp1591);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1593 = &$tmp1586->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1594 = *$tmp1593;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
frost$core$Int64 $tmp1595 = (frost$core$Int64) {0};
frost$core$Object* $tmp1596 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1594, $tmp1595);
frost$core$String** $tmp1597 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp1596))->name;
frost$core$String* $tmp1598 = *$tmp1597;
frost$core$Bit $tmp1599 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1598, &$s1600);
bool $tmp1601 = $tmp1599.value;
if ($tmp1601) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1602 = (frost$core$Int64) {279};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1603, $tmp1602);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1596);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:280
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:281
org$frostlang$frostc$Variable$Storage** $tmp1604 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp1605 = *$tmp1604;
frost$core$Int64* $tmp1606 = &$tmp1605->$rawValue;
frost$core$Int64 $tmp1607 = *$tmp1606;
frost$core$Int64 $tmp1608 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:282:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1609 = $tmp1607.value;
int64_t $tmp1610 = $tmp1608.value;
bool $tmp1611 = $tmp1609 == $tmp1610;
frost$core$Bit $tmp1612 = frost$core$Bit$init$builtin_bit($tmp1611);
bool $tmp1613 = $tmp1612.value;
if ($tmp1613) goto block16; else goto block17;
block16:;
frost$core$Int64* $tmp1614 = (frost$core$Int64*) ($tmp1605->$data + 0);
frost$core$Int64 $tmp1615 = *$tmp1614;
*(&local4) = $tmp1615;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:283
frost$core$Int64 $tmp1616 = *(&local4);
*(&local3) = $tmp1616;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:289
org$frostlang$frostc$Type** $tmp1617 = &param3->type;
org$frostlang$frostc$Type* $tmp1618 = *$tmp1617;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
org$frostlang$frostc$Type* $tmp1619 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local5) = $tmp1618;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:290
org$frostlang$frostc$Type* $tmp1620 = *(&local5);
org$frostlang$frostc$Type* $tmp1621 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1620);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
org$frostlang$frostc$Type* $tmp1622 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
*(&local6) = $tmp1621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:291
org$frostlang$frostc$Type* $tmp1623 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1624 = &$tmp1623->typeKind;
org$frostlang$frostc$Type$Kind $tmp1625 = *$tmp1624;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1626;
$tmp1626 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1626->value = $tmp1625;
frost$core$Int64 $tmp1627 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:291:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1628 = &(&local8)->$rawValue;
*$tmp1628 = $tmp1627;
org$frostlang$frostc$Type$Kind $tmp1629 = *(&local8);
*(&local7) = $tmp1629;
org$frostlang$frostc$Type$Kind $tmp1630 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1631;
$tmp1631 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1631->value = $tmp1630;
ITable* $tmp1632 = ((frost$core$Equatable*) $tmp1626)->$class->itable;
while ($tmp1632->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1632 = $tmp1632->next;
}
$fn1634 $tmp1633 = $tmp1632->methods[1];
frost$core$Bit $tmp1635 = $tmp1633(((frost$core$Equatable*) $tmp1626), ((frost$core$Equatable*) $tmp1631));
bool $tmp1636 = $tmp1635.value;
if ($tmp1636) goto block20; else goto block21;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:286
frost$core$Int64 $tmp1637 = (frost$core$Int64) {286};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1638, $tmp1637);
abort(); // unreachable
block21:;
frost$core$Int64 $tmp1639 = (frost$core$Int64) {291};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1640, $tmp1639);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1631)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1626)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:292
$fn1642 $tmp1641 = ($fn1642) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1643 = $tmp1641(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:292:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1644 = &$tmp1643->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1645 = *$tmp1644;
frost$core$Bit $tmp1646 = frost$core$Bit$init$builtin_bit($tmp1645 != NULL);
bool $tmp1647 = $tmp1646.value;
if ($tmp1647) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp1648 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1649, $tmp1648);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1650 = &$tmp1643->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1651 = *$tmp1650;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
frost$core$Int64 $tmp1652 = (frost$core$Int64) {2};
frost$core$Object* $tmp1653 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1651, $tmp1652);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1653)));
org$frostlang$frostc$Type* $tmp1654 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1653);
frost$core$Frost$unref$frost$core$Object$Q($tmp1653);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:293
$fn1656 $tmp1655 = ($fn1656) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1657 = $tmp1655(param4);
org$frostlang$frostc$ClassDecl* $tmp1658 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1657);
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
org$frostlang$frostc$ClassDecl* $tmp1659 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local10) = $tmp1658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:294
org$frostlang$frostc$ClassDecl* $tmp1660 = *(&local10);
frost$core$Bit $tmp1661 = frost$core$Bit$init$builtin_bit($tmp1660 == NULL);
bool $tmp1662 = $tmp1661.value;
if ($tmp1662) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:295
org$frostlang$frostc$ClassDecl* $tmp1663 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1664 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1665 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1666 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1667 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:297
org$frostlang$frostc$ClassDecl* $tmp1668 = *(&local10);
frost$collections$ListView* $tmp1669 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp1668);
*(&local11) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
frost$collections$ListView* $tmp1670 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local11) = $tmp1669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:300
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1671 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1672 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1673 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1674 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1675 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp1676 = *(&local11);
frost$core$Int64 $tmp1677 = (frost$core$Int64) {0};
ITable* $tmp1678 = $tmp1676->$class->itable;
while ($tmp1678->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1678 = $tmp1678->next;
}
$fn1680 $tmp1679 = $tmp1678->methods[0];
frost$core$Object* $tmp1681 = $tmp1679($tmp1676, $tmp1677);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1674, $tmp1675, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1681));
$fn1683 $tmp1682 = ($fn1683) $tmp1673->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1684 = $tmp1682($tmp1673, $tmp1674);
$fn1686 $tmp1685 = ($fn1686) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1687 = $tmp1685(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:302:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1688 = &$tmp1687->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1689 = *$tmp1688;
frost$core$Bit $tmp1690 = frost$core$Bit$init$builtin_bit($tmp1689 != NULL);
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp1692 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1693, $tmp1692);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1694 = &$tmp1687->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1695 = *$tmp1694;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
frost$core$Int64 $tmp1696 = (frost$core$Int64) {1};
frost$core$Object* $tmp1697 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1695, $tmp1696);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1671, $tmp1672, $tmp1684, ((org$frostlang$frostc$Type*) $tmp1697));
org$frostlang$frostc$Type* $tmp1698 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:300:54
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Compiler.frost:3992:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1699 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1700 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp1701 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1700);
org$frostlang$frostc$Position $tmp1702 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1703 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1699, &$s1704, $tmp1701, $tmp1702, $tmp1703);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
ITable* $tmp1705 = ((frost$core$Equatable*) $tmp1698)->$class->itable;
while ($tmp1705->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1705 = $tmp1705->next;
}
$fn1707 $tmp1706 = $tmp1705->methods[1];
frost$core$Bit $tmp1708 = $tmp1706(((frost$core$Equatable*) $tmp1698), ((frost$core$Equatable*) $tmp1699));
bool $tmp1709 = $tmp1708.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
if ($tmp1709) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1710 = (frost$core$Int64) {3993};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1711, $tmp1710, &$s1712);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3994
frost$core$Bit $tmp1713 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp1714 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1671, $tmp1698, $tmp1713);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
org$frostlang$frostc$Type* $tmp1715 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1716 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1714, $tmp1715);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
org$frostlang$frostc$IR$Value* $tmp1717 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local12) = $tmp1716;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q($tmp1697);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q($tmp1681);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:303
org$frostlang$frostc$IR$Value* $tmp1718 = *(&local12);
frost$core$Bit $tmp1719 = frost$core$Bit$init$builtin_bit($tmp1718 == NULL);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:304
org$frostlang$frostc$IR$Value* $tmp1721 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1722 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1723 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1724 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1725 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1726 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1727 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:308
org$frostlang$frostc$IR* $tmp1728 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1729 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1730 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp1731 = *(&local12);
org$frostlang$frostc$Type* $tmp1732 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1733 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1731, $tmp1732);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1734 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1735 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1736 = *(&local3);
org$frostlang$frostc$Type* $tmp1737 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1734, $tmp1735, $tmp1736, $tmp1737);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1729, $tmp1730, param1, $tmp1733, $tmp1734);
$fn1739 $tmp1738 = ($fn1739) $tmp1728->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1740 = $tmp1738($tmp1728, $tmp1729);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:312
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1741 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1742 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1743 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1744 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1745 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp1746 = *(&local11);
frost$core$Int64 $tmp1747 = (frost$core$Int64) {1};
ITable* $tmp1748 = $tmp1746->$class->itable;
while ($tmp1748->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1748 = $tmp1748->next;
}
$fn1750 $tmp1749 = $tmp1748->methods[0];
frost$core$Object* $tmp1751 = $tmp1749($tmp1746, $tmp1747);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1744, $tmp1745, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1751));
$fn1753 $tmp1752 = ($fn1753) $tmp1743->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1754 = $tmp1752($tmp1743, $tmp1744);
$fn1756 $tmp1755 = ($fn1756) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1757 = $tmp1755(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:314:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1758 = &$tmp1757->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1759 = *$tmp1758;
frost$core$Bit $tmp1760 = frost$core$Bit$init$builtin_bit($tmp1759 != NULL);
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1762 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1763, $tmp1762);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1764 = &$tmp1757->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1765 = *$tmp1764;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
frost$core$Int64 $tmp1766 = (frost$core$Int64) {1};
frost$core$Object* $tmp1767 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1765, $tmp1766);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1741, $tmp1742, $tmp1754, ((org$frostlang$frostc$Type*) $tmp1767));
org$frostlang$frostc$Type* $tmp1768 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:312:52
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Compiler.frost:3992:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1769 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1770 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp1771 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1770);
org$frostlang$frostc$Position $tmp1772 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1773 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1769, &$s1774, $tmp1771, $tmp1772, $tmp1773);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
ITable* $tmp1775 = ((frost$core$Equatable*) $tmp1768)->$class->itable;
while ($tmp1775->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1775 = $tmp1775->next;
}
$fn1777 $tmp1776 = $tmp1775->methods[1];
frost$core$Bit $tmp1778 = $tmp1776(((frost$core$Equatable*) $tmp1768), ((frost$core$Equatable*) $tmp1769));
bool $tmp1779 = $tmp1778.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
if ($tmp1779) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp1780 = (frost$core$Int64) {3993};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1781, $tmp1780, &$s1782);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3994
frost$core$Bit $tmp1783 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp1784 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1741, $tmp1768, $tmp1783);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
org$frostlang$frostc$Type* $tmp1785 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1786 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1784, $tmp1785);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
org$frostlang$frostc$IR$Value* $tmp1787 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
*(&local13) = $tmp1786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
frost$core$Frost$unref$frost$core$Object$Q($tmp1767);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
frost$core$Frost$unref$frost$core$Object$Q($tmp1751);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:315
org$frostlang$frostc$IR$Value* $tmp1788 = *(&local13);
frost$core$Bit $tmp1789 = frost$core$Bit$init$builtin_bit($tmp1788 == NULL);
bool $tmp1790 = $tmp1789.value;
if ($tmp1790) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:316
org$frostlang$frostc$IR$Value* $tmp1791 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1792 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1793 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1794 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1795 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1796 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1797 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1798 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:320
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1799 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1800 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1801 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1802 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1803 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp1804 = *(&local11);
frost$core$Int64 $tmp1805 = (frost$core$Int64) {2};
ITable* $tmp1806 = $tmp1804->$class->itable;
while ($tmp1806->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1806 = $tmp1806->next;
}
$fn1808 $tmp1807 = $tmp1806->methods[0];
frost$core$Object* $tmp1809 = $tmp1807($tmp1804, $tmp1805);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1802, $tmp1803, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1809));
$fn1811 $tmp1810 = ($fn1811) $tmp1801->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1812 = $tmp1810($tmp1801, $tmp1802);
org$frostlang$frostc$Type* $tmp1813 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1799, $tmp1800, $tmp1812, $tmp1813);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
org$frostlang$frostc$IR$Value* $tmp1814 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
*(&local14) = $tmp1799;
frost$core$Frost$unref$frost$core$Object$Q($tmp1809);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:322
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:323
org$frostlang$frostc$IR$Value* $tmp1815 = *(&local14);
$fn1817 $tmp1816 = ($fn1817) $tmp1815->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1818 = $tmp1816($tmp1815);
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from For.frost:323:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1819 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1820 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:375:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1821 = &(&local17)->$rawValue;
*$tmp1821 = $tmp1820;
org$frostlang$frostc$Type$Kind $tmp1822 = *(&local17);
*(&local16) = $tmp1822;
org$frostlang$frostc$Type$Kind $tmp1823 = *(&local16);
org$frostlang$frostc$Position $tmp1824 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1825 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1819, &$s1826, $tmp1823, $tmp1824, $tmp1825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:323:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1827 = &((org$frostlang$frostc$Symbol*) $tmp1818)->name;
frost$core$String* $tmp1828 = *$tmp1827;
frost$core$String** $tmp1829 = &((org$frostlang$frostc$Symbol*) $tmp1819)->name;
frost$core$String* $tmp1830 = *$tmp1829;
frost$core$Bit $tmp1831 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1828, $tmp1830);
bool $tmp1832 = $tmp1831.value;
if ($tmp1832) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Type$Kind* $tmp1833 = &$tmp1818->typeKind;
org$frostlang$frostc$Type$Kind $tmp1834 = *$tmp1833;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1835;
$tmp1835 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1835->value = $tmp1834;
org$frostlang$frostc$Type$Kind* $tmp1836 = &$tmp1819->typeKind;
org$frostlang$frostc$Type$Kind $tmp1837 = *$tmp1836;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1838;
$tmp1838 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1838->value = $tmp1837;
ITable* $tmp1839 = ((frost$core$Equatable*) $tmp1835)->$class->itable;
while ($tmp1839->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1839 = $tmp1839->next;
}
$fn1841 $tmp1840 = $tmp1839->methods[0];
frost$core$Bit $tmp1842 = $tmp1840(((frost$core$Equatable*) $tmp1835), ((frost$core$Equatable*) $tmp1838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1838)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1835)));
*(&local18) = $tmp1842;
goto block53;
block52:;
*(&local18) = $tmp1831;
goto block53;
block53:;
frost$core$Bit $tmp1843 = *(&local18);
bool $tmp1844 = $tmp1843.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
if ($tmp1844) goto block45; else goto block47;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:324
org$frostlang$frostc$IR$Value* $tmp1845 = *(&local14);
// begin inline call to method org.frostlang.frostc.Type.UInt64():org.frostlang.frostc.Type from For.frost:324:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1846 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1847 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:395:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1848 = &(&local20)->$rawValue;
*$tmp1848 = $tmp1847;
org$frostlang$frostc$Type$Kind $tmp1849 = *(&local20);
*(&local19) = $tmp1849;
org$frostlang$frostc$Type$Kind $tmp1850 = *(&local19);
org$frostlang$frostc$Position $tmp1851 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1852 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1846, &$s1853, $tmp1850, $tmp1851, $tmp1852);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
org$frostlang$frostc$IR$Value* $tmp1854 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1845, $tmp1846);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
org$frostlang$frostc$IR$Value* $tmp1855 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
*(&local15) = $tmp1854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:325
org$frostlang$frostc$IR$Value* $tmp1856 = *(&local15);
frost$core$Bit $tmp1857 = frost$core$Bit$init$builtin_bit($tmp1856 != NULL);
bool $tmp1858 = $tmp1857.value;
if ($tmp1858) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp1859 = (frost$core$Int64) {325};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1860, $tmp1859);
abort(); // unreachable
block56:;
goto block46;
block47:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:328
org$frostlang$frostc$IR$Value* $tmp1861 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
org$frostlang$frostc$IR$Value* $tmp1862 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
*(&local15) = $tmp1861;
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:330
org$frostlang$frostc$IR$Value* $tmp1863 = *(&local14);
org$frostlang$frostc$IR$Value* $tmp1864 = *(&local14);
$fn1866 $tmp1865 = ($fn1866) $tmp1864->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1867 = $tmp1865($tmp1864);
// begin inline call to function org.frostlang.frostc.statement.For.signed(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:330:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:48
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:48:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1868 = &$tmp1867->typeKind;
org$frostlang$frostc$Type$Kind $tmp1869 = *$tmp1868;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1870;
$tmp1870 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1870->value = $tmp1869;
frost$core$Int64 $tmp1871 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1872 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1871);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1873;
$tmp1873 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1873->value = $tmp1872;
ITable* $tmp1874 = ((frost$core$Equatable*) $tmp1870)->$class->itable;
while ($tmp1874->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1874 = $tmp1874->next;
}
$fn1876 $tmp1875 = $tmp1874->methods[1];
frost$core$Bit $tmp1877 = $tmp1875(((frost$core$Equatable*) $tmp1870), ((frost$core$Equatable*) $tmp1873));
bool $tmp1878 = $tmp1877.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1873)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1870)));
if ($tmp1878) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
*(&local22) = $tmp1867;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
goto block59;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
org$frostlang$frostc$FixedArray* $tmp1879 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1867);
frost$core$Int64 $tmp1880 = (frost$core$Int64) {0};
frost$core$Object* $tmp1881 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1879, $tmp1880);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1881)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1881);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
*(&local22) = ((org$frostlang$frostc$Type*) $tmp1881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1881)));
goto block59;
block59:;
org$frostlang$frostc$Type* $tmp1882 = *(&local22);
// begin inline call to method org.frostlang.frostc.Type.UInt8():org.frostlang.frostc.Type from For.frost:49:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1883 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1884 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1885 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1884);
org$frostlang$frostc$Position $tmp1886 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1887 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1883, &$s1888, $tmp1885, $tmp1886, $tmp1887);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:49:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1889 = &((org$frostlang$frostc$Symbol*) $tmp1882)->name;
frost$core$String* $tmp1890 = *$tmp1889;
frost$core$String** $tmp1891 = &((org$frostlang$frostc$Symbol*) $tmp1883)->name;
frost$core$String* $tmp1892 = *$tmp1891;
frost$core$Bit $tmp1893 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1890, $tmp1892);
bool $tmp1894 = $tmp1893.value;
if ($tmp1894) goto block67; else goto block68;
block67:;
org$frostlang$frostc$Type$Kind* $tmp1895 = &$tmp1882->typeKind;
org$frostlang$frostc$Type$Kind $tmp1896 = *$tmp1895;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1897;
$tmp1897 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1897->value = $tmp1896;
org$frostlang$frostc$Type$Kind* $tmp1898 = &$tmp1883->typeKind;
org$frostlang$frostc$Type$Kind $tmp1899 = *$tmp1898;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1900;
$tmp1900 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1900->value = $tmp1899;
ITable* $tmp1901 = ((frost$core$Equatable*) $tmp1897)->$class->itable;
while ($tmp1901->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1901 = $tmp1901->next;
}
$fn1903 $tmp1902 = $tmp1901->methods[0];
frost$core$Bit $tmp1904 = $tmp1902(((frost$core$Equatable*) $tmp1897), ((frost$core$Equatable*) $tmp1900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1900)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1897)));
*(&local23) = $tmp1904;
goto block69;
block68:;
*(&local23) = $tmp1893;
goto block69;
block69:;
frost$core$Bit $tmp1905 = *(&local23);
bool $tmp1906 = $tmp1905.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
if ($tmp1906) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:49
// begin inline call to method org.frostlang.frostc.Type.Int8():org.frostlang.frostc.Type from For.frost:49:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1907 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1908 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1909 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1908);
org$frostlang$frostc$Position $tmp1910 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1911 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1907, &$s1912, $tmp1909, $tmp1910, $tmp1911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
org$frostlang$frostc$Type* $tmp1913 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
*(&local21) = $tmp1907;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
goto block58;
block64:;
// begin inline call to method org.frostlang.frostc.Type.UInt16():org.frostlang.frostc.Type from For.frost:50:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:385
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1914 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1915 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1916 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1915);
org$frostlang$frostc$Position $tmp1917 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1918 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1914, &$s1919, $tmp1916, $tmp1917, $tmp1918);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:50:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1920 = &((org$frostlang$frostc$Symbol*) $tmp1882)->name;
frost$core$String* $tmp1921 = *$tmp1920;
frost$core$String** $tmp1922 = &((org$frostlang$frostc$Symbol*) $tmp1914)->name;
frost$core$String* $tmp1923 = *$tmp1922;
frost$core$Bit $tmp1924 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1921, $tmp1923);
bool $tmp1925 = $tmp1924.value;
if ($tmp1925) goto block75; else goto block76;
block75:;
org$frostlang$frostc$Type$Kind* $tmp1926 = &$tmp1882->typeKind;
org$frostlang$frostc$Type$Kind $tmp1927 = *$tmp1926;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1928;
$tmp1928 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1928->value = $tmp1927;
org$frostlang$frostc$Type$Kind* $tmp1929 = &$tmp1914->typeKind;
org$frostlang$frostc$Type$Kind $tmp1930 = *$tmp1929;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1931;
$tmp1931 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1931->value = $tmp1930;
ITable* $tmp1932 = ((frost$core$Equatable*) $tmp1928)->$class->itable;
while ($tmp1932->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1932 = $tmp1932->next;
}
$fn1934 $tmp1933 = $tmp1932->methods[0];
frost$core$Bit $tmp1935 = $tmp1933(((frost$core$Equatable*) $tmp1928), ((frost$core$Equatable*) $tmp1931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1931)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1928)));
*(&local24) = $tmp1935;
goto block77;
block76:;
*(&local24) = $tmp1924;
goto block77;
block77:;
frost$core$Bit $tmp1936 = *(&local24);
bool $tmp1937 = $tmp1936.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
if ($tmp1937) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:50
// begin inline call to method org.frostlang.frostc.Type.Int16():org.frostlang.frostc.Type from For.frost:50:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:365
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1938 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1939 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1940 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1939);
org$frostlang$frostc$Position $tmp1941 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1942 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1938, &$s1943, $tmp1940, $tmp1941, $tmp1942);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
org$frostlang$frostc$Type* $tmp1944 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
*(&local21) = $tmp1938;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
goto block58;
block72:;
// begin inline call to method org.frostlang.frostc.Type.UInt32():org.frostlang.frostc.Type from For.frost:51:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1945 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1946 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1947 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1946);
org$frostlang$frostc$Position $tmp1948 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1949 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1945, &$s1950, $tmp1947, $tmp1948, $tmp1949);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:51:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1951 = &((org$frostlang$frostc$Symbol*) $tmp1882)->name;
frost$core$String* $tmp1952 = *$tmp1951;
frost$core$String** $tmp1953 = &((org$frostlang$frostc$Symbol*) $tmp1945)->name;
frost$core$String* $tmp1954 = *$tmp1953;
frost$core$Bit $tmp1955 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1952, $tmp1954);
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Type$Kind* $tmp1957 = &$tmp1882->typeKind;
org$frostlang$frostc$Type$Kind $tmp1958 = *$tmp1957;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1959;
$tmp1959 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1959->value = $tmp1958;
org$frostlang$frostc$Type$Kind* $tmp1960 = &$tmp1945->typeKind;
org$frostlang$frostc$Type$Kind $tmp1961 = *$tmp1960;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1962;
$tmp1962 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1962->value = $tmp1961;
ITable* $tmp1963 = ((frost$core$Equatable*) $tmp1959)->$class->itable;
while ($tmp1963->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1963 = $tmp1963->next;
}
$fn1965 $tmp1964 = $tmp1963->methods[0];
frost$core$Bit $tmp1966 = $tmp1964(((frost$core$Equatable*) $tmp1959), ((frost$core$Equatable*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1962)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1959)));
*(&local25) = $tmp1966;
goto block85;
block84:;
*(&local25) = $tmp1955;
goto block85;
block85:;
frost$core$Bit $tmp1967 = *(&local25);
bool $tmp1968 = $tmp1967.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
if ($tmp1968) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:51
// begin inline call to method org.frostlang.frostc.Type.Int32():org.frostlang.frostc.Type from For.frost:51:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1969 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1970 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1971 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1970);
org$frostlang$frostc$Position $tmp1972 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1973 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1969, &$s1974, $tmp1971, $tmp1972, $tmp1973);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
org$frostlang$frostc$Type* $tmp1975 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
*(&local21) = $tmp1969;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
goto block58;
block80:;
// begin inline call to method org.frostlang.frostc.Type.UInt64():org.frostlang.frostc.Type from For.frost:52:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1976 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1977 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1978 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1977);
org$frostlang$frostc$Position $tmp1979 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1980 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1976, &$s1981, $tmp1978, $tmp1979, $tmp1980);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:52:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1982 = &((org$frostlang$frostc$Symbol*) $tmp1882)->name;
frost$core$String* $tmp1983 = *$tmp1982;
frost$core$String** $tmp1984 = &((org$frostlang$frostc$Symbol*) $tmp1976)->name;
frost$core$String* $tmp1985 = *$tmp1984;
frost$core$Bit $tmp1986 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1983, $tmp1985);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Type$Kind* $tmp1988 = &$tmp1882->typeKind;
org$frostlang$frostc$Type$Kind $tmp1989 = *$tmp1988;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1990;
$tmp1990 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1990->value = $tmp1989;
org$frostlang$frostc$Type$Kind* $tmp1991 = &$tmp1976->typeKind;
org$frostlang$frostc$Type$Kind $tmp1992 = *$tmp1991;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1993;
$tmp1993 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1993->value = $tmp1992;
ITable* $tmp1994 = ((frost$core$Equatable*) $tmp1990)->$class->itable;
while ($tmp1994->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1994 = $tmp1994->next;
}
$fn1996 $tmp1995 = $tmp1994->methods[0];
frost$core$Bit $tmp1997 = $tmp1995(((frost$core$Equatable*) $tmp1990), ((frost$core$Equatable*) $tmp1993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1993)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1990)));
*(&local26) = $tmp1997;
goto block93;
block92:;
*(&local26) = $tmp1986;
goto block93;
block93:;
frost$core$Bit $tmp1998 = *(&local26);
bool $tmp1999 = $tmp1998.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
if ($tmp1999) goto block87; else goto block88;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:52
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from For.frost:52:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2000 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2001 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2002 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2001);
org$frostlang$frostc$Position $tmp2003 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2004 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2000, &$s2005, $tmp2002, $tmp2003, $tmp2004);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
org$frostlang$frostc$Type* $tmp2006 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
*(&local21) = $tmp2000;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
goto block58;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
org$frostlang$frostc$Type* $tmp2007 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
*(&local21) = $tmp1867;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
goto block58;
block62:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
org$frostlang$frostc$Type* $tmp2008 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
goto block58;
block58:;
org$frostlang$frostc$Type* $tmp2009 = *(&local21);
org$frostlang$frostc$IR$Value* $tmp2010 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1863, $tmp2009);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
org$frostlang$frostc$IR$Value* $tmp2011 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
*(&local27) = $tmp2010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:331
org$frostlang$frostc$IR$Value* $tmp2012 = *(&local27);
frost$core$Bit $tmp2013 = frost$core$Bit$init$builtin_bit($tmp2012 != NULL);
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp2015 = (frost$core$Int64) {331};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2016, $tmp2015);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:332
org$frostlang$frostc$IR$Value* $tmp2017 = *(&local27);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2018 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2019 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2018, $tmp2019);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2020 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2021 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2020, $tmp2021);
org$frostlang$frostc$IR$Value* $tmp2022 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2017, &$s2023, ((frost$collections$ListView*) $tmp2018), $tmp2020);
org$frostlang$frostc$Type* $tmp2024 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp2025 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2022, $tmp2024);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
org$frostlang$frostc$IR$Value* $tmp2026 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
*(&local28) = $tmp2025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:334
org$frostlang$frostc$IR$Value* $tmp2027 = *(&local28);
frost$core$Bit $tmp2028 = frost$core$Bit$init$builtin_bit($tmp2027 != NULL);
bool $tmp2029 = $tmp2028.value;
if ($tmp2029) goto block97; else goto block98;
block98:;
frost$core$Int64 $tmp2030 = (frost$core$Int64) {334};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2031, $tmp2030);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:335
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:336
org$frostlang$frostc$IR$Value* $tmp2032 = *(&local14);
$fn2034 $tmp2033 = ($fn2034) $tmp2032->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2035 = $tmp2033($tmp2032);
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from For.frost:336:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2036 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2037 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:375:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2038 = &(&local31)->$rawValue;
*$tmp2038 = $tmp2037;
org$frostlang$frostc$Type$Kind $tmp2039 = *(&local31);
*(&local30) = $tmp2039;
org$frostlang$frostc$Type$Kind $tmp2040 = *(&local30);
org$frostlang$frostc$Position $tmp2041 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2042 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2036, &$s2043, $tmp2040, $tmp2041, $tmp2042);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:336:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2044 = &((org$frostlang$frostc$Symbol*) $tmp2035)->name;
frost$core$String* $tmp2045 = *$tmp2044;
frost$core$String** $tmp2046 = &((org$frostlang$frostc$Symbol*) $tmp2036)->name;
frost$core$String* $tmp2047 = *$tmp2046;
frost$core$Bit $tmp2048 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2045, $tmp2047);
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block105; else goto block106;
block105:;
org$frostlang$frostc$Type$Kind* $tmp2050 = &$tmp2035->typeKind;
org$frostlang$frostc$Type$Kind $tmp2051 = *$tmp2050;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2052;
$tmp2052 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2052->value = $tmp2051;
org$frostlang$frostc$Type$Kind* $tmp2053 = &$tmp2036->typeKind;
org$frostlang$frostc$Type$Kind $tmp2054 = *$tmp2053;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2055;
$tmp2055 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2055->value = $tmp2054;
ITable* $tmp2056 = ((frost$core$Equatable*) $tmp2052)->$class->itable;
while ($tmp2056->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2056 = $tmp2056->next;
}
$fn2058 $tmp2057 = $tmp2056->methods[0];
frost$core$Bit $tmp2059 = $tmp2057(((frost$core$Equatable*) $tmp2052), ((frost$core$Equatable*) $tmp2055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2055)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2052)));
*(&local32) = $tmp2059;
goto block107;
block106:;
*(&local32) = $tmp2048;
goto block107;
block107:;
frost$core$Bit $tmp2060 = *(&local32);
bool $tmp2061 = $tmp2060.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
if ($tmp2061) goto block99; else goto block101;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:337
org$frostlang$frostc$IR$Value* $tmp2062 = *(&local28);
// begin inline call to method org.frostlang.frostc.Type.UInt64():org.frostlang.frostc.Type from For.frost:337:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2063 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2064 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:395:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2065 = &(&local34)->$rawValue;
*$tmp2065 = $tmp2064;
org$frostlang$frostc$Type$Kind $tmp2066 = *(&local34);
*(&local33) = $tmp2066;
org$frostlang$frostc$Type$Kind $tmp2067 = *(&local33);
org$frostlang$frostc$Position $tmp2068 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2069 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2063, &$s2070, $tmp2067, $tmp2068, $tmp2069);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
org$frostlang$frostc$IR$Value* $tmp2071 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2062, $tmp2063);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
org$frostlang$frostc$IR$Value* $tmp2072 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
*(&local29) = $tmp2071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:338
org$frostlang$frostc$IR$Value* $tmp2073 = *(&local29);
frost$core$Bit $tmp2074 = frost$core$Bit$init$builtin_bit($tmp2073 != NULL);
bool $tmp2075 = $tmp2074.value;
if ($tmp2075) goto block110; else goto block111;
block111:;
frost$core$Int64 $tmp2076 = (frost$core$Int64) {338};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2077, $tmp2076);
abort(); // unreachable
block110:;
goto block100;
block101:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:341
org$frostlang$frostc$IR$Value* $tmp2078 = *(&local28);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
org$frostlang$frostc$IR$Value* $tmp2079 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
*(&local29) = $tmp2078;
goto block100;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:345
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2080 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2081 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp2082 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2083 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2084 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp2085 = *(&local11);
frost$core$Int64 $tmp2086 = (frost$core$Int64) {3};
ITable* $tmp2087 = $tmp2085->$class->itable;
while ($tmp2087->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2087 = $tmp2087->next;
}
$fn2089 $tmp2088 = $tmp2087->methods[0];
frost$core$Object* $tmp2090 = $tmp2088($tmp2085, $tmp2086);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp2083, $tmp2084, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp2090));
$fn2092 $tmp2091 = ($fn2092) $tmp2082->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2093 = $tmp2091($tmp2082, $tmp2083);
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:346:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2094 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2095 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2096 = &(&local36)->$rawValue;
*$tmp2096 = $tmp2095;
org$frostlang$frostc$Type$Kind $tmp2097 = *(&local36);
*(&local35) = $tmp2097;
org$frostlang$frostc$Type$Kind $tmp2098 = *(&local35);
org$frostlang$frostc$Position $tmp2099 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2100 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2094, &$s2101, $tmp2098, $tmp2099, $tmp2100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2080, $tmp2081, $tmp2093, $tmp2094);
org$frostlang$frostc$IR$Value* $tmp2102 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2080);
*(&local37) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
org$frostlang$frostc$IR$Value* $tmp2103 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
*(&local37) = $tmp2102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q($tmp2090);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:349
org$frostlang$frostc$IR* $tmp2104 = *(&local0);
$fn2106 $tmp2105 = ($fn2106) $tmp2104->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2107 = $tmp2105($tmp2104, &$s2108);
*(&local38) = $tmp2107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:350
org$frostlang$frostc$IR* $tmp2109 = *(&local0);
$fn2111 $tmp2110 = ($fn2111) $tmp2109->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2112 = $tmp2110($tmp2109, &$s2113);
*(&local39) = $tmp2112;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:351
org$frostlang$frostc$IR* $tmp2114 = *(&local0);
$fn2116 $tmp2115 = ($fn2116) $tmp2114->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2117 = $tmp2115($tmp2114, &$s2118);
*(&local40) = $tmp2117;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:352
org$frostlang$frostc$IR* $tmp2119 = *(&local0);
$fn2121 $tmp2120 = ($fn2121) $tmp2119->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2122 = $tmp2120($tmp2119, &$s2123);
*(&local41) = $tmp2122;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:353
org$frostlang$frostc$IR* $tmp2124 = *(&local0);
$fn2126 $tmp2125 = ($fn2126) $tmp2124->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2127 = $tmp2125($tmp2124, &$s2128);
*(&local42) = $tmp2127;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:354
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:355
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp2129 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2130 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2131 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2132 = *(&local39);
org$frostlang$frostc$IR$Block$ID $tmp2133 = *(&local40);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2130, $tmp2131, param2, $tmp2132, $tmp2133);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp2129, param0, $tmp2130);
*(&local44) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
org$frostlang$frostc$Compiler$AutoContext* $tmp2134 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
*(&local44) = $tmp2129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:357
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp2135 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2135, param0);
*(&local45) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
org$frostlang$frostc$Compiler$AutoScope* $tmp2136 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
*(&local45) = $tmp2135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:358
org$frostlang$frostc$Type* $tmp2137 = *(&local9);
frost$core$String** $tmp2138 = &((org$frostlang$frostc$Symbol*) $tmp2137)->name;
frost$core$String* $tmp2139 = *$tmp2138;
frost$core$Bit $tmp2140 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2139, &$s2141);
bool $tmp2142 = $tmp2140.value;
if ($tmp2142) goto block114; else goto block117;
block117:;
org$frostlang$frostc$Type* $tmp2143 = *(&local9);
frost$core$String** $tmp2144 = &((org$frostlang$frostc$Symbol*) $tmp2143)->name;
frost$core$String* $tmp2145 = *$tmp2144;
frost$core$Bit $tmp2146 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2145, &$s2147);
bool $tmp2148 = $tmp2146.value;
if ($tmp2148) goto block114; else goto block116;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:360
org$frostlang$frostc$IR$Value* $tmp2149 = *(&local14);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2150 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2151 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2150, $tmp2151);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2152 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2153 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp2154 = (frost$core$UInt64) {0};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp2152, $tmp2153, param1, $tmp2154);
frost$collections$Array$add$frost$collections$Array$T($tmp2150, ((frost$core$Object*) $tmp2152));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2155 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2156 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:361:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2157 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2158 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2159 = &(&local47)->$rawValue;
*$tmp2159 = $tmp2158;
org$frostlang$frostc$Type$Kind $tmp2160 = *(&local47);
*(&local46) = $tmp2160;
org$frostlang$frostc$Type$Kind $tmp2161 = *(&local46);
org$frostlang$frostc$Position $tmp2162 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2163 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2157, &$s2164, $tmp2161, $tmp2162, $tmp2163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Bit $tmp2165 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2155, $tmp2156, $tmp2157, $tmp2165);
org$frostlang$frostc$IR$Value* $tmp2166 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2149, &$s2167, ((frost$collections$ListView*) $tmp2150), $tmp2155);
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
org$frostlang$frostc$IR$Value* $tmp2168 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
*(&local48) = $tmp2166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:362
org$frostlang$frostc$IR$Value* $tmp2169 = *(&local48);
frost$core$Bit $tmp2170 = frost$core$Bit$init$builtin_bit($tmp2169 != NULL);
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block120; else goto block121;
block121:;
frost$core$Int64 $tmp2172 = (frost$core$Int64) {362};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2173, $tmp2172);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:363
org$frostlang$frostc$IR$Value* $tmp2174 = *(&local48);
org$frostlang$frostc$IR$Value* $tmp2175 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2174);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
org$frostlang$frostc$IR$Value* $tmp2176 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
*(&local43) = $tmp2175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
org$frostlang$frostc$IR$Value* $tmp2177 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block115;
block116:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:366
org$frostlang$frostc$Type* $tmp2178 = *(&local9);
frost$core$String** $tmp2179 = &((org$frostlang$frostc$Symbol*) $tmp2178)->name;
frost$core$String* $tmp2180 = *$tmp2179;
frost$core$Bit $tmp2181 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2180, &$s2182);
bool $tmp2183 = $tmp2181.value;
if ($tmp2183) goto block122; else goto block123;
block123:;
frost$core$Int64 $tmp2184 = (frost$core$Int64) {366};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2185, $tmp2184);
abort(); // unreachable
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:367
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2186 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2187 = (frost$core$Int64) {0};
frost$core$Bit $tmp2188 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit($tmp2186, $tmp2187, $tmp2188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
org$frostlang$frostc$IR$Value* $tmp2189 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
*(&local43) = $tmp2186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
goto block115;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:369
org$frostlang$frostc$IR* $tmp2190 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2191 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2192 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2193 = *(&local43);
org$frostlang$frostc$IR$Block$ID $tmp2194 = *(&local41);
org$frostlang$frostc$IR$Block$ID $tmp2195 = *(&local42);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2191, $tmp2192, param1, $tmp2193, $tmp2194, $tmp2195);
$fn2197 $tmp2196 = ($fn2197) $tmp2190->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2198 = $tmp2196($tmp2190, $tmp2191);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:370
org$frostlang$frostc$IR* $tmp2199 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2200 = *(&local41);
$fn2202 $tmp2201 = ($fn2202) $tmp2199->$class->vtable[4];
$tmp2201($tmp2199, $tmp2200);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:371
org$frostlang$frostc$IR* $tmp2203 = *(&local0);
$fn2205 $tmp2204 = ($fn2205) $tmp2203->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2206 = $tmp2204($tmp2203, &$s2207);
*(&local49) = $tmp2206;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:372
org$frostlang$frostc$IR* $tmp2208 = *(&local0);
$fn2210 $tmp2209 = ($fn2210) $tmp2208->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2211 = $tmp2209($tmp2208, &$s2212);
*(&local50) = $tmp2211;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:373
org$frostlang$frostc$IR* $tmp2213 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2214 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2215 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2216 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp2217 = *(&local49);
org$frostlang$frostc$IR$Block$ID $tmp2218 = *(&local50);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2214, $tmp2215, param1, $tmp2216, $tmp2217, $tmp2218);
$fn2220 $tmp2219 = ($fn2220) $tmp2213->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2221 = $tmp2219($tmp2213, $tmp2214);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:375
org$frostlang$frostc$IR* $tmp2222 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2223 = *(&local49);
$fn2225 $tmp2224 = ($fn2225) $tmp2222->$class->vtable[4];
$tmp2224($tmp2222, $tmp2223);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:376
org$frostlang$frostc$IR$Value* $tmp2226 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp2227 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:376:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2228 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2229 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2228, $tmp2229);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2230 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2231 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp2232 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2230, $tmp2231, $tmp2232, $tmp2227);
frost$collections$Array$add$frost$collections$Array$T($tmp2228, ((frost$core$Object*) $tmp2230));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2228)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2233 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2234 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:377:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2235 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2236 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2237 = &(&local52)->$rawValue;
*$tmp2237 = $tmp2236;
org$frostlang$frostc$Type$Kind $tmp2238 = *(&local52);
*(&local51) = $tmp2238;
org$frostlang$frostc$Type$Kind $tmp2239 = *(&local51);
org$frostlang$frostc$Position $tmp2240 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2241 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2235, &$s2242, $tmp2239, $tmp2240, $tmp2241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
frost$core$Bit $tmp2243 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2233, $tmp2234, $tmp2235, $tmp2243);
org$frostlang$frostc$IR$Value* $tmp2244 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2226, &$s2245, ((frost$collections$ListView*) $tmp2228), $tmp2233);
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
org$frostlang$frostc$IR$Value* $tmp2246 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
*(&local53) = $tmp2244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2228)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:378
org$frostlang$frostc$IR$Value* $tmp2247 = *(&local53);
frost$core$Bit $tmp2248 = frost$core$Bit$init$builtin_bit($tmp2247 != NULL);
bool $tmp2249 = $tmp2248.value;
if ($tmp2249) goto block127; else goto block128;
block128:;
frost$core$Int64 $tmp2250 = (frost$core$Int64) {378};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2251, $tmp2250);
abort(); // unreachable
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:379
org$frostlang$frostc$IR$Value* $tmp2252 = *(&local53);
org$frostlang$frostc$IR$Value* $tmp2253 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2252);
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
org$frostlang$frostc$IR$Value* $tmp2254 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local54) = $tmp2253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:380
org$frostlang$frostc$IR* $tmp2255 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2256 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2257 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2258 = *(&local54);
org$frostlang$frostc$IR$Block$ID $tmp2259 = *(&local38);
org$frostlang$frostc$IR$Block$ID $tmp2260 = *(&local39);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2256, $tmp2257, param1, $tmp2258, $tmp2259, $tmp2260);
$fn2262 $tmp2261 = ($fn2262) $tmp2255->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2263 = $tmp2261($tmp2255, $tmp2256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:382
org$frostlang$frostc$IR* $tmp2264 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2265 = *(&local50);
$fn2267 $tmp2266 = ($fn2267) $tmp2264->$class->vtable[4];
$tmp2266($tmp2264, $tmp2265);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:383
org$frostlang$frostc$IR$Value* $tmp2268 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp2269 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:383:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2270 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2271 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2270, $tmp2271);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2272 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2273 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp2274 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2272, $tmp2273, $tmp2274, $tmp2269);
frost$collections$Array$add$frost$collections$Array$T($tmp2270, ((frost$core$Object*) $tmp2272));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2270)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2275 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2276 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:384:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2277 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2278 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2279 = &(&local56)->$rawValue;
*$tmp2279 = $tmp2278;
org$frostlang$frostc$Type$Kind $tmp2280 = *(&local56);
*(&local55) = $tmp2280;
org$frostlang$frostc$Type$Kind $tmp2281 = *(&local55);
org$frostlang$frostc$Position $tmp2282 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2283 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2277, &$s2284, $tmp2281, $tmp2282, $tmp2283);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
frost$core$Bit $tmp2285 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2275, $tmp2276, $tmp2277, $tmp2285);
org$frostlang$frostc$IR$Value* $tmp2286 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2268, &$s2287, ((frost$collections$ListView*) $tmp2270), $tmp2275);
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
org$frostlang$frostc$IR$Value* $tmp2288 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local57) = $tmp2286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2270)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:385
org$frostlang$frostc$IR$Value* $tmp2289 = *(&local57);
frost$core$Bit $tmp2290 = frost$core$Bit$init$builtin_bit($tmp2289 != NULL);
bool $tmp2291 = $tmp2290.value;
if ($tmp2291) goto block132; else goto block133;
block133:;
frost$core$Int64 $tmp2292 = (frost$core$Int64) {385};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2293, $tmp2292);
abort(); // unreachable
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:386
org$frostlang$frostc$IR$Value* $tmp2294 = *(&local57);
org$frostlang$frostc$IR$Value* $tmp2295 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2294);
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
org$frostlang$frostc$IR$Value* $tmp2296 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
*(&local58) = $tmp2295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:387
org$frostlang$frostc$IR* $tmp2297 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2298 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2299 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2300 = *(&local58);
org$frostlang$frostc$IR$Block$ID $tmp2301 = *(&local38);
org$frostlang$frostc$IR$Block$ID $tmp2302 = *(&local39);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2298, $tmp2299, param1, $tmp2300, $tmp2301, $tmp2302);
$fn2304 $tmp2303 = ($fn2304) $tmp2297->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2305 = $tmp2303($tmp2297, $tmp2298);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:389
org$frostlang$frostc$IR* $tmp2306 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2307 = *(&local42);
$fn2309 $tmp2308 = ($fn2309) $tmp2306->$class->vtable[4];
$tmp2308($tmp2306, $tmp2307);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:390
org$frostlang$frostc$IR* $tmp2310 = *(&local0);
$fn2312 $tmp2311 = ($fn2312) $tmp2310->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2313 = $tmp2311($tmp2310, &$s2314);
*(&local59) = $tmp2313;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:391
org$frostlang$frostc$IR* $tmp2315 = *(&local0);
$fn2317 $tmp2316 = ($fn2317) $tmp2315->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2318 = $tmp2316($tmp2315, &$s2319);
*(&local60) = $tmp2318;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:392
org$frostlang$frostc$IR* $tmp2320 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2321 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2322 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2323 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp2324 = *(&local59);
org$frostlang$frostc$IR$Block$ID $tmp2325 = *(&local60);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2321, $tmp2322, param1, $tmp2323, $tmp2324, $tmp2325);
$fn2327 $tmp2326 = ($fn2327) $tmp2320->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2328 = $tmp2326($tmp2320, $tmp2321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:394
org$frostlang$frostc$IR* $tmp2329 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2330 = *(&local59);
$fn2332 $tmp2331 = ($fn2332) $tmp2329->$class->vtable[4];
$tmp2331($tmp2329, $tmp2330);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:395
org$frostlang$frostc$IR$Value* $tmp2333 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp2334 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:395:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2335 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2336 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2335, $tmp2336);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2337 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2338 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp2339 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2337, $tmp2338, $tmp2339, $tmp2334);
frost$collections$Array$add$frost$collections$Array$T($tmp2335, ((frost$core$Object*) $tmp2337));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2335)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2340 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2341 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:396:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2342 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2343 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2344 = &(&local62)->$rawValue;
*$tmp2344 = $tmp2343;
org$frostlang$frostc$Type$Kind $tmp2345 = *(&local62);
*(&local61) = $tmp2345;
org$frostlang$frostc$Type$Kind $tmp2346 = *(&local61);
org$frostlang$frostc$Position $tmp2347 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2348 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2342, &$s2349, $tmp2346, $tmp2347, $tmp2348);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
frost$core$Bit $tmp2350 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2340, $tmp2341, $tmp2342, $tmp2350);
org$frostlang$frostc$IR$Value* $tmp2351 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2333, &$s2352, ((frost$collections$ListView*) $tmp2335), $tmp2340);
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
org$frostlang$frostc$IR$Value* $tmp2353 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
*(&local63) = $tmp2351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2335)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:397
org$frostlang$frostc$IR$Value* $tmp2354 = *(&local63);
frost$core$Bit $tmp2355 = frost$core$Bit$init$builtin_bit($tmp2354 != NULL);
bool $tmp2356 = $tmp2355.value;
if ($tmp2356) goto block137; else goto block138;
block138:;
frost$core$Int64 $tmp2357 = (frost$core$Int64) {397};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2358, $tmp2357);
abort(); // unreachable
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:398
org$frostlang$frostc$IR$Value* $tmp2359 = *(&local63);
org$frostlang$frostc$IR$Value* $tmp2360 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2359);
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
org$frostlang$frostc$IR$Value* $tmp2361 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
*(&local64) = $tmp2360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:399
org$frostlang$frostc$IR* $tmp2362 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2363 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2364 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2365 = *(&local64);
org$frostlang$frostc$IR$Block$ID $tmp2366 = *(&local38);
org$frostlang$frostc$IR$Block$ID $tmp2367 = *(&local39);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2363, $tmp2364, param1, $tmp2365, $tmp2366, $tmp2367);
$fn2369 $tmp2368 = ($fn2369) $tmp2362->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2370 = $tmp2368($tmp2362, $tmp2363);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:401
org$frostlang$frostc$IR* $tmp2371 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2372 = *(&local60);
$fn2374 $tmp2373 = ($fn2374) $tmp2371->$class->vtable[4];
$tmp2373($tmp2371, $tmp2372);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:402
org$frostlang$frostc$IR$Value* $tmp2375 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp2376 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:402:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2377 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2378 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2377, $tmp2378);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2379 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2380 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp2381 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2379, $tmp2380, $tmp2381, $tmp2376);
frost$collections$Array$add$frost$collections$Array$T($tmp2377, ((frost$core$Object*) $tmp2379));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2377)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2382 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2383 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:403:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2384 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2385 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2386 = &(&local66)->$rawValue;
*$tmp2386 = $tmp2385;
org$frostlang$frostc$Type$Kind $tmp2387 = *(&local66);
*(&local65) = $tmp2387;
org$frostlang$frostc$Type$Kind $tmp2388 = *(&local65);
org$frostlang$frostc$Position $tmp2389 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2390 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2384, &$s2391, $tmp2388, $tmp2389, $tmp2390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Bit $tmp2392 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2382, $tmp2383, $tmp2384, $tmp2392);
org$frostlang$frostc$IR$Value* $tmp2393 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2375, &$s2394, ((frost$collections$ListView*) $tmp2377), $tmp2382);
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
org$frostlang$frostc$IR$Value* $tmp2395 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
*(&local67) = $tmp2393;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2377)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:404
org$frostlang$frostc$IR$Value* $tmp2396 = *(&local67);
frost$core$Bit $tmp2397 = frost$core$Bit$init$builtin_bit($tmp2396 != NULL);
bool $tmp2398 = $tmp2397.value;
if ($tmp2398) goto block142; else goto block143;
block143:;
frost$core$Int64 $tmp2399 = (frost$core$Int64) {404};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2400, $tmp2399);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:405
org$frostlang$frostc$IR$Value* $tmp2401 = *(&local67);
org$frostlang$frostc$IR$Value* $tmp2402 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2401);
*(&local68) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
org$frostlang$frostc$IR$Value* $tmp2403 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
*(&local68) = $tmp2402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:406
org$frostlang$frostc$IR* $tmp2404 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2405 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2406 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2407 = *(&local68);
org$frostlang$frostc$IR$Block$ID $tmp2408 = *(&local38);
org$frostlang$frostc$IR$Block$ID $tmp2409 = *(&local39);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2405, $tmp2406, param1, $tmp2407, $tmp2408, $tmp2409);
$fn2411 $tmp2410 = ($fn2411) $tmp2404->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2412 = $tmp2410($tmp2404, $tmp2405);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:408
org$frostlang$frostc$IR* $tmp2413 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2414 = *(&local38);
$fn2416 $tmp2415 = ($fn2416) $tmp2413->$class->vtable[4];
$tmp2415($tmp2413, $tmp2414);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:409
ITable* $tmp2417 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2417->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2417 = $tmp2417->next;
}
$fn2419 $tmp2418 = $tmp2417->methods[0];
frost$collections$Iterator* $tmp2420 = $tmp2418(((frost$collections$Iterable*) param5));
goto block144;
block144:;
ITable* $tmp2421 = $tmp2420->$class->itable;
while ($tmp2421->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2421 = $tmp2421->next;
}
$fn2423 $tmp2422 = $tmp2421->methods[0];
frost$core$Bit $tmp2424 = $tmp2422($tmp2420);
bool $tmp2425 = $tmp2424.value;
if ($tmp2425) goto block146; else goto block145;
block145:;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2426 = $tmp2420->$class->itable;
while ($tmp2426->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2426 = $tmp2426->next;
}
$fn2428 $tmp2427 = $tmp2426->methods[1];
frost$core$Object* $tmp2429 = $tmp2427($tmp2420);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2429)));
org$frostlang$frostc$ASTNode* $tmp2430 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
*(&local69) = ((org$frostlang$frostc$ASTNode*) $tmp2429);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:410
org$frostlang$frostc$ASTNode* $tmp2431 = *(&local69);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp2431);
frost$core$Frost$unref$frost$core$Object$Q($tmp2429);
org$frostlang$frostc$ASTNode* $tmp2432 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block144;
block146:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
org$frostlang$frostc$IR$Value* $tmp2433 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
*(&local68) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2434 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2435 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2436 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2437 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2438 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2439 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2440 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2441 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
*(&local45) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:413
org$frostlang$frostc$IR* $tmp2442 = *(&local0);
$fn2444 $tmp2443 = ($fn2444) $tmp2442->$class->vtable[5];
frost$core$Bit $tmp2445 = $tmp2443($tmp2442);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:413:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp2446 = $tmp2445.value;
bool $tmp2447 = !$tmp2446;
frost$core$Bit $tmp2448 = (frost$core$Bit) {$tmp2447};
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block147; else goto block148;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:414
org$frostlang$frostc$IR* $tmp2450 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2451 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2452 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2453 = *(&local40);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2451, $tmp2452, param1, $tmp2453);
$fn2455 $tmp2454 = ($fn2455) $tmp2450->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2456 = $tmp2454($tmp2450, $tmp2451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
goto block148;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:416
org$frostlang$frostc$IR* $tmp2457 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2458 = *(&local40);
$fn2460 $tmp2459 = ($fn2460) $tmp2457->$class->vtable[4];
$tmp2459($tmp2457, $tmp2458);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:417
org$frostlang$frostc$IR* $tmp2461 = *(&local0);
$fn2463 $tmp2462 = ($fn2463) $tmp2461->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2464 = $tmp2462($tmp2461, &$s2465);
*(&local70) = $tmp2464;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:419
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2466 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2467 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp2468 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2469 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2470 = (frost$core$Int64) {14};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2471 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2472 = (frost$core$Int64) {2};
frost$core$Int64 $tmp2473 = *(&local3);
org$frostlang$frostc$Type* $tmp2474 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp2471, $tmp2472, $tmp2473, $tmp2474);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2469, $tmp2470, param1, $tmp2471);
$fn2476 $tmp2475 = ($fn2476) $tmp2468->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2477 = $tmp2475($tmp2468, $tmp2469);
org$frostlang$frostc$Type* $tmp2478 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2466, $tmp2467, $tmp2477, $tmp2478);
org$frostlang$frostc$Type* $tmp2479 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2480 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2466, $tmp2479);
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
org$frostlang$frostc$IR$Value* $tmp2481 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
*(&local71) = $tmp2480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:421
org$frostlang$frostc$IR$Value* $tmp2482 = *(&local71);
frost$core$Bit $tmp2483 = frost$core$Bit$init$builtin_bit($tmp2482 != NULL);
bool $tmp2484 = $tmp2483.value;
if ($tmp2484) goto block150; else goto block151;
block151:;
frost$core$Int64 $tmp2485 = (frost$core$Int64) {421};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2486, $tmp2485);
abort(); // unreachable
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:422
org$frostlang$frostc$IR* $tmp2487 = *(&local0);
$fn2489 $tmp2488 = ($fn2489) $tmp2487->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2490 = $tmp2488($tmp2487, &$s2491);
*(&local72) = $tmp2490;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:423
org$frostlang$frostc$IR* $tmp2492 = *(&local0);
$fn2494 $tmp2493 = ($fn2494) $tmp2492->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2495 = $tmp2493($tmp2492, &$s2496);
*(&local73) = $tmp2495;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:424
org$frostlang$frostc$IR* $tmp2497 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2498 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2499 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2500 = *(&local43);
org$frostlang$frostc$IR$Block$ID $tmp2501 = *(&local72);
org$frostlang$frostc$IR$Block$ID $tmp2502 = *(&local73);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2498, $tmp2499, param1, $tmp2500, $tmp2501, $tmp2502);
$fn2504 $tmp2503 = ($fn2504) $tmp2497->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2505 = $tmp2503($tmp2497, $tmp2498);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:428
org$frostlang$frostc$IR* $tmp2506 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2507 = *(&local72);
$fn2509 $tmp2508 = ($fn2509) $tmp2506->$class->vtable[4];
$tmp2508($tmp2506, $tmp2507);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:431
org$frostlang$frostc$IR$Value* $tmp2510 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp2511 = *(&local71);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:432:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2512 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2513 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2512, $tmp2513);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2514 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2515 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp2516 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2514, $tmp2515, $tmp2516, $tmp2511);
frost$collections$Array$add$frost$collections$Array$T($tmp2512, ((frost$core$Object*) $tmp2514));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2512)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2517 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2518 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2517, $tmp2518);
org$frostlang$frostc$IR$Value* $tmp2519 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2510, &$s2520, ((frost$collections$ListView*) $tmp2512), $tmp2517);
org$frostlang$frostc$Type* $tmp2521 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:432:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp2522 = &$tmp2521->typeKind;
org$frostlang$frostc$Type$Kind $tmp2523 = *$tmp2522;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2524;
$tmp2524 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2524->value = $tmp2523;
frost$core$Int64 $tmp2525 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp2526 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2525);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2527;
$tmp2527 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2527->value = $tmp2526;
ITable* $tmp2528 = ((frost$core$Equatable*) $tmp2524)->$class->itable;
while ($tmp2528->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2528 = $tmp2528->next;
}
$fn2530 $tmp2529 = $tmp2528->methods[1];
frost$core$Bit $tmp2531 = $tmp2529(((frost$core$Equatable*) $tmp2524), ((frost$core$Equatable*) $tmp2527));
bool $tmp2532 = $tmp2531.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2527)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2524)));
if ($tmp2532) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
*(&local75) = $tmp2521;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
goto block154;
block156:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
org$frostlang$frostc$FixedArray* $tmp2533 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2521);
frost$core$Int64 $tmp2534 = (frost$core$Int64) {0};
frost$core$Object* $tmp2535 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2533, $tmp2534);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2535)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2535);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
*(&local75) = ((org$frostlang$frostc$Type*) $tmp2535);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2535)));
goto block154;
block154:;
org$frostlang$frostc$Type* $tmp2536 = *(&local75);
// begin inline call to method org.frostlang.frostc.Type.Int8():org.frostlang.frostc.Type from For.frost:61:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2537 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2538 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2539 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2538);
org$frostlang$frostc$Position $tmp2540 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2541 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2537, &$s2542, $tmp2539, $tmp2540, $tmp2541);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2543 = &((org$frostlang$frostc$Symbol*) $tmp2536)->name;
frost$core$String* $tmp2544 = *$tmp2543;
frost$core$String** $tmp2545 = &((org$frostlang$frostc$Symbol*) $tmp2537)->name;
frost$core$String* $tmp2546 = *$tmp2545;
frost$core$Bit $tmp2547 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2544, $tmp2546);
bool $tmp2548 = $tmp2547.value;
if ($tmp2548) goto block162; else goto block163;
block162:;
org$frostlang$frostc$Type$Kind* $tmp2549 = &$tmp2536->typeKind;
org$frostlang$frostc$Type$Kind $tmp2550 = *$tmp2549;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2551;
$tmp2551 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2551->value = $tmp2550;
org$frostlang$frostc$Type$Kind* $tmp2552 = &$tmp2537->typeKind;
org$frostlang$frostc$Type$Kind $tmp2553 = *$tmp2552;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2554;
$tmp2554 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2554->value = $tmp2553;
ITable* $tmp2555 = ((frost$core$Equatable*) $tmp2551)->$class->itable;
while ($tmp2555->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2555 = $tmp2555->next;
}
$fn2557 $tmp2556 = $tmp2555->methods[0];
frost$core$Bit $tmp2558 = $tmp2556(((frost$core$Equatable*) $tmp2551), ((frost$core$Equatable*) $tmp2554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2554)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2551)));
*(&local76) = $tmp2558;
goto block164;
block163:;
*(&local76) = $tmp2547;
goto block164;
block164:;
frost$core$Bit $tmp2559 = *(&local76);
bool $tmp2560 = $tmp2559.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
if ($tmp2560) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
// begin inline call to method org.frostlang.frostc.Type.UInt8():org.frostlang.frostc.Type from For.frost:61:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2561 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2562 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2563 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2562);
org$frostlang$frostc$Position $tmp2564 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2565 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2561, &$s2566, $tmp2563, $tmp2564, $tmp2565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
org$frostlang$frostc$Type* $tmp2567 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
*(&local75) = ((org$frostlang$frostc$Type*) NULL);
*(&local74) = $tmp2561;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
goto block153;
block159:;
// begin inline call to method org.frostlang.frostc.Type.Int16():org.frostlang.frostc.Type from For.frost:62:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:365
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2568 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2569 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2570 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2569);
org$frostlang$frostc$Position $tmp2571 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2572 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2568, &$s2573, $tmp2570, $tmp2571, $tmp2572);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2574 = &((org$frostlang$frostc$Symbol*) $tmp2536)->name;
frost$core$String* $tmp2575 = *$tmp2574;
frost$core$String** $tmp2576 = &((org$frostlang$frostc$Symbol*) $tmp2568)->name;
frost$core$String* $tmp2577 = *$tmp2576;
frost$core$Bit $tmp2578 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2575, $tmp2577);
bool $tmp2579 = $tmp2578.value;
if ($tmp2579) goto block170; else goto block171;
block170:;
org$frostlang$frostc$Type$Kind* $tmp2580 = &$tmp2536->typeKind;
org$frostlang$frostc$Type$Kind $tmp2581 = *$tmp2580;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2582;
$tmp2582 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2582->value = $tmp2581;
org$frostlang$frostc$Type$Kind* $tmp2583 = &$tmp2568->typeKind;
org$frostlang$frostc$Type$Kind $tmp2584 = *$tmp2583;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2585;
$tmp2585 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2585->value = $tmp2584;
ITable* $tmp2586 = ((frost$core$Equatable*) $tmp2582)->$class->itable;
while ($tmp2586->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2586 = $tmp2586->next;
}
$fn2588 $tmp2587 = $tmp2586->methods[0];
frost$core$Bit $tmp2589 = $tmp2587(((frost$core$Equatable*) $tmp2582), ((frost$core$Equatable*) $tmp2585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2585)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2582)));
*(&local77) = $tmp2589;
goto block172;
block171:;
*(&local77) = $tmp2578;
goto block172;
block172:;
frost$core$Bit $tmp2590 = *(&local77);
bool $tmp2591 = $tmp2590.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
if ($tmp2591) goto block166; else goto block167;
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
// begin inline call to method org.frostlang.frostc.Type.UInt16():org.frostlang.frostc.Type from For.frost:62:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:385
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2592 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2593 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2594 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2593);
org$frostlang$frostc$Position $tmp2595 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2596 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2592, &$s2597, $tmp2594, $tmp2595, $tmp2596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
org$frostlang$frostc$Type* $tmp2598 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local75) = ((org$frostlang$frostc$Type*) NULL);
*(&local74) = $tmp2592;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
goto block153;
block167:;
// begin inline call to method org.frostlang.frostc.Type.Int32():org.frostlang.frostc.Type from For.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2599 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2600 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2601 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2600);
org$frostlang$frostc$Position $tmp2602 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2603 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2599, &$s2604, $tmp2601, $tmp2602, $tmp2603);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2605 = &((org$frostlang$frostc$Symbol*) $tmp2536)->name;
frost$core$String* $tmp2606 = *$tmp2605;
frost$core$String** $tmp2607 = &((org$frostlang$frostc$Symbol*) $tmp2599)->name;
frost$core$String* $tmp2608 = *$tmp2607;
frost$core$Bit $tmp2609 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2606, $tmp2608);
bool $tmp2610 = $tmp2609.value;
if ($tmp2610) goto block178; else goto block179;
block178:;
org$frostlang$frostc$Type$Kind* $tmp2611 = &$tmp2536->typeKind;
org$frostlang$frostc$Type$Kind $tmp2612 = *$tmp2611;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2613;
$tmp2613 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2613->value = $tmp2612;
org$frostlang$frostc$Type$Kind* $tmp2614 = &$tmp2599->typeKind;
org$frostlang$frostc$Type$Kind $tmp2615 = *$tmp2614;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2616;
$tmp2616 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2616->value = $tmp2615;
ITable* $tmp2617 = ((frost$core$Equatable*) $tmp2613)->$class->itable;
while ($tmp2617->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2617 = $tmp2617->next;
}
$fn2619 $tmp2618 = $tmp2617->methods[0];
frost$core$Bit $tmp2620 = $tmp2618(((frost$core$Equatable*) $tmp2613), ((frost$core$Equatable*) $tmp2616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2616)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2613)));
*(&local78) = $tmp2620;
goto block180;
block179:;
*(&local78) = $tmp2609;
goto block180;
block180:;
frost$core$Bit $tmp2621 = *(&local78);
bool $tmp2622 = $tmp2621.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
if ($tmp2622) goto block174; else goto block175;
block174:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
// begin inline call to method org.frostlang.frostc.Type.UInt32():org.frostlang.frostc.Type from For.frost:63:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2623 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2624 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2625 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2624);
org$frostlang$frostc$Position $tmp2626 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2627 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2623, &$s2628, $tmp2625, $tmp2626, $tmp2627);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
org$frostlang$frostc$Type* $tmp2629 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local75) = ((org$frostlang$frostc$Type*) NULL);
*(&local74) = $tmp2623;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
goto block153;
block175:;
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from For.frost:64:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2630 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2631 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2632 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2631);
org$frostlang$frostc$Position $tmp2633 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2634 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2630, &$s2635, $tmp2632, $tmp2633, $tmp2634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2636 = &((org$frostlang$frostc$Symbol*) $tmp2536)->name;
frost$core$String* $tmp2637 = *$tmp2636;
frost$core$String** $tmp2638 = &((org$frostlang$frostc$Symbol*) $tmp2630)->name;
frost$core$String* $tmp2639 = *$tmp2638;
frost$core$Bit $tmp2640 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2637, $tmp2639);
bool $tmp2641 = $tmp2640.value;
if ($tmp2641) goto block186; else goto block187;
block186:;
org$frostlang$frostc$Type$Kind* $tmp2642 = &$tmp2536->typeKind;
org$frostlang$frostc$Type$Kind $tmp2643 = *$tmp2642;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2644;
$tmp2644 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2644->value = $tmp2643;
org$frostlang$frostc$Type$Kind* $tmp2645 = &$tmp2630->typeKind;
org$frostlang$frostc$Type$Kind $tmp2646 = *$tmp2645;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2647;
$tmp2647 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2647->value = $tmp2646;
ITable* $tmp2648 = ((frost$core$Equatable*) $tmp2644)->$class->itable;
while ($tmp2648->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2648 = $tmp2648->next;
}
$fn2650 $tmp2649 = $tmp2648->methods[0];
frost$core$Bit $tmp2651 = $tmp2649(((frost$core$Equatable*) $tmp2644), ((frost$core$Equatable*) $tmp2647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2647)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2644)));
*(&local79) = $tmp2651;
goto block188;
block187:;
*(&local79) = $tmp2640;
goto block188;
block188:;
frost$core$Bit $tmp2652 = *(&local79);
bool $tmp2653 = $tmp2652.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
if ($tmp2653) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
// begin inline call to method org.frostlang.frostc.Type.UInt64():org.frostlang.frostc.Type from For.frost:64:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2654 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2655 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2656 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2655);
org$frostlang$frostc$Position $tmp2657 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2658 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2654, &$s2659, $tmp2656, $tmp2657, $tmp2658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
org$frostlang$frostc$Type* $tmp2660 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
*(&local75) = ((org$frostlang$frostc$Type*) NULL);
*(&local74) = $tmp2654;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
goto block153;
block183:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
org$frostlang$frostc$Type* $tmp2661 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
*(&local75) = ((org$frostlang$frostc$Type*) NULL);
*(&local74) = $tmp2521;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
goto block153;
block157:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
org$frostlang$frostc$Type* $tmp2662 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
*(&local75) = ((org$frostlang$frostc$Type*) NULL);
goto block153;
block153:;
org$frostlang$frostc$Type* $tmp2663 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp2664 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2519, $tmp2663);
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
org$frostlang$frostc$IR$Value* $tmp2665 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
*(&local80) = $tmp2664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:433
org$frostlang$frostc$IR$Value* $tmp2666 = *(&local80);
frost$core$Bit $tmp2667 = frost$core$Bit$init$builtin_bit($tmp2666 != NULL);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block190; else goto block191;
block191:;
frost$core$Int64 $tmp2669 = (frost$core$Int64) {433};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2670, $tmp2669);
abort(); // unreachable
block190:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:436
org$frostlang$frostc$IR* $tmp2671 = *(&local0);
$fn2673 $tmp2672 = ($fn2673) $tmp2671->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2674 = $tmp2672($tmp2671, &$s2675);
*(&local81) = $tmp2674;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:437
org$frostlang$frostc$IR* $tmp2676 = *(&local0);
$fn2678 $tmp2677 = ($fn2678) $tmp2676->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2679 = $tmp2677($tmp2676, &$s2680);
*(&local82) = $tmp2679;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:438
org$frostlang$frostc$IR* $tmp2681 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2682 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2683 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2684 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp2685 = *(&local81);
org$frostlang$frostc$IR$Block$ID $tmp2686 = *(&local82);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2682, $tmp2683, param1, $tmp2684, $tmp2685, $tmp2686);
$fn2688 $tmp2687 = ($fn2688) $tmp2681->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2689 = $tmp2687($tmp2681, $tmp2682);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:442
org$frostlang$frostc$IR* $tmp2690 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2691 = *(&local81);
$fn2693 $tmp2692 = ($fn2693) $tmp2690->$class->vtable[4];
$tmp2692($tmp2690, $tmp2691);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:443
org$frostlang$frostc$IR$Value* $tmp2694 = *(&local80);
org$frostlang$frostc$IR$Value* $tmp2695 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:443:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2696 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2697 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2696, $tmp2697);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2698 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2699 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp2700 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2698, $tmp2699, $tmp2700, $tmp2695);
frost$collections$Array$add$frost$collections$Array$T($tmp2696, ((frost$core$Object*) $tmp2698));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2696)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2701 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2702 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:444:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2703 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2704 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2705 = &(&local84)->$rawValue;
*$tmp2705 = $tmp2704;
org$frostlang$frostc$Type$Kind $tmp2706 = *(&local84);
*(&local83) = $tmp2706;
org$frostlang$frostc$Type$Kind $tmp2707 = *(&local83);
org$frostlang$frostc$Position $tmp2708 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2709 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2703, &$s2710, $tmp2707, $tmp2708, $tmp2709);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
frost$core$Bit $tmp2711 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2701, $tmp2702, $tmp2703, $tmp2711);
org$frostlang$frostc$IR$Value* $tmp2712 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2694, &$s2713, ((frost$collections$ListView*) $tmp2696), $tmp2701);
*(&local85) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
org$frostlang$frostc$IR$Value* $tmp2714 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
*(&local85) = $tmp2712;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2696)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:445
org$frostlang$frostc$IR$Value* $tmp2715 = *(&local85);
frost$core$Bit $tmp2716 = frost$core$Bit$init$builtin_bit($tmp2715 != NULL);
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block195; else goto block196;
block196:;
frost$core$Int64 $tmp2718 = (frost$core$Int64) {445};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2719, $tmp2718);
abort(); // unreachable
block195:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:446
org$frostlang$frostc$IR$Value* $tmp2720 = *(&local85);
org$frostlang$frostc$IR$Value* $tmp2721 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2720);
*(&local86) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
org$frostlang$frostc$IR$Value* $tmp2722 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local86) = $tmp2721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:447
org$frostlang$frostc$IR* $tmp2723 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2724 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2725 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2726 = *(&local86);
org$frostlang$frostc$IR$Block$ID $tmp2727 = *(&local70);
org$frostlang$frostc$IR$Block$ID $tmp2728 = *(&local39);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2724, $tmp2725, param1, $tmp2726, $tmp2727, $tmp2728);
$fn2730 $tmp2729 = ($fn2730) $tmp2723->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2731 = $tmp2729($tmp2723, $tmp2724);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:450
org$frostlang$frostc$IR* $tmp2732 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2733 = *(&local82);
$fn2735 $tmp2734 = ($fn2735) $tmp2732->$class->vtable[4];
$tmp2734($tmp2732, $tmp2733);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:451
org$frostlang$frostc$IR$Value* $tmp2736 = *(&local80);
org$frostlang$frostc$IR$Value* $tmp2737 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:451:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2738 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2739 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2738, $tmp2739);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2740 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2741 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp2742 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2740, $tmp2741, $tmp2742, $tmp2737);
frost$collections$Array$add$frost$collections$Array$T($tmp2738, ((frost$core$Object*) $tmp2740));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2738)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2743 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2744 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:452:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2745 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2746 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2747 = &(&local88)->$rawValue;
*$tmp2747 = $tmp2746;
org$frostlang$frostc$Type$Kind $tmp2748 = *(&local88);
*(&local87) = $tmp2748;
org$frostlang$frostc$Type$Kind $tmp2749 = *(&local87);
org$frostlang$frostc$Position $tmp2750 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2751 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2745, &$s2752, $tmp2749, $tmp2750, $tmp2751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
frost$core$Bit $tmp2753 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2743, $tmp2744, $tmp2745, $tmp2753);
org$frostlang$frostc$IR$Value* $tmp2754 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2736, &$s2755, ((frost$collections$ListView*) $tmp2738), $tmp2743);
*(&local89) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
org$frostlang$frostc$IR$Value* $tmp2756 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
*(&local89) = $tmp2754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2738)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:453
org$frostlang$frostc$IR$Value* $tmp2757 = *(&local89);
frost$core$Bit $tmp2758 = frost$core$Bit$init$builtin_bit($tmp2757 != NULL);
bool $tmp2759 = $tmp2758.value;
if ($tmp2759) goto block200; else goto block201;
block201:;
frost$core$Int64 $tmp2760 = (frost$core$Int64) {453};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2761, $tmp2760);
abort(); // unreachable
block200:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:454
org$frostlang$frostc$IR$Value* $tmp2762 = *(&local89);
org$frostlang$frostc$IR$Value* $tmp2763 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2762);
*(&local90) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
org$frostlang$frostc$IR$Value* $tmp2764 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
*(&local90) = $tmp2763;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:455
org$frostlang$frostc$IR* $tmp2765 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2766 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2767 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2768 = *(&local90);
org$frostlang$frostc$IR$Block$ID $tmp2769 = *(&local70);
org$frostlang$frostc$IR$Block$ID $tmp2770 = *(&local39);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2766, $tmp2767, param1, $tmp2768, $tmp2769, $tmp2770);
$fn2772 $tmp2771 = ($fn2772) $tmp2765->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2773 = $tmp2771($tmp2765, $tmp2766);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:459
org$frostlang$frostc$IR* $tmp2774 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2775 = *(&local73);
$fn2777 $tmp2776 = ($fn2777) $tmp2774->$class->vtable[4];
$tmp2776($tmp2774, $tmp2775);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:460
org$frostlang$frostc$IR$Value* $tmp2778 = *(&local71);
org$frostlang$frostc$IR$Value* $tmp2779 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:460:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2780 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2781 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2780, $tmp2781);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2782 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2783 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp2784 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2782, $tmp2783, $tmp2784, $tmp2779);
frost$collections$Array$add$frost$collections$Array$T($tmp2780, ((frost$core$Object*) $tmp2782));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2780)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2785 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2786 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2785, $tmp2786);
org$frostlang$frostc$IR$Value* $tmp2787 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2778, &$s2788, ((frost$collections$ListView*) $tmp2780), $tmp2785);
*(&local91) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
org$frostlang$frostc$IR$Value* $tmp2789 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
*(&local91) = $tmp2787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2780)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:461
org$frostlang$frostc$IR$Value* $tmp2790 = *(&local91);
frost$core$Bit $tmp2791 = frost$core$Bit$init$builtin_bit($tmp2790 != NULL);
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block203; else goto block204;
block204:;
frost$core$Int64 $tmp2793 = (frost$core$Int64) {461};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2794, $tmp2793);
abort(); // unreachable
block203:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:462
org$frostlang$frostc$IR$Value* $tmp2795 = *(&local91);
org$frostlang$frostc$Type* $tmp2796 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:462:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp2797 = &$tmp2796->typeKind;
org$frostlang$frostc$Type$Kind $tmp2798 = *$tmp2797;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2799;
$tmp2799 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2799->value = $tmp2798;
frost$core$Int64 $tmp2800 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp2801 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2800);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2802;
$tmp2802 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2802->value = $tmp2801;
ITable* $tmp2803 = ((frost$core$Equatable*) $tmp2799)->$class->itable;
while ($tmp2803->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2803 = $tmp2803->next;
}
$fn2805 $tmp2804 = $tmp2803->methods[1];
frost$core$Bit $tmp2806 = $tmp2804(((frost$core$Equatable*) $tmp2799), ((frost$core$Equatable*) $tmp2802));
bool $tmp2807 = $tmp2806.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2802)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2799)));
if ($tmp2807) goto block207; else goto block208;
block207:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
*(&local93) = $tmp2796;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
goto block206;
block208:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
org$frostlang$frostc$FixedArray* $tmp2808 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2796);
frost$core$Int64 $tmp2809 = (frost$core$Int64) {0};
frost$core$Object* $tmp2810 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2808, $tmp2809);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2810)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2810);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local93) = ((org$frostlang$frostc$Type*) $tmp2810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2810)));
goto block206;
block206:;
org$frostlang$frostc$Type* $tmp2811 = *(&local93);
// begin inline call to method org.frostlang.frostc.Type.Int8():org.frostlang.frostc.Type from For.frost:61:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2812 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2813 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2814 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2813);
org$frostlang$frostc$Position $tmp2815 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2816 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2812, &$s2817, $tmp2814, $tmp2815, $tmp2816);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2818 = &((org$frostlang$frostc$Symbol*) $tmp2811)->name;
frost$core$String* $tmp2819 = *$tmp2818;
frost$core$String** $tmp2820 = &((org$frostlang$frostc$Symbol*) $tmp2812)->name;
frost$core$String* $tmp2821 = *$tmp2820;
frost$core$Bit $tmp2822 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2819, $tmp2821);
bool $tmp2823 = $tmp2822.value;
if ($tmp2823) goto block214; else goto block215;
block214:;
org$frostlang$frostc$Type$Kind* $tmp2824 = &$tmp2811->typeKind;
org$frostlang$frostc$Type$Kind $tmp2825 = *$tmp2824;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2826;
$tmp2826 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2826->value = $tmp2825;
org$frostlang$frostc$Type$Kind* $tmp2827 = &$tmp2812->typeKind;
org$frostlang$frostc$Type$Kind $tmp2828 = *$tmp2827;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2829;
$tmp2829 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2829->value = $tmp2828;
ITable* $tmp2830 = ((frost$core$Equatable*) $tmp2826)->$class->itable;
while ($tmp2830->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2830 = $tmp2830->next;
}
$fn2832 $tmp2831 = $tmp2830->methods[0];
frost$core$Bit $tmp2833 = $tmp2831(((frost$core$Equatable*) $tmp2826), ((frost$core$Equatable*) $tmp2829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2829)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2826)));
*(&local94) = $tmp2833;
goto block216;
block215:;
*(&local94) = $tmp2822;
goto block216;
block216:;
frost$core$Bit $tmp2834 = *(&local94);
bool $tmp2835 = $tmp2834.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
if ($tmp2835) goto block210; else goto block211;
block210:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
// begin inline call to method org.frostlang.frostc.Type.UInt8():org.frostlang.frostc.Type from For.frost:61:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2836 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2837 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2838 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2837);
org$frostlang$frostc$Position $tmp2839 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2840 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2836, &$s2841, $tmp2838, $tmp2839, $tmp2840);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$Type* $tmp2842 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local93) = ((org$frostlang$frostc$Type*) NULL);
*(&local92) = $tmp2836;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
goto block205;
block211:;
// begin inline call to method org.frostlang.frostc.Type.Int16():org.frostlang.frostc.Type from For.frost:62:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:365
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2843 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2844 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2845 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2844);
org$frostlang$frostc$Position $tmp2846 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2847 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2843, &$s2848, $tmp2845, $tmp2846, $tmp2847);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2849 = &((org$frostlang$frostc$Symbol*) $tmp2811)->name;
frost$core$String* $tmp2850 = *$tmp2849;
frost$core$String** $tmp2851 = &((org$frostlang$frostc$Symbol*) $tmp2843)->name;
frost$core$String* $tmp2852 = *$tmp2851;
frost$core$Bit $tmp2853 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2850, $tmp2852);
bool $tmp2854 = $tmp2853.value;
if ($tmp2854) goto block222; else goto block223;
block222:;
org$frostlang$frostc$Type$Kind* $tmp2855 = &$tmp2811->typeKind;
org$frostlang$frostc$Type$Kind $tmp2856 = *$tmp2855;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2857;
$tmp2857 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2857->value = $tmp2856;
org$frostlang$frostc$Type$Kind* $tmp2858 = &$tmp2843->typeKind;
org$frostlang$frostc$Type$Kind $tmp2859 = *$tmp2858;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2860;
$tmp2860 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2860->value = $tmp2859;
ITable* $tmp2861 = ((frost$core$Equatable*) $tmp2857)->$class->itable;
while ($tmp2861->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2861 = $tmp2861->next;
}
$fn2863 $tmp2862 = $tmp2861->methods[0];
frost$core$Bit $tmp2864 = $tmp2862(((frost$core$Equatable*) $tmp2857), ((frost$core$Equatable*) $tmp2860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2860)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2857)));
*(&local95) = $tmp2864;
goto block224;
block223:;
*(&local95) = $tmp2853;
goto block224;
block224:;
frost$core$Bit $tmp2865 = *(&local95);
bool $tmp2866 = $tmp2865.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
if ($tmp2866) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
// begin inline call to method org.frostlang.frostc.Type.UInt16():org.frostlang.frostc.Type from For.frost:62:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:385
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2867 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2868 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2869 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2868);
org$frostlang$frostc$Position $tmp2870 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2871 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2867, &$s2872, $tmp2869, $tmp2870, $tmp2871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$Type* $tmp2873 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
*(&local93) = ((org$frostlang$frostc$Type*) NULL);
*(&local92) = $tmp2867;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
goto block205;
block219:;
// begin inline call to method org.frostlang.frostc.Type.Int32():org.frostlang.frostc.Type from For.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2874 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2875 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2876 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2875);
org$frostlang$frostc$Position $tmp2877 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2878 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2874, &$s2879, $tmp2876, $tmp2877, $tmp2878);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2880 = &((org$frostlang$frostc$Symbol*) $tmp2811)->name;
frost$core$String* $tmp2881 = *$tmp2880;
frost$core$String** $tmp2882 = &((org$frostlang$frostc$Symbol*) $tmp2874)->name;
frost$core$String* $tmp2883 = *$tmp2882;
frost$core$Bit $tmp2884 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2881, $tmp2883);
bool $tmp2885 = $tmp2884.value;
if ($tmp2885) goto block230; else goto block231;
block230:;
org$frostlang$frostc$Type$Kind* $tmp2886 = &$tmp2811->typeKind;
org$frostlang$frostc$Type$Kind $tmp2887 = *$tmp2886;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2888;
$tmp2888 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2888->value = $tmp2887;
org$frostlang$frostc$Type$Kind* $tmp2889 = &$tmp2874->typeKind;
org$frostlang$frostc$Type$Kind $tmp2890 = *$tmp2889;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2891;
$tmp2891 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2891->value = $tmp2890;
ITable* $tmp2892 = ((frost$core$Equatable*) $tmp2888)->$class->itable;
while ($tmp2892->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2892 = $tmp2892->next;
}
$fn2894 $tmp2893 = $tmp2892->methods[0];
frost$core$Bit $tmp2895 = $tmp2893(((frost$core$Equatable*) $tmp2888), ((frost$core$Equatable*) $tmp2891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2891)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2888)));
*(&local96) = $tmp2895;
goto block232;
block231:;
*(&local96) = $tmp2884;
goto block232;
block232:;
frost$core$Bit $tmp2896 = *(&local96);
bool $tmp2897 = $tmp2896.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
if ($tmp2897) goto block226; else goto block227;
block226:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
// begin inline call to method org.frostlang.frostc.Type.UInt32():org.frostlang.frostc.Type from For.frost:63:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2898 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2899 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2900 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2899);
org$frostlang$frostc$Position $tmp2901 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2902 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2898, &$s2903, $tmp2900, $tmp2901, $tmp2902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$Type* $tmp2904 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
*(&local93) = ((org$frostlang$frostc$Type*) NULL);
*(&local92) = $tmp2898;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
goto block205;
block227:;
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from For.frost:64:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2905 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2906 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2907 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2906);
org$frostlang$frostc$Position $tmp2908 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2909 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2905, &$s2910, $tmp2907, $tmp2908, $tmp2909);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2911 = &((org$frostlang$frostc$Symbol*) $tmp2811)->name;
frost$core$String* $tmp2912 = *$tmp2911;
frost$core$String** $tmp2913 = &((org$frostlang$frostc$Symbol*) $tmp2905)->name;
frost$core$String* $tmp2914 = *$tmp2913;
frost$core$Bit $tmp2915 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2912, $tmp2914);
bool $tmp2916 = $tmp2915.value;
if ($tmp2916) goto block238; else goto block239;
block238:;
org$frostlang$frostc$Type$Kind* $tmp2917 = &$tmp2811->typeKind;
org$frostlang$frostc$Type$Kind $tmp2918 = *$tmp2917;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2919;
$tmp2919 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2919->value = $tmp2918;
org$frostlang$frostc$Type$Kind* $tmp2920 = &$tmp2905->typeKind;
org$frostlang$frostc$Type$Kind $tmp2921 = *$tmp2920;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2922;
$tmp2922 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2922->value = $tmp2921;
ITable* $tmp2923 = ((frost$core$Equatable*) $tmp2919)->$class->itable;
while ($tmp2923->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2923 = $tmp2923->next;
}
$fn2925 $tmp2924 = $tmp2923->methods[0];
frost$core$Bit $tmp2926 = $tmp2924(((frost$core$Equatable*) $tmp2919), ((frost$core$Equatable*) $tmp2922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2922)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2919)));
*(&local97) = $tmp2926;
goto block240;
block239:;
*(&local97) = $tmp2915;
goto block240;
block240:;
frost$core$Bit $tmp2927 = *(&local97);
bool $tmp2928 = $tmp2927.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
if ($tmp2928) goto block234; else goto block235;
block234:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
// begin inline call to method org.frostlang.frostc.Type.UInt64():org.frostlang.frostc.Type from For.frost:64:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:395
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2929 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2930 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2931 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2930);
org$frostlang$frostc$Position $tmp2932 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2933 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2929, &$s2934, $tmp2931, $tmp2932, $tmp2933);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$Type* $tmp2935 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
*(&local93) = ((org$frostlang$frostc$Type*) NULL);
*(&local92) = $tmp2929;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
goto block205;
block235:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$Type* $tmp2936 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
*(&local93) = ((org$frostlang$frostc$Type*) NULL);
*(&local92) = $tmp2796;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
goto block205;
block209:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$Type* $tmp2937 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
*(&local93) = ((org$frostlang$frostc$Type*) NULL);
goto block205;
block205:;
org$frostlang$frostc$Type* $tmp2938 = *(&local92);
org$frostlang$frostc$IR$Value* $tmp2939 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2795, $tmp2938);
*(&local98) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
org$frostlang$frostc$IR$Value* $tmp2940 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
*(&local98) = $tmp2939;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:463
org$frostlang$frostc$IR$Value* $tmp2941 = *(&local98);
frost$core$Bit $tmp2942 = frost$core$Bit$init$builtin_bit($tmp2941 != NULL);
bool $tmp2943 = $tmp2942.value;
if ($tmp2943) goto block242; else goto block243;
block243:;
frost$core$Int64 $tmp2944 = (frost$core$Int64) {463};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2945, $tmp2944);
abort(); // unreachable
block242:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:466
org$frostlang$frostc$IR* $tmp2946 = *(&local0);
$fn2948 $tmp2947 = ($fn2948) $tmp2946->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2949 = $tmp2947($tmp2946, &$s2950);
*(&local99) = $tmp2949;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:467
org$frostlang$frostc$IR* $tmp2951 = *(&local0);
$fn2953 $tmp2952 = ($fn2953) $tmp2951->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2954 = $tmp2952($tmp2951, &$s2955);
*(&local100) = $tmp2954;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:468
org$frostlang$frostc$IR* $tmp2956 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2957 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2958 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2959 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp2960 = *(&local99);
org$frostlang$frostc$IR$Block$ID $tmp2961 = *(&local100);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2957, $tmp2958, param1, $tmp2959, $tmp2960, $tmp2961);
$fn2963 $tmp2962 = ($fn2963) $tmp2956->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2964 = $tmp2962($tmp2956, $tmp2957);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:472
org$frostlang$frostc$IR* $tmp2965 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2966 = *(&local99);
$fn2968 $tmp2967 = ($fn2968) $tmp2965->$class->vtable[4];
$tmp2967($tmp2965, $tmp2966);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:473
org$frostlang$frostc$IR$Value* $tmp2969 = *(&local98);
org$frostlang$frostc$IR$Value* $tmp2970 = *(&local29);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:473:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2971 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2972 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2971, $tmp2972);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2973 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2974 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp2975 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2973, $tmp2974, $tmp2975, $tmp2970);
frost$collections$Array$add$frost$collections$Array$T($tmp2971, ((frost$core$Object*) $tmp2973));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2971)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2976 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2977 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:474:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2978 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2979 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2980 = &(&local102)->$rawValue;
*$tmp2980 = $tmp2979;
org$frostlang$frostc$Type$Kind $tmp2981 = *(&local102);
*(&local101) = $tmp2981;
org$frostlang$frostc$Type$Kind $tmp2982 = *(&local101);
org$frostlang$frostc$Position $tmp2983 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2984 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2978, &$s2985, $tmp2982, $tmp2983, $tmp2984);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
frost$core$Bit $tmp2986 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2976, $tmp2977, $tmp2978, $tmp2986);
org$frostlang$frostc$IR$Value* $tmp2987 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2969, &$s2988, ((frost$collections$ListView*) $tmp2971), $tmp2976);
*(&local103) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
org$frostlang$frostc$IR$Value* $tmp2989 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local103) = $tmp2987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2971)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:475
org$frostlang$frostc$IR$Value* $tmp2990 = *(&local103);
frost$core$Bit $tmp2991 = frost$core$Bit$init$builtin_bit($tmp2990 != NULL);
bool $tmp2992 = $tmp2991.value;
if ($tmp2992) goto block247; else goto block248;
block248:;
frost$core$Int64 $tmp2993 = (frost$core$Int64) {475};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2994, $tmp2993);
abort(); // unreachable
block247:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:476
org$frostlang$frostc$IR$Value* $tmp2995 = *(&local103);
org$frostlang$frostc$IR$Value* $tmp2996 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2995);
*(&local104) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
org$frostlang$frostc$IR$Value* $tmp2997 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
*(&local104) = $tmp2996;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:477
org$frostlang$frostc$IR* $tmp2998 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2999 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3000 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp3001 = *(&local104);
org$frostlang$frostc$IR$Block$ID $tmp3002 = *(&local70);
org$frostlang$frostc$IR$Block$ID $tmp3003 = *(&local39);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2999, $tmp3000, param1, $tmp3001, $tmp3002, $tmp3003);
$fn3005 $tmp3004 = ($fn3005) $tmp2998->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3006 = $tmp3004($tmp2998, $tmp2999);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:481
org$frostlang$frostc$IR* $tmp3007 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3008 = *(&local100);
$fn3010 $tmp3009 = ($fn3010) $tmp3007->$class->vtable[4];
$tmp3009($tmp3007, $tmp3008);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:482
org$frostlang$frostc$IR$Value* $tmp3011 = *(&local98);
org$frostlang$frostc$IR$Value* $tmp3012 = *(&local29);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:482:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3013 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3014 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp3013, $tmp3014);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3015 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3016 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp3017 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp3015, $tmp3016, $tmp3017, $tmp3012);
frost$collections$Array$add$frost$collections$Array$T($tmp3013, ((frost$core$Object*) $tmp3015));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3013)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3018 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3019 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:483:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3020 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3021 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3022 = &(&local106)->$rawValue;
*$tmp3022 = $tmp3021;
org$frostlang$frostc$Type$Kind $tmp3023 = *(&local106);
*(&local105) = $tmp3023;
org$frostlang$frostc$Type$Kind $tmp3024 = *(&local105);
org$frostlang$frostc$Position $tmp3025 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3026 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3020, &$s3027, $tmp3024, $tmp3025, $tmp3026);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
frost$core$Bit $tmp3028 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3018, $tmp3019, $tmp3020, $tmp3028);
org$frostlang$frostc$IR$Value* $tmp3029 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3011, &$s3030, ((frost$collections$ListView*) $tmp3013), $tmp3018);
*(&local107) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
org$frostlang$frostc$IR$Value* $tmp3031 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
*(&local107) = $tmp3029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3013)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:484
org$frostlang$frostc$IR$Value* $tmp3032 = *(&local107);
frost$core$Bit $tmp3033 = frost$core$Bit$init$builtin_bit($tmp3032 != NULL);
bool $tmp3034 = $tmp3033.value;
if ($tmp3034) goto block252; else goto block253;
block253:;
frost$core$Int64 $tmp3035 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3036, $tmp3035);
abort(); // unreachable
block252:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:485
org$frostlang$frostc$IR$Value* $tmp3037 = *(&local107);
org$frostlang$frostc$IR$Value* $tmp3038 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp3037);
*(&local108) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
org$frostlang$frostc$IR$Value* $tmp3039 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
*(&local108) = $tmp3038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:486
org$frostlang$frostc$IR* $tmp3040 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3041 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3042 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp3043 = *(&local108);
org$frostlang$frostc$IR$Block$ID $tmp3044 = *(&local70);
org$frostlang$frostc$IR$Block$ID $tmp3045 = *(&local39);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3041, $tmp3042, param1, $tmp3043, $tmp3044, $tmp3045);
$fn3047 $tmp3046 = ($fn3047) $tmp3040->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3048 = $tmp3046($tmp3040, $tmp3041);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:489
org$frostlang$frostc$IR* $tmp3049 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3050 = *(&local70);
$fn3052 $tmp3051 = ($fn3052) $tmp3049->$class->vtable[4];
$tmp3051($tmp3049, $tmp3050);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:490
org$frostlang$frostc$IR$Value* $tmp3053 = *(&local71);
org$frostlang$frostc$IR$Value* $tmp3054 = *(&local14);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:490:89
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3055 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3056 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp3055, $tmp3056);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3057 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3058 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp3059 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp3057, $tmp3058, $tmp3059, $tmp3054);
frost$collections$Array$add$frost$collections$Array$T($tmp3055, ((frost$core$Object*) $tmp3057));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3055)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3060 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3061 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3060, $tmp3061);
org$frostlang$frostc$IR$Value* $tmp3062 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3053, &$s3063, ((frost$collections$ListView*) $tmp3055), $tmp3060);
org$frostlang$frostc$Type* $tmp3064 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp3065 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp3062, $tmp3064);
*(&local109) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
org$frostlang$frostc$IR$Value* $tmp3066 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3066));
*(&local109) = $tmp3065;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3055)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:492
org$frostlang$frostc$IR$Value* $tmp3067 = *(&local109);
frost$core$Bit $tmp3068 = frost$core$Bit$init$builtin_bit($tmp3067 != NULL);
bool $tmp3069 = $tmp3068.value;
if ($tmp3069) goto block255; else goto block256;
block256:;
frost$core$Int64 $tmp3070 = (frost$core$Int64) {492};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3071, $tmp3070);
abort(); // unreachable
block255:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:493
org$frostlang$frostc$IR* $tmp3072 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3073 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3074 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp3075 = *(&local109);
org$frostlang$frostc$Type* $tmp3076 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp3077 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp3075, $tmp3076);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3078 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3079 = (frost$core$Int64) {2};
frost$core$Int64 $tmp3080 = *(&local3);
org$frostlang$frostc$Type* $tmp3081 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp3078, $tmp3079, $tmp3080, $tmp3081);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp3073, $tmp3074, param1, $tmp3077, $tmp3078);
$fn3083 $tmp3082 = ($fn3083) $tmp3072->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3084 = $tmp3082($tmp3072, $tmp3073);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:495
org$frostlang$frostc$IR* $tmp3085 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3086 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3087 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp3088 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3086, $tmp3087, param1, $tmp3088);
$fn3090 $tmp3089 = ($fn3090) $tmp3085->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3091 = $tmp3089($tmp3085, $tmp3086);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:497
org$frostlang$frostc$IR* $tmp3092 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3093 = *(&local39);
$fn3095 $tmp3094 = ($fn3095) $tmp3092->$class->vtable[4];
$tmp3094($tmp3092, $tmp3093);
org$frostlang$frostc$IR$Value* $tmp3096 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
*(&local109) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3097 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
*(&local108) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3098 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
*(&local107) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3099 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
*(&local104) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3100 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
*(&local103) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3101 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
*(&local98) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp3102 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
*(&local92) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp3103 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
*(&local91) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3104 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
*(&local90) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3105 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
*(&local89) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3106 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
*(&local86) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3107 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
*(&local85) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3108 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp3109 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
*(&local74) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2512)));
org$frostlang$frostc$IR$Value* $tmp3110 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3111 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
*(&local44) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp3112 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3113 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local37) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3114 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3115 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3116 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp3117 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local21) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
org$frostlang$frostc$IR$Value* $tmp3118 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3118));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3119 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3120 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3121 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp3122 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3123 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3124 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3125 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3126 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3127 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
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
org$frostlang$frostc$IR** $tmp3128 = &param0->ir;
org$frostlang$frostc$IR* $tmp3129 = *$tmp3128;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3129));
org$frostlang$frostc$IR* $tmp3130 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
*(&local0) = $tmp3129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:505
$fn3132 $tmp3131 = ($fn3132) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3133 = $tmp3131(param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
org$frostlang$frostc$Type* $tmp3134 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
*(&local1) = $tmp3133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:506
org$frostlang$frostc$Type* $tmp3135 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:506:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:622
frost$core$String** $tmp3136 = &((org$frostlang$frostc$Symbol*) $tmp3135)->name;
frost$core$String* $tmp3137 = *$tmp3136;
frost$core$Bit $tmp3138 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3137, &$s3139);
bool $tmp3140 = $tmp3138.value;
if ($tmp3140) goto block2; else goto block3;
block2:;
*(&local2) = $tmp3138;
goto block4;
block3:;
org$frostlang$frostc$Type* $tmp3141 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:506:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:626
frost$core$String** $tmp3142 = &((org$frostlang$frostc$Symbol*) $tmp3141)->name;
frost$core$String* $tmp3143 = *$tmp3142;
frost$core$Bit $tmp3144 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3143, &$s3145);
*(&local2) = $tmp3144;
goto block4;
block4:;
frost$core$Bit $tmp3146 = *(&local2);
bool $tmp3147 = $tmp3146.value;
if ($tmp3147) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3148 = (frost$core$Int64) {506};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3149, $tmp3148);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:507
org$frostlang$frostc$Type* $tmp3150 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:507:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3151 = &$tmp3150->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3152 = *$tmp3151;
frost$core$Bit $tmp3153 = frost$core$Bit$init$builtin_bit($tmp3152 != NULL);
bool $tmp3154 = $tmp3153.value;
if ($tmp3154) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp3155 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3156, $tmp3155);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3157 = &$tmp3150->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3158 = *$tmp3157;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
frost$core$Int64 $tmp3159 = (frost$core$Int64) {1};
frost$core$Object* $tmp3160 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3158, $tmp3159);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from For.frost:507:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:630
org$frostlang$frostc$Type$Kind* $tmp3161 = &((org$frostlang$frostc$Type*) $tmp3160)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3162 = *$tmp3161;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3163;
$tmp3163 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3163->value = $tmp3162;
frost$core$Int64 $tmp3164 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:630:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3165 = &(&local4)->$rawValue;
*$tmp3165 = $tmp3164;
org$frostlang$frostc$Type$Kind $tmp3166 = *(&local4);
*(&local3) = $tmp3166;
org$frostlang$frostc$Type$Kind $tmp3167 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3168;
$tmp3168 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3168->value = $tmp3167;
ITable* $tmp3169 = ((frost$core$Equatable*) $tmp3163)->$class->itable;
while ($tmp3169->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3169 = $tmp3169->next;
}
$fn3171 $tmp3170 = $tmp3169->methods[0];
frost$core$Bit $tmp3172 = $tmp3170(((frost$core$Equatable*) $tmp3163), ((frost$core$Equatable*) $tmp3168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3168)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3163)));
bool $tmp3173 = $tmp3172.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
if ($tmp3173) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:508
org$frostlang$frostc$Type* $tmp3174 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:508:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn3176 $tmp3175 = ($fn3176) ((frost$core$Object*) $tmp3174)->$class->vtable[0];
frost$core$String* $tmp3177 = $tmp3175(((frost$core$Object*) $tmp3174));
frost$core$String* $tmp3178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3179, $tmp3177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
frost$core$String* $tmp3180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3178, &$s3181);
frost$core$String* $tmp3182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3180, &$s3183);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3182);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:511
$fn3185 $tmp3184 = ($fn3185) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3186 = $tmp3184(param4);
frost$core$Bit $tmp3187 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp3186);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:511:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp3188 = $tmp3187.value;
bool $tmp3189 = !$tmp3188;
frost$core$Bit $tmp3190 = (frost$core$Bit) {$tmp3189};
bool $tmp3191 = $tmp3190.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
if ($tmp3191) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:512
org$frostlang$frostc$Type* $tmp3192 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3193 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:514
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:515
org$frostlang$frostc$Type* $tmp3194 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3195 = &$tmp3194->typeKind;
org$frostlang$frostc$Type$Kind $tmp3196 = *$tmp3195;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3197;
$tmp3197 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3197->value = $tmp3196;
frost$core$Int64 $tmp3198 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:515:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3199 = &(&local7)->$rawValue;
*$tmp3199 = $tmp3198;
org$frostlang$frostc$Type$Kind $tmp3200 = *(&local7);
*(&local6) = $tmp3200;
org$frostlang$frostc$Type$Kind $tmp3201 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3202;
$tmp3202 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3202->value = $tmp3201;
ITable* $tmp3203 = ((frost$core$Equatable*) $tmp3197)->$class->itable;
while ($tmp3203->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3203 = $tmp3203->next;
}
$fn3205 $tmp3204 = $tmp3203->methods[0];
frost$core$Bit $tmp3206 = $tmp3204(((frost$core$Equatable*) $tmp3197), ((frost$core$Equatable*) $tmp3202));
bool $tmp3207 = $tmp3206.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3202)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3197)));
if ($tmp3207) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:516
$fn3209 $tmp3208 = ($fn3209) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3210 = $tmp3208(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:516:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3211 = &$tmp3210->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3212 = *$tmp3211;
frost$core$Bit $tmp3213 = frost$core$Bit$init$builtin_bit($tmp3212 != NULL);
bool $tmp3214 = $tmp3213.value;
if ($tmp3214) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp3215 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3216, $tmp3215);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3217 = &$tmp3210->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3218 = *$tmp3217;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
frost$core$Int64 $tmp3219 = (frost$core$Int64) {0};
frost$core$Object* $tmp3220 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3218, $tmp3219);
org$frostlang$frostc$Type$Kind* $tmp3221 = &((org$frostlang$frostc$Type*) $tmp3220)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3222 = *$tmp3221;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3223;
$tmp3223 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3223->value = $tmp3222;
frost$core$Int64 $tmp3224 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:516:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3225 = &(&local9)->$rawValue;
*$tmp3225 = $tmp3224;
org$frostlang$frostc$Type$Kind $tmp3226 = *(&local9);
*(&local8) = $tmp3226;
org$frostlang$frostc$Type$Kind $tmp3227 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3228;
$tmp3228 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3228->value = $tmp3227;
ITable* $tmp3229 = ((frost$core$Equatable*) $tmp3223)->$class->itable;
while ($tmp3229->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3229 = $tmp3229->next;
}
$fn3231 $tmp3230 = $tmp3229->methods[0];
frost$core$Bit $tmp3232 = $tmp3230(((frost$core$Equatable*) $tmp3223), ((frost$core$Equatable*) $tmp3228));
bool $tmp3233 = $tmp3232.value;
if ($tmp3233) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp3234 = (frost$core$Int64) {516};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3235, $tmp3234);
abort(); // unreachable
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3228)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3223)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3220);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:517
$fn3237 $tmp3236 = ($fn3237) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3238 = $tmp3236(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3239 = &$tmp3238->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3240 = *$tmp3239;
frost$core$Bit $tmp3241 = frost$core$Bit$init$builtin_bit($tmp3240 != NULL);
bool $tmp3242 = $tmp3241.value;
if ($tmp3242) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp3243 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3244, $tmp3243);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3245 = &$tmp3238->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3246 = *$tmp3245;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
frost$core$Int64 $tmp3247 = (frost$core$Int64) {0};
frost$core$Object* $tmp3248 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3246, $tmp3247);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3249 = &((org$frostlang$frostc$Type*) $tmp3248)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3250 = *$tmp3249;
frost$core$Bit $tmp3251 = frost$core$Bit$init$builtin_bit($tmp3250 != NULL);
bool $tmp3252 = $tmp3251.value;
if ($tmp3252) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp3253 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3254, $tmp3253);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3255 = &((org$frostlang$frostc$Type*) $tmp3248)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3256 = *$tmp3255;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
frost$core$Int64 $tmp3257 = (frost$core$Int64) {1};
frost$core$Object* $tmp3258 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3256, $tmp3257);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3258)));
org$frostlang$frostc$Type* $tmp3259 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp3258);
frost$core$Frost$unref$frost$core$Object$Q($tmp3258);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
frost$core$Frost$unref$frost$core$Object$Q($tmp3248);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:520
org$frostlang$frostc$Type* $tmp3260 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3261 = &$tmp3260->typeKind;
org$frostlang$frostc$Type$Kind $tmp3262 = *$tmp3261;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3263;
$tmp3263 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3263->value = $tmp3262;
frost$core$Int64 $tmp3264 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:520:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3265 = &(&local11)->$rawValue;
*$tmp3265 = $tmp3264;
org$frostlang$frostc$Type$Kind $tmp3266 = *(&local11);
*(&local10) = $tmp3266;
org$frostlang$frostc$Type$Kind $tmp3267 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3268;
$tmp3268 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3268->value = $tmp3267;
ITable* $tmp3269 = ((frost$core$Equatable*) $tmp3263)->$class->itable;
while ($tmp3269->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3269 = $tmp3269->next;
}
$fn3271 $tmp3270 = $tmp3269->methods[0];
frost$core$Bit $tmp3272 = $tmp3270(((frost$core$Equatable*) $tmp3263), ((frost$core$Equatable*) $tmp3268));
bool $tmp3273 = $tmp3272.value;
if ($tmp3273) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp3274 = (frost$core$Int64) {520};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3275, $tmp3274);
abort(); // unreachable
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3268)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3263)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:521
$fn3277 $tmp3276 = ($fn3277) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3278 = $tmp3276(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:521:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3279 = &$tmp3278->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3280 = *$tmp3279;
frost$core$Bit $tmp3281 = frost$core$Bit$init$builtin_bit($tmp3280 != NULL);
bool $tmp3282 = $tmp3281.value;
if ($tmp3282) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp3283 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3284, $tmp3283);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3285 = &$tmp3278->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3286 = *$tmp3285;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
frost$core$Int64 $tmp3287 = (frost$core$Int64) {1};
frost$core$Object* $tmp3288 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3286, $tmp3287);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3288)));
org$frostlang$frostc$Type* $tmp3289 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp3288);
frost$core$Frost$unref$frost$core$Object$Q($tmp3288);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3278));
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:523
org$frostlang$frostc$Type* $tmp3290 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:523:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:582
frost$core$Bit $tmp3291 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp3290);
bool $tmp3292 = $tmp3291.value;
if ($tmp3292) goto block44; else goto block45;
block44:;
*(&local12) = $tmp3291;
goto block46;
block45:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:582:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:578
frost$core$String** $tmp3293 = &((org$frostlang$frostc$Symbol*) $tmp3290)->name;
frost$core$String* $tmp3294 = *$tmp3293;
frost$core$Bit $tmp3295 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3294, &$s3296);
*(&local12) = $tmp3295;
goto block46;
block46:;
frost$core$Bit $tmp3297 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:523:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp3298 = $tmp3297.value;
bool $tmp3299 = !$tmp3298;
frost$core$Bit $tmp3300 = (frost$core$Bit) {$tmp3299};
bool $tmp3301 = $tmp3300.value;
if ($tmp3301) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:524
$fn3303 $tmp3302 = ($fn3303) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3304 = $tmp3302(param4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:525:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn3306 $tmp3305 = ($fn3306) ((frost$core$Object*) $tmp3304)->$class->vtable[0];
frost$core$String* $tmp3307 = $tmp3305(((frost$core$Object*) $tmp3304));
frost$core$String* $tmp3308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3309, $tmp3307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
frost$core$String* $tmp3310 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3308, &$s3311);
frost$core$String* $tmp3312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3313, $tmp3310);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3312);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:526
org$frostlang$frostc$Type* $tmp3314 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3315 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3316 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:528
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp3317 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp3317, param0);
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
org$frostlang$frostc$Compiler$AutoScope* $tmp3318 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
*(&local13) = $tmp3317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:529
frost$core$Int64 $tmp3319 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Variable.Kind from For.frost:529:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp3320 = &(&local15)->$rawValue;
*$tmp3320 = $tmp3319;
org$frostlang$frostc$Variable$Kind $tmp3321 = *(&local15);
*(&local14) = $tmp3321;
org$frostlang$frostc$Variable$Kind $tmp3322 = *(&local14);
org$frostlang$frostc$Type* $tmp3323 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:530:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp3324 = &$tmp3323->typeKind;
org$frostlang$frostc$Type$Kind $tmp3325 = *$tmp3324;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3326;
$tmp3326 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3326->value = $tmp3325;
frost$core$Int64 $tmp3327 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3328 = &(&local18)->$rawValue;
*$tmp3328 = $tmp3327;
org$frostlang$frostc$Type$Kind $tmp3329 = *(&local18);
*(&local17) = $tmp3329;
org$frostlang$frostc$Type$Kind $tmp3330 = *(&local17);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3331;
$tmp3331 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3331->value = $tmp3330;
ITable* $tmp3332 = ((frost$core$Equatable*) $tmp3326)->$class->itable;
while ($tmp3332->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3332 = $tmp3332->next;
}
$fn3334 $tmp3333 = $tmp3332->methods[1];
frost$core$Bit $tmp3335 = $tmp3333(((frost$core$Equatable*) $tmp3326), ((frost$core$Equatable*) $tmp3331));
bool $tmp3336 = $tmp3335.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3331)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3326)));
if ($tmp3336) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
*(&local16) = $tmp3323;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3337 = &$tmp3323->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3338 = *$tmp3337;
frost$core$Bit $tmp3339 = frost$core$Bit$init$builtin_bit($tmp3338 != NULL);
bool $tmp3340 = $tmp3339.value;
if ($tmp3340) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp3341 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3342, $tmp3341);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3343 = &$tmp3323->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3344 = *$tmp3343;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
frost$core$Int64 $tmp3345 = (frost$core$Int64) {0};
frost$core$Object* $tmp3346 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3344, $tmp3345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3346)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3346);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
*(&local16) = ((org$frostlang$frostc$Type*) $tmp3346);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3346)));
goto block51;
block51:;
org$frostlang$frostc$Type* $tmp3347 = *(&local16);
org$frostlang$frostc$Compiler$Target* $tmp3348 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp3322, ((org$frostlang$frostc$ASTNode*) NULL), $tmp3347);
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3348));
org$frostlang$frostc$Compiler$Target* $tmp3349 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3349));
*(&local19) = $tmp3348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:531
org$frostlang$frostc$Compiler$Target* $tmp3350 = *(&local19);
frost$core$Bit $tmp3351 = frost$core$Bit$init$builtin_bit($tmp3350 == NULL);
bool $tmp3352 = $tmp3351.value;
if ($tmp3352) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:532
org$frostlang$frostc$Compiler$Target* $tmp3353 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3353));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp3354 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3355 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp3356 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3357 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3358 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3358));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:534
org$frostlang$frostc$Compiler$Target* $tmp3359 = *(&local19);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp3359);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:535
org$frostlang$frostc$Compiler$Target* $tmp3360 = *(&local19);
frost$core$Int64* $tmp3361 = &$tmp3360->$rawValue;
frost$core$Int64 $tmp3362 = *$tmp3361;
frost$core$Int64 $tmp3363 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:536:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3364 = $tmp3362.value;
int64_t $tmp3365 = $tmp3363.value;
bool $tmp3366 = $tmp3364 == $tmp3365;
frost$core$Bit $tmp3367 = frost$core$Bit$init$builtin_bit($tmp3366);
bool $tmp3368 = $tmp3367.value;
if ($tmp3368) goto block61; else goto block62;
block61:;
org$frostlang$frostc$Variable** $tmp3369 = (org$frostlang$frostc$Variable**) ($tmp3360->$data + 0);
org$frostlang$frostc$Variable* $tmp3370 = *$tmp3369;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
org$frostlang$frostc$Variable* $tmp3371 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
*(&local20) = $tmp3370;
org$frostlang$frostc$IR$Value** $tmp3372 = (org$frostlang$frostc$IR$Value**) ($tmp3360->$data + 8);
org$frostlang$frostc$IR$Value* $tmp3373 = *$tmp3372;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:537
org$frostlang$frostc$Type* $tmp3374 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:537:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:622
frost$core$String** $tmp3375 = &((org$frostlang$frostc$Symbol*) $tmp3374)->name;
frost$core$String* $tmp3376 = *$tmp3375;
frost$core$Bit $tmp3377 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3376, &$s3378);
bool $tmp3379 = $tmp3377.value;
if ($tmp3379) goto block64; else goto block66;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:538
org$frostlang$frostc$Variable* $tmp3380 = *(&local20);
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp3380, param4, param5);
goto block65;
block66:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:541
org$frostlang$frostc$Variable* $tmp3381 = *(&local20);
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp3381, param4, param5);
goto block65;
block65:;
org$frostlang$frostc$Variable* $tmp3382 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:545
frost$core$Bit $tmp3383 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3384 = $tmp3383.value;
if ($tmp3384) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp3385 = (frost$core$Int64) {545};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3386, $tmp3385);
abort(); // unreachable
block68:;
goto block60;
block60:;
org$frostlang$frostc$Compiler$Target* $tmp3387 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3387));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp3388 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3388));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3389 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp3390 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3391 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3392 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3392));
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
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$Compiler$TypeContext* local14 = NULL;
org$frostlang$frostc$Type* local15 = NULL;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
frost$collections$Array* local18 = NULL;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type* local21 = NULL;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:554
org$frostlang$frostc$IR** $tmp3393 = &param0->ir;
org$frostlang$frostc$IR* $tmp3394 = *$tmp3393;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
org$frostlang$frostc$IR* $tmp3395 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
*(&local0) = $tmp3394;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:555
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:556
frost$core$Int64* $tmp3396 = &param3->$rawValue;
frost$core$Int64 $tmp3397 = *$tmp3396;
frost$core$Int64 $tmp3398 = (frost$core$Int64) {48};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:557:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3399 = $tmp3397.value;
int64_t $tmp3400 = $tmp3398.value;
bool $tmp3401 = $tmp3399 == $tmp3400;
frost$core$Bit $tmp3402 = frost$core$Bit$init$builtin_bit($tmp3401);
bool $tmp3403 = $tmp3402.value;
if ($tmp3403) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp3404 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp3405 = *$tmp3404;
*(&local2) = $tmp3405;
frost$core$String** $tmp3406 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp3407 = *$tmp3406;
org$frostlang$frostc$ASTNode** $tmp3408 = (org$frostlang$frostc$ASTNode**) (param3->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3409 = *$tmp3408;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
org$frostlang$frostc$ASTNode* $tmp3410 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
*(&local3) = $tmp3409;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:558
org$frostlang$frostc$Scanner** $tmp3411 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp3412 = *$tmp3411;
org$frostlang$frostc$ASTNode* $tmp3413 = *(&local3);
org$frostlang$frostc$Type* $tmp3414 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp3412, $tmp3413);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from For.frost:558:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:852
frost$core$Bit $tmp3415 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp3416 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp3414, $tmp3415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
org$frostlang$frostc$Type* $tmp3417 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
*(&local4) = $tmp3416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:559
org$frostlang$frostc$Type* $tmp3418 = *(&local4);
frost$core$Bit $tmp3419 = frost$core$Bit$init$builtin_bit($tmp3418 == NULL);
bool $tmp3420 = $tmp3419.value;
if ($tmp3420) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:560
org$frostlang$frostc$Type* $tmp3421 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3422 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3423 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3424 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:562
org$frostlang$frostc$Type* $tmp3425 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp3426 = &$tmp3425->typeKind;
org$frostlang$frostc$Type$Kind $tmp3427 = *$tmp3426;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3428;
$tmp3428 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3428->value = $tmp3427;
frost$core$Int64 $tmp3429 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:562:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3430 = &(&local6)->$rawValue;
*$tmp3430 = $tmp3429;
org$frostlang$frostc$Type$Kind $tmp3431 = *(&local6);
*(&local5) = $tmp3431;
org$frostlang$frostc$Type$Kind $tmp3432 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3433;
$tmp3433 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3433->value = $tmp3432;
ITable* $tmp3434 = ((frost$core$Equatable*) $tmp3428)->$class->itable;
while ($tmp3434->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3434 = $tmp3434->next;
}
$fn3436 $tmp3435 = $tmp3434->methods[0];
frost$core$Bit $tmp3437 = $tmp3435(((frost$core$Equatable*) $tmp3428), ((frost$core$Equatable*) $tmp3433));
bool $tmp3438 = $tmp3437.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3433)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3428)));
if ($tmp3438) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:563
org$frostlang$frostc$Position $tmp3439 = *(&local2);
org$frostlang$frostc$Type* $tmp3440 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:563:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn3442 $tmp3441 = ($fn3442) ((frost$core$Object*) $tmp3440)->$class->vtable[0];
frost$core$String* $tmp3443 = $tmp3441(((frost$core$Object*) $tmp3440));
frost$core$String* $tmp3444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3445, $tmp3443);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3443));
frost$core$String* $tmp3446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3444, &$s3447);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3439, $tmp3446);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:564
org$frostlang$frostc$Type* $tmp3448 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3448));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3449 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3450 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3450));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3451 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:566
org$frostlang$frostc$Type* $tmp3452 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:566:22
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:582
frost$core$Bit $tmp3453 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp3452);
bool $tmp3454 = $tmp3453.value;
if ($tmp3454) goto block15; else goto block16;
block15:;
*(&local7) = $tmp3453;
goto block17;
block16:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:582:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:578
frost$core$String** $tmp3455 = &((org$frostlang$frostc$Symbol*) $tmp3452)->name;
frost$core$String* $tmp3456 = *$tmp3455;
frost$core$Bit $tmp3457 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3456, &$s3458);
*(&local7) = $tmp3457;
goto block17;
block17:;
frost$core$Bit $tmp3459 = *(&local7);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:566:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp3460 = $tmp3459.value;
bool $tmp3461 = !$tmp3460;
frost$core$Bit $tmp3462 = (frost$core$Bit) {$tmp3461};
bool $tmp3463 = $tmp3462.value;
if ($tmp3463) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:567
org$frostlang$frostc$Position $tmp3464 = *(&local2);
org$frostlang$frostc$Type* $tmp3465 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:568:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn3467 $tmp3466 = ($fn3467) ((frost$core$Object*) $tmp3465)->$class->vtable[0];
frost$core$String* $tmp3468 = $tmp3466(((frost$core$Object*) $tmp3465));
frost$core$String* $tmp3469 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3470, $tmp3468);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3468));
frost$core$String* $tmp3471 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3469, &$s3472);
frost$core$String* $tmp3473 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3474, $tmp3471);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3464, $tmp3473);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:569
org$frostlang$frostc$Type* $tmp3475 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3476 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3477 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3477));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3478 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3478));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:571
frost$core$Int64* $tmp3479 = &param4->$rawValue;
frost$core$Int64 $tmp3480 = *$tmp3479;
frost$core$Int64 $tmp3481 = (frost$core$Int64) {35};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:572:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3482 = $tmp3480.value;
int64_t $tmp3483 = $tmp3481.value;
bool $tmp3484 = $tmp3482 == $tmp3483;
frost$core$Bit $tmp3485 = frost$core$Bit$init$builtin_bit($tmp3484);
bool $tmp3486 = $tmp3485.value;
if ($tmp3486) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp3487 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp3488 = *$tmp3487;
org$frostlang$frostc$ASTNode** $tmp3489 = (org$frostlang$frostc$ASTNode**) (param4->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3490 = *$tmp3489;
frost$core$Bit* $tmp3491 = (frost$core$Bit*) (param4->$data + 32);
frost$core$Bit $tmp3492 = *$tmp3491;
org$frostlang$frostc$ASTNode** $tmp3493 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp3494 = *$tmp3493;
org$frostlang$frostc$ASTNode** $tmp3495 = (org$frostlang$frostc$ASTNode**) (param4->$data + 41);
org$frostlang$frostc$ASTNode* $tmp3496 = *$tmp3495;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
org$frostlang$frostc$ASTNode* $tmp3497 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3497));
*(&local8) = $tmp3496;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:573
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:574
org$frostlang$frostc$ASTNode* $tmp3498 = *(&local8);
frost$core$Bit $tmp3499 = frost$core$Bit$init$builtin_bit($tmp3498 != NULL);
bool $tmp3500 = $tmp3499.value;
if ($tmp3500) goto block25; else goto block27;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:575
org$frostlang$frostc$Type* $tmp3501 = *(&local4);
org$frostlang$frostc$Type* $tmp3502 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp3501);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
org$frostlang$frostc$Type* $tmp3503 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3503));
*(&local9) = $tmp3502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
goto block26;
block27:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:578
org$frostlang$frostc$Type* $tmp3504 = *(&local4);
// begin inline call to method org.frostlang.frostc.Type.RangeOf(t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:578:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:516
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3505 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3505);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3505));
frost$collections$Array* $tmp3506 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3506));
*(&local10) = $tmp3505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3505));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:517
frost$collections$Array* $tmp3507 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp3507, ((frost$core$Object*) $tmp3504));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:518
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3508 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3509 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:518:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3510 = &(&local12)->$rawValue;
*$tmp3510 = $tmp3509;
org$frostlang$frostc$Type$Kind $tmp3511 = *(&local12);
*(&local11) = $tmp3511;
org$frostlang$frostc$Type$Kind $tmp3512 = *(&local11);
org$frostlang$frostc$Position $tmp3513 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3514 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3508, &$s3515, $tmp3512, $tmp3513, $tmp3514);
frost$collections$Array* $tmp3516 = *(&local10);
org$frostlang$frostc$Type* $tmp3517 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3508, ((frost$collections$ListView*) $tmp3516));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
frost$collections$Array* $tmp3518 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3518));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
org$frostlang$frostc$Type* $tmp3519 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3519));
*(&local9) = $tmp3517;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:580
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3520 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3521 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp3522 = *(&local9);
frost$core$Bit $tmp3523 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3520, $tmp3521, $tmp3522, $tmp3523);
org$frostlang$frostc$IR$Value* $tmp3524 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3520);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
org$frostlang$frostc$IR$Value* $tmp3525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
*(&local1) = $tmp3524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3520));
org$frostlang$frostc$Type* $tmp3526 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3527 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3527));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp3528 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3528));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3529 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:583
frost$core$Int64 $tmp3530 = (frost$core$Int64) {583};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3531, $tmp3530);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:588
org$frostlang$frostc$Type* $tmp3532 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
org$frostlang$frostc$Type* $tmp3533 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
*(&local13) = $tmp3532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:589
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3534 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3535 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3534, $tmp3535);
*(&local14) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
org$frostlang$frostc$Compiler$TypeContext* $tmp3536 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3536));
*(&local14) = $tmp3534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:590
org$frostlang$frostc$Type* $tmp3537 = *(&local13);
frost$core$Bit $tmp3538 = frost$core$Bit$init$builtin_bit($tmp3537 != NULL);
bool $tmp3539 = $tmp3538.value;
if ($tmp3539) goto block33; else goto block32;
block33:;
org$frostlang$frostc$Type* $tmp3540 = *(&local13);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:590:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:622
frost$core$String** $tmp3541 = &((org$frostlang$frostc$Symbol*) $tmp3540)->name;
frost$core$String* $tmp3542 = *$tmp3541;
frost$core$Bit $tmp3543 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3542, &$s3544);
bool $tmp3545 = $tmp3543.value;
if ($tmp3545) goto block30; else goto block32;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:591
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3546 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3547 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp3548 = *(&local13);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:591:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3549 = &$tmp3548->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3550 = *$tmp3549;
frost$core$Bit $tmp3551 = frost$core$Bit$init$builtin_bit($tmp3550 != NULL);
bool $tmp3552 = $tmp3551.value;
if ($tmp3552) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp3553 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3554, $tmp3553);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3555 = &$tmp3548->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3556 = *$tmp3555;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
frost$core$Int64 $tmp3557 = (frost$core$Int64) {1};
frost$core$Object* $tmp3558 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3556, $tmp3557);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:591:92
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp3559 = &((org$frostlang$frostc$Type*) $tmp3558)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3560 = *$tmp3559;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3561;
$tmp3561 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3561->value = $tmp3560;
frost$core$Int64 $tmp3562 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3563 = &(&local17)->$rawValue;
*$tmp3563 = $tmp3562;
org$frostlang$frostc$Type$Kind $tmp3564 = *(&local17);
*(&local16) = $tmp3564;
org$frostlang$frostc$Type$Kind $tmp3565 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3566;
$tmp3566 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3566->value = $tmp3565;
ITable* $tmp3567 = ((frost$core$Equatable*) $tmp3561)->$class->itable;
while ($tmp3567->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3567 = $tmp3567->next;
}
$fn3569 $tmp3568 = $tmp3567->methods[1];
frost$core$Bit $tmp3570 = $tmp3568(((frost$core$Equatable*) $tmp3561), ((frost$core$Equatable*) $tmp3566));
bool $tmp3571 = $tmp3570.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3566)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3561)));
if ($tmp3571) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3558)));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3558);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3558)));
goto block38;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3572 = &((org$frostlang$frostc$Type*) $tmp3558)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3573 = *$tmp3572;
frost$core$Bit $tmp3574 = frost$core$Bit$init$builtin_bit($tmp3573 != NULL);
bool $tmp3575 = $tmp3574.value;
if ($tmp3575) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp3576 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3577, $tmp3576);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3578 = &((org$frostlang$frostc$Type*) $tmp3558)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3579 = *$tmp3578;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
frost$core$Int64 $tmp3580 = (frost$core$Int64) {0};
frost$core$Object* $tmp3581 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3579, $tmp3580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3581)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3581);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3581);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3581)));
goto block38;
block38:;
org$frostlang$frostc$Type* $tmp3582 = *(&local15);
// begin inline call to method org.frostlang.frostc.Type.RangeOf(t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:591:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:516
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3583 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3583);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3583));
frost$collections$Array* $tmp3584 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3584));
*(&local18) = $tmp3583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3583));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:517
frost$collections$Array* $tmp3585 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp3585, ((frost$core$Object*) $tmp3582));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:518
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3586 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3587 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:518:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3588 = &(&local20)->$rawValue;
*$tmp3588 = $tmp3587;
org$frostlang$frostc$Type$Kind $tmp3589 = *(&local20);
*(&local19) = $tmp3589;
org$frostlang$frostc$Type$Kind $tmp3590 = *(&local19);
org$frostlang$frostc$Position $tmp3591 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3592 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3586, &$s3593, $tmp3590, $tmp3591, $tmp3592);
frost$collections$Array* $tmp3594 = *(&local18);
org$frostlang$frostc$Type* $tmp3595 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3586, ((frost$collections$ListView*) $tmp3594));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3586));
frost$collections$Array* $tmp3596 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Bit $tmp3597 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3546, $tmp3547, $tmp3595, $tmp3597);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3546));
org$frostlang$frostc$Compiler$TypeContext* $tmp3598 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3598));
*(&local14) = $tmp3546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
org$frostlang$frostc$Type* $tmp3599 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3558);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3546));
goto block31;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:594
org$frostlang$frostc$Type* $tmp3600 = *(&local13);
frost$core$Bit $tmp3601 = frost$core$Bit$init$builtin_bit($tmp3600 != NULL);
bool $tmp3602 = $tmp3601.value;
if ($tmp3602) goto block49; else goto block48;
block49:;
org$frostlang$frostc$Type* $tmp3603 = *(&local13);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:594:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:626
frost$core$String** $tmp3604 = &((org$frostlang$frostc$Symbol*) $tmp3603)->name;
frost$core$String* $tmp3605 = *$tmp3604;
frost$core$Bit $tmp3606 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3605, &$s3607);
bool $tmp3608 = $tmp3606.value;
if ($tmp3608) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:595
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3609 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3610 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp3611 = *(&local13);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3612 = &$tmp3611->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3613 = *$tmp3612;
frost$core$Bit $tmp3614 = frost$core$Bit$init$builtin_bit($tmp3613 != NULL);
bool $tmp3615 = $tmp3614.value;
if ($tmp3615) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp3616 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3617, $tmp3616);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3618 = &$tmp3611->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3619 = *$tmp3618;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
frost$core$Int64 $tmp3620 = (frost$core$Int64) {1};
frost$core$Object* $tmp3621 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3619, $tmp3620);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:596:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp3622 = &((org$frostlang$frostc$Type*) $tmp3621)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3623 = *$tmp3622;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3624;
$tmp3624 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3624->value = $tmp3623;
frost$core$Int64 $tmp3625 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3626 = &(&local23)->$rawValue;
*$tmp3626 = $tmp3625;
org$frostlang$frostc$Type$Kind $tmp3627 = *(&local23);
*(&local22) = $tmp3627;
org$frostlang$frostc$Type$Kind $tmp3628 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3629;
$tmp3629 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3629->value = $tmp3628;
ITable* $tmp3630 = ((frost$core$Equatable*) $tmp3624)->$class->itable;
while ($tmp3630->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3630 = $tmp3630->next;
}
$fn3632 $tmp3631 = $tmp3630->methods[1];
frost$core$Bit $tmp3633 = $tmp3631(((frost$core$Equatable*) $tmp3624), ((frost$core$Equatable*) $tmp3629));
bool $tmp3634 = $tmp3633.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3629)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3624)));
if ($tmp3634) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3621)));
*(&local21) = ((org$frostlang$frostc$Type*) $tmp3621);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3621)));
goto block54;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3635 = &((org$frostlang$frostc$Type*) $tmp3621)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3636 = *$tmp3635;
frost$core$Bit $tmp3637 = frost$core$Bit$init$builtin_bit($tmp3636 != NULL);
bool $tmp3638 = $tmp3637.value;
if ($tmp3638) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp3639 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3640, $tmp3639);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3641 = &((org$frostlang$frostc$Type*) $tmp3621)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3642 = *$tmp3641;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3642));
frost$core$Int64 $tmp3643 = (frost$core$Int64) {0};
frost$core$Object* $tmp3644 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3642, $tmp3643);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3644)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3644);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3642));
*(&local21) = ((org$frostlang$frostc$Type*) $tmp3644);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3644)));
goto block54;
block54:;
org$frostlang$frostc$Type* $tmp3645 = *(&local21);
org$frostlang$frostc$Type* $tmp3646 = *(&local13);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3647 = &$tmp3646->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3648 = *$tmp3647;
frost$core$Bit $tmp3649 = frost$core$Bit$init$builtin_bit($tmp3648 != NULL);
bool $tmp3650 = $tmp3649.value;
if ($tmp3650) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp3651 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3652, $tmp3651);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3653 = &$tmp3646->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3654 = *$tmp3653;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
frost$core$Int64 $tmp3655 = (frost$core$Int64) {2};
frost$core$Object* $tmp3656 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3654, $tmp3655);
org$frostlang$frostc$Type* $tmp3657 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp3645, ((org$frostlang$frostc$Type*) $tmp3656));
frost$core$Bit $tmp3658 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3609, $tmp3610, $tmp3657, $tmp3658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3609));
org$frostlang$frostc$Compiler$TypeContext* $tmp3659 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3659));
*(&local14) = $tmp3609;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3657));
frost$core$Frost$unref$frost$core$Object$Q($tmp3656);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
org$frostlang$frostc$Type* $tmp3660 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3660));
*(&local21) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3609));
goto block48;
block48:;
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:598
org$frostlang$frostc$Compiler$TypeContext* $tmp3661 = *(&local14);
org$frostlang$frostc$IR$Value* $tmp3662 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3661);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
org$frostlang$frostc$IR$Value* $tmp3663 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
*(&local1) = $tmp3662;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
org$frostlang$frostc$Compiler$TypeContext* $tmp3664 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
*(&local14) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp3665 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3665));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:601
org$frostlang$frostc$IR$Value* $tmp3666 = *(&local1);
frost$core$Bit $tmp3667 = frost$core$Bit$init$builtin_bit($tmp3666 == NULL);
bool $tmp3668 = $tmp3667.value;
if ($tmp3668) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:602
org$frostlang$frostc$IR$Value* $tmp3669 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3670 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:604
org$frostlang$frostc$IR$Value* $tmp3671 = *(&local1);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3671, param5);
org$frostlang$frostc$IR$Value* $tmp3672 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3673 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
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
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
frost$core$Bit local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local14 = NULL;
org$frostlang$frostc$Compiler$Target* local15 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local16 = NULL;
org$frostlang$frostc$Variable$Kind local17;
org$frostlang$frostc$Variable$Kind local18;
org$frostlang$frostc$IR$Value* local19 = NULL;
org$frostlang$frostc$ASTNode* local20 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:611
org$frostlang$frostc$IR** $tmp3674 = &param0->ir;
org$frostlang$frostc$IR* $tmp3675 = *$tmp3674;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
org$frostlang$frostc$IR* $tmp3676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
*(&local0) = $tmp3675;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:612
org$frostlang$frostc$IR* $tmp3677 = *(&local0);
$fn3679 $tmp3678 = ($fn3679) $tmp3677->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3680 = $tmp3678($tmp3677, &$s3681);
*(&local1) = $tmp3680;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:613
org$frostlang$frostc$IR* $tmp3682 = *(&local0);
$fn3684 $tmp3683 = ($fn3684) $tmp3682->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3685 = $tmp3683($tmp3682, &$s3686);
*(&local2) = $tmp3685;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:614
org$frostlang$frostc$IR* $tmp3687 = *(&local0);
$fn3689 $tmp3688 = ($fn3689) $tmp3687->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3690 = $tmp3688($tmp3687, &$s3691);
*(&local3) = $tmp3690;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:615
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp3692 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3693 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp3694 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp3695 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3696 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3693, $tmp3694, param2, $tmp3695, $tmp3696);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp3692, param0, $tmp3693);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
org$frostlang$frostc$Compiler$AutoContext* $tmp3697 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
*(&local4) = $tmp3692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:616
$fn3699 $tmp3698 = ($fn3699) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3700 = $tmp3698(param4);
org$frostlang$frostc$Type$Kind* $tmp3701 = &$tmp3700->typeKind;
org$frostlang$frostc$Type$Kind $tmp3702 = *$tmp3701;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3703;
$tmp3703 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3703->value = $tmp3702;
frost$core$Int64 $tmp3704 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:616:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3705 = &(&local7)->$rawValue;
*$tmp3705 = $tmp3704;
org$frostlang$frostc$Type$Kind $tmp3706 = *(&local7);
*(&local6) = $tmp3706;
org$frostlang$frostc$Type$Kind $tmp3707 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3708;
$tmp3708 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3708->value = $tmp3707;
ITable* $tmp3709 = ((frost$core$Equatable*) $tmp3703)->$class->itable;
while ($tmp3709->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3709 = $tmp3709->next;
}
$fn3711 $tmp3710 = $tmp3709->methods[0];
frost$core$Bit $tmp3712 = $tmp3710(((frost$core$Equatable*) $tmp3703), ((frost$core$Equatable*) $tmp3708));
bool $tmp3713 = $tmp3712.value;
if ($tmp3713) goto block2; else goto block3;
block2:;
$fn3715 $tmp3714 = ($fn3715) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3716 = $tmp3714(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:617:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3717 = &$tmp3716->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3718 = *$tmp3717;
frost$core$Bit $tmp3719 = frost$core$Bit$init$builtin_bit($tmp3718 != NULL);
bool $tmp3720 = $tmp3719.value;
if ($tmp3720) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3721 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3722, $tmp3721);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3723 = &$tmp3716->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3724 = *$tmp3723;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3724));
frost$core$Int64 $tmp3725 = (frost$core$Int64) {0};
frost$core$Object* $tmp3726 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3724, $tmp3725);
// begin inline call to method org.frostlang.frostc.Type.Iterator():org.frostlang.frostc.Type from For.frost:617:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:462
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3727 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3728 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:462:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3729 = &(&local9)->$rawValue;
*$tmp3729 = $tmp3728;
org$frostlang$frostc$Type$Kind $tmp3730 = *(&local9);
*(&local8) = $tmp3730;
org$frostlang$frostc$Type$Kind $tmp3731 = *(&local8);
org$frostlang$frostc$Position $tmp3732 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3733 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3727, &$s3734, $tmp3731, $tmp3732, $tmp3733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:617:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp3735 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3726))->name;
frost$core$String* $tmp3736 = *$tmp3735;
frost$core$String** $tmp3737 = &((org$frostlang$frostc$Symbol*) $tmp3727)->name;
frost$core$String* $tmp3738 = *$tmp3737;
frost$core$Bit $tmp3739 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3736, $tmp3738);
bool $tmp3740 = $tmp3739.value;
if ($tmp3740) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp3741 = &((org$frostlang$frostc$Type*) $tmp3726)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3742 = *$tmp3741;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3743;
$tmp3743 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3743->value = $tmp3742;
org$frostlang$frostc$Type$Kind* $tmp3744 = &$tmp3727->typeKind;
org$frostlang$frostc$Type$Kind $tmp3745 = *$tmp3744;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3746;
$tmp3746 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3746->value = $tmp3745;
ITable* $tmp3747 = ((frost$core$Equatable*) $tmp3743)->$class->itable;
while ($tmp3747->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3747 = $tmp3747->next;
}
$fn3749 $tmp3748 = $tmp3747->methods[0];
frost$core$Bit $tmp3750 = $tmp3748(((frost$core$Equatable*) $tmp3743), ((frost$core$Equatable*) $tmp3746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3746)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3743)));
*(&local10) = $tmp3750;
goto block13;
block12:;
*(&local10) = $tmp3739;
goto block13;
block13:;
frost$core$Bit $tmp3751 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
frost$core$Frost$unref$frost$core$Object$Q($tmp3726);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
*(&local5) = $tmp3751;
goto block4;
block3:;
*(&local5) = $tmp3712;
goto block4;
block4:;
frost$core$Bit $tmp3752 = *(&local5);
bool $tmp3753 = $tmp3752.value;
if ($tmp3753) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp3754 = (frost$core$Int64) {616};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3755, $tmp3754);
abort(); // unreachable
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3708)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3703)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3700));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:618
org$frostlang$frostc$IR* $tmp3756 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3757 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3758 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp3759 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3757, $tmp3758, param1, $tmp3759);
$fn3761 $tmp3760 = ($fn3761) $tmp3756->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3762 = $tmp3760($tmp3756, $tmp3757);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3757));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:619
org$frostlang$frostc$IR* $tmp3763 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3764 = *(&local1);
$fn3766 $tmp3765 = ($fn3766) $tmp3763->$class->vtable[4];
$tmp3765($tmp3763, $tmp3764);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:620
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3767 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3767);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3768 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3769 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from For.frost:621:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3770 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3771 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3772 = &(&local12)->$rawValue;
*$tmp3772 = $tmp3771;
org$frostlang$frostc$Type$Kind $tmp3773 = *(&local12);
*(&local11) = $tmp3773;
org$frostlang$frostc$Type$Kind $tmp3774 = *(&local11);
org$frostlang$frostc$Position $tmp3775 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3776 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3770, &$s3777, $tmp3774, $tmp3775, $tmp3776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3770));
frost$core$Bit $tmp3778 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3768, $tmp3769, $tmp3770, $tmp3778);
org$frostlang$frostc$IR$Value* $tmp3779 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3780, ((frost$collections$ListView*) $tmp3767), $tmp3768);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3779));
org$frostlang$frostc$IR$Value* $tmp3781 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3781));
*(&local13) = $tmp3779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3767));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:622
org$frostlang$frostc$IR$Value* $tmp3782 = *(&local13);
frost$core$Bit $tmp3783 = frost$core$Bit$init$builtin_bit($tmp3782 == NULL);
bool $tmp3784 = $tmp3783.value;
if ($tmp3784) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:623
org$frostlang$frostc$IR$Value* $tmp3785 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3786 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3786));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3787 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3787));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:625
org$frostlang$frostc$IR* $tmp3788 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3789 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3790 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp3791 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp3792 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp3791);
org$frostlang$frostc$IR$Block$ID $tmp3793 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3794 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3789, $tmp3790, param1, $tmp3792, $tmp3793, $tmp3794);
$fn3796 $tmp3795 = ($fn3796) $tmp3788->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3797 = $tmp3795($tmp3788, $tmp3789);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3789));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:627
org$frostlang$frostc$IR* $tmp3798 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3799 = *(&local2);
$fn3801 $tmp3800 = ($fn3801) $tmp3798->$class->vtable[4];
$tmp3800($tmp3798, $tmp3799);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:629
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp3802 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp3802, param0);
*(&local14) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3802));
org$frostlang$frostc$Compiler$AutoScope* $tmp3803 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3803));
*(&local14) = $tmp3802;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3802));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:630
*(&local15) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:632
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3804 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp3804, param0);
*(&local16) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3804));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3805 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3805));
*(&local16) = $tmp3804;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3804));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:633
frost$core$Int64 $tmp3806 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Variable.Kind from For.frost:633:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp3807 = &(&local18)->$rawValue;
*$tmp3807 = $tmp3806;
org$frostlang$frostc$Variable$Kind $tmp3808 = *(&local18);
*(&local17) = $tmp3808;
org$frostlang$frostc$Variable$Kind $tmp3809 = *(&local17);
$fn3811 $tmp3810 = ($fn3811) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3812 = $tmp3810(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:634:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3813 = &$tmp3812->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3814 = *$tmp3813;
frost$core$Bit $tmp3815 = frost$core$Bit$init$builtin_bit($tmp3814 != NULL);
bool $tmp3816 = $tmp3815.value;
if ($tmp3816) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp3817 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3818, $tmp3817);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3819 = &$tmp3812->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3820 = *$tmp3819;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3820));
frost$core$Int64 $tmp3821 = (frost$core$Int64) {1};
frost$core$Object* $tmp3822 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3820, $tmp3821);
org$frostlang$frostc$Compiler$Target* $tmp3823 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp3809, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp3822));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
org$frostlang$frostc$Compiler$Target* $tmp3824 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3824));
*(&local15) = $tmp3823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
frost$core$Frost$unref$frost$core$Object$Q($tmp3822);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:635
org$frostlang$frostc$Compiler$Target* $tmp3825 = *(&local15);
frost$core$Bit $tmp3826 = frost$core$Bit$init$builtin_bit($tmp3825 == NULL);
bool $tmp3827 = $tmp3826.value;
if ($tmp3827) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:636
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3828 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3828));
*(&local16) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3829 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
*(&local15) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3830 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
*(&local14) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3831 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3832 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3832));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3833 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3833));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block25:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3834 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
*(&local16) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:639
org$frostlang$frostc$Compiler$Target* $tmp3835 = *(&local15);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp3835);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:640
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:641
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3836 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3836);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3837 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3838 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3837, $tmp3838);
org$frostlang$frostc$IR$Value* $tmp3839 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3840, ((frost$collections$ListView*) $tmp3836), $tmp3837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3839));
org$frostlang$frostc$IR$Value* $tmp3841 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
*(&local19) = $tmp3839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3836));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:643
org$frostlang$frostc$IR$Value* $tmp3842 = *(&local19);
frost$core$Bit $tmp3843 = frost$core$Bit$init$builtin_bit($tmp3842 == NULL);
bool $tmp3844 = $tmp3843.value;
if ($tmp3844) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:644
org$frostlang$frostc$IR$Value* $tmp3845 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3845));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3846 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3846));
*(&local15) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3847 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
*(&local14) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3848 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3849 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3849));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3850 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3850));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:646
org$frostlang$frostc$Compiler$Target* $tmp3851 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp3852 = *(&local19);
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, param1, $tmp3851, $tmp3852);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:647
ITable* $tmp3853 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp3853->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3853 = $tmp3853->next;
}
$fn3855 $tmp3854 = $tmp3853->methods[0];
frost$collections$Iterator* $tmp3856 = $tmp3854(((frost$collections$Iterable*) param5));
goto block28;
block28:;
ITable* $tmp3857 = $tmp3856->$class->itable;
while ($tmp3857->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3857 = $tmp3857->next;
}
$fn3859 $tmp3858 = $tmp3857->methods[0];
frost$core$Bit $tmp3860 = $tmp3858($tmp3856);
bool $tmp3861 = $tmp3860.value;
if ($tmp3861) goto block30; else goto block29;
block29:;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3862 = $tmp3856->$class->itable;
while ($tmp3862->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3862 = $tmp3862->next;
}
$fn3864 $tmp3863 = $tmp3862->methods[1];
frost$core$Object* $tmp3865 = $tmp3863($tmp3856);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3865)));
org$frostlang$frostc$ASTNode* $tmp3866 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3866));
*(&local20) = ((org$frostlang$frostc$ASTNode*) $tmp3865);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:648
org$frostlang$frostc$ASTNode* $tmp3867 = *(&local20);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp3867);
frost$core$Frost$unref$frost$core$Object$Q($tmp3865);
org$frostlang$frostc$ASTNode* $tmp3868 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3868));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
org$frostlang$frostc$IR$Value* $tmp3869 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3869));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3870 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3870));
*(&local15) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3871 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
*(&local14) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:651
org$frostlang$frostc$IR* $tmp3872 = *(&local0);
$fn3874 $tmp3873 = ($fn3874) $tmp3872->$class->vtable[5];
frost$core$Bit $tmp3875 = $tmp3873($tmp3872);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:651:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp3876 = $tmp3875.value;
bool $tmp3877 = !$tmp3876;
frost$core$Bit $tmp3878 = (frost$core$Bit) {$tmp3877};
bool $tmp3879 = $tmp3878.value;
if ($tmp3879) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:652
org$frostlang$frostc$IR* $tmp3880 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3881 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3882 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp3883 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3881, $tmp3882, param1, $tmp3883);
$fn3885 $tmp3884 = ($fn3885) $tmp3880->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3886 = $tmp3884($tmp3880, $tmp3881);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3881));
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:654
org$frostlang$frostc$IR* $tmp3887 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3888 = *(&local3);
$fn3890 $tmp3889 = ($fn3890) $tmp3887->$class->vtable[4];
$tmp3889($tmp3887, $tmp3888);
org$frostlang$frostc$IR$Value* $tmp3891 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3891));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3892 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3893 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3893));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
frost$core$Bit local6;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
frost$core$Bit local12;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:660
frost$core$Int64* $tmp3894 = &param4->$rawValue;
frost$core$Int64 $tmp3895 = *$tmp3894;
frost$core$Int64 $tmp3896 = (frost$core$Int64) {35};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3897 = $tmp3895.value;
int64_t $tmp3898 = $tmp3896.value;
bool $tmp3899 = $tmp3897 == $tmp3898;
frost$core$Bit $tmp3900 = frost$core$Bit$init$builtin_bit($tmp3899);
bool $tmp3901 = $tmp3900.value;
if ($tmp3901) goto block2; else goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:664
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:665
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:668
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from For.frost:668:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4976
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3902 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3903 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3902, $tmp3903);
org$frostlang$frostc$IR$Value* $tmp3904 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3902));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
org$frostlang$frostc$IR$Value* $tmp3905 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
*(&local0) = $tmp3904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:669
org$frostlang$frostc$IR$Value* $tmp3906 = *(&local0);
frost$core$Bit $tmp3907 = frost$core$Bit$init$builtin_bit($tmp3906 == NULL);
bool $tmp3908 = $tmp3907.value;
if ($tmp3908) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:670
org$frostlang$frostc$IR$Value* $tmp3909 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3909));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:672
org$frostlang$frostc$IR$Value* $tmp3910 = *(&local0);
$fn3912 $tmp3911 = ($fn3912) $tmp3910->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3913 = $tmp3911($tmp3910);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:672:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:622
frost$core$String** $tmp3914 = &((org$frostlang$frostc$Symbol*) $tmp3913)->name;
frost$core$String* $tmp3915 = *$tmp3914;
frost$core$Bit $tmp3916 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3915, &$s3917);
bool $tmp3918 = $tmp3916.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3913));
if ($tmp3918) goto block7; else goto block10;
block10:;
org$frostlang$frostc$IR$Value* $tmp3919 = *(&local0);
$fn3921 $tmp3920 = ($fn3921) $tmp3919->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3922 = $tmp3920($tmp3919);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:672:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:626
frost$core$String** $tmp3923 = &((org$frostlang$frostc$Symbol*) $tmp3922)->name;
frost$core$String* $tmp3924 = *$tmp3923;
frost$core$Bit $tmp3925 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3924, &$s3926);
bool $tmp3927 = $tmp3925.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3922));
if ($tmp3927) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:674
org$frostlang$frostc$IR$Value* $tmp3928 = *(&local0);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3928, param5);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:677
org$frostlang$frostc$IR$Value* $tmp3929 = *(&local0);
$fn3931 $tmp3930 = ($fn3931) $tmp3929->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3932 = $tmp3930($tmp3929);
frost$collections$HashSet* $tmp3933 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp3932);
ITable* $tmp3934 = ((frost$collections$Iterable*) $tmp3933)->$class->itable;
while ($tmp3934->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3934 = $tmp3934->next;
}
$fn3936 $tmp3935 = $tmp3934->methods[0];
frost$collections$Iterator* $tmp3937 = $tmp3935(((frost$collections$Iterable*) $tmp3933));
goto block13;
block13:;
ITable* $tmp3938 = $tmp3937->$class->itable;
while ($tmp3938->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3938 = $tmp3938->next;
}
$fn3940 $tmp3939 = $tmp3938->methods[0];
frost$core$Bit $tmp3941 = $tmp3939($tmp3937);
bool $tmp3942 = $tmp3941.value;
if ($tmp3942) goto block15; else goto block14;
block14:;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp3943 = $tmp3937->$class->itable;
while ($tmp3943->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3943 = $tmp3943->next;
}
$fn3945 $tmp3944 = $tmp3943->methods[1];
frost$core$Object* $tmp3946 = $tmp3944($tmp3937);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3946)));
org$frostlang$frostc$Type* $tmp3947 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp3946);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:678
org$frostlang$frostc$Type* $tmp3948 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3949 = &$tmp3948->typeKind;
org$frostlang$frostc$Type$Kind $tmp3950 = *$tmp3949;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3951;
$tmp3951 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3951->value = $tmp3950;
frost$core$Int64 $tmp3952 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:678:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3953 = &(&local3)->$rawValue;
*$tmp3953 = $tmp3952;
org$frostlang$frostc$Type$Kind $tmp3954 = *(&local3);
*(&local2) = $tmp3954;
org$frostlang$frostc$Type$Kind $tmp3955 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3956;
$tmp3956 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3956->value = $tmp3955;
ITable* $tmp3957 = ((frost$core$Equatable*) $tmp3951)->$class->itable;
while ($tmp3957->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3957 = $tmp3957->next;
}
$fn3959 $tmp3958 = $tmp3957->methods[0];
frost$core$Bit $tmp3960 = $tmp3958(((frost$core$Equatable*) $tmp3951), ((frost$core$Equatable*) $tmp3956));
bool $tmp3961 = $tmp3960.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3956)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3951)));
if ($tmp3961) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Type* $tmp3962 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:678:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3963 = &$tmp3962->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3964 = *$tmp3963;
frost$core$Bit $tmp3965 = frost$core$Bit$init$builtin_bit($tmp3964 != NULL);
bool $tmp3966 = $tmp3965.value;
if ($tmp3966) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp3967 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3968, $tmp3967);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3969 = &$tmp3962->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3970 = *$tmp3969;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3970));
frost$core$Int64 $tmp3971 = (frost$core$Int64) {0};
frost$core$Object* $tmp3972 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3970, $tmp3971);
// begin inline call to method org.frostlang.frostc.Type.Iterator():org.frostlang.frostc.Type from For.frost:678:88
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:462
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3973 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3974 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:462:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3975 = &(&local5)->$rawValue;
*$tmp3975 = $tmp3974;
org$frostlang$frostc$Type$Kind $tmp3976 = *(&local5);
*(&local4) = $tmp3976;
org$frostlang$frostc$Type$Kind $tmp3977 = *(&local4);
org$frostlang$frostc$Position $tmp3978 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3979 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3973, &$s3980, $tmp3977, $tmp3978, $tmp3979);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:678:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp3981 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3972))->name;
frost$core$String* $tmp3982 = *$tmp3981;
frost$core$String** $tmp3983 = &((org$frostlang$frostc$Symbol*) $tmp3973)->name;
frost$core$String* $tmp3984 = *$tmp3983;
frost$core$Bit $tmp3985 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3982, $tmp3984);
bool $tmp3986 = $tmp3985.value;
if ($tmp3986) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp3987 = &((org$frostlang$frostc$Type*) $tmp3972)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3988 = *$tmp3987;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3989;
$tmp3989 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3989->value = $tmp3988;
org$frostlang$frostc$Type$Kind* $tmp3990 = &$tmp3973->typeKind;
org$frostlang$frostc$Type$Kind $tmp3991 = *$tmp3990;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3992;
$tmp3992 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3992->value = $tmp3991;
ITable* $tmp3993 = ((frost$core$Equatable*) $tmp3989)->$class->itable;
while ($tmp3993->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3993 = $tmp3993->next;
}
$fn3995 $tmp3994 = $tmp3993->methods[0];
frost$core$Bit $tmp3996 = $tmp3994(((frost$core$Equatable*) $tmp3989), ((frost$core$Equatable*) $tmp3992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3992)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3989)));
*(&local6) = $tmp3996;
goto block28;
block27:;
*(&local6) = $tmp3985;
goto block28;
block28:;
frost$core$Bit $tmp3997 = *(&local6);
bool $tmp3998 = $tmp3997.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
frost$core$Frost$unref$frost$core$Object$Q($tmp3972);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3970));
if ($tmp3998) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:679
$fn4000 $tmp3999 = ($fn4000) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp4001 = $tmp3999(param4);
org$frostlang$frostc$IR$Value* $tmp4002 = *(&local0);
org$frostlang$frostc$Type* $tmp4003 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:679:52
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Compiler.frost:3992:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp4004 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp4005 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp4006 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4005);
org$frostlang$frostc$Position $tmp4007 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp4008 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp4004, &$s4009, $tmp4006, $tmp4007, $tmp4008);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
ITable* $tmp4010 = ((frost$core$Equatable*) $tmp4003)->$class->itable;
while ($tmp4010->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4010 = $tmp4010->next;
}
$fn4012 $tmp4011 = $tmp4010->methods[1];
frost$core$Bit $tmp4013 = $tmp4011(((frost$core$Equatable*) $tmp4003), ((frost$core$Equatable*) $tmp4004));
bool $tmp4014 = $tmp4013.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
if ($tmp4014) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp4015 = (frost$core$Int64) {3993};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4016, $tmp4015, &$s4017);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3994
frost$core$Bit $tmp4018 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp4019 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp4001, $tmp4002, $tmp4003, $tmp4018);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
org$frostlang$frostc$IR$Value* $tmp4020 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
*(&local7) = $tmp4019;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:680
org$frostlang$frostc$IR$Value* $tmp4021 = *(&local7);
frost$core$Bit $tmp4022 = frost$core$Bit$init$builtin_bit($tmp4021 == NULL);
bool $tmp4023 = $tmp4022.value;
if ($tmp4023) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:681
org$frostlang$frostc$IR$Value* $tmp4024 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3946);
org$frostlang$frostc$Type* $tmp4025 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
org$frostlang$frostc$IR$Value* $tmp4026 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4026));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:683
org$frostlang$frostc$IR$Value* $tmp4027 = *(&local7);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp4027, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:684
org$frostlang$frostc$IR$Value* $tmp4028 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3946);
org$frostlang$frostc$Type* $tmp4029 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
org$frostlang$frostc$IR$Value* $tmp4030 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:686
org$frostlang$frostc$Type* $tmp4031 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp4032 = &$tmp4031->typeKind;
org$frostlang$frostc$Type$Kind $tmp4033 = *$tmp4032;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4034;
$tmp4034 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4034->value = $tmp4033;
frost$core$Int64 $tmp4035 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:686:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp4036 = &(&local9)->$rawValue;
*$tmp4036 = $tmp4035;
org$frostlang$frostc$Type$Kind $tmp4037 = *(&local9);
*(&local8) = $tmp4037;
org$frostlang$frostc$Type$Kind $tmp4038 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4039;
$tmp4039 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4039->value = $tmp4038;
ITable* $tmp4040 = ((frost$core$Equatable*) $tmp4034)->$class->itable;
while ($tmp4040->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4040 = $tmp4040->next;
}
$fn4042 $tmp4041 = $tmp4040->methods[0];
frost$core$Bit $tmp4043 = $tmp4041(((frost$core$Equatable*) $tmp4034), ((frost$core$Equatable*) $tmp4039));
bool $tmp4044 = $tmp4043.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4039)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4034)));
if ($tmp4044) goto block37; else goto block36;
block37:;
org$frostlang$frostc$Type* $tmp4045 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:686:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp4046 = &$tmp4045->_subtypes;
org$frostlang$frostc$FixedArray* $tmp4047 = *$tmp4046;
frost$core$Bit $tmp4048 = frost$core$Bit$init$builtin_bit($tmp4047 != NULL);
bool $tmp4049 = $tmp4048.value;
if ($tmp4049) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp4050 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4051, $tmp4050);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp4052 = &$tmp4045->_subtypes;
org$frostlang$frostc$FixedArray* $tmp4053 = *$tmp4052;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
frost$core$Int64 $tmp4054 = (frost$core$Int64) {0};
frost$core$Object* $tmp4055 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4053, $tmp4054);
// begin inline call to method org.frostlang.frostc.Type.Iterable():org.frostlang.frostc.Type from For.frost:686:88
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:467
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp4056 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp4057 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:467:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp4058 = &(&local11)->$rawValue;
*$tmp4058 = $tmp4057;
org$frostlang$frostc$Type$Kind $tmp4059 = *(&local11);
*(&local10) = $tmp4059;
org$frostlang$frostc$Type$Kind $tmp4060 = *(&local10);
org$frostlang$frostc$Position $tmp4061 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp4062 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp4056, &$s4063, $tmp4060, $tmp4061, $tmp4062);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:686:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp4064 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp4055))->name;
frost$core$String* $tmp4065 = *$tmp4064;
frost$core$String** $tmp4066 = &((org$frostlang$frostc$Symbol*) $tmp4056)->name;
frost$core$String* $tmp4067 = *$tmp4066;
frost$core$Bit $tmp4068 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4065, $tmp4067);
bool $tmp4069 = $tmp4068.value;
if ($tmp4069) goto block45; else goto block46;
block45:;
org$frostlang$frostc$Type$Kind* $tmp4070 = &((org$frostlang$frostc$Type*) $tmp4055)->typeKind;
org$frostlang$frostc$Type$Kind $tmp4071 = *$tmp4070;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4072;
$tmp4072 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4072->value = $tmp4071;
org$frostlang$frostc$Type$Kind* $tmp4073 = &$tmp4056->typeKind;
org$frostlang$frostc$Type$Kind $tmp4074 = *$tmp4073;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4075;
$tmp4075 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4075->value = $tmp4074;
ITable* $tmp4076 = ((frost$core$Equatable*) $tmp4072)->$class->itable;
while ($tmp4076->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4076 = $tmp4076->next;
}
$fn4078 $tmp4077 = $tmp4076->methods[0];
frost$core$Bit $tmp4079 = $tmp4077(((frost$core$Equatable*) $tmp4072), ((frost$core$Equatable*) $tmp4075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4075)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4072)));
*(&local12) = $tmp4079;
goto block47;
block46:;
*(&local12) = $tmp4068;
goto block47;
block47:;
frost$core$Bit $tmp4080 = *(&local12);
bool $tmp4081 = $tmp4080.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
frost$core$Frost$unref$frost$core$Object$Q($tmp4055);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
if ($tmp4081) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:687
$fn4083 $tmp4082 = ($fn4083) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp4084 = $tmp4082(param4);
org$frostlang$frostc$IR$Value* $tmp4085 = *(&local0);
org$frostlang$frostc$Type* $tmp4086 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:687:52
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Compiler.frost:3992:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp4087 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp4088 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp4089 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4088);
org$frostlang$frostc$Position $tmp4090 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp4091 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp4087, &$s4092, $tmp4089, $tmp4090, $tmp4091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4087));
ITable* $tmp4093 = ((frost$core$Equatable*) $tmp4086)->$class->itable;
while ($tmp4093->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4093 = $tmp4093->next;
}
$fn4095 $tmp4094 = $tmp4093->methods[1];
frost$core$Bit $tmp4096 = $tmp4094(((frost$core$Equatable*) $tmp4086), ((frost$core$Equatable*) $tmp4087));
bool $tmp4097 = $tmp4096.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4087));
if ($tmp4097) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp4098 = (frost$core$Int64) {3993};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4099, $tmp4098, &$s4100);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3994
frost$core$Bit $tmp4101 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp4102 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp4084, $tmp4085, $tmp4086, $tmp4101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
org$frostlang$frostc$IR$Value* $tmp4103 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
*(&local13) = $tmp4102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:688
org$frostlang$frostc$IR$Value* $tmp4104 = *(&local13);
frost$core$Bit $tmp4105 = frost$core$Bit$init$builtin_bit($tmp4104 == NULL);
bool $tmp4106 = $tmp4105.value;
if ($tmp4106) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:689
org$frostlang$frostc$IR$Value* $tmp4107 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3946);
org$frostlang$frostc$Type* $tmp4108 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4108));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
org$frostlang$frostc$IR$Value* $tmp4109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4109));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:691
org$frostlang$frostc$IR$Value* $tmp4110 = *(&local13);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4111 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4111);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp4112 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp4113 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp4112, $tmp4113);
org$frostlang$frostc$IR$Value* $tmp4114 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4110, &$s4115, ((frost$collections$ListView*) $tmp4111), $tmp4112);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
org$frostlang$frostc$IR$Value* $tmp4116 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4116));
*(&local14) = $tmp4114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:693
org$frostlang$frostc$IR$Value* $tmp4117 = *(&local14);
frost$core$Bit $tmp4118 = frost$core$Bit$init$builtin_bit($tmp4117 != NULL);
bool $tmp4119 = $tmp4118.value;
if ($tmp4119) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp4120 = (frost$core$Int64) {693};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4121, $tmp4120);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:694
org$frostlang$frostc$IR$Value* $tmp4122 = *(&local14);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp4122, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:695
org$frostlang$frostc$IR$Value* $tmp4123 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4123));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4124 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4124));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3946);
org$frostlang$frostc$Type* $tmp4125 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
org$frostlang$frostc$IR$Value* $tmp4126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block36:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3946);
org$frostlang$frostc$Type* $tmp4127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:698
$fn4129 $tmp4128 = ($fn4129) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp4130 = $tmp4128(param4);
org$frostlang$frostc$IR$Value* $tmp4131 = *(&local0);
$fn4133 $tmp4132 = ($fn4133) $tmp4131->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4134 = $tmp4132($tmp4131);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:699:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn4136 $tmp4135 = ($fn4136) ((frost$core$Object*) $tmp4134)->$class->vtable[0];
frost$core$String* $tmp4137 = $tmp4135(((frost$core$Object*) $tmp4134));
frost$core$String* $tmp4138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4139, $tmp4137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4137));
frost$core$String* $tmp4140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4138, &$s4141);
frost$core$String* $tmp4142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4143, $tmp4140);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp4130, $tmp4142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4134));
goto block8;
block8:;
org$frostlang$frostc$IR$Value* $tmp4144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4144));
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

