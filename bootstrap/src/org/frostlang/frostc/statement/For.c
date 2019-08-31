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
typedef org$frostlang$frostc$IR$Statement$ID (*$fn531)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn541)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn553)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn559)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn570)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn581)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn619)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn649)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn652)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn655)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn671)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn707)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn718)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn721)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn724)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn740)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn770)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn773)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn807)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn825)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn851)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn856)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn861)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn866)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn871)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn889)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn894)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn940)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn945)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn991)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn996)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn999)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1003)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1008)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1020)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1031)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1036)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1039)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1052)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn1100)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1123)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1146)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1169)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1192)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1211)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1216)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1226)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1231)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1277)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1282)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1328)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1333)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1386)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1393)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1398)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1424)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1436)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1442)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn1453)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1464)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1512)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1520)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1533)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn1562)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1565)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1568)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1584)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1621)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn1632)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1635)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1638)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1654)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1685)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1688)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1694)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1712)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1731)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1741)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1764)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1787)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1810)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1833)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1872)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1890)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1915)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1918)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1926)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1931)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1936)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1941)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1946)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2018)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2023)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2026)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2031)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2041)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2046)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2092)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2097)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2143)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2148)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2151)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2156)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2166)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2171)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2217)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2222)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2268)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2273)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2276)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2280)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2285)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2301)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2312)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2317)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2320)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2333)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2346)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2351)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2361)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2366)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2397)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2420)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2443)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2466)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2489)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2508)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2513)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2523)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2528)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2574)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2579)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2625)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2630)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2668)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2691)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2714)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2737)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2760)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2779)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2784)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2794)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2799)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2845)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2850)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2896)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2901)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2942)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2949)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2954)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2991)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3029)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3034)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn3043)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3063)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3067)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3088)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3094)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3126)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3132)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3157)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn3160)(frost$core$Object*);
typedef frost$core$Bit (*$fn3188)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3309)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3320)(frost$core$Object*);
typedef frost$core$String* (*$fn3355)(frost$core$Object*);
typedef frost$core$Bit (*$fn3467)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3529)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3592)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3597)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3602)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn3612)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3624)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3628)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3655)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3667)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3672)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3701)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3706)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3716)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3774)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3778)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3783)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3793)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3804)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3809)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3836)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3850)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3870)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3875)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3879)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3884)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3898)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3927)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3932)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3940)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3975)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4004)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn4009)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4017)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn4055)(frost$core$Object*);
typedef frost$core$String* (*$fn4063)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn4081)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn4090)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn4093)(frost$core$Object*);

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
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, 2895801343972463081, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 6004887031425356233, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, -6773890575270984264, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, -5757260016675641217, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 7819478318269437571, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 862953121163133953, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s924 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s929 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s950 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 4129098721710860897, NULL };
static frost$core$String $s1062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1074 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s1089 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -2517180725123787287, NULL };
static frost$core$String $s1218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 371504587453742575, NULL };
static frost$core$String $s1236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s1261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s1360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -1657626740712006728, NULL };
static frost$core$String $s1481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s1575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s1589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s1612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s1659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s1725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s1869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 6004887031425356233, NULL };
static frost$core$String $s1933 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, -6773890575270984264, NULL };
static frost$core$String $s1938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, -5757260016675641217, NULL };
static frost$core$String $s1943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, 6835485881888488082, NULL };
static frost$core$String $s1948 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 3156828070342271752, NULL };
static frost$core$String $s1961 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s1987 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1992 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1993 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s2004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2028 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, -3266654702256079504, NULL };
static frost$core$String $s2033 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, -1544085282621682558, NULL };
static frost$core$String $s2051 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2057 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s2076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2082 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s2127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 1700389036629462354, NULL };
static frost$core$String $s2158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, -1590985972706820336, NULL };
static frost$core$String $s2176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 4129098721710860897, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, -9175798345561453926, NULL };
static frost$core$String $s2353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, 1352989231191166944, NULL };
static frost$core$String $s2371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, 8914406012094469804, NULL };
static frost$core$String $s2515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, 8797429780311193770, NULL };
static frost$core$String $s2533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2564 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, 583162507237697254, NULL };
static frost$core$String $s2786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -8356613504536380376, NULL };
static frost$core$String $s2804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2829 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2856 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2885 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2886 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2917 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s2925 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2933 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2998 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s3008 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x6f\x72\x27\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x72\x61\x6e\x67\x65\x20\x27", 45, -6193764283733493999, NULL };
static frost$core$String $s3039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20", 3, -6196166834438432699, NULL };
static frost$core$String $s3041 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x72\x61\x6e\x67\x65\x73\x20\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x62\x6f\x74\x68\x20\x73\x74\x61\x72\x74\x20\x61\x6e\x64\x20\x65\x6e\x64", 43, 7049180602675478362, NULL };
static frost$core$String $s3074 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3075 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s3163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, -5635255732749358298, NULL };
static frost$core$String $s3196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74", 111, -8947113806010787797, NULL };
static frost$core$String $s3222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74", 111, -8947113806010787797, NULL };
static frost$core$String $s3241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s3297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s3317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, -1728612804042895694, NULL };
static frost$core$String $s3323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, -4445134852680863373, NULL };
static frost$core$String $s3325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s3341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s3352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, -1728612804042895694, NULL };
static frost$core$String $s3358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, -4606220905787087156, NULL };
static frost$core$String $s3393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s3401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s3420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s3438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s3453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s3500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s3508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s3515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s3553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s3594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, -2208379357949812030, NULL };
static frost$core$String $s3599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 415422786092736210, NULL };
static frost$core$String $s3604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 4826375230611455343, NULL };
static frost$core$String $s3635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, -5672273796004150040, NULL };
static frost$core$String $s3695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s3723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74", 111, -8947113806010787797, NULL };
static frost$core$String $s3749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, -1931643216358674392, NULL };
static frost$core$String $s3764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74", 111, -8947113806010787797, NULL };
static frost$core$String $s3770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s3833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s3841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s3855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s3861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s3867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s3907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3908 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3944 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s3945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s3959 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s3984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s4021 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s4022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s4036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s4037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s4042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -1037217257710868414, NULL };
static frost$core$String $s4052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s4053 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 7956123242512134102, NULL };
static frost$core$String $s4058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6c\x6c\x20\x74\x6f\x20\x67\x65\x74\x5f\x69\x6e\x74\x65\x72\x61\x74\x6f\x72\x20\x66\x61\x69\x6c\x65\x64\x20\x6f\x6e\x20", 32, -5660099958641997373, NULL };
static frost$core$String $s4060 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 299896688342426654, NULL };
static frost$core$String $s4067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s4068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s4073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s4074 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s4087 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s4088 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s4096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, -8670400631145364674, NULL };
static frost$core$String $s4098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s4100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -1132365909717631325, NULL };

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
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520 != NULL};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block9; else goto block10;
block10:;
frost$core$Int $tmp523 = (frost$core$Int) {104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s524, $tmp523, &$s525);
abort(); // unreachable
block9:;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp526 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp527 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp526, $tmp527);
org$frostlang$frostc$IR$Value* $tmp528 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp526, ((frost$core$Object*) $tmp528));
org$frostlang$frostc$FixedArray* $tmp529 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp526);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp518, $tmp519, param1, $tmp520, $tmp529);
$fn531 $tmp530 = ($fn531) $tmp517->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp532 = $tmp530($tmp517, $tmp518);
*(&local2) = $tmp532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:106
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp533 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp534 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp535 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp533, $tmp534, $tmp535, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
org$frostlang$frostc$ClassDecl* $tmp536 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp533;

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
org$frostlang$frostc$IR** $tmp537 = &param0->ir;
org$frostlang$frostc$IR* $tmp538 = *$tmp537;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
org$frostlang$frostc$IR* $tmp539 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local0) = $tmp538;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:114
$fn541 $tmp540 = ($fn541) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp542 = $tmp540(param4);
org$frostlang$frostc$Type$Kind* $tmp543 = &$tmp542->typeKind;
org$frostlang$frostc$Type$Kind $tmp544 = *$tmp543;
org$frostlang$frostc$Type$Kind$wrapper* $tmp545;
$tmp545 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp545->value = $tmp544;
frost$core$Int $tmp546 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:114:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp547 = &(&local2)->$rawValue;
*$tmp547 = $tmp546;
org$frostlang$frostc$Type$Kind $tmp548 = *(&local2);
*(&local1) = $tmp548;
org$frostlang$frostc$Type$Kind $tmp549 = *(&local1);
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
if ($tmp555) goto block2; else goto block3;
block3:;
frost$core$Int $tmp556 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s557, $tmp556);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp550)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp545)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:115
$fn559 $tmp558 = ($fn559) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp560 = $tmp558(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:115:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp561 = &$tmp560->_subtypes;
org$frostlang$frostc$FixedArray* $tmp562 = *$tmp561;
frost$core$Bit $tmp563 = (frost$core$Bit) {$tmp562 != NULL};
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block5; else goto block6;
block6:;
frost$core$Int $tmp565 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s566, $tmp565, &$s567);
abort(); // unreachable
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
ITable* $tmp568 = ((frost$collections$CollectionView*) $tmp562)->$class->itable;
while ($tmp568->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp568 = $tmp568->next;
}
$fn570 $tmp569 = $tmp568->methods[0];
frost$core$Int $tmp571 = $tmp569(((frost$collections$CollectionView*) $tmp562));
frost$core$Int $tmp572 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:115:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp573 = $tmp571.value;
int64_t $tmp574 = $tmp572.value;
bool $tmp575 = $tmp573 == $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block8; else goto block9;
block9:;
frost$core$Int $tmp578 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s579, $tmp578);
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:116
$fn581 $tmp580 = ($fn581) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp582 = $tmp580(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:116:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp583 = &$tmp582->_subtypes;
org$frostlang$frostc$FixedArray* $tmp584 = *$tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584 != NULL};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block11; else goto block12;
block12:;
frost$core$Int $tmp587 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s588, $tmp587, &$s589);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$Int $tmp590 = (frost$core$Int) {0u};
frost$core$Object* $tmp591 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp584, $tmp590);
frost$core$String** $tmp592 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp591))->name;
frost$core$String* $tmp593 = *$tmp592;
frost$core$Bit $tmp594 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp593, &$s595);
bool $tmp596 = $tmp594.value;
if ($tmp596) goto block13; else goto block14;
block14:;
frost$core$Int $tmp597 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s598, $tmp597);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp591);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:117
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:118
org$frostlang$frostc$Variable$Storage** $tmp599 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp600 = *$tmp599;
frost$core$Int* $tmp601 = &$tmp600->$rawValue;
frost$core$Int $tmp602 = *$tmp601;
frost$core$Int $tmp603 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:119:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603.value;
bool $tmp606 = $tmp604 == $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block16; else goto block17;
block16:;
frost$core$Int* $tmp609 = (frost$core$Int*) ($tmp600->$data + 0);
frost$core$Int $tmp610 = *$tmp609;
*(&local4) = $tmp610;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:120
frost$core$Int $tmp611 = *(&local4);
*(&local3) = $tmp611;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:126
org$frostlang$frostc$Type** $tmp612 = &param3->type;
org$frostlang$frostc$Type* $tmp613 = *$tmp612;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
org$frostlang$frostc$Type* $tmp614 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local5) = $tmp613;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:127
org$frostlang$frostc$Type* $tmp615 = *(&local5);
org$frostlang$frostc$Type* $tmp616 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp615);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
org$frostlang$frostc$Type* $tmp617 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local6) = $tmp616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:129
$fn619 $tmp618 = ($fn619) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp620 = $tmp618(param4);
org$frostlang$frostc$ClassDecl* $tmp621 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp620);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
org$frostlang$frostc$ClassDecl* $tmp622 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local7) = $tmp621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:130
org$frostlang$frostc$ClassDecl* $tmp623 = *(&local7);
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623 == NULL};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block19; else goto block20;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:123
frost$core$Int $tmp626 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s627, $tmp626);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:131
org$frostlang$frostc$ClassDecl* $tmp628 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp629 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp630 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp631 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:133
org$frostlang$frostc$ClassDecl* $tmp632 = *(&local7);
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632 != NULL};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block21; else goto block22;
block22:;
frost$core$Int $tmp635 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s636, $tmp635, &$s637);
abort(); // unreachable
block21:;
frost$collections$ListView* $tmp638 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp632);
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$collections$ListView* $tmp639 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local8) = $tmp638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:136
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp640 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp641 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp642 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp643 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp644 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp645 = *(&local8);
frost$core$Int $tmp646 = (frost$core$Int) {0u};
ITable* $tmp647 = $tmp645->$class->itable;
while ($tmp647->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp647 = $tmp647->next;
}
$fn649 $tmp648 = $tmp647->methods[0];
frost$core$Object* $tmp650 = $tmp648($tmp645, $tmp646);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp643, $tmp644, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp650));
$fn652 $tmp651 = ($fn652) $tmp642->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp653 = $tmp651($tmp642, $tmp643);
$fn655 $tmp654 = ($fn655) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp656 = $tmp654(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:138:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp657 = &$tmp656->_subtypes;
org$frostlang$frostc$FixedArray* $tmp658 = *$tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658 != NULL};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block24; else goto block25;
block25:;
frost$core$Int $tmp661 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s662, $tmp661, &$s663);
abort(); // unreachable
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Int $tmp664 = (frost$core$Int) {1u};
frost$core$Object* $tmp665 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp658, $tmp664);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp640, $tmp641, $tmp653, ((org$frostlang$frostc$Type*) $tmp665));
org$frostlang$frostc$Type* $tmp666 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:136:54
org$frostlang$frostc$Type** $tmp667 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp668 = *$tmp667;
ITable* $tmp669 = ((frost$core$Equatable*) $tmp666)->$class->itable;
while ($tmp669->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp669 = $tmp669->next;
}
$fn671 $tmp670 = $tmp669->methods[1];
frost$core$Bit $tmp672 = $tmp670(((frost$core$Equatable*) $tmp666), ((frost$core$Equatable*) $tmp668));
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block27; else goto block28;
block28:;
frost$core$Int $tmp674 = (frost$core$Int) {4128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s675, $tmp674, &$s676);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4129
frost$core$Bit $tmp677 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp678 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp640, $tmp666, $tmp677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
org$frostlang$frostc$Type* $tmp679 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp680 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp678, $tmp679);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
org$frostlang$frostc$IR$Value* $tmp681 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local9) = $tmp680;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q($tmp665);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q($tmp650);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:139
org$frostlang$frostc$IR$Value* $tmp682 = *(&local9);
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp682 == NULL};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:140
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
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:144
org$frostlang$frostc$IR* $tmp691 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp692 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp693 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp694 = *(&local9);
frost$core$Bit $tmp695 = (frost$core$Bit) {$tmp694 != NULL};
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block31; else goto block32;
block32:;
frost$core$Int $tmp697 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s698, $tmp697, &$s699);
abort(); // unreachable
block31:;
org$frostlang$frostc$Type* $tmp700 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp701 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp694, $tmp700);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp702 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp703 = (frost$core$Int) {2u};
frost$core$Int $tmp704 = *(&local3);
org$frostlang$frostc$Type* $tmp705 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp702, $tmp703, $tmp704, $tmp705);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp692, $tmp693, param1, $tmp701, $tmp702);
$fn707 $tmp706 = ($fn707) $tmp691->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp708 = $tmp706($tmp691, $tmp692);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:148
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp709 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp710 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp711 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp712 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp713 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp714 = *(&local8);
frost$core$Int $tmp715 = (frost$core$Int) {1u};
ITable* $tmp716 = $tmp714->$class->itable;
while ($tmp716->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp716 = $tmp716->next;
}
$fn718 $tmp717 = $tmp716->methods[0];
frost$core$Object* $tmp719 = $tmp717($tmp714, $tmp715);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp712, $tmp713, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp719));
$fn721 $tmp720 = ($fn721) $tmp711->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp722 = $tmp720($tmp711, $tmp712);
$fn724 $tmp723 = ($fn724) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp725 = $tmp723(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:150:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp726 = &$tmp725->_subtypes;
org$frostlang$frostc$FixedArray* $tmp727 = *$tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727 != NULL};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block34; else goto block35;
block35:;
frost$core$Int $tmp730 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s731, $tmp730, &$s732);
abort(); // unreachable
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Int $tmp733 = (frost$core$Int) {1u};
frost$core$Object* $tmp734 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp727, $tmp733);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp709, $tmp710, $tmp722, ((org$frostlang$frostc$Type*) $tmp734));
org$frostlang$frostc$Type* $tmp735 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:148:52
org$frostlang$frostc$Type** $tmp736 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp737 = *$tmp736;
ITable* $tmp738 = ((frost$core$Equatable*) $tmp735)->$class->itable;
while ($tmp738->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp738 = $tmp738->next;
}
$fn740 $tmp739 = $tmp738->methods[1];
frost$core$Bit $tmp741 = $tmp739(((frost$core$Equatable*) $tmp735), ((frost$core$Equatable*) $tmp737));
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block37; else goto block38;
block38:;
frost$core$Int $tmp743 = (frost$core$Int) {4128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s744, $tmp743, &$s745);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4129
frost$core$Bit $tmp746 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp747 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp709, $tmp735, $tmp746);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
org$frostlang$frostc$Type* $tmp748 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp749 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp747, $tmp748);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
org$frostlang$frostc$IR$Value* $tmp750 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local10) = $tmp749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q($tmp734);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q($tmp719);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:151
org$frostlang$frostc$IR$Value* $tmp751 = *(&local10);
frost$core$Bit $tmp752 = (frost$core$Bit) {$tmp751 == NULL};
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:152
org$frostlang$frostc$IR$Value* $tmp754 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp755 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp756 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp757 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp758 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp759 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp760 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:156
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp761 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp762 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp763 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp764 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp765 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp766 = *(&local8);
frost$core$Int $tmp767 = (frost$core$Int) {2u};
ITable* $tmp768 = $tmp766->$class->itable;
while ($tmp768->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp768 = $tmp768->next;
}
$fn770 $tmp769 = $tmp768->methods[0];
frost$core$Object* $tmp771 = $tmp769($tmp766, $tmp767);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp764, $tmp765, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp771));
$fn773 $tmp772 = ($fn773) $tmp763->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp774 = $tmp772($tmp763, $tmp764);
org$frostlang$frostc$Type** $tmp775 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp776 = *$tmp775;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp761, $tmp762, $tmp774, $tmp776);
org$frostlang$frostc$IR$Value* $tmp777 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp761);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
org$frostlang$frostc$IR$Value* $tmp778 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local11) = $tmp777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q($tmp771);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:159
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp779 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp780 = (frost$core$Int) {25u};
frost$core$UInt64 $tmp781 = (frost$core$UInt64) {1u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp779, $tmp780, param1, $tmp781);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp782 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp783 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp784 = *(&local6);
frost$core$Bit $tmp785 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp782, $tmp783, $tmp784, $tmp785);
org$frostlang$frostc$IR$Value* $tmp786 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp779, $tmp782);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
org$frostlang$frostc$IR$Value* $tmp787 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
*(&local12) = $tmp786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:161
org$frostlang$frostc$IR$Value* $tmp788 = *(&local12);
frost$core$Bit $tmp789 = (frost$core$Bit) {$tmp788 == NULL};
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:162
org$frostlang$frostc$IR$Value* $tmp791 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp792 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp793 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp794 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp795 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp796 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp797 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp798 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp799 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:164
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:165
org$frostlang$frostc$IR$Value* $tmp800 = *(&local12);
frost$core$Bit $tmp801 = (frost$core$Bit) {$tmp800 != NULL};
bool $tmp802 = $tmp801.value;
if ($tmp802) goto block46; else goto block47;
block47:;
frost$core$Int $tmp803 = (frost$core$Int) {165u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s804, $tmp803, &$s805);
abort(); // unreachable
block46:;
$fn807 $tmp806 = ($fn807) $tmp800->$class->vtable[2];
org$frostlang$frostc$Type* $tmp808 = $tmp806($tmp800);
org$frostlang$frostc$Type** $tmp809 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp810 = *$tmp809;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:165:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp811 = &((org$frostlang$frostc$Symbol*) $tmp808)->name;
frost$core$String* $tmp812 = *$tmp811;
frost$core$String** $tmp813 = &((org$frostlang$frostc$Symbol*) $tmp810)->name;
frost$core$String* $tmp814 = *$tmp813;
frost$core$Bit $tmp815 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp812, $tmp814);
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Type$Kind* $tmp817 = &$tmp808->typeKind;
org$frostlang$frostc$Type$Kind $tmp818 = *$tmp817;
org$frostlang$frostc$Type$Kind$wrapper* $tmp819;
$tmp819 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp819->value = $tmp818;
org$frostlang$frostc$Type$Kind* $tmp820 = &$tmp810->typeKind;
org$frostlang$frostc$Type$Kind $tmp821 = *$tmp820;
org$frostlang$frostc$Type$Kind$wrapper* $tmp822;
$tmp822 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp822->value = $tmp821;
ITable* $tmp823 = ((frost$core$Equatable*) $tmp819)->$class->itable;
while ($tmp823->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp823 = $tmp823->next;
}
$fn825 $tmp824 = $tmp823->methods[0];
frost$core$Bit $tmp826 = $tmp824(((frost$core$Equatable*) $tmp819), ((frost$core$Equatable*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp822)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp819)));
*(&local14) = $tmp826;
goto block51;
block50:;
*(&local14) = $tmp815;
goto block51;
block51:;
frost$core$Bit $tmp827 = *(&local14);
bool $tmp828 = $tmp827.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
if ($tmp828) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:166
org$frostlang$frostc$IR$Value* $tmp829 = *(&local12);
org$frostlang$frostc$Type** $tmp830 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp831 = *$tmp830;
org$frostlang$frostc$IR$Value* $tmp832 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp829, $tmp831);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
org$frostlang$frostc$IR$Value* $tmp833 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local13) = $tmp832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:167
org$frostlang$frostc$IR$Value* $tmp834 = *(&local13);
frost$core$Bit $tmp835 = (frost$core$Bit) {$tmp834 == NULL};
bool $tmp836 = $tmp835.value;
if ($tmp836) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:168
org$frostlang$frostc$IR$Value* $tmp837 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp838 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp839 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp840 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp841 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp842 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp843 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp844 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp845 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp846 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block53:;
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:172
org$frostlang$frostc$IR$Value* $tmp847 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
org$frostlang$frostc$IR$Value* $tmp848 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local13) = $tmp847;
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:176
org$frostlang$frostc$IR* $tmp849 = *(&local0);
$fn851 $tmp850 = ($fn851) $tmp849->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp852 = $tmp850($tmp849, &$s853);
*(&local15) = $tmp852;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:177
org$frostlang$frostc$IR* $tmp854 = *(&local0);
$fn856 $tmp855 = ($fn856) $tmp854->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp857 = $tmp855($tmp854, &$s858);
*(&local16) = $tmp857;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:178
org$frostlang$frostc$IR* $tmp859 = *(&local0);
$fn861 $tmp860 = ($fn861) $tmp859->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp862 = $tmp860($tmp859, &$s863);
*(&local17) = $tmp862;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:179
org$frostlang$frostc$IR* $tmp864 = *(&local0);
$fn866 $tmp865 = ($fn866) $tmp864->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp867 = $tmp865($tmp864, &$s868);
*(&local18) = $tmp867;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:180
org$frostlang$frostc$IR* $tmp869 = *(&local0);
$fn871 $tmp870 = ($fn871) $tmp869->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp872 = $tmp870($tmp869, &$s873);
*(&local19) = $tmp872;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:181
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp874 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp875 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp876 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp877 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp878 = *(&local17);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp875, $tmp876, param2, $tmp877, $tmp878);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp874, param0, $tmp875);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
org$frostlang$frostc$Compiler$AutoContext* $tmp879 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local20) = $tmp874;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:183
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp880 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp880, param0);
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
org$frostlang$frostc$Compiler$AutoScope* $tmp881 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local21) = $tmp880;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:184
org$frostlang$frostc$IR* $tmp882 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp883 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp884 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp885 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp886 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp887 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp883, $tmp884, param1, $tmp885, $tmp886, $tmp887);
$fn889 $tmp888 = ($fn889) $tmp882->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp890 = $tmp888($tmp882, $tmp883);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:186
org$frostlang$frostc$IR* $tmp891 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp892 = *(&local18);
$fn894 $tmp893 = ($fn894) $tmp891->$class->vtable[4];
$tmp893($tmp891, $tmp892);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:187
org$frostlang$frostc$IR$Value* $tmp895 = *(&local9);
frost$core$Bit $tmp896 = (frost$core$Bit) {$tmp895 != NULL};
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block54; else goto block55;
block55:;
frost$core$Int $tmp898 = (frost$core$Int) {187u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s899, $tmp898, &$s900);
abort(); // unreachable
block54:;
org$frostlang$frostc$IR$Value* $tmp901 = *(&local10);
frost$core$Bit $tmp902 = (frost$core$Bit) {$tmp901 != NULL};
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block56; else goto block57;
block57:;
frost$core$Int $tmp904 = (frost$core$Int) {187u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s905, $tmp904, &$s906);
abort(); // unreachable
block56:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:187:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp907 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp908 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp907, $tmp908);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp909 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp910 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp911 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp909, $tmp910, $tmp911, $tmp901);
frost$collections$Array$add$frost$collections$Array$T($tmp907, ((frost$core$Object*) $tmp909));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp907)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp912 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp913 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp914 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp915 = *$tmp914;
frost$core$Bit $tmp916 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp912, $tmp913, $tmp915, $tmp916);
org$frostlang$frostc$IR$Value* $tmp917 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp895, &$s918, ((frost$collections$ListView*) $tmp907), $tmp912);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
org$frostlang$frostc$IR$Value* $tmp919 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
*(&local22) = $tmp917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp907)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:189
org$frostlang$frostc$IR$Value* $tmp920 = *(&local22);
frost$core$Bit $tmp921 = (frost$core$Bit) {$tmp920 != NULL};
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block59; else goto block60;
block60:;
frost$core$Int $tmp923 = (frost$core$Int) {189u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s924, $tmp923);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:190
org$frostlang$frostc$IR$Value* $tmp925 = *(&local22);
frost$core$Bit $tmp926 = (frost$core$Bit) {$tmp925 != NULL};
bool $tmp927 = $tmp926.value;
if ($tmp927) goto block61; else goto block62;
block62:;
frost$core$Int $tmp928 = (frost$core$Int) {190u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s929, $tmp928, &$s930);
abort(); // unreachable
block61:;
org$frostlang$frostc$IR$Value* $tmp931 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp925);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
org$frostlang$frostc$IR$Value* $tmp932 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local23) = $tmp931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:191
org$frostlang$frostc$IR* $tmp933 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp934 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp935 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp936 = *(&local23);
org$frostlang$frostc$IR$Block$ID $tmp937 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp938 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp934, $tmp935, param1, $tmp936, $tmp937, $tmp938);
$fn940 $tmp939 = ($fn940) $tmp933->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp941 = $tmp939($tmp933, $tmp934);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:193
org$frostlang$frostc$IR* $tmp942 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp943 = *(&local19);
$fn945 $tmp944 = ($fn945) $tmp942->$class->vtable[4];
$tmp944($tmp942, $tmp943);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:194
org$frostlang$frostc$IR$Value* $tmp946 = *(&local9);
frost$core$Bit $tmp947 = (frost$core$Bit) {$tmp946 != NULL};
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block63; else goto block64;
block64:;
frost$core$Int $tmp949 = (frost$core$Int) {194u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s950, $tmp949, &$s951);
abort(); // unreachable
block63:;
org$frostlang$frostc$IR$Value* $tmp952 = *(&local10);
frost$core$Bit $tmp953 = (frost$core$Bit) {$tmp952 != NULL};
bool $tmp954 = $tmp953.value;
if ($tmp954) goto block65; else goto block66;
block66:;
frost$core$Int $tmp955 = (frost$core$Int) {194u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s956, $tmp955, &$s957);
abort(); // unreachable
block65:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:194:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp958 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp959 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp958, $tmp959);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp960 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp961 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp962 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp960, $tmp961, $tmp962, $tmp952);
frost$collections$Array$add$frost$collections$Array$T($tmp958, ((frost$core$Object*) $tmp960));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp958)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp963 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp964 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp965 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp966 = *$tmp965;
frost$core$Bit $tmp967 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp963, $tmp964, $tmp966, $tmp967);
org$frostlang$frostc$IR$Value* $tmp968 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp946, &$s969, ((frost$collections$ListView*) $tmp958), $tmp963);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
org$frostlang$frostc$IR$Value* $tmp970 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local24) = $tmp968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp958)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:196
org$frostlang$frostc$IR$Value* $tmp971 = *(&local24);
frost$core$Bit $tmp972 = (frost$core$Bit) {$tmp971 != NULL};
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block68; else goto block69;
block69:;
frost$core$Int $tmp974 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s975, $tmp974);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:197
org$frostlang$frostc$IR$Value* $tmp976 = *(&local24);
frost$core$Bit $tmp977 = (frost$core$Bit) {$tmp976 != NULL};
bool $tmp978 = $tmp977.value;
if ($tmp978) goto block70; else goto block71;
block71:;
frost$core$Int $tmp979 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s980, $tmp979, &$s981);
abort(); // unreachable
block70:;
org$frostlang$frostc$IR$Value* $tmp982 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp976);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
org$frostlang$frostc$IR$Value* $tmp983 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local25) = $tmp982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:198
org$frostlang$frostc$IR* $tmp984 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp985 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp986 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp987 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp988 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp989 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp985, $tmp986, param1, $tmp987, $tmp988, $tmp989);
$fn991 $tmp990 = ($fn991) $tmp984->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp992 = $tmp990($tmp984, $tmp985);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:200
org$frostlang$frostc$IR* $tmp993 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp994 = *(&local15);
$fn996 $tmp995 = ($fn996) $tmp993->$class->vtable[4];
$tmp995($tmp993, $tmp994);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:201
ITable* $tmp997 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp997->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp997 = $tmp997->next;
}
$fn999 $tmp998 = $tmp997->methods[0];
frost$collections$Iterator* $tmp1000 = $tmp998(((frost$collections$Iterable*) param5));
goto block72;
block72:;
ITable* $tmp1001 = $tmp1000->$class->itable;
while ($tmp1001->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1001 = $tmp1001->next;
}
$fn1003 $tmp1002 = $tmp1001->methods[0];
frost$core$Bit $tmp1004 = $tmp1002($tmp1000);
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block74; else goto block73;
block73:;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1006 = $tmp1000->$class->itable;
while ($tmp1006->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1006 = $tmp1006->next;
}
$fn1008 $tmp1007 = $tmp1006->methods[1];
frost$core$Object* $tmp1009 = $tmp1007($tmp1000);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1009)));
org$frostlang$frostc$ASTNode* $tmp1010 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
*(&local26) = ((org$frostlang$frostc$ASTNode*) $tmp1009);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:202
org$frostlang$frostc$ASTNode* $tmp1011 = *(&local26);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1011);
frost$core$Frost$unref$frost$core$Object$Q($tmp1009);
org$frostlang$frostc$ASTNode* $tmp1012 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block72;
block74:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
org$frostlang$frostc$IR$Value* $tmp1013 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1014 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1015 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1016 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1017 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:205
org$frostlang$frostc$IR* $tmp1018 = *(&local0);
$fn1020 $tmp1019 = ($fn1020) $tmp1018->$class->vtable[5];
frost$core$Bit $tmp1021 = $tmp1019($tmp1018);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:205:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1022 = $tmp1021.value;
bool $tmp1023 = !$tmp1022;
frost$core$Bit $tmp1024 = (frost$core$Bit) {$tmp1023};
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:206
org$frostlang$frostc$IR* $tmp1026 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1027 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1028 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1029 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1027, $tmp1028, param1, $tmp1029);
$fn1031 $tmp1030 = ($fn1031) $tmp1026->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1032 = $tmp1030($tmp1026, $tmp1027);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
goto block76;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:208
org$frostlang$frostc$IR* $tmp1033 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1034 = *(&local17);
$fn1036 $tmp1035 = ($fn1036) $tmp1033->$class->vtable[4];
$tmp1035($tmp1033, $tmp1034);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:209
org$frostlang$frostc$IR* $tmp1037 = *(&local0);
$fn1039 $tmp1038 = ($fn1039) $tmp1037->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1040 = $tmp1038($tmp1037, &$s1041);
*(&local27) = $tmp1040;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:212
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1042 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1043 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1044 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1045 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1046 = (frost$core$Int) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1047 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1048 = (frost$core$Int) {2u};
frost$core$Int $tmp1049 = *(&local3);
org$frostlang$frostc$Type* $tmp1050 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp1047, $tmp1048, $tmp1049, $tmp1050);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1045, $tmp1046, param1, $tmp1047);
$fn1052 $tmp1051 = ($fn1052) $tmp1044->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1053 = $tmp1051($tmp1044, $tmp1045);
org$frostlang$frostc$Type* $tmp1054 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1042, $tmp1043, $tmp1053, $tmp1054);
org$frostlang$frostc$Type* $tmp1055 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1056 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1042, $tmp1055);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
org$frostlang$frostc$IR$Value* $tmp1057 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local28) = $tmp1056;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:214
org$frostlang$frostc$IR$Value* $tmp1058 = *(&local28);
frost$core$Bit $tmp1059 = (frost$core$Bit) {$tmp1058 != NULL};
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block78; else goto block79;
block79:;
frost$core$Int $tmp1061 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1062, $tmp1061);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:217
org$frostlang$frostc$IR$Value* $tmp1063 = *(&local10);
frost$core$Bit $tmp1064 = (frost$core$Bit) {$tmp1063 != NULL};
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block80; else goto block81;
block81:;
frost$core$Int $tmp1066 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1067, $tmp1066, &$s1068);
abort(); // unreachable
block80:;
org$frostlang$frostc$IR$Value* $tmp1069 = *(&local28);
frost$core$Bit $tmp1070 = (frost$core$Bit) {$tmp1069 != NULL};
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block82; else goto block83;
block83:;
frost$core$Int $tmp1072 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1073, $tmp1072, &$s1074);
abort(); // unreachable
block82:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:217:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1075 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1076 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1075, $tmp1076);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1077 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1078 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1079 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1077, $tmp1078, $tmp1079, $tmp1069);
frost$collections$Array$add$frost$collections$Array$T($tmp1075, ((frost$core$Object*) $tmp1077));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1075)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1080 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1081 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1080, $tmp1081);
org$frostlang$frostc$IR$Value* $tmp1082 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1063, &$s1083, ((frost$collections$ListView*) $tmp1075), $tmp1080);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
org$frostlang$frostc$IR$Value* $tmp1084 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local29) = $tmp1082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1075)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:218
org$frostlang$frostc$IR$Value* $tmp1085 = *(&local29);
frost$core$Bit $tmp1086 = (frost$core$Bit) {$tmp1085 != NULL};
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block85; else goto block86;
block86:;
frost$core$Int $tmp1088 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1089, $tmp1088);
abort(); // unreachable
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:219
org$frostlang$frostc$IR$Value* $tmp1090 = *(&local29);
org$frostlang$frostc$Type* $tmp1091 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:219:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1092 = &$tmp1091->typeKind;
org$frostlang$frostc$Type$Kind $tmp1093 = *$tmp1092;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1094;
$tmp1094 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1094->value = $tmp1093;
frost$core$Int $tmp1095 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp1096 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp1095);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1097;
$tmp1097 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1097->value = $tmp1096;
ITable* $tmp1098 = ((frost$core$Equatable*) $tmp1094)->$class->itable;
while ($tmp1098->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1098 = $tmp1098->next;
}
$fn1100 $tmp1099 = $tmp1098->methods[1];
frost$core$Bit $tmp1101 = $tmp1099(((frost$core$Equatable*) $tmp1094), ((frost$core$Equatable*) $tmp1097));
bool $tmp1102 = $tmp1101.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1097)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1094)));
if ($tmp1102) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local31) = $tmp1091;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
goto block88;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp1103 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1091);
frost$core$Int $tmp1104 = (frost$core$Int) {0u};
frost$core$Object* $tmp1105 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1103, $tmp1104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1105)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local31) = ((org$frostlang$frostc$Type*) $tmp1105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1105)));
goto block88;
block88:;
org$frostlang$frostc$Type* $tmp1106 = *(&local31);
org$frostlang$frostc$Type** $tmp1107 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp1108 = *$tmp1107;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1109 = &((org$frostlang$frostc$Symbol*) $tmp1106)->name;
frost$core$String* $tmp1110 = *$tmp1109;
frost$core$String** $tmp1111 = &((org$frostlang$frostc$Symbol*) $tmp1108)->name;
frost$core$String* $tmp1112 = *$tmp1111;
frost$core$Bit $tmp1113 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1110, $tmp1112);
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Type$Kind* $tmp1115 = &$tmp1106->typeKind;
org$frostlang$frostc$Type$Kind $tmp1116 = *$tmp1115;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1117;
$tmp1117 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1117->value = $tmp1116;
org$frostlang$frostc$Type$Kind* $tmp1118 = &$tmp1108->typeKind;
org$frostlang$frostc$Type$Kind $tmp1119 = *$tmp1118;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1120;
$tmp1120 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1120->value = $tmp1119;
ITable* $tmp1121 = ((frost$core$Equatable*) $tmp1117)->$class->itable;
while ($tmp1121->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1121 = $tmp1121->next;
}
$fn1123 $tmp1122 = $tmp1121->methods[0];
frost$core$Bit $tmp1124 = $tmp1122(((frost$core$Equatable*) $tmp1117), ((frost$core$Equatable*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1120)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1117)));
*(&local32) = $tmp1124;
goto block97;
block96:;
*(&local32) = $tmp1113;
goto block97;
block97:;
frost$core$Bit $tmp1125 = *(&local32);
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp1127 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp1128 = *$tmp1127;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
org$frostlang$frostc$Type* $tmp1129 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1128;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
goto block87;
block93:;
org$frostlang$frostc$Type** $tmp1130 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp1131 = *$tmp1130;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1132 = &((org$frostlang$frostc$Symbol*) $tmp1106)->name;
frost$core$String* $tmp1133 = *$tmp1132;
frost$core$String** $tmp1134 = &((org$frostlang$frostc$Symbol*) $tmp1131)->name;
frost$core$String* $tmp1135 = *$tmp1134;
frost$core$Bit $tmp1136 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1133, $tmp1135);
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Type$Kind* $tmp1138 = &$tmp1106->typeKind;
org$frostlang$frostc$Type$Kind $tmp1139 = *$tmp1138;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1140;
$tmp1140 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1140->value = $tmp1139;
org$frostlang$frostc$Type$Kind* $tmp1141 = &$tmp1131->typeKind;
org$frostlang$frostc$Type$Kind $tmp1142 = *$tmp1141;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1143;
$tmp1143 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1143->value = $tmp1142;
ITable* $tmp1144 = ((frost$core$Equatable*) $tmp1140)->$class->itable;
while ($tmp1144->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1144 = $tmp1144->next;
}
$fn1146 $tmp1145 = $tmp1144->methods[0];
frost$core$Bit $tmp1147 = $tmp1145(((frost$core$Equatable*) $tmp1140), ((frost$core$Equatable*) $tmp1143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1143)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1140)));
*(&local33) = $tmp1147;
goto block103;
block102:;
*(&local33) = $tmp1136;
goto block103;
block103:;
frost$core$Bit $tmp1148 = *(&local33);
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp1150 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp1151 = *$tmp1150;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
org$frostlang$frostc$Type* $tmp1152 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1151;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
goto block87;
block99:;
org$frostlang$frostc$Type** $tmp1153 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp1154 = *$tmp1153;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1155 = &((org$frostlang$frostc$Symbol*) $tmp1106)->name;
frost$core$String* $tmp1156 = *$tmp1155;
frost$core$String** $tmp1157 = &((org$frostlang$frostc$Symbol*) $tmp1154)->name;
frost$core$String* $tmp1158 = *$tmp1157;
frost$core$Bit $tmp1159 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1156, $tmp1158);
bool $tmp1160 = $tmp1159.value;
if ($tmp1160) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Type$Kind* $tmp1161 = &$tmp1106->typeKind;
org$frostlang$frostc$Type$Kind $tmp1162 = *$tmp1161;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1163;
$tmp1163 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1163->value = $tmp1162;
org$frostlang$frostc$Type$Kind* $tmp1164 = &$tmp1154->typeKind;
org$frostlang$frostc$Type$Kind $tmp1165 = *$tmp1164;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1166;
$tmp1166 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1166->value = $tmp1165;
ITable* $tmp1167 = ((frost$core$Equatable*) $tmp1163)->$class->itable;
while ($tmp1167->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1167 = $tmp1167->next;
}
$fn1169 $tmp1168 = $tmp1167->methods[0];
frost$core$Bit $tmp1170 = $tmp1168(((frost$core$Equatable*) $tmp1163), ((frost$core$Equatable*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1166)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1163)));
*(&local34) = $tmp1170;
goto block109;
block108:;
*(&local34) = $tmp1159;
goto block109;
block109:;
frost$core$Bit $tmp1171 = *(&local34);
bool $tmp1172 = $tmp1171.value;
if ($tmp1172) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp1173 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp1174 = *$tmp1173;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
org$frostlang$frostc$Type* $tmp1175 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1174;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
goto block87;
block105:;
org$frostlang$frostc$Type** $tmp1176 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1177 = *$tmp1176;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1178 = &((org$frostlang$frostc$Symbol*) $tmp1106)->name;
frost$core$String* $tmp1179 = *$tmp1178;
frost$core$String** $tmp1180 = &((org$frostlang$frostc$Symbol*) $tmp1177)->name;
frost$core$String* $tmp1181 = *$tmp1180;
frost$core$Bit $tmp1182 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1179, $tmp1181);
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Type$Kind* $tmp1184 = &$tmp1106->typeKind;
org$frostlang$frostc$Type$Kind $tmp1185 = *$tmp1184;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1186;
$tmp1186 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1186->value = $tmp1185;
org$frostlang$frostc$Type$Kind* $tmp1187 = &$tmp1177->typeKind;
org$frostlang$frostc$Type$Kind $tmp1188 = *$tmp1187;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1189;
$tmp1189 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1189->value = $tmp1188;
ITable* $tmp1190 = ((frost$core$Equatable*) $tmp1186)->$class->itable;
while ($tmp1190->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1190 = $tmp1190->next;
}
$fn1192 $tmp1191 = $tmp1190->methods[0];
frost$core$Bit $tmp1193 = $tmp1191(((frost$core$Equatable*) $tmp1186), ((frost$core$Equatable*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1189)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1186)));
*(&local35) = $tmp1193;
goto block115;
block114:;
*(&local35) = $tmp1182;
goto block115;
block115:;
frost$core$Bit $tmp1194 = *(&local35);
bool $tmp1195 = $tmp1194.value;
if ($tmp1195) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp1196 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1197 = *$tmp1196;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
org$frostlang$frostc$Type* $tmp1198 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1197;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
goto block87;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
org$frostlang$frostc$Type* $tmp1199 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1091;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
goto block87;
block91:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
org$frostlang$frostc$Type* $tmp1200 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
goto block87;
block87:;
org$frostlang$frostc$Type* $tmp1201 = *(&local30);
org$frostlang$frostc$IR$Value* $tmp1202 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1090, $tmp1201);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
org$frostlang$frostc$IR$Value* $tmp1203 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local36) = $tmp1202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:220
org$frostlang$frostc$IR$Value* $tmp1204 = *(&local36);
frost$core$Bit $tmp1205 = (frost$core$Bit) {$tmp1204 != NULL};
bool $tmp1206 = $tmp1205.value;
if ($tmp1206) goto block116; else goto block117;
block117:;
frost$core$Int $tmp1207 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1208, $tmp1207);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:222
org$frostlang$frostc$IR* $tmp1209 = *(&local0);
$fn1211 $tmp1210 = ($fn1211) $tmp1209->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1212 = $tmp1210($tmp1209, &$s1213);
*(&local37) = $tmp1212;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:223
org$frostlang$frostc$IR* $tmp1214 = *(&local0);
$fn1216 $tmp1215 = ($fn1216) $tmp1214->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1217 = $tmp1215($tmp1214, &$s1218);
*(&local38) = $tmp1217;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:224
org$frostlang$frostc$IR* $tmp1219 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1220 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1221 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1222 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp1223 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1224 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1220, $tmp1221, param1, $tmp1222, $tmp1223, $tmp1224);
$fn1226 $tmp1225 = ($fn1226) $tmp1219->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1227 = $tmp1225($tmp1219, $tmp1220);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:227
org$frostlang$frostc$IR* $tmp1228 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1229 = *(&local37);
$fn1231 $tmp1230 = ($fn1231) $tmp1228->$class->vtable[4];
$tmp1230($tmp1228, $tmp1229);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:228
org$frostlang$frostc$IR$Value* $tmp1232 = *(&local36);
frost$core$Bit $tmp1233 = (frost$core$Bit) {$tmp1232 != NULL};
bool $tmp1234 = $tmp1233.value;
if ($tmp1234) goto block118; else goto block119;
block119:;
frost$core$Int $tmp1235 = (frost$core$Int) {228u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1236, $tmp1235, &$s1237);
abort(); // unreachable
block118:;
org$frostlang$frostc$IR$Value* $tmp1238 = *(&local13);
frost$core$Bit $tmp1239 = (frost$core$Bit) {$tmp1238 != NULL};
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block120; else goto block121;
block121:;
frost$core$Int $tmp1241 = (frost$core$Int) {228u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1242, $tmp1241, &$s1243);
abort(); // unreachable
block120:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:228:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1244 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1245 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1244, $tmp1245);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1246 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1247 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1248 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1246, $tmp1247, $tmp1248, $tmp1238);
frost$collections$Array$add$frost$collections$Array$T($tmp1244, ((frost$core$Object*) $tmp1246));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1244)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1249 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1250 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1251 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1252 = *$tmp1251;
frost$core$Bit $tmp1253 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1249, $tmp1250, $tmp1252, $tmp1253);
org$frostlang$frostc$IR$Value* $tmp1254 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1232, &$s1255, ((frost$collections$ListView*) $tmp1244), $tmp1249);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
org$frostlang$frostc$IR$Value* $tmp1256 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local39) = $tmp1254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1244)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:230
org$frostlang$frostc$IR$Value* $tmp1257 = *(&local39);
frost$core$Bit $tmp1258 = (frost$core$Bit) {$tmp1257 != NULL};
bool $tmp1259 = $tmp1258.value;
if ($tmp1259) goto block123; else goto block124;
block124:;
frost$core$Int $tmp1260 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1261, $tmp1260);
abort(); // unreachable
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:231
org$frostlang$frostc$IR$Value* $tmp1262 = *(&local39);
frost$core$Bit $tmp1263 = (frost$core$Bit) {$tmp1262 != NULL};
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block125; else goto block126;
block126:;
frost$core$Int $tmp1265 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1266, $tmp1265, &$s1267);
abort(); // unreachable
block125:;
org$frostlang$frostc$IR$Value* $tmp1268 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1262);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
org$frostlang$frostc$IR$Value* $tmp1269 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
*(&local40) = $tmp1268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:232
org$frostlang$frostc$IR* $tmp1270 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1271 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1272 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1273 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1274 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1275 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1271, $tmp1272, param1, $tmp1273, $tmp1274, $tmp1275);
$fn1277 $tmp1276 = ($fn1277) $tmp1270->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1278 = $tmp1276($tmp1270, $tmp1271);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:235
org$frostlang$frostc$IR* $tmp1279 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1280 = *(&local38);
$fn1282 $tmp1281 = ($fn1282) $tmp1279->$class->vtable[4];
$tmp1281($tmp1279, $tmp1280);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:236
org$frostlang$frostc$IR$Value* $tmp1283 = *(&local36);
frost$core$Bit $tmp1284 = (frost$core$Bit) {$tmp1283 != NULL};
bool $tmp1285 = $tmp1284.value;
if ($tmp1285) goto block127; else goto block128;
block128:;
frost$core$Int $tmp1286 = (frost$core$Int) {236u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1287, $tmp1286, &$s1288);
abort(); // unreachable
block127:;
org$frostlang$frostc$IR$Value* $tmp1289 = *(&local13);
frost$core$Bit $tmp1290 = (frost$core$Bit) {$tmp1289 != NULL};
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block129; else goto block130;
block130:;
frost$core$Int $tmp1292 = (frost$core$Int) {236u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1293, $tmp1292, &$s1294);
abort(); // unreachable
block129:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:236:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1295 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1296 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1295, $tmp1296);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1297 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1298 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1299 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1297, $tmp1298, $tmp1299, $tmp1289);
frost$collections$Array$add$frost$collections$Array$T($tmp1295, ((frost$core$Object*) $tmp1297));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1295)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1300 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1301 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1302 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1303 = *$tmp1302;
frost$core$Bit $tmp1304 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1300, $tmp1301, $tmp1303, $tmp1304);
org$frostlang$frostc$IR$Value* $tmp1305 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1283, &$s1306, ((frost$collections$ListView*) $tmp1295), $tmp1300);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
org$frostlang$frostc$IR$Value* $tmp1307 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local41) = $tmp1305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1295)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:238
org$frostlang$frostc$IR$Value* $tmp1308 = *(&local41);
frost$core$Bit $tmp1309 = (frost$core$Bit) {$tmp1308 != NULL};
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block132; else goto block133;
block133:;
frost$core$Int $tmp1311 = (frost$core$Int) {238u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1312, $tmp1311);
abort(); // unreachable
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:239
org$frostlang$frostc$IR$Value* $tmp1313 = *(&local41);
frost$core$Bit $tmp1314 = (frost$core$Bit) {$tmp1313 != NULL};
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block134; else goto block135;
block135:;
frost$core$Int $tmp1316 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1317, $tmp1316, &$s1318);
abort(); // unreachable
block134:;
org$frostlang$frostc$IR$Value* $tmp1319 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1313);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
org$frostlang$frostc$IR$Value* $tmp1320 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local42) = $tmp1319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:240
org$frostlang$frostc$IR* $tmp1321 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1322 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1323 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp1324 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1325 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1326 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1322, $tmp1323, param1, $tmp1324, $tmp1325, $tmp1326);
$fn1328 $tmp1327 = ($fn1328) $tmp1321->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1329 = $tmp1327($tmp1321, $tmp1322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:242
org$frostlang$frostc$IR* $tmp1330 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1331 = *(&local27);
$fn1333 $tmp1332 = ($fn1333) $tmp1330->$class->vtable[4];
$tmp1332($tmp1330, $tmp1331);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:243
org$frostlang$frostc$IR$Value* $tmp1334 = *(&local28);
frost$core$Bit $tmp1335 = (frost$core$Bit) {$tmp1334 != NULL};
bool $tmp1336 = $tmp1335.value;
if ($tmp1336) goto block136; else goto block137;
block137:;
frost$core$Int $tmp1337 = (frost$core$Int) {243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1338, $tmp1337, &$s1339);
abort(); // unreachable
block136:;
org$frostlang$frostc$IR$Value* $tmp1340 = *(&local12);
frost$core$Bit $tmp1341 = (frost$core$Bit) {$tmp1340 != NULL};
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block138; else goto block139;
block139:;
frost$core$Int $tmp1343 = (frost$core$Int) {243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1344, $tmp1343, &$s1345);
abort(); // unreachable
block138:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:243:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1346 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1347 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1346, $tmp1347);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1348 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1349 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1350 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1348, $tmp1349, $tmp1350, $tmp1340);
frost$collections$Array$add$frost$collections$Array$T($tmp1346, ((frost$core$Object*) $tmp1348));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1346)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1351 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1352 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1351, $tmp1352);
org$frostlang$frostc$IR$Value* $tmp1353 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1334, &$s1354, ((frost$collections$ListView*) $tmp1346), $tmp1351);
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
org$frostlang$frostc$IR$Value* $tmp1355 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local43) = $tmp1353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1346)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:244
org$frostlang$frostc$IR$Value* $tmp1356 = *(&local43);
frost$core$Bit $tmp1357 = (frost$core$Bit) {$tmp1356 != NULL};
bool $tmp1358 = $tmp1357.value;
if ($tmp1358) goto block141; else goto block142;
block142:;
frost$core$Int $tmp1359 = (frost$core$Int) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1360, $tmp1359);
abort(); // unreachable
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:245
org$frostlang$frostc$IR$Value* $tmp1361 = *(&local43);
org$frostlang$frostc$Type* $tmp1362 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1363 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1361, $tmp1362);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
org$frostlang$frostc$IR$Value* $tmp1364 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local44) = $tmp1363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:246
org$frostlang$frostc$IR$Value* $tmp1365 = *(&local44);
frost$core$Bit $tmp1366 = (frost$core$Bit) {$tmp1365 != NULL};
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block143; else goto block144;
block144:;
frost$core$Int $tmp1368 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1369, $tmp1368);
abort(); // unreachable
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:247
org$frostlang$frostc$IR* $tmp1370 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1371 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1372 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp1373 = *(&local44);
frost$core$Bit $tmp1374 = (frost$core$Bit) {$tmp1373 != NULL};
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block145; else goto block146;
block146:;
frost$core$Int $tmp1376 = (frost$core$Int) {247u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1377, $tmp1376, &$s1378);
abort(); // unreachable
block145:;
org$frostlang$frostc$Type* $tmp1379 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1380 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1373, $tmp1379);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1381 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1382 = (frost$core$Int) {2u};
frost$core$Int $tmp1383 = *(&local3);
org$frostlang$frostc$Type* $tmp1384 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp1381, $tmp1382, $tmp1383, $tmp1384);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1371, $tmp1372, param1, $tmp1380, $tmp1381);
$fn1386 $tmp1385 = ($fn1386) $tmp1370->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1387 = $tmp1385($tmp1370, $tmp1371);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:250
org$frostlang$frostc$IR* $tmp1388 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1389 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1390 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1391 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1389, $tmp1390, param1, $tmp1391);
$fn1393 $tmp1392 = ($fn1393) $tmp1388->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1394 = $tmp1392($tmp1388, $tmp1389);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:252
org$frostlang$frostc$IR* $tmp1395 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1396 = *(&local16);
$fn1398 $tmp1397 = ($fn1398) $tmp1395->$class->vtable[4];
$tmp1397($tmp1395, $tmp1396);
org$frostlang$frostc$IR$Value* $tmp1399 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1400 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1401 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1402 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1403 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1404 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1405 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1406 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1407 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1408 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1409 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1410 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1411 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1412 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1413 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1414 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1415 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1416 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
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
org$frostlang$frostc$IR** $tmp1420 = &param0->ir;
org$frostlang$frostc$IR* $tmp1421 = *$tmp1420;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
org$frostlang$frostc$IR* $tmp1422 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local0) = $tmp1421;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:277
$fn1424 $tmp1423 = ($fn1424) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1425 = $tmp1423(param4);
org$frostlang$frostc$Type$Kind* $tmp1426 = &$tmp1425->typeKind;
org$frostlang$frostc$Type$Kind $tmp1427 = *$tmp1426;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1428;
$tmp1428 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1428->value = $tmp1427;
frost$core$Int $tmp1429 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:277:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1430 = &(&local2)->$rawValue;
*$tmp1430 = $tmp1429;
org$frostlang$frostc$Type$Kind $tmp1431 = *(&local2);
*(&local1) = $tmp1431;
org$frostlang$frostc$Type$Kind $tmp1432 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1433;
$tmp1433 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1433->value = $tmp1432;
ITable* $tmp1434 = ((frost$core$Equatable*) $tmp1428)->$class->itable;
while ($tmp1434->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1434 = $tmp1434->next;
}
$fn1436 $tmp1435 = $tmp1434->methods[0];
frost$core$Bit $tmp1437 = $tmp1435(((frost$core$Equatable*) $tmp1428), ((frost$core$Equatable*) $tmp1433));
bool $tmp1438 = $tmp1437.value;
if ($tmp1438) goto block2; else goto block3;
block3:;
frost$core$Int $tmp1439 = (frost$core$Int) {277u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1440, $tmp1439);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1433)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1428)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:278
$fn1442 $tmp1441 = ($fn1442) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1443 = $tmp1441(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:278:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1444 = &$tmp1443->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1445 = *$tmp1444;
frost$core$Bit $tmp1446 = (frost$core$Bit) {$tmp1445 != NULL};
bool $tmp1447 = $tmp1446.value;
if ($tmp1447) goto block5; else goto block6;
block6:;
frost$core$Int $tmp1448 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1449, $tmp1448, &$s1450);
abort(); // unreachable
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
ITable* $tmp1451 = ((frost$collections$CollectionView*) $tmp1445)->$class->itable;
while ($tmp1451->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1451 = $tmp1451->next;
}
$fn1453 $tmp1452 = $tmp1451->methods[0];
frost$core$Int $tmp1454 = $tmp1452(((frost$collections$CollectionView*) $tmp1445));
frost$core$Int $tmp1455 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:278:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1456 = $tmp1454.value;
int64_t $tmp1457 = $tmp1455.value;
bool $tmp1458 = $tmp1456 == $tmp1457;
frost$core$Bit $tmp1459 = (frost$core$Bit) {$tmp1458};
bool $tmp1460 = $tmp1459.value;
if ($tmp1460) goto block8; else goto block9;
block9:;
frost$core$Int $tmp1461 = (frost$core$Int) {278u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1462, $tmp1461);
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:279
$fn1464 $tmp1463 = ($fn1464) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1465 = $tmp1463(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:279:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1466 = &$tmp1465->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1467 = *$tmp1466;
frost$core$Bit $tmp1468 = (frost$core$Bit) {$tmp1467 != NULL};
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block11; else goto block12;
block12:;
frost$core$Int $tmp1470 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1471, $tmp1470, &$s1472);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$Int $tmp1473 = (frost$core$Int) {0u};
frost$core$Object* $tmp1474 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1467, $tmp1473);
frost$core$String** $tmp1475 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp1474))->name;
frost$core$String* $tmp1476 = *$tmp1475;
frost$core$Bit $tmp1477 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1476, &$s1478);
bool $tmp1479 = $tmp1477.value;
if ($tmp1479) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1480 = (frost$core$Int) {279u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1481, $tmp1480);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1474);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:280
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:281
org$frostlang$frostc$Variable$Storage** $tmp1482 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp1483 = *$tmp1482;
frost$core$Int* $tmp1484 = &$tmp1483->$rawValue;
frost$core$Int $tmp1485 = *$tmp1484;
frost$core$Int $tmp1486 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:282:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1487 = $tmp1485.value;
int64_t $tmp1488 = $tmp1486.value;
bool $tmp1489 = $tmp1487 == $tmp1488;
frost$core$Bit $tmp1490 = (frost$core$Bit) {$tmp1489};
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block16; else goto block17;
block16:;
frost$core$Int* $tmp1492 = (frost$core$Int*) ($tmp1483->$data + 0);
frost$core$Int $tmp1493 = *$tmp1492;
*(&local4) = $tmp1493;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:283
frost$core$Int $tmp1494 = *(&local4);
*(&local3) = $tmp1494;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:289
org$frostlang$frostc$Type** $tmp1495 = &param3->type;
org$frostlang$frostc$Type* $tmp1496 = *$tmp1495;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
org$frostlang$frostc$Type* $tmp1497 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local5) = $tmp1496;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:290
org$frostlang$frostc$Type* $tmp1498 = *(&local5);
org$frostlang$frostc$Type* $tmp1499 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp1498);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
org$frostlang$frostc$Type* $tmp1500 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local6) = $tmp1499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:291
org$frostlang$frostc$Type* $tmp1501 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1502 = &$tmp1501->typeKind;
org$frostlang$frostc$Type$Kind $tmp1503 = *$tmp1502;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1504;
$tmp1504 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1504->value = $tmp1503;
frost$core$Int $tmp1505 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:291:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1506 = &(&local8)->$rawValue;
*$tmp1506 = $tmp1505;
org$frostlang$frostc$Type$Kind $tmp1507 = *(&local8);
*(&local7) = $tmp1507;
org$frostlang$frostc$Type$Kind $tmp1508 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1509;
$tmp1509 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1509->value = $tmp1508;
ITable* $tmp1510 = ((frost$core$Equatable*) $tmp1504)->$class->itable;
while ($tmp1510->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1510 = $tmp1510->next;
}
$fn1512 $tmp1511 = $tmp1510->methods[1];
frost$core$Bit $tmp1513 = $tmp1511(((frost$core$Equatable*) $tmp1504), ((frost$core$Equatable*) $tmp1509));
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block20; else goto block21;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:286
frost$core$Int $tmp1515 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1516, $tmp1515);
abort(); // unreachable
block21:;
frost$core$Int $tmp1517 = (frost$core$Int) {291u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1518, $tmp1517);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1509)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1504)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:292
$fn1520 $tmp1519 = ($fn1520) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1521 = $tmp1519(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:292:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1522 = &$tmp1521->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1523 = *$tmp1522;
frost$core$Bit $tmp1524 = (frost$core$Bit) {$tmp1523 != NULL};
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block23; else goto block24;
block24:;
frost$core$Int $tmp1526 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1527, $tmp1526, &$s1528);
abort(); // unreachable
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
frost$core$Int $tmp1529 = (frost$core$Int) {2u};
frost$core$Object* $tmp1530 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1523, $tmp1529);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1530)));
org$frostlang$frostc$Type* $tmp1531 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1530);
frost$core$Frost$unref$frost$core$Object$Q($tmp1530);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:293
$fn1533 $tmp1532 = ($fn1533) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1534 = $tmp1532(param4);
org$frostlang$frostc$ClassDecl* $tmp1535 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1534);
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
org$frostlang$frostc$ClassDecl* $tmp1536 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local10) = $tmp1535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:294
org$frostlang$frostc$ClassDecl* $tmp1537 = *(&local10);
frost$core$Bit $tmp1538 = (frost$core$Bit) {$tmp1537 == NULL};
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:295
org$frostlang$frostc$ClassDecl* $tmp1540 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1541 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1542 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1543 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1544 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:297
org$frostlang$frostc$ClassDecl* $tmp1545 = *(&local10);
frost$core$Bit $tmp1546 = (frost$core$Bit) {$tmp1545 != NULL};
bool $tmp1547 = $tmp1546.value;
if ($tmp1547) goto block27; else goto block28;
block28:;
frost$core$Int $tmp1548 = (frost$core$Int) {297u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1549, $tmp1548, &$s1550);
abort(); // unreachable
block27:;
frost$collections$ListView* $tmp1551 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp1545);
*(&local11) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
frost$collections$ListView* $tmp1552 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
*(&local11) = $tmp1551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:300
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1553 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1554 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1555 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1556 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1557 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1558 = *(&local11);
frost$core$Int $tmp1559 = (frost$core$Int) {0u};
ITable* $tmp1560 = $tmp1558->$class->itable;
while ($tmp1560->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1560 = $tmp1560->next;
}
$fn1562 $tmp1561 = $tmp1560->methods[0];
frost$core$Object* $tmp1563 = $tmp1561($tmp1558, $tmp1559);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1556, $tmp1557, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1563));
$fn1565 $tmp1564 = ($fn1565) $tmp1555->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1566 = $tmp1564($tmp1555, $tmp1556);
$fn1568 $tmp1567 = ($fn1568) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1569 = $tmp1567(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:302:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1570 = &$tmp1569->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1571 = *$tmp1570;
frost$core$Bit $tmp1572 = (frost$core$Bit) {$tmp1571 != NULL};
bool $tmp1573 = $tmp1572.value;
if ($tmp1573) goto block30; else goto block31;
block31:;
frost$core$Int $tmp1574 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1575, $tmp1574, &$s1576);
abort(); // unreachable
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
frost$core$Int $tmp1577 = (frost$core$Int) {1u};
frost$core$Object* $tmp1578 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1571, $tmp1577);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1553, $tmp1554, $tmp1566, ((org$frostlang$frostc$Type*) $tmp1578));
org$frostlang$frostc$Type* $tmp1579 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:300:54
org$frostlang$frostc$Type** $tmp1580 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1581 = *$tmp1580;
ITable* $tmp1582 = ((frost$core$Equatable*) $tmp1579)->$class->itable;
while ($tmp1582->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1582 = $tmp1582->next;
}
$fn1584 $tmp1583 = $tmp1582->methods[1];
frost$core$Bit $tmp1585 = $tmp1583(((frost$core$Equatable*) $tmp1579), ((frost$core$Equatable*) $tmp1581));
bool $tmp1586 = $tmp1585.value;
if ($tmp1586) goto block33; else goto block34;
block34:;
frost$core$Int $tmp1587 = (frost$core$Int) {4128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1588, $tmp1587, &$s1589);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4129
frost$core$Bit $tmp1590 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp1591 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1553, $tmp1579, $tmp1590);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
org$frostlang$frostc$Type* $tmp1592 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1593 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1591, $tmp1592);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
org$frostlang$frostc$IR$Value* $tmp1594 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local12) = $tmp1593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q($tmp1578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$Frost$unref$frost$core$Object$Q($tmp1563);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:303
org$frostlang$frostc$IR$Value* $tmp1595 = *(&local12);
frost$core$Bit $tmp1596 = (frost$core$Bit) {$tmp1595 == NULL};
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:304
org$frostlang$frostc$IR$Value* $tmp1598 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1599 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1600 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1601 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1602 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1603 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1604 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:308
org$frostlang$frostc$IR* $tmp1605 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1606 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1607 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp1608 = *(&local12);
frost$core$Bit $tmp1609 = (frost$core$Bit) {$tmp1608 != NULL};
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1611 = (frost$core$Int) {308u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1612, $tmp1611, &$s1613);
abort(); // unreachable
block37:;
org$frostlang$frostc$Type* $tmp1614 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1615 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1608, $tmp1614);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1616 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1617 = (frost$core$Int) {2u};
frost$core$Int $tmp1618 = *(&local3);
org$frostlang$frostc$Type* $tmp1619 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp1616, $tmp1617, $tmp1618, $tmp1619);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1606, $tmp1607, param1, $tmp1615, $tmp1616);
$fn1621 $tmp1620 = ($fn1621) $tmp1605->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1622 = $tmp1620($tmp1605, $tmp1606);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:312
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1623 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1624 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1625 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1626 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1627 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1628 = *(&local11);
frost$core$Int $tmp1629 = (frost$core$Int) {1u};
ITable* $tmp1630 = $tmp1628->$class->itable;
while ($tmp1630->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1630 = $tmp1630->next;
}
$fn1632 $tmp1631 = $tmp1630->methods[0];
frost$core$Object* $tmp1633 = $tmp1631($tmp1628, $tmp1629);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1626, $tmp1627, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1633));
$fn1635 $tmp1634 = ($fn1635) $tmp1625->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1636 = $tmp1634($tmp1625, $tmp1626);
$fn1638 $tmp1637 = ($fn1638) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1639 = $tmp1637(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:314:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1640 = &$tmp1639->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1641 = *$tmp1640;
frost$core$Bit $tmp1642 = (frost$core$Bit) {$tmp1641 != NULL};
bool $tmp1643 = $tmp1642.value;
if ($tmp1643) goto block40; else goto block41;
block41:;
frost$core$Int $tmp1644 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1645, $tmp1644, &$s1646);
abort(); // unreachable
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$Int $tmp1647 = (frost$core$Int) {1u};
frost$core$Object* $tmp1648 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1641, $tmp1647);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1623, $tmp1624, $tmp1636, ((org$frostlang$frostc$Type*) $tmp1648));
org$frostlang$frostc$Type* $tmp1649 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:312:52
org$frostlang$frostc$Type** $tmp1650 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1651 = *$tmp1650;
ITable* $tmp1652 = ((frost$core$Equatable*) $tmp1649)->$class->itable;
while ($tmp1652->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1652 = $tmp1652->next;
}
$fn1654 $tmp1653 = $tmp1652->methods[1];
frost$core$Bit $tmp1655 = $tmp1653(((frost$core$Equatable*) $tmp1649), ((frost$core$Equatable*) $tmp1651));
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block43; else goto block44;
block44:;
frost$core$Int $tmp1657 = (frost$core$Int) {4128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1658, $tmp1657, &$s1659);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4129
frost$core$Bit $tmp1660 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp1661 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1623, $tmp1649, $tmp1660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
org$frostlang$frostc$Type* $tmp1662 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1663 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1661, $tmp1662);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
org$frostlang$frostc$IR$Value* $tmp1664 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local13) = $tmp1663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
frost$core$Frost$unref$frost$core$Object$Q($tmp1648);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q($tmp1633);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:315
org$frostlang$frostc$IR$Value* $tmp1665 = *(&local13);
frost$core$Bit $tmp1666 = (frost$core$Bit) {$tmp1665 == NULL};
bool $tmp1667 = $tmp1666.value;
if ($tmp1667) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:316
org$frostlang$frostc$IR$Value* $tmp1668 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1669 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1670 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1671 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1672 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1673 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1674 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1675 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:320
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1676 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1677 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1678 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1679 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1680 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1681 = *(&local11);
frost$core$Int $tmp1682 = (frost$core$Int) {2u};
ITable* $tmp1683 = $tmp1681->$class->itable;
while ($tmp1683->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1683 = $tmp1683->next;
}
$fn1685 $tmp1684 = $tmp1683->methods[0];
frost$core$Object* $tmp1686 = $tmp1684($tmp1681, $tmp1682);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1679, $tmp1680, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1686));
$fn1688 $tmp1687 = ($fn1688) $tmp1678->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1689 = $tmp1687($tmp1678, $tmp1679);
org$frostlang$frostc$Type* $tmp1690 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1676, $tmp1677, $tmp1689, $tmp1690);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
org$frostlang$frostc$IR$Value* $tmp1691 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
*(&local14) = $tmp1676;
frost$core$Frost$unref$frost$core$Object$Q($tmp1686);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:322
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:323
org$frostlang$frostc$IR$Value* $tmp1692 = *(&local14);
$fn1694 $tmp1693 = ($fn1694) $tmp1692->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1695 = $tmp1693($tmp1692);
org$frostlang$frostc$Type** $tmp1696 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1697 = *$tmp1696;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:323:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1698 = &((org$frostlang$frostc$Symbol*) $tmp1695)->name;
frost$core$String* $tmp1699 = *$tmp1698;
frost$core$String** $tmp1700 = &((org$frostlang$frostc$Symbol*) $tmp1697)->name;
frost$core$String* $tmp1701 = *$tmp1700;
frost$core$Bit $tmp1702 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1699, $tmp1701);
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Type$Kind* $tmp1704 = &$tmp1695->typeKind;
org$frostlang$frostc$Type$Kind $tmp1705 = *$tmp1704;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1706;
$tmp1706 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1706->value = $tmp1705;
org$frostlang$frostc$Type$Kind* $tmp1707 = &$tmp1697->typeKind;
org$frostlang$frostc$Type$Kind $tmp1708 = *$tmp1707;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1709;
$tmp1709 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1709->value = $tmp1708;
ITable* $tmp1710 = ((frost$core$Equatable*) $tmp1706)->$class->itable;
while ($tmp1710->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1710 = $tmp1710->next;
}
$fn1712 $tmp1711 = $tmp1710->methods[0];
frost$core$Bit $tmp1713 = $tmp1711(((frost$core$Equatable*) $tmp1706), ((frost$core$Equatable*) $tmp1709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1709)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1706)));
*(&local16) = $tmp1713;
goto block53;
block52:;
*(&local16) = $tmp1702;
goto block53;
block53:;
frost$core$Bit $tmp1714 = *(&local16);
bool $tmp1715 = $tmp1714.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
if ($tmp1715) goto block47; else goto block49;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:324
org$frostlang$frostc$IR$Value* $tmp1716 = *(&local14);
org$frostlang$frostc$Type** $tmp1717 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1718 = *$tmp1717;
org$frostlang$frostc$IR$Value* $tmp1719 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1716, $tmp1718);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
org$frostlang$frostc$IR$Value* $tmp1720 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local15) = $tmp1719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:325
org$frostlang$frostc$IR$Value* $tmp1721 = *(&local15);
frost$core$Bit $tmp1722 = (frost$core$Bit) {$tmp1721 != NULL};
bool $tmp1723 = $tmp1722.value;
if ($tmp1723) goto block54; else goto block55;
block55:;
frost$core$Int $tmp1724 = (frost$core$Int) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1725, $tmp1724);
abort(); // unreachable
block54:;
goto block48;
block49:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:328
org$frostlang$frostc$IR$Value* $tmp1726 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
org$frostlang$frostc$IR$Value* $tmp1727 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local15) = $tmp1726;
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:330
org$frostlang$frostc$IR$Value* $tmp1728 = *(&local14);
org$frostlang$frostc$IR$Value* $tmp1729 = *(&local14);
$fn1731 $tmp1730 = ($fn1731) $tmp1729->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1732 = $tmp1730($tmp1729);
// begin inline call to function org.frostlang.frostc.statement.For.signed(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:330:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:48
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:48:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1733 = &$tmp1732->typeKind;
org$frostlang$frostc$Type$Kind $tmp1734 = *$tmp1733;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1735;
$tmp1735 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1735->value = $tmp1734;
frost$core$Int $tmp1736 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp1737 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp1736);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1738;
$tmp1738 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1738->value = $tmp1737;
ITable* $tmp1739 = ((frost$core$Equatable*) $tmp1735)->$class->itable;
while ($tmp1739->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1739 = $tmp1739->next;
}
$fn1741 $tmp1740 = $tmp1739->methods[1];
frost$core$Bit $tmp1742 = $tmp1740(((frost$core$Equatable*) $tmp1735), ((frost$core$Equatable*) $tmp1738));
bool $tmp1743 = $tmp1742.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1738)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1735)));
if ($tmp1743) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local18) = $tmp1732;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
goto block57;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp1744 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1732);
frost$core$Int $tmp1745 = (frost$core$Int) {0u};
frost$core$Object* $tmp1746 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1744, $tmp1745);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1746)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1746);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
*(&local18) = ((org$frostlang$frostc$Type*) $tmp1746);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1746)));
goto block57;
block57:;
org$frostlang$frostc$Type* $tmp1747 = *(&local18);
org$frostlang$frostc$Type** $tmp1748 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp1749 = *$tmp1748;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1750 = &((org$frostlang$frostc$Symbol*) $tmp1747)->name;
frost$core$String* $tmp1751 = *$tmp1750;
frost$core$String** $tmp1752 = &((org$frostlang$frostc$Symbol*) $tmp1749)->name;
frost$core$String* $tmp1753 = *$tmp1752;
frost$core$Bit $tmp1754 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1751, $tmp1753);
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Type$Kind* $tmp1756 = &$tmp1747->typeKind;
org$frostlang$frostc$Type$Kind $tmp1757 = *$tmp1756;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1758;
$tmp1758 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1758->value = $tmp1757;
org$frostlang$frostc$Type$Kind* $tmp1759 = &$tmp1749->typeKind;
org$frostlang$frostc$Type$Kind $tmp1760 = *$tmp1759;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1761;
$tmp1761 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1761->value = $tmp1760;
ITable* $tmp1762 = ((frost$core$Equatable*) $tmp1758)->$class->itable;
while ($tmp1762->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1762 = $tmp1762->next;
}
$fn1764 $tmp1763 = $tmp1762->methods[0];
frost$core$Bit $tmp1765 = $tmp1763(((frost$core$Equatable*) $tmp1758), ((frost$core$Equatable*) $tmp1761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1761)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1758)));
*(&local19) = $tmp1765;
goto block66;
block65:;
*(&local19) = $tmp1754;
goto block66;
block66:;
frost$core$Bit $tmp1766 = *(&local19);
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:49
org$frostlang$frostc$Type** $tmp1768 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp1769 = *$tmp1768;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
org$frostlang$frostc$Type* $tmp1770 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1769;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
goto block56;
block62:;
org$frostlang$frostc$Type** $tmp1771 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp1772 = *$tmp1771;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:50:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1773 = &((org$frostlang$frostc$Symbol*) $tmp1747)->name;
frost$core$String* $tmp1774 = *$tmp1773;
frost$core$String** $tmp1775 = &((org$frostlang$frostc$Symbol*) $tmp1772)->name;
frost$core$String* $tmp1776 = *$tmp1775;
frost$core$Bit $tmp1777 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1774, $tmp1776);
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Type$Kind* $tmp1779 = &$tmp1747->typeKind;
org$frostlang$frostc$Type$Kind $tmp1780 = *$tmp1779;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1781;
$tmp1781 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1781->value = $tmp1780;
org$frostlang$frostc$Type$Kind* $tmp1782 = &$tmp1772->typeKind;
org$frostlang$frostc$Type$Kind $tmp1783 = *$tmp1782;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1784;
$tmp1784 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1784->value = $tmp1783;
ITable* $tmp1785 = ((frost$core$Equatable*) $tmp1781)->$class->itable;
while ($tmp1785->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1785 = $tmp1785->next;
}
$fn1787 $tmp1786 = $tmp1785->methods[0];
frost$core$Bit $tmp1788 = $tmp1786(((frost$core$Equatable*) $tmp1781), ((frost$core$Equatable*) $tmp1784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1784)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1781)));
*(&local20) = $tmp1788;
goto block72;
block71:;
*(&local20) = $tmp1777;
goto block72;
block72:;
frost$core$Bit $tmp1789 = *(&local20);
bool $tmp1790 = $tmp1789.value;
if ($tmp1790) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:50
org$frostlang$frostc$Type** $tmp1791 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp1792 = *$tmp1791;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
org$frostlang$frostc$Type* $tmp1793 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1792;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
goto block56;
block68:;
org$frostlang$frostc$Type** $tmp1794 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp1795 = *$tmp1794;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:51:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1796 = &((org$frostlang$frostc$Symbol*) $tmp1747)->name;
frost$core$String* $tmp1797 = *$tmp1796;
frost$core$String** $tmp1798 = &((org$frostlang$frostc$Symbol*) $tmp1795)->name;
frost$core$String* $tmp1799 = *$tmp1798;
frost$core$Bit $tmp1800 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1797, $tmp1799);
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Type$Kind* $tmp1802 = &$tmp1747->typeKind;
org$frostlang$frostc$Type$Kind $tmp1803 = *$tmp1802;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1804;
$tmp1804 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1804->value = $tmp1803;
org$frostlang$frostc$Type$Kind* $tmp1805 = &$tmp1795->typeKind;
org$frostlang$frostc$Type$Kind $tmp1806 = *$tmp1805;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1807;
$tmp1807 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1807->value = $tmp1806;
ITable* $tmp1808 = ((frost$core$Equatable*) $tmp1804)->$class->itable;
while ($tmp1808->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1808 = $tmp1808->next;
}
$fn1810 $tmp1809 = $tmp1808->methods[0];
frost$core$Bit $tmp1811 = $tmp1809(((frost$core$Equatable*) $tmp1804), ((frost$core$Equatable*) $tmp1807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1807)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1804)));
*(&local21) = $tmp1811;
goto block78;
block77:;
*(&local21) = $tmp1800;
goto block78;
block78:;
frost$core$Bit $tmp1812 = *(&local21);
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:51
org$frostlang$frostc$Type** $tmp1814 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp1815 = *$tmp1814;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
org$frostlang$frostc$Type* $tmp1816 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1815;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
goto block56;
block74:;
org$frostlang$frostc$Type** $tmp1817 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1818 = *$tmp1817;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:52:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1819 = &((org$frostlang$frostc$Symbol*) $tmp1747)->name;
frost$core$String* $tmp1820 = *$tmp1819;
frost$core$String** $tmp1821 = &((org$frostlang$frostc$Symbol*) $tmp1818)->name;
frost$core$String* $tmp1822 = *$tmp1821;
frost$core$Bit $tmp1823 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1820, $tmp1822);
bool $tmp1824 = $tmp1823.value;
if ($tmp1824) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Type$Kind* $tmp1825 = &$tmp1747->typeKind;
org$frostlang$frostc$Type$Kind $tmp1826 = *$tmp1825;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1827;
$tmp1827 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1827->value = $tmp1826;
org$frostlang$frostc$Type$Kind* $tmp1828 = &$tmp1818->typeKind;
org$frostlang$frostc$Type$Kind $tmp1829 = *$tmp1828;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1830;
$tmp1830 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1830->value = $tmp1829;
ITable* $tmp1831 = ((frost$core$Equatable*) $tmp1827)->$class->itable;
while ($tmp1831->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1831 = $tmp1831->next;
}
$fn1833 $tmp1832 = $tmp1831->methods[0];
frost$core$Bit $tmp1834 = $tmp1832(((frost$core$Equatable*) $tmp1827), ((frost$core$Equatable*) $tmp1830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1830)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1827)));
*(&local22) = $tmp1834;
goto block84;
block83:;
*(&local22) = $tmp1823;
goto block84;
block84:;
frost$core$Bit $tmp1835 = *(&local22);
bool $tmp1836 = $tmp1835.value;
if ($tmp1836) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:52
org$frostlang$frostc$Type** $tmp1837 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1838 = *$tmp1837;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
org$frostlang$frostc$Type* $tmp1839 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1838;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
goto block56;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
org$frostlang$frostc$Type* $tmp1840 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1732;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
goto block56;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
org$frostlang$frostc$Type* $tmp1841 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
goto block56;
block56:;
org$frostlang$frostc$Type* $tmp1842 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp1843 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1728, $tmp1842);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
org$frostlang$frostc$IR$Value* $tmp1844 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
*(&local23) = $tmp1843;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:331
org$frostlang$frostc$IR$Value* $tmp1845 = *(&local23);
frost$core$Bit $tmp1846 = (frost$core$Bit) {$tmp1845 != NULL};
bool $tmp1847 = $tmp1846.value;
if ($tmp1847) goto block85; else goto block86;
block86:;
frost$core$Int $tmp1848 = (frost$core$Int) {331u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1849, $tmp1848);
abort(); // unreachable
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:332
org$frostlang$frostc$IR$Value* $tmp1850 = *(&local23);
frost$core$Bit $tmp1851 = (frost$core$Bit) {$tmp1850 != NULL};
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block87; else goto block88;
block88:;
frost$core$Int $tmp1853 = (frost$core$Int) {332u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1854, $tmp1853, &$s1855);
abort(); // unreachable
block87:;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1856 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1857 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp1856, $tmp1857);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1858 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1859 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1858, $tmp1859);
org$frostlang$frostc$IR$Value* $tmp1860 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1850, &$s1861, ((frost$collections$ListView*) $tmp1856), $tmp1858);
org$frostlang$frostc$Type* $tmp1862 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp1863 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1860, $tmp1862);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
org$frostlang$frostc$IR$Value* $tmp1864 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local24) = $tmp1863;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:334
org$frostlang$frostc$IR$Value* $tmp1865 = *(&local24);
frost$core$Bit $tmp1866 = (frost$core$Bit) {$tmp1865 != NULL};
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block89; else goto block90;
block90:;
frost$core$Int $tmp1868 = (frost$core$Int) {334u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1869, $tmp1868);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:335
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:336
org$frostlang$frostc$IR$Value* $tmp1870 = *(&local14);
$fn1872 $tmp1871 = ($fn1872) $tmp1870->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1873 = $tmp1871($tmp1870);
org$frostlang$frostc$Type** $tmp1874 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1875 = *$tmp1874;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:336:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1876 = &((org$frostlang$frostc$Symbol*) $tmp1873)->name;
frost$core$String* $tmp1877 = *$tmp1876;
frost$core$String** $tmp1878 = &((org$frostlang$frostc$Symbol*) $tmp1875)->name;
frost$core$String* $tmp1879 = *$tmp1878;
frost$core$Bit $tmp1880 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1877, $tmp1879);
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Type$Kind* $tmp1882 = &$tmp1873->typeKind;
org$frostlang$frostc$Type$Kind $tmp1883 = *$tmp1882;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1884;
$tmp1884 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1884->value = $tmp1883;
org$frostlang$frostc$Type$Kind* $tmp1885 = &$tmp1875->typeKind;
org$frostlang$frostc$Type$Kind $tmp1886 = *$tmp1885;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1887;
$tmp1887 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1887->value = $tmp1886;
ITable* $tmp1888 = ((frost$core$Equatable*) $tmp1884)->$class->itable;
while ($tmp1888->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1888 = $tmp1888->next;
}
$fn1890 $tmp1889 = $tmp1888->methods[0];
frost$core$Bit $tmp1891 = $tmp1889(((frost$core$Equatable*) $tmp1884), ((frost$core$Equatable*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1887)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1884)));
*(&local26) = $tmp1891;
goto block97;
block96:;
*(&local26) = $tmp1880;
goto block97;
block97:;
frost$core$Bit $tmp1892 = *(&local26);
bool $tmp1893 = $tmp1892.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
if ($tmp1893) goto block91; else goto block93;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:337
org$frostlang$frostc$IR$Value* $tmp1894 = *(&local24);
org$frostlang$frostc$Type** $tmp1895 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1896 = *$tmp1895;
org$frostlang$frostc$IR$Value* $tmp1897 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1894, $tmp1896);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
org$frostlang$frostc$IR$Value* $tmp1898 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
*(&local25) = $tmp1897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:338
org$frostlang$frostc$IR$Value* $tmp1899 = *(&local25);
frost$core$Bit $tmp1900 = (frost$core$Bit) {$tmp1899 != NULL};
bool $tmp1901 = $tmp1900.value;
if ($tmp1901) goto block98; else goto block99;
block99:;
frost$core$Int $tmp1902 = (frost$core$Int) {338u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1903, $tmp1902);
abort(); // unreachable
block98:;
goto block92;
block93:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:341
org$frostlang$frostc$IR$Value* $tmp1904 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
org$frostlang$frostc$IR$Value* $tmp1905 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
*(&local25) = $tmp1904;
goto block92;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:345
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1906 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1907 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp1908 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1909 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1910 = (frost$core$Int) {10u};
frost$collections$ListView* $tmp1911 = *(&local11);
frost$core$Int $tmp1912 = (frost$core$Int) {3u};
ITable* $tmp1913 = $tmp1911->$class->itable;
while ($tmp1913->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1913 = $tmp1913->next;
}
$fn1915 $tmp1914 = $tmp1913->methods[0];
frost$core$Object* $tmp1916 = $tmp1914($tmp1911, $tmp1912);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1909, $tmp1910, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1916));
$fn1918 $tmp1917 = ($fn1918) $tmp1908->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1919 = $tmp1917($tmp1908, $tmp1909);
org$frostlang$frostc$Type** $tmp1920 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1921 = *$tmp1920;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1906, $tmp1907, $tmp1919, $tmp1921);
org$frostlang$frostc$IR$Value* $tmp1922 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1906);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
org$frostlang$frostc$IR$Value* $tmp1923 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local27) = $tmp1922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$core$Frost$unref$frost$core$Object$Q($tmp1916);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:349
org$frostlang$frostc$IR* $tmp1924 = *(&local0);
$fn1926 $tmp1925 = ($fn1926) $tmp1924->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1927 = $tmp1925($tmp1924, &$s1928);
*(&local28) = $tmp1927;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:350
org$frostlang$frostc$IR* $tmp1929 = *(&local0);
$fn1931 $tmp1930 = ($fn1931) $tmp1929->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1932 = $tmp1930($tmp1929, &$s1933);
*(&local29) = $tmp1932;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:351
org$frostlang$frostc$IR* $tmp1934 = *(&local0);
$fn1936 $tmp1935 = ($fn1936) $tmp1934->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1937 = $tmp1935($tmp1934, &$s1938);
*(&local30) = $tmp1937;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:352
org$frostlang$frostc$IR* $tmp1939 = *(&local0);
$fn1941 $tmp1940 = ($fn1941) $tmp1939->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1942 = $tmp1940($tmp1939, &$s1943);
*(&local31) = $tmp1942;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:353
org$frostlang$frostc$IR* $tmp1944 = *(&local0);
$fn1946 $tmp1945 = ($fn1946) $tmp1944->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1947 = $tmp1945($tmp1944, &$s1948);
*(&local32) = $tmp1947;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:354
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:355
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp1949 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1950 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp1951 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1952 = *(&local29);
org$frostlang$frostc$IR$Block$ID $tmp1953 = *(&local30);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1950, $tmp1951, param2, $tmp1952, $tmp1953);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1949, param0, $tmp1950);
*(&local34) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
org$frostlang$frostc$Compiler$AutoContext* $tmp1954 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
*(&local34) = $tmp1949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:357
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp1955 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1955, param0);
*(&local35) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
org$frostlang$frostc$Compiler$AutoScope* $tmp1956 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
*(&local35) = $tmp1955;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:358
org$frostlang$frostc$Type* $tmp1957 = *(&local9);
frost$core$String** $tmp1958 = &((org$frostlang$frostc$Symbol*) $tmp1957)->name;
frost$core$String* $tmp1959 = *$tmp1958;
frost$core$Bit $tmp1960 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1959, &$s1961);
bool $tmp1962 = $tmp1960.value;
if ($tmp1962) goto block100; else goto block103;
block103:;
org$frostlang$frostc$Type* $tmp1963 = *(&local9);
frost$core$String** $tmp1964 = &((org$frostlang$frostc$Symbol*) $tmp1963)->name;
frost$core$String* $tmp1965 = *$tmp1964;
frost$core$Bit $tmp1966 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1965, &$s1967);
bool $tmp1968 = $tmp1966.value;
if ($tmp1968) goto block100; else goto block102;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:360
org$frostlang$frostc$IR$Value* $tmp1969 = *(&local14);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1970 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1971 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1970, $tmp1971);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1972 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1973 = (frost$core$Int) {25u};
frost$core$UInt64 $tmp1974 = (frost$core$UInt64) {0u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp1972, $tmp1973, param1, $tmp1974);
frost$collections$Array$add$frost$collections$Array$T($tmp1970, ((frost$core$Object*) $tmp1972));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1975 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1976 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp1977 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1978 = *$tmp1977;
frost$core$Bit $tmp1979 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1975, $tmp1976, $tmp1978, $tmp1979);
org$frostlang$frostc$IR$Value* $tmp1980 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1969, &$s1981, ((frost$collections$ListView*) $tmp1970), $tmp1975);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
org$frostlang$frostc$IR$Value* $tmp1982 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local36) = $tmp1980;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:362
org$frostlang$frostc$IR$Value* $tmp1983 = *(&local36);
frost$core$Bit $tmp1984 = (frost$core$Bit) {$tmp1983 != NULL};
bool $tmp1985 = $tmp1984.value;
if ($tmp1985) goto block104; else goto block105;
block105:;
frost$core$Int $tmp1986 = (frost$core$Int) {362u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1987, $tmp1986);
abort(); // unreachable
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:363
org$frostlang$frostc$IR$Value* $tmp1988 = *(&local36);
frost$core$Bit $tmp1989 = (frost$core$Bit) {$tmp1988 != NULL};
bool $tmp1990 = $tmp1989.value;
if ($tmp1990) goto block106; else goto block107;
block107:;
frost$core$Int $tmp1991 = (frost$core$Int) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1992, $tmp1991, &$s1993);
abort(); // unreachable
block106:;
org$frostlang$frostc$IR$Value* $tmp1994 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
org$frostlang$frostc$IR$Value* $tmp1995 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local33) = $tmp1994;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
org$frostlang$frostc$IR$Value* $tmp1996 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block101;
block102:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:366
org$frostlang$frostc$Type* $tmp1997 = *(&local9);
frost$core$String** $tmp1998 = &((org$frostlang$frostc$Symbol*) $tmp1997)->name;
frost$core$String* $tmp1999 = *$tmp1998;
frost$core$Bit $tmp2000 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1999, &$s2001);
bool $tmp2002 = $tmp2000.value;
if ($tmp2002) goto block108; else goto block109;
block109:;
frost$core$Int $tmp2003 = (frost$core$Int) {366u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2004, $tmp2003);
abort(); // unreachable
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:367
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2005 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2006 = (frost$core$Int) {0u};
frost$core$Bit $tmp2007 = (frost$core$Bit) {true};
org$frostlang$frostc$Type** $tmp2008 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp2009 = *$tmp2008;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Bit$org$frostlang$frostc$Type($tmp2005, $tmp2006, $tmp2007, $tmp2009);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
org$frostlang$frostc$IR$Value* $tmp2010 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
*(&local33) = $tmp2005;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:369
org$frostlang$frostc$IR* $tmp2011 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2012 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2013 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2014 = *(&local33);
org$frostlang$frostc$IR$Block$ID $tmp2015 = *(&local31);
org$frostlang$frostc$IR$Block$ID $tmp2016 = *(&local32);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2012, $tmp2013, param1, $tmp2014, $tmp2015, $tmp2016);
$fn2018 $tmp2017 = ($fn2018) $tmp2011->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2019 = $tmp2017($tmp2011, $tmp2012);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:370
org$frostlang$frostc$IR* $tmp2020 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2021 = *(&local31);
$fn2023 $tmp2022 = ($fn2023) $tmp2020->$class->vtable[4];
$tmp2022($tmp2020, $tmp2021);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:371
org$frostlang$frostc$IR* $tmp2024 = *(&local0);
$fn2026 $tmp2025 = ($fn2026) $tmp2024->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2027 = $tmp2025($tmp2024, &$s2028);
*(&local37) = $tmp2027;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:372
org$frostlang$frostc$IR* $tmp2029 = *(&local0);
$fn2031 $tmp2030 = ($fn2031) $tmp2029->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2032 = $tmp2030($tmp2029, &$s2033);
*(&local38) = $tmp2032;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:373
org$frostlang$frostc$IR* $tmp2034 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2035 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2036 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2037 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2038 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp2039 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2035, $tmp2036, param1, $tmp2037, $tmp2038, $tmp2039);
$fn2041 $tmp2040 = ($fn2041) $tmp2034->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2042 = $tmp2040($tmp2034, $tmp2035);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:375
org$frostlang$frostc$IR* $tmp2043 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2044 = *(&local37);
$fn2046 $tmp2045 = ($fn2046) $tmp2043->$class->vtable[4];
$tmp2045($tmp2043, $tmp2044);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:376
org$frostlang$frostc$IR$Value* $tmp2047 = *(&local12);
frost$core$Bit $tmp2048 = (frost$core$Bit) {$tmp2047 != NULL};
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block110; else goto block111;
block111:;
frost$core$Int $tmp2050 = (frost$core$Int) {376u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2051, $tmp2050, &$s2052);
abort(); // unreachable
block110:;
org$frostlang$frostc$IR$Value* $tmp2053 = *(&local13);
frost$core$Bit $tmp2054 = (frost$core$Bit) {$tmp2053 != NULL};
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block112; else goto block113;
block113:;
frost$core$Int $tmp2056 = (frost$core$Int) {376u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2057, $tmp2056, &$s2058);
abort(); // unreachable
block112:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:376:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2059 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2060 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2059, $tmp2060);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2061 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2062 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2063 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2061, $tmp2062, $tmp2063, $tmp2053);
frost$collections$Array$add$frost$collections$Array$T($tmp2059, ((frost$core$Object*) $tmp2061));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2059)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2064 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2065 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2066 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2067 = *$tmp2066;
frost$core$Bit $tmp2068 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2064, $tmp2065, $tmp2067, $tmp2068);
org$frostlang$frostc$IR$Value* $tmp2069 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2047, &$s2070, ((frost$collections$ListView*) $tmp2059), $tmp2064);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
org$frostlang$frostc$IR$Value* $tmp2071 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
*(&local39) = $tmp2069;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2059)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:378
org$frostlang$frostc$IR$Value* $tmp2072 = *(&local39);
frost$core$Bit $tmp2073 = (frost$core$Bit) {$tmp2072 != NULL};
bool $tmp2074 = $tmp2073.value;
if ($tmp2074) goto block115; else goto block116;
block116:;
frost$core$Int $tmp2075 = (frost$core$Int) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2076, $tmp2075);
abort(); // unreachable
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:379
org$frostlang$frostc$IR$Value* $tmp2077 = *(&local39);
frost$core$Bit $tmp2078 = (frost$core$Bit) {$tmp2077 != NULL};
bool $tmp2079 = $tmp2078.value;
if ($tmp2079) goto block117; else goto block118;
block118:;
frost$core$Int $tmp2080 = (frost$core$Int) {379u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2081, $tmp2080, &$s2082);
abort(); // unreachable
block117:;
org$frostlang$frostc$IR$Value* $tmp2083 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2077);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
org$frostlang$frostc$IR$Value* $tmp2084 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
*(&local40) = $tmp2083;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:380
org$frostlang$frostc$IR* $tmp2085 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2086 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2087 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2088 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp2089 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2090 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2086, $tmp2087, param1, $tmp2088, $tmp2089, $tmp2090);
$fn2092 $tmp2091 = ($fn2092) $tmp2085->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2093 = $tmp2091($tmp2085, $tmp2086);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:382
org$frostlang$frostc$IR* $tmp2094 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2095 = *(&local38);
$fn2097 $tmp2096 = ($fn2097) $tmp2094->$class->vtable[4];
$tmp2096($tmp2094, $tmp2095);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:383
org$frostlang$frostc$IR$Value* $tmp2098 = *(&local12);
frost$core$Bit $tmp2099 = (frost$core$Bit) {$tmp2098 != NULL};
bool $tmp2100 = $tmp2099.value;
if ($tmp2100) goto block119; else goto block120;
block120:;
frost$core$Int $tmp2101 = (frost$core$Int) {383u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2102, $tmp2101, &$s2103);
abort(); // unreachable
block119:;
org$frostlang$frostc$IR$Value* $tmp2104 = *(&local13);
frost$core$Bit $tmp2105 = (frost$core$Bit) {$tmp2104 != NULL};
bool $tmp2106 = $tmp2105.value;
if ($tmp2106) goto block121; else goto block122;
block122:;
frost$core$Int $tmp2107 = (frost$core$Int) {383u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2108, $tmp2107, &$s2109);
abort(); // unreachable
block121:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:383:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2110 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2111 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2110, $tmp2111);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2112 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2113 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2114 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2112, $tmp2113, $tmp2114, $tmp2104);
frost$collections$Array$add$frost$collections$Array$T($tmp2110, ((frost$core$Object*) $tmp2112));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2110)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2115 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2116 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2117 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2118 = *$tmp2117;
frost$core$Bit $tmp2119 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2115, $tmp2116, $tmp2118, $tmp2119);
org$frostlang$frostc$IR$Value* $tmp2120 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2098, &$s2121, ((frost$collections$ListView*) $tmp2110), $tmp2115);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
org$frostlang$frostc$IR$Value* $tmp2122 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local41) = $tmp2120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2110)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:385
org$frostlang$frostc$IR$Value* $tmp2123 = *(&local41);
frost$core$Bit $tmp2124 = (frost$core$Bit) {$tmp2123 != NULL};
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block124; else goto block125;
block125:;
frost$core$Int $tmp2126 = (frost$core$Int) {385u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2127, $tmp2126);
abort(); // unreachable
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:386
org$frostlang$frostc$IR$Value* $tmp2128 = *(&local41);
frost$core$Bit $tmp2129 = (frost$core$Bit) {$tmp2128 != NULL};
bool $tmp2130 = $tmp2129.value;
if ($tmp2130) goto block126; else goto block127;
block127:;
frost$core$Int $tmp2131 = (frost$core$Int) {386u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2132, $tmp2131, &$s2133);
abort(); // unreachable
block126:;
org$frostlang$frostc$IR$Value* $tmp2134 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2128);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
org$frostlang$frostc$IR$Value* $tmp2135 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
*(&local42) = $tmp2134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:387
org$frostlang$frostc$IR* $tmp2136 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2137 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2138 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2139 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp2140 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2141 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2137, $tmp2138, param1, $tmp2139, $tmp2140, $tmp2141);
$fn2143 $tmp2142 = ($fn2143) $tmp2136->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2144 = $tmp2142($tmp2136, $tmp2137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:389
org$frostlang$frostc$IR* $tmp2145 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2146 = *(&local32);
$fn2148 $tmp2147 = ($fn2148) $tmp2145->$class->vtable[4];
$tmp2147($tmp2145, $tmp2146);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:390
org$frostlang$frostc$IR* $tmp2149 = *(&local0);
$fn2151 $tmp2150 = ($fn2151) $tmp2149->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2152 = $tmp2150($tmp2149, &$s2153);
*(&local43) = $tmp2152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:391
org$frostlang$frostc$IR* $tmp2154 = *(&local0);
$fn2156 $tmp2155 = ($fn2156) $tmp2154->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2157 = $tmp2155($tmp2154, &$s2158);
*(&local44) = $tmp2157;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:392
org$frostlang$frostc$IR* $tmp2159 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2160 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2161 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2162 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2163 = *(&local43);
org$frostlang$frostc$IR$Block$ID $tmp2164 = *(&local44);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2160, $tmp2161, param1, $tmp2162, $tmp2163, $tmp2164);
$fn2166 $tmp2165 = ($fn2166) $tmp2159->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2167 = $tmp2165($tmp2159, $tmp2160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:394
org$frostlang$frostc$IR* $tmp2168 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2169 = *(&local43);
$fn2171 $tmp2170 = ($fn2171) $tmp2168->$class->vtable[4];
$tmp2170($tmp2168, $tmp2169);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:395
org$frostlang$frostc$IR$Value* $tmp2172 = *(&local12);
frost$core$Bit $tmp2173 = (frost$core$Bit) {$tmp2172 != NULL};
bool $tmp2174 = $tmp2173.value;
if ($tmp2174) goto block128; else goto block129;
block129:;
frost$core$Int $tmp2175 = (frost$core$Int) {395u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2176, $tmp2175, &$s2177);
abort(); // unreachable
block128:;
org$frostlang$frostc$IR$Value* $tmp2178 = *(&local13);
frost$core$Bit $tmp2179 = (frost$core$Bit) {$tmp2178 != NULL};
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block130; else goto block131;
block131:;
frost$core$Int $tmp2181 = (frost$core$Int) {395u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2182, $tmp2181, &$s2183);
abort(); // unreachable
block130:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:395:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2184 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2185 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2184, $tmp2185);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2186 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2187 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2188 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2186, $tmp2187, $tmp2188, $tmp2178);
frost$collections$Array$add$frost$collections$Array$T($tmp2184, ((frost$core$Object*) $tmp2186));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2184)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2189 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2190 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2191 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2192 = *$tmp2191;
frost$core$Bit $tmp2193 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2189, $tmp2190, $tmp2192, $tmp2193);
org$frostlang$frostc$IR$Value* $tmp2194 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2172, &$s2195, ((frost$collections$ListView*) $tmp2184), $tmp2189);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
org$frostlang$frostc$IR$Value* $tmp2196 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
*(&local45) = $tmp2194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2184)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:397
org$frostlang$frostc$IR$Value* $tmp2197 = *(&local45);
frost$core$Bit $tmp2198 = (frost$core$Bit) {$tmp2197 != NULL};
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block133; else goto block134;
block134:;
frost$core$Int $tmp2200 = (frost$core$Int) {397u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2201, $tmp2200);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:398
org$frostlang$frostc$IR$Value* $tmp2202 = *(&local45);
frost$core$Bit $tmp2203 = (frost$core$Bit) {$tmp2202 != NULL};
bool $tmp2204 = $tmp2203.value;
if ($tmp2204) goto block135; else goto block136;
block136:;
frost$core$Int $tmp2205 = (frost$core$Int) {398u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2206, $tmp2205, &$s2207);
abort(); // unreachable
block135:;
org$frostlang$frostc$IR$Value* $tmp2208 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2202);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
org$frostlang$frostc$IR$Value* $tmp2209 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
*(&local46) = $tmp2208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:399
org$frostlang$frostc$IR* $tmp2210 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2211 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2212 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2213 = *(&local46);
org$frostlang$frostc$IR$Block$ID $tmp2214 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2215 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2211, $tmp2212, param1, $tmp2213, $tmp2214, $tmp2215);
$fn2217 $tmp2216 = ($fn2217) $tmp2210->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2218 = $tmp2216($tmp2210, $tmp2211);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:401
org$frostlang$frostc$IR* $tmp2219 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2220 = *(&local44);
$fn2222 $tmp2221 = ($fn2222) $tmp2219->$class->vtable[4];
$tmp2221($tmp2219, $tmp2220);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:402
org$frostlang$frostc$IR$Value* $tmp2223 = *(&local12);
frost$core$Bit $tmp2224 = (frost$core$Bit) {$tmp2223 != NULL};
bool $tmp2225 = $tmp2224.value;
if ($tmp2225) goto block137; else goto block138;
block138:;
frost$core$Int $tmp2226 = (frost$core$Int) {402u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2227, $tmp2226, &$s2228);
abort(); // unreachable
block137:;
org$frostlang$frostc$IR$Value* $tmp2229 = *(&local13);
frost$core$Bit $tmp2230 = (frost$core$Bit) {$tmp2229 != NULL};
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block139; else goto block140;
block140:;
frost$core$Int $tmp2232 = (frost$core$Int) {402u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2233, $tmp2232, &$s2234);
abort(); // unreachable
block139:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:402:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2235 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2236 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2235, $tmp2236);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2237 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2238 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2239 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2237, $tmp2238, $tmp2239, $tmp2229);
frost$collections$Array$add$frost$collections$Array$T($tmp2235, ((frost$core$Object*) $tmp2237));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2235)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2240 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2241 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2242 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2243 = *$tmp2242;
frost$core$Bit $tmp2244 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2240, $tmp2241, $tmp2243, $tmp2244);
org$frostlang$frostc$IR$Value* $tmp2245 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2223, &$s2246, ((frost$collections$ListView*) $tmp2235), $tmp2240);
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
org$frostlang$frostc$IR$Value* $tmp2247 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local47) = $tmp2245;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2235)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:404
org$frostlang$frostc$IR$Value* $tmp2248 = *(&local47);
frost$core$Bit $tmp2249 = (frost$core$Bit) {$tmp2248 != NULL};
bool $tmp2250 = $tmp2249.value;
if ($tmp2250) goto block142; else goto block143;
block143:;
frost$core$Int $tmp2251 = (frost$core$Int) {404u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2252, $tmp2251);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:405
org$frostlang$frostc$IR$Value* $tmp2253 = *(&local47);
frost$core$Bit $tmp2254 = (frost$core$Bit) {$tmp2253 != NULL};
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block144; else goto block145;
block145:;
frost$core$Int $tmp2256 = (frost$core$Int) {405u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2257, $tmp2256, &$s2258);
abort(); // unreachable
block144:;
org$frostlang$frostc$IR$Value* $tmp2259 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2253);
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
org$frostlang$frostc$IR$Value* $tmp2260 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local48) = $tmp2259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:406
org$frostlang$frostc$IR* $tmp2261 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2262 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2263 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2264 = *(&local48);
org$frostlang$frostc$IR$Block$ID $tmp2265 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2266 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2262, $tmp2263, param1, $tmp2264, $tmp2265, $tmp2266);
$fn2268 $tmp2267 = ($fn2268) $tmp2261->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2269 = $tmp2267($tmp2261, $tmp2262);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:408
org$frostlang$frostc$IR* $tmp2270 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2271 = *(&local28);
$fn2273 $tmp2272 = ($fn2273) $tmp2270->$class->vtable[4];
$tmp2272($tmp2270, $tmp2271);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:409
ITable* $tmp2274 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2274->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2274 = $tmp2274->next;
}
$fn2276 $tmp2275 = $tmp2274->methods[0];
frost$collections$Iterator* $tmp2277 = $tmp2275(((frost$collections$Iterable*) param5));
goto block146;
block146:;
ITable* $tmp2278 = $tmp2277->$class->itable;
while ($tmp2278->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2278 = $tmp2278->next;
}
$fn2280 $tmp2279 = $tmp2278->methods[0];
frost$core$Bit $tmp2281 = $tmp2279($tmp2277);
bool $tmp2282 = $tmp2281.value;
if ($tmp2282) goto block148; else goto block147;
block147:;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2283 = $tmp2277->$class->itable;
while ($tmp2283->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2283 = $tmp2283->next;
}
$fn2285 $tmp2284 = $tmp2283->methods[1];
frost$core$Object* $tmp2286 = $tmp2284($tmp2277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2286)));
org$frostlang$frostc$ASTNode* $tmp2287 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
*(&local49) = ((org$frostlang$frostc$ASTNode*) $tmp2286);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:410
org$frostlang$frostc$ASTNode* $tmp2288 = *(&local49);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp2288);
frost$core$Frost$unref$frost$core$Object$Q($tmp2286);
org$frostlang$frostc$ASTNode* $tmp2289 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block146;
block148:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
org$frostlang$frostc$IR$Value* $tmp2290 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2291 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2292 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2293 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2294 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2295 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2296 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2297 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2298 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
*(&local35) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:413
org$frostlang$frostc$IR* $tmp2299 = *(&local0);
$fn2301 $tmp2300 = ($fn2301) $tmp2299->$class->vtable[5];
frost$core$Bit $tmp2302 = $tmp2300($tmp2299);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:413:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2303 = $tmp2302.value;
bool $tmp2304 = !$tmp2303;
frost$core$Bit $tmp2305 = (frost$core$Bit) {$tmp2304};
bool $tmp2306 = $tmp2305.value;
if ($tmp2306) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:414
org$frostlang$frostc$IR* $tmp2307 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2308 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2309 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp2310 = *(&local30);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2308, $tmp2309, param1, $tmp2310);
$fn2312 $tmp2311 = ($fn2312) $tmp2307->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2313 = $tmp2311($tmp2307, $tmp2308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
goto block150;
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:416
org$frostlang$frostc$IR* $tmp2314 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2315 = *(&local30);
$fn2317 $tmp2316 = ($fn2317) $tmp2314->$class->vtable[4];
$tmp2316($tmp2314, $tmp2315);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:417
org$frostlang$frostc$IR* $tmp2318 = *(&local0);
$fn2320 $tmp2319 = ($fn2320) $tmp2318->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2321 = $tmp2319($tmp2318, &$s2322);
*(&local50) = $tmp2321;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:419
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2323 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2324 = (frost$core$Int) {7u};
org$frostlang$frostc$IR* $tmp2325 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2326 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2327 = (frost$core$Int) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2328 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2329 = (frost$core$Int) {2u};
frost$core$Int $tmp2330 = *(&local3);
org$frostlang$frostc$Type* $tmp2331 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp2328, $tmp2329, $tmp2330, $tmp2331);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2326, $tmp2327, param1, $tmp2328);
$fn2333 $tmp2332 = ($fn2333) $tmp2325->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2334 = $tmp2332($tmp2325, $tmp2326);
org$frostlang$frostc$Type* $tmp2335 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2323, $tmp2324, $tmp2334, $tmp2335);
org$frostlang$frostc$Type* $tmp2336 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2337 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2323, $tmp2336);
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
org$frostlang$frostc$IR$Value* $tmp2338 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
*(&local51) = $tmp2337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:421
org$frostlang$frostc$IR$Value* $tmp2339 = *(&local51);
frost$core$Bit $tmp2340 = (frost$core$Bit) {$tmp2339 != NULL};
bool $tmp2341 = $tmp2340.value;
if ($tmp2341) goto block152; else goto block153;
block153:;
frost$core$Int $tmp2342 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2343, $tmp2342);
abort(); // unreachable
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:422
org$frostlang$frostc$IR* $tmp2344 = *(&local0);
$fn2346 $tmp2345 = ($fn2346) $tmp2344->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2347 = $tmp2345($tmp2344, &$s2348);
*(&local52) = $tmp2347;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:423
org$frostlang$frostc$IR* $tmp2349 = *(&local0);
$fn2351 $tmp2350 = ($fn2351) $tmp2349->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2352 = $tmp2350($tmp2349, &$s2353);
*(&local53) = $tmp2352;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:424
org$frostlang$frostc$IR* $tmp2354 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2355 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2356 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2357 = *(&local33);
org$frostlang$frostc$IR$Block$ID $tmp2358 = *(&local52);
org$frostlang$frostc$IR$Block$ID $tmp2359 = *(&local53);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2355, $tmp2356, param1, $tmp2357, $tmp2358, $tmp2359);
$fn2361 $tmp2360 = ($fn2361) $tmp2354->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2362 = $tmp2360($tmp2354, $tmp2355);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:428
org$frostlang$frostc$IR* $tmp2363 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2364 = *(&local52);
$fn2366 $tmp2365 = ($fn2366) $tmp2363->$class->vtable[4];
$tmp2365($tmp2363, $tmp2364);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:431
org$frostlang$frostc$IR$Value* $tmp2367 = *(&local13);
frost$core$Bit $tmp2368 = (frost$core$Bit) {$tmp2367 != NULL};
bool $tmp2369 = $tmp2368.value;
if ($tmp2369) goto block154; else goto block155;
block155:;
frost$core$Int $tmp2370 = (frost$core$Int) {431u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2371, $tmp2370, &$s2372);
abort(); // unreachable
block154:;
org$frostlang$frostc$IR$Value* $tmp2373 = *(&local51);
frost$core$Bit $tmp2374 = (frost$core$Bit) {$tmp2373 != NULL};
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block156; else goto block157;
block157:;
frost$core$Int $tmp2376 = (frost$core$Int) {432u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2377, $tmp2376, &$s2378);
abort(); // unreachable
block156:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:432:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2379 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2380 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2379, $tmp2380);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2381 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2382 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2383 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2381, $tmp2382, $tmp2383, $tmp2373);
frost$collections$Array$add$frost$collections$Array$T($tmp2379, ((frost$core$Object*) $tmp2381));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2379)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2384 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2385 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2384, $tmp2385);
org$frostlang$frostc$IR$Value* $tmp2386 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2367, &$s2387, ((frost$collections$ListView*) $tmp2379), $tmp2384);
org$frostlang$frostc$Type* $tmp2388 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:432:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2389 = &$tmp2388->typeKind;
org$frostlang$frostc$Type$Kind $tmp2390 = *$tmp2389;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2391;
$tmp2391 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2391->value = $tmp2390;
frost$core$Int $tmp2392 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp2393 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp2392);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2394;
$tmp2394 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2394->value = $tmp2393;
ITable* $tmp2395 = ((frost$core$Equatable*) $tmp2391)->$class->itable;
while ($tmp2395->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2395 = $tmp2395->next;
}
$fn2397 $tmp2396 = $tmp2395->methods[1];
frost$core$Bit $tmp2398 = $tmp2396(((frost$core$Equatable*) $tmp2391), ((frost$core$Equatable*) $tmp2394));
bool $tmp2399 = $tmp2398.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2394)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2391)));
if ($tmp2399) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
*(&local55) = $tmp2388;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
goto block160;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp2400 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2388);
frost$core$Int $tmp2401 = (frost$core$Int) {0u};
frost$core$Object* $tmp2402 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2400, $tmp2401);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2402)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2402);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
*(&local55) = ((org$frostlang$frostc$Type*) $tmp2402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2402)));
goto block160;
block160:;
org$frostlang$frostc$Type* $tmp2403 = *(&local55);
org$frostlang$frostc$Type** $tmp2404 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2405 = *$tmp2404;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2406 = &((org$frostlang$frostc$Symbol*) $tmp2403)->name;
frost$core$String* $tmp2407 = *$tmp2406;
frost$core$String** $tmp2408 = &((org$frostlang$frostc$Symbol*) $tmp2405)->name;
frost$core$String* $tmp2409 = *$tmp2408;
frost$core$Bit $tmp2410 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2407, $tmp2409);
bool $tmp2411 = $tmp2410.value;
if ($tmp2411) goto block167; else goto block168;
block167:;
org$frostlang$frostc$Type$Kind* $tmp2412 = &$tmp2403->typeKind;
org$frostlang$frostc$Type$Kind $tmp2413 = *$tmp2412;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2414;
$tmp2414 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2414->value = $tmp2413;
org$frostlang$frostc$Type$Kind* $tmp2415 = &$tmp2405->typeKind;
org$frostlang$frostc$Type$Kind $tmp2416 = *$tmp2415;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2417;
$tmp2417 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2417->value = $tmp2416;
ITable* $tmp2418 = ((frost$core$Equatable*) $tmp2414)->$class->itable;
while ($tmp2418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2418 = $tmp2418->next;
}
$fn2420 $tmp2419 = $tmp2418->methods[0];
frost$core$Bit $tmp2421 = $tmp2419(((frost$core$Equatable*) $tmp2414), ((frost$core$Equatable*) $tmp2417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2414)));
*(&local56) = $tmp2421;
goto block169;
block168:;
*(&local56) = $tmp2410;
goto block169;
block169:;
frost$core$Bit $tmp2422 = *(&local56);
bool $tmp2423 = $tmp2422.value;
if ($tmp2423) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp2424 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp2425 = *$tmp2424;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
org$frostlang$frostc$Type* $tmp2426 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2425;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
goto block159;
block165:;
org$frostlang$frostc$Type** $tmp2427 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp2428 = *$tmp2427;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2429 = &((org$frostlang$frostc$Symbol*) $tmp2403)->name;
frost$core$String* $tmp2430 = *$tmp2429;
frost$core$String** $tmp2431 = &((org$frostlang$frostc$Symbol*) $tmp2428)->name;
frost$core$String* $tmp2432 = *$tmp2431;
frost$core$Bit $tmp2433 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2430, $tmp2432);
bool $tmp2434 = $tmp2433.value;
if ($tmp2434) goto block173; else goto block174;
block173:;
org$frostlang$frostc$Type$Kind* $tmp2435 = &$tmp2403->typeKind;
org$frostlang$frostc$Type$Kind $tmp2436 = *$tmp2435;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2437;
$tmp2437 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2437->value = $tmp2436;
org$frostlang$frostc$Type$Kind* $tmp2438 = &$tmp2428->typeKind;
org$frostlang$frostc$Type$Kind $tmp2439 = *$tmp2438;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2440;
$tmp2440 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2440->value = $tmp2439;
ITable* $tmp2441 = ((frost$core$Equatable*) $tmp2437)->$class->itable;
while ($tmp2441->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2441 = $tmp2441->next;
}
$fn2443 $tmp2442 = $tmp2441->methods[0];
frost$core$Bit $tmp2444 = $tmp2442(((frost$core$Equatable*) $tmp2437), ((frost$core$Equatable*) $tmp2440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2440)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2437)));
*(&local57) = $tmp2444;
goto block175;
block174:;
*(&local57) = $tmp2433;
goto block175;
block175:;
frost$core$Bit $tmp2445 = *(&local57);
bool $tmp2446 = $tmp2445.value;
if ($tmp2446) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp2447 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp2448 = *$tmp2447;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
org$frostlang$frostc$Type* $tmp2449 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2448;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
goto block159;
block171:;
org$frostlang$frostc$Type** $tmp2450 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp2451 = *$tmp2450;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2452 = &((org$frostlang$frostc$Symbol*) $tmp2403)->name;
frost$core$String* $tmp2453 = *$tmp2452;
frost$core$String** $tmp2454 = &((org$frostlang$frostc$Symbol*) $tmp2451)->name;
frost$core$String* $tmp2455 = *$tmp2454;
frost$core$Bit $tmp2456 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2453, $tmp2455);
bool $tmp2457 = $tmp2456.value;
if ($tmp2457) goto block179; else goto block180;
block179:;
org$frostlang$frostc$Type$Kind* $tmp2458 = &$tmp2403->typeKind;
org$frostlang$frostc$Type$Kind $tmp2459 = *$tmp2458;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2460;
$tmp2460 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2460->value = $tmp2459;
org$frostlang$frostc$Type$Kind* $tmp2461 = &$tmp2451->typeKind;
org$frostlang$frostc$Type$Kind $tmp2462 = *$tmp2461;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2463;
$tmp2463 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2463->value = $tmp2462;
ITable* $tmp2464 = ((frost$core$Equatable*) $tmp2460)->$class->itable;
while ($tmp2464->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2464 = $tmp2464->next;
}
$fn2466 $tmp2465 = $tmp2464->methods[0];
frost$core$Bit $tmp2467 = $tmp2465(((frost$core$Equatable*) $tmp2460), ((frost$core$Equatable*) $tmp2463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2463)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2460)));
*(&local58) = $tmp2467;
goto block181;
block180:;
*(&local58) = $tmp2456;
goto block181;
block181:;
frost$core$Bit $tmp2468 = *(&local58);
bool $tmp2469 = $tmp2468.value;
if ($tmp2469) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp2470 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp2471 = *$tmp2470;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
org$frostlang$frostc$Type* $tmp2472 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2471;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
goto block159;
block177:;
org$frostlang$frostc$Type** $tmp2473 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp2474 = *$tmp2473;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2475 = &((org$frostlang$frostc$Symbol*) $tmp2403)->name;
frost$core$String* $tmp2476 = *$tmp2475;
frost$core$String** $tmp2477 = &((org$frostlang$frostc$Symbol*) $tmp2474)->name;
frost$core$String* $tmp2478 = *$tmp2477;
frost$core$Bit $tmp2479 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2476, $tmp2478);
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block185; else goto block186;
block185:;
org$frostlang$frostc$Type$Kind* $tmp2481 = &$tmp2403->typeKind;
org$frostlang$frostc$Type$Kind $tmp2482 = *$tmp2481;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2483;
$tmp2483 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2483->value = $tmp2482;
org$frostlang$frostc$Type$Kind* $tmp2484 = &$tmp2474->typeKind;
org$frostlang$frostc$Type$Kind $tmp2485 = *$tmp2484;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2486;
$tmp2486 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2486->value = $tmp2485;
ITable* $tmp2487 = ((frost$core$Equatable*) $tmp2483)->$class->itable;
while ($tmp2487->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2487 = $tmp2487->next;
}
$fn2489 $tmp2488 = $tmp2487->methods[0];
frost$core$Bit $tmp2490 = $tmp2488(((frost$core$Equatable*) $tmp2483), ((frost$core$Equatable*) $tmp2486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2486)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2483)));
*(&local59) = $tmp2490;
goto block187;
block186:;
*(&local59) = $tmp2479;
goto block187;
block187:;
frost$core$Bit $tmp2491 = *(&local59);
bool $tmp2492 = $tmp2491.value;
if ($tmp2492) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp2493 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp2494 = *$tmp2493;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
org$frostlang$frostc$Type* $tmp2495 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2494;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
goto block159;
block183:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
org$frostlang$frostc$Type* $tmp2496 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2388;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
goto block159;
block163:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
org$frostlang$frostc$Type* $tmp2497 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
goto block159;
block159:;
org$frostlang$frostc$Type* $tmp2498 = *(&local54);
org$frostlang$frostc$IR$Value* $tmp2499 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2386, $tmp2498);
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
org$frostlang$frostc$IR$Value* $tmp2500 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local60) = $tmp2499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:433
org$frostlang$frostc$IR$Value* $tmp2501 = *(&local60);
frost$core$Bit $tmp2502 = (frost$core$Bit) {$tmp2501 != NULL};
bool $tmp2503 = $tmp2502.value;
if ($tmp2503) goto block188; else goto block189;
block189:;
frost$core$Int $tmp2504 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2505, $tmp2504);
abort(); // unreachable
block188:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:436
org$frostlang$frostc$IR* $tmp2506 = *(&local0);
$fn2508 $tmp2507 = ($fn2508) $tmp2506->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2509 = $tmp2507($tmp2506, &$s2510);
*(&local61) = $tmp2509;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:437
org$frostlang$frostc$IR* $tmp2511 = *(&local0);
$fn2513 $tmp2512 = ($fn2513) $tmp2511->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2514 = $tmp2512($tmp2511, &$s2515);
*(&local62) = $tmp2514;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:438
org$frostlang$frostc$IR* $tmp2516 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2517 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2518 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2519 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2520 = *(&local61);
org$frostlang$frostc$IR$Block$ID $tmp2521 = *(&local62);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2517, $tmp2518, param1, $tmp2519, $tmp2520, $tmp2521);
$fn2523 $tmp2522 = ($fn2523) $tmp2516->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2524 = $tmp2522($tmp2516, $tmp2517);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:442
org$frostlang$frostc$IR* $tmp2525 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2526 = *(&local61);
$fn2528 $tmp2527 = ($fn2528) $tmp2525->$class->vtable[4];
$tmp2527($tmp2525, $tmp2526);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:443
org$frostlang$frostc$IR$Value* $tmp2529 = *(&local60);
frost$core$Bit $tmp2530 = (frost$core$Bit) {$tmp2529 != NULL};
bool $tmp2531 = $tmp2530.value;
if ($tmp2531) goto block190; else goto block191;
block191:;
frost$core$Int $tmp2532 = (frost$core$Int) {443u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2533, $tmp2532, &$s2534);
abort(); // unreachable
block190:;
org$frostlang$frostc$IR$Value* $tmp2535 = *(&local15);
frost$core$Bit $tmp2536 = (frost$core$Bit) {$tmp2535 != NULL};
bool $tmp2537 = $tmp2536.value;
if ($tmp2537) goto block192; else goto block193;
block193:;
frost$core$Int $tmp2538 = (frost$core$Int) {443u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2539, $tmp2538, &$s2540);
abort(); // unreachable
block192:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:443:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2541 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2542 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2541, $tmp2542);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2543 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2544 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2545 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2543, $tmp2544, $tmp2545, $tmp2535);
frost$collections$Array$add$frost$collections$Array$T($tmp2541, ((frost$core$Object*) $tmp2543));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2541)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2546 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2547 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2548 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2549 = *$tmp2548;
frost$core$Bit $tmp2550 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2546, $tmp2547, $tmp2549, $tmp2550);
org$frostlang$frostc$IR$Value* $tmp2551 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2529, &$s2552, ((frost$collections$ListView*) $tmp2541), $tmp2546);
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
org$frostlang$frostc$IR$Value* $tmp2553 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2553));
*(&local63) = $tmp2551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2541)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:445
org$frostlang$frostc$IR$Value* $tmp2554 = *(&local63);
frost$core$Bit $tmp2555 = (frost$core$Bit) {$tmp2554 != NULL};
bool $tmp2556 = $tmp2555.value;
if ($tmp2556) goto block195; else goto block196;
block196:;
frost$core$Int $tmp2557 = (frost$core$Int) {445u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2558, $tmp2557);
abort(); // unreachable
block195:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:446
org$frostlang$frostc$IR$Value* $tmp2559 = *(&local63);
frost$core$Bit $tmp2560 = (frost$core$Bit) {$tmp2559 != NULL};
bool $tmp2561 = $tmp2560.value;
if ($tmp2561) goto block197; else goto block198;
block198:;
frost$core$Int $tmp2562 = (frost$core$Int) {446u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2563, $tmp2562, &$s2564);
abort(); // unreachable
block197:;
org$frostlang$frostc$IR$Value* $tmp2565 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2559);
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
org$frostlang$frostc$IR$Value* $tmp2566 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
*(&local64) = $tmp2565;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:447
org$frostlang$frostc$IR* $tmp2567 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2568 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2569 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2570 = *(&local64);
org$frostlang$frostc$IR$Block$ID $tmp2571 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2572 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2568, $tmp2569, param1, $tmp2570, $tmp2571, $tmp2572);
$fn2574 $tmp2573 = ($fn2574) $tmp2567->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2575 = $tmp2573($tmp2567, $tmp2568);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:450
org$frostlang$frostc$IR* $tmp2576 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2577 = *(&local62);
$fn2579 $tmp2578 = ($fn2579) $tmp2576->$class->vtable[4];
$tmp2578($tmp2576, $tmp2577);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:451
org$frostlang$frostc$IR$Value* $tmp2580 = *(&local60);
frost$core$Bit $tmp2581 = (frost$core$Bit) {$tmp2580 != NULL};
bool $tmp2582 = $tmp2581.value;
if ($tmp2582) goto block199; else goto block200;
block200:;
frost$core$Int $tmp2583 = (frost$core$Int) {451u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2584, $tmp2583, &$s2585);
abort(); // unreachable
block199:;
org$frostlang$frostc$IR$Value* $tmp2586 = *(&local15);
frost$core$Bit $tmp2587 = (frost$core$Bit) {$tmp2586 != NULL};
bool $tmp2588 = $tmp2587.value;
if ($tmp2588) goto block201; else goto block202;
block202:;
frost$core$Int $tmp2589 = (frost$core$Int) {451u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2590, $tmp2589, &$s2591);
abort(); // unreachable
block201:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:451:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2592 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2593 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2592, $tmp2593);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2594 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2595 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2596 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2594, $tmp2595, $tmp2596, $tmp2586);
frost$collections$Array$add$frost$collections$Array$T($tmp2592, ((frost$core$Object*) $tmp2594));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2592)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2597 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2598 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2599 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2600 = *$tmp2599;
frost$core$Bit $tmp2601 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2597, $tmp2598, $tmp2600, $tmp2601);
org$frostlang$frostc$IR$Value* $tmp2602 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2580, &$s2603, ((frost$collections$ListView*) $tmp2592), $tmp2597);
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
org$frostlang$frostc$IR$Value* $tmp2604 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
*(&local65) = $tmp2602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2592)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:453
org$frostlang$frostc$IR$Value* $tmp2605 = *(&local65);
frost$core$Bit $tmp2606 = (frost$core$Bit) {$tmp2605 != NULL};
bool $tmp2607 = $tmp2606.value;
if ($tmp2607) goto block204; else goto block205;
block205:;
frost$core$Int $tmp2608 = (frost$core$Int) {453u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2609, $tmp2608);
abort(); // unreachable
block204:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:454
org$frostlang$frostc$IR$Value* $tmp2610 = *(&local65);
frost$core$Bit $tmp2611 = (frost$core$Bit) {$tmp2610 != NULL};
bool $tmp2612 = $tmp2611.value;
if ($tmp2612) goto block206; else goto block207;
block207:;
frost$core$Int $tmp2613 = (frost$core$Int) {454u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2614, $tmp2613, &$s2615);
abort(); // unreachable
block206:;
org$frostlang$frostc$IR$Value* $tmp2616 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2610);
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
org$frostlang$frostc$IR$Value* $tmp2617 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
*(&local66) = $tmp2616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:455
org$frostlang$frostc$IR* $tmp2618 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2619 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2620 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2621 = *(&local66);
org$frostlang$frostc$IR$Block$ID $tmp2622 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2623 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2619, $tmp2620, param1, $tmp2621, $tmp2622, $tmp2623);
$fn2625 $tmp2624 = ($fn2625) $tmp2618->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2626 = $tmp2624($tmp2618, $tmp2619);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:459
org$frostlang$frostc$IR* $tmp2627 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2628 = *(&local53);
$fn2630 $tmp2629 = ($fn2630) $tmp2627->$class->vtable[4];
$tmp2629($tmp2627, $tmp2628);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:460
org$frostlang$frostc$IR$Value* $tmp2631 = *(&local51);
frost$core$Bit $tmp2632 = (frost$core$Bit) {$tmp2631 != NULL};
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block208; else goto block209;
block209:;
frost$core$Int $tmp2634 = (frost$core$Int) {460u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2635, $tmp2634, &$s2636);
abort(); // unreachable
block208:;
org$frostlang$frostc$IR$Value* $tmp2637 = *(&local13);
frost$core$Bit $tmp2638 = (frost$core$Bit) {$tmp2637 != NULL};
bool $tmp2639 = $tmp2638.value;
if ($tmp2639) goto block210; else goto block211;
block211:;
frost$core$Int $tmp2640 = (frost$core$Int) {460u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2641, $tmp2640, &$s2642);
abort(); // unreachable
block210:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:460:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2643 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2644 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2643, $tmp2644);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2645 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2646 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2647 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2645, $tmp2646, $tmp2647, $tmp2637);
frost$collections$Array$add$frost$collections$Array$T($tmp2643, ((frost$core$Object*) $tmp2645));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2643)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2648 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2649 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2648, $tmp2649);
org$frostlang$frostc$IR$Value* $tmp2650 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2631, &$s2651, ((frost$collections$ListView*) $tmp2643), $tmp2648);
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
org$frostlang$frostc$IR$Value* $tmp2652 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
*(&local67) = $tmp2650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2643)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:461
org$frostlang$frostc$IR$Value* $tmp2653 = *(&local67);
frost$core$Bit $tmp2654 = (frost$core$Bit) {$tmp2653 != NULL};
bool $tmp2655 = $tmp2654.value;
if ($tmp2655) goto block213; else goto block214;
block214:;
frost$core$Int $tmp2656 = (frost$core$Int) {461u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2657, $tmp2656);
abort(); // unreachable
block213:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:462
org$frostlang$frostc$IR$Value* $tmp2658 = *(&local67);
org$frostlang$frostc$Type* $tmp2659 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:462:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2660 = &$tmp2659->typeKind;
org$frostlang$frostc$Type$Kind $tmp2661 = *$tmp2660;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2662;
$tmp2662 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2662->value = $tmp2661;
frost$core$Int $tmp2663 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp2664 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp2663);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2665;
$tmp2665 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2665->value = $tmp2664;
ITable* $tmp2666 = ((frost$core$Equatable*) $tmp2662)->$class->itable;
while ($tmp2666->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2666 = $tmp2666->next;
}
$fn2668 $tmp2667 = $tmp2666->methods[1];
frost$core$Bit $tmp2669 = $tmp2667(((frost$core$Equatable*) $tmp2662), ((frost$core$Equatable*) $tmp2665));
bool $tmp2670 = $tmp2669.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2665)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2662)));
if ($tmp2670) goto block217; else goto block218;
block217:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
*(&local69) = $tmp2659;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
goto block216;
block218:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp2671 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2659);
frost$core$Int $tmp2672 = (frost$core$Int) {0u};
frost$core$Object* $tmp2673 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2671, $tmp2672);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2673)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2673);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local69) = ((org$frostlang$frostc$Type*) $tmp2673);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2673)));
goto block216;
block216:;
org$frostlang$frostc$Type* $tmp2674 = *(&local69);
org$frostlang$frostc$Type** $tmp2675 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2676 = *$tmp2675;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2677 = &((org$frostlang$frostc$Symbol*) $tmp2674)->name;
frost$core$String* $tmp2678 = *$tmp2677;
frost$core$String** $tmp2679 = &((org$frostlang$frostc$Symbol*) $tmp2676)->name;
frost$core$String* $tmp2680 = *$tmp2679;
frost$core$Bit $tmp2681 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2678, $tmp2680);
bool $tmp2682 = $tmp2681.value;
if ($tmp2682) goto block223; else goto block224;
block223:;
org$frostlang$frostc$Type$Kind* $tmp2683 = &$tmp2674->typeKind;
org$frostlang$frostc$Type$Kind $tmp2684 = *$tmp2683;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2685;
$tmp2685 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2685->value = $tmp2684;
org$frostlang$frostc$Type$Kind* $tmp2686 = &$tmp2676->typeKind;
org$frostlang$frostc$Type$Kind $tmp2687 = *$tmp2686;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2688;
$tmp2688 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2688->value = $tmp2687;
ITable* $tmp2689 = ((frost$core$Equatable*) $tmp2685)->$class->itable;
while ($tmp2689->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2689 = $tmp2689->next;
}
$fn2691 $tmp2690 = $tmp2689->methods[0];
frost$core$Bit $tmp2692 = $tmp2690(((frost$core$Equatable*) $tmp2685), ((frost$core$Equatable*) $tmp2688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2688)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2685)));
*(&local70) = $tmp2692;
goto block225;
block224:;
*(&local70) = $tmp2681;
goto block225;
block225:;
frost$core$Bit $tmp2693 = *(&local70);
bool $tmp2694 = $tmp2693.value;
if ($tmp2694) goto block220; else goto block221;
block220:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp2695 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp2696 = *$tmp2695;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
org$frostlang$frostc$Type* $tmp2697 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2696;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
goto block215;
block221:;
org$frostlang$frostc$Type** $tmp2698 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp2699 = *$tmp2698;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2700 = &((org$frostlang$frostc$Symbol*) $tmp2674)->name;
frost$core$String* $tmp2701 = *$tmp2700;
frost$core$String** $tmp2702 = &((org$frostlang$frostc$Symbol*) $tmp2699)->name;
frost$core$String* $tmp2703 = *$tmp2702;
frost$core$Bit $tmp2704 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2701, $tmp2703);
bool $tmp2705 = $tmp2704.value;
if ($tmp2705) goto block229; else goto block230;
block229:;
org$frostlang$frostc$Type$Kind* $tmp2706 = &$tmp2674->typeKind;
org$frostlang$frostc$Type$Kind $tmp2707 = *$tmp2706;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2708;
$tmp2708 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2708->value = $tmp2707;
org$frostlang$frostc$Type$Kind* $tmp2709 = &$tmp2699->typeKind;
org$frostlang$frostc$Type$Kind $tmp2710 = *$tmp2709;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2711;
$tmp2711 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2711->value = $tmp2710;
ITable* $tmp2712 = ((frost$core$Equatable*) $tmp2708)->$class->itable;
while ($tmp2712->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2712 = $tmp2712->next;
}
$fn2714 $tmp2713 = $tmp2712->methods[0];
frost$core$Bit $tmp2715 = $tmp2713(((frost$core$Equatable*) $tmp2708), ((frost$core$Equatable*) $tmp2711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2711)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2708)));
*(&local71) = $tmp2715;
goto block231;
block230:;
*(&local71) = $tmp2704;
goto block231;
block231:;
frost$core$Bit $tmp2716 = *(&local71);
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block226; else goto block227;
block226:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp2718 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp2719 = *$tmp2718;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
org$frostlang$frostc$Type* $tmp2720 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2719;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
goto block215;
block227:;
org$frostlang$frostc$Type** $tmp2721 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp2722 = *$tmp2721;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2723 = &((org$frostlang$frostc$Symbol*) $tmp2674)->name;
frost$core$String* $tmp2724 = *$tmp2723;
frost$core$String** $tmp2725 = &((org$frostlang$frostc$Symbol*) $tmp2722)->name;
frost$core$String* $tmp2726 = *$tmp2725;
frost$core$Bit $tmp2727 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2724, $tmp2726);
bool $tmp2728 = $tmp2727.value;
if ($tmp2728) goto block235; else goto block236;
block235:;
org$frostlang$frostc$Type$Kind* $tmp2729 = &$tmp2674->typeKind;
org$frostlang$frostc$Type$Kind $tmp2730 = *$tmp2729;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2731;
$tmp2731 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2731->value = $tmp2730;
org$frostlang$frostc$Type$Kind* $tmp2732 = &$tmp2722->typeKind;
org$frostlang$frostc$Type$Kind $tmp2733 = *$tmp2732;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2734;
$tmp2734 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2734->value = $tmp2733;
ITable* $tmp2735 = ((frost$core$Equatable*) $tmp2731)->$class->itable;
while ($tmp2735->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2735 = $tmp2735->next;
}
$fn2737 $tmp2736 = $tmp2735->methods[0];
frost$core$Bit $tmp2738 = $tmp2736(((frost$core$Equatable*) $tmp2731), ((frost$core$Equatable*) $tmp2734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2734)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2731)));
*(&local72) = $tmp2738;
goto block237;
block236:;
*(&local72) = $tmp2727;
goto block237;
block237:;
frost$core$Bit $tmp2739 = *(&local72);
bool $tmp2740 = $tmp2739.value;
if ($tmp2740) goto block232; else goto block233;
block232:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp2741 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp2742 = *$tmp2741;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
org$frostlang$frostc$Type* $tmp2743 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2742;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
goto block215;
block233:;
org$frostlang$frostc$Type** $tmp2744 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp2745 = *$tmp2744;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2746 = &((org$frostlang$frostc$Symbol*) $tmp2674)->name;
frost$core$String* $tmp2747 = *$tmp2746;
frost$core$String** $tmp2748 = &((org$frostlang$frostc$Symbol*) $tmp2745)->name;
frost$core$String* $tmp2749 = *$tmp2748;
frost$core$Bit $tmp2750 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2747, $tmp2749);
bool $tmp2751 = $tmp2750.value;
if ($tmp2751) goto block241; else goto block242;
block241:;
org$frostlang$frostc$Type$Kind* $tmp2752 = &$tmp2674->typeKind;
org$frostlang$frostc$Type$Kind $tmp2753 = *$tmp2752;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2754;
$tmp2754 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2754->value = $tmp2753;
org$frostlang$frostc$Type$Kind* $tmp2755 = &$tmp2745->typeKind;
org$frostlang$frostc$Type$Kind $tmp2756 = *$tmp2755;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2757;
$tmp2757 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2757->value = $tmp2756;
ITable* $tmp2758 = ((frost$core$Equatable*) $tmp2754)->$class->itable;
while ($tmp2758->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2758 = $tmp2758->next;
}
$fn2760 $tmp2759 = $tmp2758->methods[0];
frost$core$Bit $tmp2761 = $tmp2759(((frost$core$Equatable*) $tmp2754), ((frost$core$Equatable*) $tmp2757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2757)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2754)));
*(&local73) = $tmp2761;
goto block243;
block242:;
*(&local73) = $tmp2750;
goto block243;
block243:;
frost$core$Bit $tmp2762 = *(&local73);
bool $tmp2763 = $tmp2762.value;
if ($tmp2763) goto block238; else goto block239;
block238:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp2764 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp2765 = *$tmp2764;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
org$frostlang$frostc$Type* $tmp2766 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2765;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
goto block215;
block239:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
org$frostlang$frostc$Type* $tmp2767 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2659;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
goto block215;
block219:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
org$frostlang$frostc$Type* $tmp2768 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
goto block215;
block215:;
org$frostlang$frostc$Type* $tmp2769 = *(&local68);
org$frostlang$frostc$IR$Value* $tmp2770 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2658, $tmp2769);
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
org$frostlang$frostc$IR$Value* $tmp2771 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
*(&local74) = $tmp2770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:463
org$frostlang$frostc$IR$Value* $tmp2772 = *(&local74);
frost$core$Bit $tmp2773 = (frost$core$Bit) {$tmp2772 != NULL};
bool $tmp2774 = $tmp2773.value;
if ($tmp2774) goto block244; else goto block245;
block245:;
frost$core$Int $tmp2775 = (frost$core$Int) {463u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2776, $tmp2775);
abort(); // unreachable
block244:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:466
org$frostlang$frostc$IR* $tmp2777 = *(&local0);
$fn2779 $tmp2778 = ($fn2779) $tmp2777->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2780 = $tmp2778($tmp2777, &$s2781);
*(&local75) = $tmp2780;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:467
org$frostlang$frostc$IR* $tmp2782 = *(&local0);
$fn2784 $tmp2783 = ($fn2784) $tmp2782->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2785 = $tmp2783($tmp2782, &$s2786);
*(&local76) = $tmp2785;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:468
org$frostlang$frostc$IR* $tmp2787 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2788 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2789 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2790 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2791 = *(&local75);
org$frostlang$frostc$IR$Block$ID $tmp2792 = *(&local76);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2788, $tmp2789, param1, $tmp2790, $tmp2791, $tmp2792);
$fn2794 $tmp2793 = ($fn2794) $tmp2787->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2795 = $tmp2793($tmp2787, $tmp2788);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:472
org$frostlang$frostc$IR* $tmp2796 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2797 = *(&local75);
$fn2799 $tmp2798 = ($fn2799) $tmp2796->$class->vtable[4];
$tmp2798($tmp2796, $tmp2797);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:473
org$frostlang$frostc$IR$Value* $tmp2800 = *(&local74);
frost$core$Bit $tmp2801 = (frost$core$Bit) {$tmp2800 != NULL};
bool $tmp2802 = $tmp2801.value;
if ($tmp2802) goto block246; else goto block247;
block247:;
frost$core$Int $tmp2803 = (frost$core$Int) {473u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2804, $tmp2803, &$s2805);
abort(); // unreachable
block246:;
org$frostlang$frostc$IR$Value* $tmp2806 = *(&local25);
frost$core$Bit $tmp2807 = (frost$core$Bit) {$tmp2806 != NULL};
bool $tmp2808 = $tmp2807.value;
if ($tmp2808) goto block248; else goto block249;
block249:;
frost$core$Int $tmp2809 = (frost$core$Int) {473u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2810, $tmp2809, &$s2811);
abort(); // unreachable
block248:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:473:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2812 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2813 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2812, $tmp2813);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2814 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2815 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2816 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2814, $tmp2815, $tmp2816, $tmp2806);
frost$collections$Array$add$frost$collections$Array$T($tmp2812, ((frost$core$Object*) $tmp2814));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2812)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2817 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2818 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2819 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2820 = *$tmp2819;
frost$core$Bit $tmp2821 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2817, $tmp2818, $tmp2820, $tmp2821);
org$frostlang$frostc$IR$Value* $tmp2822 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2800, &$s2823, ((frost$collections$ListView*) $tmp2812), $tmp2817);
*(&local77) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
org$frostlang$frostc$IR$Value* $tmp2824 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local77) = $tmp2822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2812)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:475
org$frostlang$frostc$IR$Value* $tmp2825 = *(&local77);
frost$core$Bit $tmp2826 = (frost$core$Bit) {$tmp2825 != NULL};
bool $tmp2827 = $tmp2826.value;
if ($tmp2827) goto block251; else goto block252;
block252:;
frost$core$Int $tmp2828 = (frost$core$Int) {475u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2829, $tmp2828);
abort(); // unreachable
block251:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:476
org$frostlang$frostc$IR$Value* $tmp2830 = *(&local77);
frost$core$Bit $tmp2831 = (frost$core$Bit) {$tmp2830 != NULL};
bool $tmp2832 = $tmp2831.value;
if ($tmp2832) goto block253; else goto block254;
block254:;
frost$core$Int $tmp2833 = (frost$core$Int) {476u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2834, $tmp2833, &$s2835);
abort(); // unreachable
block253:;
org$frostlang$frostc$IR$Value* $tmp2836 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2830);
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
org$frostlang$frostc$IR$Value* $tmp2837 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
*(&local78) = $tmp2836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:477
org$frostlang$frostc$IR* $tmp2838 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2839 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2840 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2841 = *(&local78);
org$frostlang$frostc$IR$Block$ID $tmp2842 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2843 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2839, $tmp2840, param1, $tmp2841, $tmp2842, $tmp2843);
$fn2845 $tmp2844 = ($fn2845) $tmp2838->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2846 = $tmp2844($tmp2838, $tmp2839);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:481
org$frostlang$frostc$IR* $tmp2847 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2848 = *(&local76);
$fn2850 $tmp2849 = ($fn2850) $tmp2847->$class->vtable[4];
$tmp2849($tmp2847, $tmp2848);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:482
org$frostlang$frostc$IR$Value* $tmp2851 = *(&local74);
frost$core$Bit $tmp2852 = (frost$core$Bit) {$tmp2851 != NULL};
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block255; else goto block256;
block256:;
frost$core$Int $tmp2854 = (frost$core$Int) {482u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2855, $tmp2854, &$s2856);
abort(); // unreachable
block255:;
org$frostlang$frostc$IR$Value* $tmp2857 = *(&local25);
frost$core$Bit $tmp2858 = (frost$core$Bit) {$tmp2857 != NULL};
bool $tmp2859 = $tmp2858.value;
if ($tmp2859) goto block257; else goto block258;
block258:;
frost$core$Int $tmp2860 = (frost$core$Int) {482u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2861, $tmp2860, &$s2862);
abort(); // unreachable
block257:;
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:482:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2863 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2864 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2863, $tmp2864);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2865 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2866 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2867 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2865, $tmp2866, $tmp2867, $tmp2857);
frost$collections$Array$add$frost$collections$Array$T($tmp2863, ((frost$core$Object*) $tmp2865));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2863)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2868 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2869 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp2870 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2871 = *$tmp2870;
frost$core$Bit $tmp2872 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2868, $tmp2869, $tmp2871, $tmp2872);
org$frostlang$frostc$IR$Value* $tmp2873 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2851, &$s2874, ((frost$collections$ListView*) $tmp2863), $tmp2868);
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
org$frostlang$frostc$IR$Value* $tmp2875 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
*(&local79) = $tmp2873;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2863)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:484
org$frostlang$frostc$IR$Value* $tmp2876 = *(&local79);
frost$core$Bit $tmp2877 = (frost$core$Bit) {$tmp2876 != NULL};
bool $tmp2878 = $tmp2877.value;
if ($tmp2878) goto block260; else goto block261;
block261:;
frost$core$Int $tmp2879 = (frost$core$Int) {484u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2880, $tmp2879);
abort(); // unreachable
block260:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:485
org$frostlang$frostc$IR$Value* $tmp2881 = *(&local79);
frost$core$Bit $tmp2882 = (frost$core$Bit) {$tmp2881 != NULL};
bool $tmp2883 = $tmp2882.value;
if ($tmp2883) goto block262; else goto block263;
block263:;
frost$core$Int $tmp2884 = (frost$core$Int) {485u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2885, $tmp2884, &$s2886);
abort(); // unreachable
block262:;
org$frostlang$frostc$IR$Value* $tmp2887 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2881);
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
org$frostlang$frostc$IR$Value* $tmp2888 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
*(&local80) = $tmp2887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:486
org$frostlang$frostc$IR* $tmp2889 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2890 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2891 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp2892 = *(&local80);
org$frostlang$frostc$IR$Block$ID $tmp2893 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2894 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2890, $tmp2891, param1, $tmp2892, $tmp2893, $tmp2894);
$fn2896 $tmp2895 = ($fn2896) $tmp2889->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2897 = $tmp2895($tmp2889, $tmp2890);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:489
org$frostlang$frostc$IR* $tmp2898 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2899 = *(&local50);
$fn2901 $tmp2900 = ($fn2901) $tmp2898->$class->vtable[4];
$tmp2900($tmp2898, $tmp2899);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:490
org$frostlang$frostc$IR$Value* $tmp2902 = *(&local51);
frost$core$Bit $tmp2903 = (frost$core$Bit) {$tmp2902 != NULL};
bool $tmp2904 = $tmp2903.value;
if ($tmp2904) goto block264; else goto block265;
block265:;
frost$core$Int $tmp2905 = (frost$core$Int) {490u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2906, $tmp2905, &$s2907);
abort(); // unreachable
block264:;
org$frostlang$frostc$IR$Value* $tmp2908 = *(&local14);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:490:89
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2909 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2910 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2909, $tmp2910);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2911 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2912 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp2913 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2911, $tmp2912, $tmp2913, $tmp2908);
frost$collections$Array$add$frost$collections$Array$T($tmp2909, ((frost$core$Object*) $tmp2911));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2909)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2914 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2915 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2914, $tmp2915);
org$frostlang$frostc$IR$Value* $tmp2916 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2902, &$s2917, ((frost$collections$ListView*) $tmp2909), $tmp2914);
org$frostlang$frostc$Type* $tmp2918 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2919 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2916, $tmp2918);
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
org$frostlang$frostc$IR$Value* $tmp2920 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
*(&local81) = $tmp2919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2909)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:492
org$frostlang$frostc$IR$Value* $tmp2921 = *(&local81);
frost$core$Bit $tmp2922 = (frost$core$Bit) {$tmp2921 != NULL};
bool $tmp2923 = $tmp2922.value;
if ($tmp2923) goto block267; else goto block268;
block268:;
frost$core$Int $tmp2924 = (frost$core$Int) {492u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2925, $tmp2924);
abort(); // unreachable
block267:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:493
org$frostlang$frostc$IR* $tmp2926 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2927 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2928 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp2929 = *(&local81);
frost$core$Bit $tmp2930 = (frost$core$Bit) {$tmp2929 != NULL};
bool $tmp2931 = $tmp2930.value;
if ($tmp2931) goto block269; else goto block270;
block270:;
frost$core$Int $tmp2932 = (frost$core$Int) {493u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2933, $tmp2932, &$s2934);
abort(); // unreachable
block269:;
org$frostlang$frostc$Type* $tmp2935 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp2936 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2929, $tmp2935);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2937 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2938 = (frost$core$Int) {2u};
frost$core$Int $tmp2939 = *(&local3);
org$frostlang$frostc$Type* $tmp2940 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp2937, $tmp2938, $tmp2939, $tmp2940);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2927, $tmp2928, param1, $tmp2936, $tmp2937);
$fn2942 $tmp2941 = ($fn2942) $tmp2926->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2943 = $tmp2941($tmp2926, $tmp2927);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:495
org$frostlang$frostc$IR* $tmp2944 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2945 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2946 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp2947 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2945, $tmp2946, param1, $tmp2947);
$fn2949 $tmp2948 = ($fn2949) $tmp2944->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2950 = $tmp2948($tmp2944, $tmp2945);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:497
org$frostlang$frostc$IR* $tmp2951 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2952 = *(&local29);
$fn2954 $tmp2953 = ($fn2954) $tmp2951->$class->vtable[4];
$tmp2953($tmp2951, $tmp2952);
org$frostlang$frostc$IR$Value* $tmp2955 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2956 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2957 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2958 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2959 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
*(&local77) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2960 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2961 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2961));
*(&local68) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2962 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2963 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2964 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2965 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2966 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2967 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2968 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
*(&local54) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2379)));
org$frostlang$frostc$IR$Value* $tmp2969 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2970 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
*(&local34) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp2971 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2972 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2973 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2974 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2975 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2976 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
org$frostlang$frostc$IR$Value* $tmp2977 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2978 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2979 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2980 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp2981 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2982 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2983 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2984 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2985 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2986 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
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
org$frostlang$frostc$IR** $tmp2987 = &param0->ir;
org$frostlang$frostc$IR* $tmp2988 = *$tmp2987;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
org$frostlang$frostc$IR* $tmp2989 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local0) = $tmp2988;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:505
$fn2991 $tmp2990 = ($fn2991) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2992 = $tmp2990(param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
org$frostlang$frostc$Type* $tmp2993 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
*(&local1) = $tmp2992;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:506
org$frostlang$frostc$Type* $tmp2994 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:506:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp2995 = &((org$frostlang$frostc$Symbol*) $tmp2994)->name;
frost$core$String* $tmp2996 = *$tmp2995;
frost$core$Bit $tmp2997 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2996, &$s2998);
bool $tmp2999 = $tmp2997.value;
if ($tmp2999) goto block2; else goto block3;
block2:;
*(&local2) = $tmp2997;
goto block4;
block3:;
org$frostlang$frostc$Type* $tmp3000 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:506:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp3001 = &((org$frostlang$frostc$Symbol*) $tmp3000)->name;
frost$core$String* $tmp3002 = *$tmp3001;
frost$core$Bit $tmp3003 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3002, &$s3004);
*(&local2) = $tmp3003;
goto block4;
block4:;
frost$core$Bit $tmp3005 = *(&local2);
bool $tmp3006 = $tmp3005.value;
if ($tmp3006) goto block6; else goto block7;
block7:;
frost$core$Int $tmp3007 = (frost$core$Int) {506u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3008, $tmp3007);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:507
org$frostlang$frostc$Type* $tmp3009 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:507:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3010 = &$tmp3009->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3011 = *$tmp3010;
frost$core$Bit $tmp3012 = (frost$core$Bit) {$tmp3011 != NULL};
bool $tmp3013 = $tmp3012.value;
if ($tmp3013) goto block11; else goto block12;
block12:;
frost$core$Int $tmp3014 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3015, $tmp3014, &$s3016);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
frost$core$Int $tmp3017 = (frost$core$Int) {1u};
frost$core$Object* $tmp3018 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3011, $tmp3017);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from For.frost:507:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp3019 = &((org$frostlang$frostc$Type*) $tmp3018)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3020 = *$tmp3019;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3021;
$tmp3021 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3021->value = $tmp3020;
frost$core$Int $tmp3022 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3023 = &(&local4)->$rawValue;
*$tmp3023 = $tmp3022;
org$frostlang$frostc$Type$Kind $tmp3024 = *(&local4);
*(&local3) = $tmp3024;
org$frostlang$frostc$Type$Kind $tmp3025 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3026;
$tmp3026 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3026->value = $tmp3025;
ITable* $tmp3027 = ((frost$core$Equatable*) $tmp3021)->$class->itable;
while ($tmp3027->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3027 = $tmp3027->next;
}
$fn3029 $tmp3028 = $tmp3027->methods[0];
frost$core$Bit $tmp3030 = $tmp3028(((frost$core$Equatable*) $tmp3021), ((frost$core$Equatable*) $tmp3026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3026)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3021)));
bool $tmp3031 = $tmp3030.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3018);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
if ($tmp3031) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:508
org$frostlang$frostc$Type* $tmp3032 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:508:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3034 $tmp3033 = ($fn3034) ((frost$core$Object*) $tmp3032)->$class->vtable[0];
frost$core$String* $tmp3035 = $tmp3033(((frost$core$Object*) $tmp3032));
frost$core$String* $tmp3036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3037, $tmp3035);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
frost$core$String* $tmp3038 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3036, &$s3039);
frost$core$String* $tmp3040 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3038, &$s3041);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3040);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:511
$fn3043 $tmp3042 = ($fn3043) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3044 = $tmp3042(param4);
frost$core$Bit $tmp3045 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp3044);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:511:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3046 = $tmp3045.value;
bool $tmp3047 = !$tmp3046;
frost$core$Bit $tmp3048 = (frost$core$Bit) {$tmp3047};
bool $tmp3049 = $tmp3048.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
if ($tmp3049) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:512
org$frostlang$frostc$Type* $tmp3050 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3050));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3051 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:514
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:515
org$frostlang$frostc$Type* $tmp3052 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3053 = &$tmp3052->typeKind;
org$frostlang$frostc$Type$Kind $tmp3054 = *$tmp3053;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3055;
$tmp3055 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3055->value = $tmp3054;
frost$core$Int $tmp3056 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:515:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3057 = &(&local7)->$rawValue;
*$tmp3057 = $tmp3056;
org$frostlang$frostc$Type$Kind $tmp3058 = *(&local7);
*(&local6) = $tmp3058;
org$frostlang$frostc$Type$Kind $tmp3059 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3060;
$tmp3060 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3060->value = $tmp3059;
ITable* $tmp3061 = ((frost$core$Equatable*) $tmp3055)->$class->itable;
while ($tmp3061->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3061 = $tmp3061->next;
}
$fn3063 $tmp3062 = $tmp3061->methods[0];
frost$core$Bit $tmp3064 = $tmp3062(((frost$core$Equatable*) $tmp3055), ((frost$core$Equatable*) $tmp3060));
bool $tmp3065 = $tmp3064.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3060)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3055)));
if ($tmp3065) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:516
$fn3067 $tmp3066 = ($fn3067) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3068 = $tmp3066(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:516:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3069 = &$tmp3068->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3070 = *$tmp3069;
frost$core$Bit $tmp3071 = (frost$core$Bit) {$tmp3070 != NULL};
bool $tmp3072 = $tmp3071.value;
if ($tmp3072) goto block24; else goto block25;
block25:;
frost$core$Int $tmp3073 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3074, $tmp3073, &$s3075);
abort(); // unreachable
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
frost$core$Int $tmp3076 = (frost$core$Int) {0u};
frost$core$Object* $tmp3077 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3070, $tmp3076);
org$frostlang$frostc$Type$Kind* $tmp3078 = &((org$frostlang$frostc$Type*) $tmp3077)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3079 = *$tmp3078;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3080;
$tmp3080 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3080->value = $tmp3079;
frost$core$Int $tmp3081 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:516:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3082 = &(&local9)->$rawValue;
*$tmp3082 = $tmp3081;
org$frostlang$frostc$Type$Kind $tmp3083 = *(&local9);
*(&local8) = $tmp3083;
org$frostlang$frostc$Type$Kind $tmp3084 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3085;
$tmp3085 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3085->value = $tmp3084;
ITable* $tmp3086 = ((frost$core$Equatable*) $tmp3080)->$class->itable;
while ($tmp3086->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3086 = $tmp3086->next;
}
$fn3088 $tmp3087 = $tmp3086->methods[0];
frost$core$Bit $tmp3089 = $tmp3087(((frost$core$Equatable*) $tmp3080), ((frost$core$Equatable*) $tmp3085));
bool $tmp3090 = $tmp3089.value;
if ($tmp3090) goto block27; else goto block28;
block28:;
frost$core$Int $tmp3091 = (frost$core$Int) {516u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3092, $tmp3091);
abort(); // unreachable
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3085)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3080)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3077);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:517
$fn3094 $tmp3093 = ($fn3094) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3095 = $tmp3093(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3096 = &$tmp3095->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3097 = *$tmp3096;
frost$core$Bit $tmp3098 = (frost$core$Bit) {$tmp3097 != NULL};
bool $tmp3099 = $tmp3098.value;
if ($tmp3099) goto block30; else goto block31;
block31:;
frost$core$Int $tmp3100 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3101, $tmp3100, &$s3102);
abort(); // unreachable
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
frost$core$Int $tmp3103 = (frost$core$Int) {0u};
frost$core$Object* $tmp3104 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3097, $tmp3103);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3105 = &((org$frostlang$frostc$Type*) $tmp3104)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3106 = *$tmp3105;
frost$core$Bit $tmp3107 = (frost$core$Bit) {$tmp3106 != NULL};
bool $tmp3108 = $tmp3107.value;
if ($tmp3108) goto block33; else goto block34;
block34:;
frost$core$Int $tmp3109 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3110, $tmp3109, &$s3111);
abort(); // unreachable
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
frost$core$Int $tmp3112 = (frost$core$Int) {1u};
frost$core$Object* $tmp3113 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3106, $tmp3112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3113)));
org$frostlang$frostc$Type* $tmp3114 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp3113);
frost$core$Frost$unref$frost$core$Object$Q($tmp3113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
frost$core$Frost$unref$frost$core$Object$Q($tmp3104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:520
org$frostlang$frostc$Type* $tmp3115 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3116 = &$tmp3115->typeKind;
org$frostlang$frostc$Type$Kind $tmp3117 = *$tmp3116;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3118;
$tmp3118 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3118->value = $tmp3117;
frost$core$Int $tmp3119 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:520:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3120 = &(&local11)->$rawValue;
*$tmp3120 = $tmp3119;
org$frostlang$frostc$Type$Kind $tmp3121 = *(&local11);
*(&local10) = $tmp3121;
org$frostlang$frostc$Type$Kind $tmp3122 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3123;
$tmp3123 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3123->value = $tmp3122;
ITable* $tmp3124 = ((frost$core$Equatable*) $tmp3118)->$class->itable;
while ($tmp3124->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3124 = $tmp3124->next;
}
$fn3126 $tmp3125 = $tmp3124->methods[0];
frost$core$Bit $tmp3127 = $tmp3125(((frost$core$Equatable*) $tmp3118), ((frost$core$Equatable*) $tmp3123));
bool $tmp3128 = $tmp3127.value;
if ($tmp3128) goto block36; else goto block37;
block37:;
frost$core$Int $tmp3129 = (frost$core$Int) {520u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3130, $tmp3129);
abort(); // unreachable
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3123)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3118)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:521
$fn3132 $tmp3131 = ($fn3132) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3133 = $tmp3131(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:521:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3134 = &$tmp3133->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3135 = *$tmp3134;
frost$core$Bit $tmp3136 = (frost$core$Bit) {$tmp3135 != NULL};
bool $tmp3137 = $tmp3136.value;
if ($tmp3137) goto block39; else goto block40;
block40:;
frost$core$Int $tmp3138 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3139, $tmp3138, &$s3140);
abort(); // unreachable
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
frost$core$Int $tmp3141 = (frost$core$Int) {1u};
frost$core$Object* $tmp3142 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3135, $tmp3141);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3142)));
org$frostlang$frostc$Type* $tmp3143 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp3142);
frost$core$Frost$unref$frost$core$Object$Q($tmp3142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:523
org$frostlang$frostc$Type* $tmp3144 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:523:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
frost$core$Bit $tmp3145 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp3144);
bool $tmp3146 = $tmp3145.value;
if ($tmp3146) goto block44; else goto block45;
block44:;
*(&local12) = $tmp3145;
goto block46;
block45:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:352:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp3147 = &((org$frostlang$frostc$Symbol*) $tmp3144)->name;
frost$core$String* $tmp3148 = *$tmp3147;
frost$core$Bit $tmp3149 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3148, &$s3150);
*(&local12) = $tmp3149;
goto block46;
block46:;
frost$core$Bit $tmp3151 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:523:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3152 = $tmp3151.value;
bool $tmp3153 = !$tmp3152;
frost$core$Bit $tmp3154 = (frost$core$Bit) {$tmp3153};
bool $tmp3155 = $tmp3154.value;
if ($tmp3155) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:524
$fn3157 $tmp3156 = ($fn3157) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3158 = $tmp3156(param4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:525:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3160 $tmp3159 = ($fn3160) ((frost$core$Object*) $tmp3158)->$class->vtable[0];
frost$core$String* $tmp3161 = $tmp3159(((frost$core$Object*) $tmp3158));
frost$core$String* $tmp3162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3163, $tmp3161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
frost$core$String* $tmp3164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3162, &$s3165);
frost$core$String* $tmp3166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3167, $tmp3164);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3166);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:526
org$frostlang$frostc$Type* $tmp3168 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3170 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:528
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp3171 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp3171, param0);
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
org$frostlang$frostc$Compiler$AutoScope* $tmp3172 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
*(&local13) = $tmp3171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:529
frost$core$Int $tmp3173 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from For.frost:529:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp3174 = &(&local15)->$rawValue;
*$tmp3174 = $tmp3173;
org$frostlang$frostc$Variable$Kind $tmp3175 = *(&local15);
*(&local14) = $tmp3175;
org$frostlang$frostc$Variable$Kind $tmp3176 = *(&local14);
org$frostlang$frostc$Type* $tmp3177 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:530:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp3178 = &$tmp3177->typeKind;
org$frostlang$frostc$Type$Kind $tmp3179 = *$tmp3178;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3180;
$tmp3180 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3180->value = $tmp3179;
frost$core$Int $tmp3181 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3182 = &(&local18)->$rawValue;
*$tmp3182 = $tmp3181;
org$frostlang$frostc$Type$Kind $tmp3183 = *(&local18);
*(&local17) = $tmp3183;
org$frostlang$frostc$Type$Kind $tmp3184 = *(&local17);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3185;
$tmp3185 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3185->value = $tmp3184;
ITable* $tmp3186 = ((frost$core$Equatable*) $tmp3180)->$class->itable;
while ($tmp3186->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3186 = $tmp3186->next;
}
$fn3188 $tmp3187 = $tmp3186->methods[1];
frost$core$Bit $tmp3189 = $tmp3187(((frost$core$Equatable*) $tmp3180), ((frost$core$Equatable*) $tmp3185));
bool $tmp3190 = $tmp3189.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3185)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3180)));
if ($tmp3190) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
*(&local16) = $tmp3177;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3191 = &$tmp3177->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3192 = *$tmp3191;
frost$core$Bit $tmp3193 = (frost$core$Bit) {$tmp3192 != NULL};
bool $tmp3194 = $tmp3193.value;
if ($tmp3194) goto block56; else goto block57;
block57:;
frost$core$Int $tmp3195 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3196, $tmp3195, &$s3197);
abort(); // unreachable
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
frost$core$Int $tmp3198 = (frost$core$Int) {0u};
frost$core$Object* $tmp3199 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3192, $tmp3198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3199)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3199);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local16) = ((org$frostlang$frostc$Type*) $tmp3199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3199)));
goto block51;
block51:;
org$frostlang$frostc$Type* $tmp3200 = *(&local16);
org$frostlang$frostc$Compiler$Target* $tmp3201 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp3176, ((org$frostlang$frostc$ASTNode*) NULL), $tmp3200);
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
org$frostlang$frostc$Compiler$Target* $tmp3202 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
*(&local19) = $tmp3201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:531
org$frostlang$frostc$Compiler$Target* $tmp3203 = *(&local19);
frost$core$Bit $tmp3204 = (frost$core$Bit) {$tmp3203 == NULL};
bool $tmp3205 = $tmp3204.value;
if ($tmp3205) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:532
org$frostlang$frostc$Compiler$Target* $tmp3206 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp3207 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3208 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp3209 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3210 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:534
org$frostlang$frostc$Compiler$Target* $tmp3212 = *(&local19);
frost$core$Bit $tmp3213 = (frost$core$Bit) {$tmp3212 != NULL};
bool $tmp3214 = $tmp3213.value;
if ($tmp3214) goto block60; else goto block61;
block61:;
frost$core$Int $tmp3215 = (frost$core$Int) {534u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3216, $tmp3215, &$s3217);
abort(); // unreachable
block60:;
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp3212);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:535
org$frostlang$frostc$Compiler$Target* $tmp3218 = *(&local19);
frost$core$Bit $tmp3219 = (frost$core$Bit) {$tmp3218 != NULL};
bool $tmp3220 = $tmp3219.value;
if ($tmp3220) goto block62; else goto block63;
block63:;
frost$core$Int $tmp3221 = (frost$core$Int) {535u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3222, $tmp3221, &$s3223);
abort(); // unreachable
block62:;
frost$core$Int* $tmp3224 = &$tmp3218->$rawValue;
frost$core$Int $tmp3225 = *$tmp3224;
frost$core$Int $tmp3226 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:536:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3227 = $tmp3225.value;
int64_t $tmp3228 = $tmp3226.value;
bool $tmp3229 = $tmp3227 == $tmp3228;
frost$core$Bit $tmp3230 = (frost$core$Bit) {$tmp3229};
bool $tmp3231 = $tmp3230.value;
if ($tmp3231) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Variable** $tmp3232 = (org$frostlang$frostc$Variable**) ($tmp3218->$data + 0);
org$frostlang$frostc$Variable* $tmp3233 = *$tmp3232;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3233));
org$frostlang$frostc$Variable* $tmp3234 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
*(&local20) = $tmp3233;
org$frostlang$frostc$IR$Value** $tmp3235 = (org$frostlang$frostc$IR$Value**) ($tmp3218->$data + 8);
org$frostlang$frostc$IR$Value* $tmp3236 = *$tmp3235;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:537
org$frostlang$frostc$Type* $tmp3237 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:537:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp3238 = &((org$frostlang$frostc$Symbol*) $tmp3237)->name;
frost$core$String* $tmp3239 = *$tmp3238;
frost$core$Bit $tmp3240 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3239, &$s3241);
bool $tmp3242 = $tmp3240.value;
if ($tmp3242) goto block68; else goto block70;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:538
org$frostlang$frostc$Variable* $tmp3243 = *(&local20);
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp3243, param4, param5);
goto block69;
block70:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:541
org$frostlang$frostc$Variable* $tmp3244 = *(&local20);
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp3244, param4, param5);
goto block69;
block69:;
org$frostlang$frostc$Variable* $tmp3245 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block64;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:545
frost$core$Bit $tmp3246 = (frost$core$Bit) {false};
bool $tmp3247 = $tmp3246.value;
if ($tmp3247) goto block72; else goto block73;
block73:;
frost$core$Int $tmp3248 = (frost$core$Int) {545u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3249, $tmp3248);
abort(); // unreachable
block72:;
goto block64;
block64:;
org$frostlang$frostc$Compiler$Target* $tmp3250 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3250));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp3251 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3251));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3252 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp3253 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3254 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3255 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
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
org$frostlang$frostc$IR** $tmp3256 = &param0->ir;
org$frostlang$frostc$IR* $tmp3257 = *$tmp3256;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3257));
org$frostlang$frostc$IR* $tmp3258 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3258));
*(&local0) = $tmp3257;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:555
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:556
frost$core$Int* $tmp3259 = &param3->$rawValue;
frost$core$Int $tmp3260 = *$tmp3259;
frost$core$Int $tmp3261 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:557:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3262 = $tmp3260.value;
int64_t $tmp3263 = $tmp3261.value;
bool $tmp3264 = $tmp3262 == $tmp3263;
frost$core$Bit $tmp3265 = (frost$core$Bit) {$tmp3264};
bool $tmp3266 = $tmp3265.value;
if ($tmp3266) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp3267 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp3268 = *$tmp3267;
*(&local2) = $tmp3268;
frost$core$String** $tmp3269 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp3270 = *$tmp3269;
org$frostlang$frostc$ASTNode** $tmp3271 = (org$frostlang$frostc$ASTNode**) (param3->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3272 = *$tmp3271;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
org$frostlang$frostc$ASTNode* $tmp3273 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
*(&local3) = $tmp3272;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:558
org$frostlang$frostc$Scanner** $tmp3274 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp3275 = *$tmp3274;
org$frostlang$frostc$ASTNode* $tmp3276 = *(&local3);
frost$core$Bit $tmp3277 = (frost$core$Bit) {$tmp3276 != NULL};
bool $tmp3278 = $tmp3277.value;
if ($tmp3278) goto block5; else goto block6;
block6:;
frost$core$Int $tmp3279 = (frost$core$Int) {558u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3280, $tmp3279, &$s3281);
abort(); // unreachable
block5:;
org$frostlang$frostc$Type* $tmp3282 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp3275, $tmp3276);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from For.frost:558:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:891
frost$core$Bit $tmp3283 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp3284 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp3282, $tmp3283);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3284));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3284));
org$frostlang$frostc$Type* $tmp3285 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
*(&local4) = $tmp3284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:559
org$frostlang$frostc$Type* $tmp3286 = *(&local4);
frost$core$Bit $tmp3287 = (frost$core$Bit) {$tmp3286 == NULL};
bool $tmp3288 = $tmp3287.value;
if ($tmp3288) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:560
org$frostlang$frostc$Type* $tmp3289 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3290 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3291 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3291));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3292 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3292));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:562
org$frostlang$frostc$Type* $tmp3293 = *(&local4);
frost$core$Bit $tmp3294 = (frost$core$Bit) {$tmp3293 != NULL};
bool $tmp3295 = $tmp3294.value;
if ($tmp3295) goto block12; else goto block13;
block13:;
frost$core$Int $tmp3296 = (frost$core$Int) {562u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3297, $tmp3296, &$s3298);
abort(); // unreachable
block12:;
org$frostlang$frostc$Type$Kind* $tmp3299 = &$tmp3293->typeKind;
org$frostlang$frostc$Type$Kind $tmp3300 = *$tmp3299;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3301;
$tmp3301 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3301->value = $tmp3300;
frost$core$Int $tmp3302 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:562:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3303 = &(&local6)->$rawValue;
*$tmp3303 = $tmp3302;
org$frostlang$frostc$Type$Kind $tmp3304 = *(&local6);
*(&local5) = $tmp3304;
org$frostlang$frostc$Type$Kind $tmp3305 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3306;
$tmp3306 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3306->value = $tmp3305;
ITable* $tmp3307 = ((frost$core$Equatable*) $tmp3301)->$class->itable;
while ($tmp3307->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3307 = $tmp3307->next;
}
$fn3309 $tmp3308 = $tmp3307->methods[0];
frost$core$Bit $tmp3310 = $tmp3308(((frost$core$Equatable*) $tmp3301), ((frost$core$Equatable*) $tmp3306));
bool $tmp3311 = $tmp3310.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3306)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3301)));
if ($tmp3311) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:563
org$frostlang$frostc$Position $tmp3312 = *(&local2);
org$frostlang$frostc$Type* $tmp3313 = *(&local4);
frost$core$Bit $tmp3314 = (frost$core$Bit) {$tmp3313 != NULL};
bool $tmp3315 = $tmp3314.value;
if ($tmp3315) goto block15; else goto block16;
block16:;
frost$core$Int $tmp3316 = (frost$core$Int) {563u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3317, $tmp3316, &$s3318);
abort(); // unreachable
block15:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:563:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3320 $tmp3319 = ($fn3320) ((frost$core$Object*) $tmp3313)->$class->vtable[0];
frost$core$String* $tmp3321 = $tmp3319(((frost$core$Object*) $tmp3313));
frost$core$String* $tmp3322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3323, $tmp3321);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3321));
frost$core$String* $tmp3324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3322, &$s3325);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3312, $tmp3324);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:564
org$frostlang$frostc$Type* $tmp3326 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3326));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3327 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3328 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3329 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:566
org$frostlang$frostc$Type* $tmp3330 = *(&local4);
frost$core$Bit $tmp3331 = (frost$core$Bit) {$tmp3330 != NULL};
bool $tmp3332 = $tmp3331.value;
if ($tmp3332) goto block20; else goto block21;
block21:;
frost$core$Int $tmp3333 = (frost$core$Int) {566u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3334, $tmp3333, &$s3335);
abort(); // unreachable
block20:;
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:566:22
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
frost$core$Bit $tmp3336 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp3330);
bool $tmp3337 = $tmp3336.value;
if ($tmp3337) goto block23; else goto block24;
block23:;
*(&local7) = $tmp3336;
goto block25;
block24:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:352:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
frost$core$String** $tmp3338 = &((org$frostlang$frostc$Symbol*) $tmp3330)->name;
frost$core$String* $tmp3339 = *$tmp3338;
frost$core$Bit $tmp3340 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3339, &$s3341);
*(&local7) = $tmp3340;
goto block25;
block25:;
frost$core$Bit $tmp3342 = *(&local7);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:566:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3343 = $tmp3342.value;
bool $tmp3344 = !$tmp3343;
frost$core$Bit $tmp3345 = (frost$core$Bit) {$tmp3344};
bool $tmp3346 = $tmp3345.value;
if ($tmp3346) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:567
org$frostlang$frostc$Position $tmp3347 = *(&local2);
org$frostlang$frostc$Type* $tmp3348 = *(&local4);
frost$core$Bit $tmp3349 = (frost$core$Bit) {$tmp3348 != NULL};
bool $tmp3350 = $tmp3349.value;
if ($tmp3350) goto block28; else goto block29;
block29:;
frost$core$Int $tmp3351 = (frost$core$Int) {568u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3352, $tmp3351, &$s3353);
abort(); // unreachable
block28:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:568:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn3355 $tmp3354 = ($fn3355) ((frost$core$Object*) $tmp3348)->$class->vtable[0];
frost$core$String* $tmp3356 = $tmp3354(((frost$core$Object*) $tmp3348));
frost$core$String* $tmp3357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3358, $tmp3356);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
frost$core$String* $tmp3359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3357, &$s3360);
frost$core$String* $tmp3361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3362, $tmp3359);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3347, $tmp3361);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:569
org$frostlang$frostc$Type* $tmp3363 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3364 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3365 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3366 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3366));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:571
frost$core$Int* $tmp3367 = &param4->$rawValue;
frost$core$Int $tmp3368 = *$tmp3367;
frost$core$Int $tmp3369 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:572:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3370 = $tmp3368.value;
int64_t $tmp3371 = $tmp3369.value;
bool $tmp3372 = $tmp3370 == $tmp3371;
frost$core$Bit $tmp3373 = (frost$core$Bit) {$tmp3372};
bool $tmp3374 = $tmp3373.value;
if ($tmp3374) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp3375 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp3376 = *$tmp3375;
org$frostlang$frostc$ASTNode** $tmp3377 = (org$frostlang$frostc$ASTNode**) (param4->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3378 = *$tmp3377;
frost$core$Bit* $tmp3379 = (frost$core$Bit*) (param4->$data + 32);
frost$core$Bit $tmp3380 = *$tmp3379;
org$frostlang$frostc$ASTNode** $tmp3381 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp3382 = *$tmp3381;
org$frostlang$frostc$ASTNode** $tmp3383 = (org$frostlang$frostc$ASTNode**) (param4->$data + 41);
org$frostlang$frostc$ASTNode* $tmp3384 = *$tmp3383;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3384));
org$frostlang$frostc$ASTNode* $tmp3385 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3385));
*(&local8) = $tmp3384;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:573
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:574
org$frostlang$frostc$ASTNode* $tmp3386 = *(&local8);
frost$core$Bit $tmp3387 = (frost$core$Bit) {$tmp3386 != NULL};
bool $tmp3388 = $tmp3387.value;
if ($tmp3388) goto block35; else goto block37;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:575
org$frostlang$frostc$Type* $tmp3389 = *(&local4);
frost$core$Bit $tmp3390 = (frost$core$Bit) {$tmp3389 != NULL};
bool $tmp3391 = $tmp3390.value;
if ($tmp3391) goto block38; else goto block39;
block39:;
frost$core$Int $tmp3392 = (frost$core$Int) {575u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3393, $tmp3392, &$s3394);
abort(); // unreachable
block38:;
org$frostlang$frostc$Type* $tmp3395 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp3389);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
org$frostlang$frostc$Type* $tmp3396 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
*(&local9) = $tmp3395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
goto block36;
block37:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:578
org$frostlang$frostc$Type* $tmp3397 = *(&local4);
frost$core$Bit $tmp3398 = (frost$core$Bit) {$tmp3397 != NULL};
bool $tmp3399 = $tmp3398.value;
if ($tmp3399) goto block40; else goto block41;
block41:;
frost$core$Int $tmp3400 = (frost$core$Int) {578u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3401, $tmp3400, &$s3402);
abort(); // unreachable
block40:;
// begin inline call to method org.frostlang.frostc.Type.RangeOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:578:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:298
org$frostlang$frostc$Type** $tmp3403 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3404 = *$tmp3403;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3405 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3406 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp3405, $tmp3406);
frost$collections$Array$add$frost$collections$Array$T($tmp3405, ((frost$core$Object*) $tmp3397));
org$frostlang$frostc$Type* $tmp3407 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3404, ((frost$collections$ListView*) $tmp3405));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
org$frostlang$frostc$Type* $tmp3408 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
*(&local9) = $tmp3407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
goto block36;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:580
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3409 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3410 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp3411 = *(&local9);
frost$core$Bit $tmp3412 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3409, $tmp3410, $tmp3411, $tmp3412);
org$frostlang$frostc$IR$Value* $tmp3413 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3409);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3413));
org$frostlang$frostc$IR$Value* $tmp3414 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
*(&local1) = $tmp3413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
org$frostlang$frostc$Type* $tmp3415 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3416 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp3417 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3418 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:583
frost$core$Int $tmp3419 = (frost$core$Int) {583u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3420, $tmp3419);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:588
org$frostlang$frostc$Type* $tmp3421 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
org$frostlang$frostc$Type* $tmp3422 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
*(&local10) = $tmp3421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:589
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3423 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3424 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3423, $tmp3424);
*(&local11) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
org$frostlang$frostc$Compiler$TypeContext* $tmp3425 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
*(&local11) = $tmp3423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:590
org$frostlang$frostc$Type* $tmp3426 = *(&local10);
frost$core$Bit $tmp3427 = (frost$core$Bit) {$tmp3426 != NULL};
bool $tmp3428 = $tmp3427.value;
if ($tmp3428) goto block46; else goto block45;
block46:;
org$frostlang$frostc$Type* $tmp3429 = *(&local10);
frost$core$Bit $tmp3430 = (frost$core$Bit) {$tmp3429 != NULL};
bool $tmp3431 = $tmp3430.value;
if ($tmp3431) goto block47; else goto block48;
block48:;
frost$core$Int $tmp3432 = (frost$core$Int) {590u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3433, $tmp3432, &$s3434);
abort(); // unreachable
block47:;
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:590:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp3435 = &((org$frostlang$frostc$Symbol*) $tmp3429)->name;
frost$core$String* $tmp3436 = *$tmp3435;
frost$core$Bit $tmp3437 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3436, &$s3438);
bool $tmp3439 = $tmp3437.value;
if ($tmp3439) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:591
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3440 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3441 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp3442 = *(&local10);
frost$core$Bit $tmp3443 = (frost$core$Bit) {$tmp3442 != NULL};
bool $tmp3444 = $tmp3443.value;
if ($tmp3444) goto block50; else goto block51;
block51:;
frost$core$Int $tmp3445 = (frost$core$Int) {592u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3446, $tmp3445, &$s3447);
abort(); // unreachable
block50:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:592:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3448 = &$tmp3442->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3449 = *$tmp3448;
frost$core$Bit $tmp3450 = (frost$core$Bit) {$tmp3449 != NULL};
bool $tmp3451 = $tmp3450.value;
if ($tmp3451) goto block53; else goto block54;
block54:;
frost$core$Int $tmp3452 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3453, $tmp3452, &$s3454);
abort(); // unreachable
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
frost$core$Int $tmp3455 = (frost$core$Int) {1u};
frost$core$Object* $tmp3456 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3449, $tmp3455);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:592:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp3457 = &((org$frostlang$frostc$Type*) $tmp3456)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3458 = *$tmp3457;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3459;
$tmp3459 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3459->value = $tmp3458;
frost$core$Int $tmp3460 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3461 = &(&local14)->$rawValue;
*$tmp3461 = $tmp3460;
org$frostlang$frostc$Type$Kind $tmp3462 = *(&local14);
*(&local13) = $tmp3462;
org$frostlang$frostc$Type$Kind $tmp3463 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3464;
$tmp3464 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3464->value = $tmp3463;
ITable* $tmp3465 = ((frost$core$Equatable*) $tmp3459)->$class->itable;
while ($tmp3465->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3465 = $tmp3465->next;
}
$fn3467 $tmp3466 = $tmp3465->methods[1];
frost$core$Bit $tmp3468 = $tmp3466(((frost$core$Equatable*) $tmp3459), ((frost$core$Equatable*) $tmp3464));
bool $tmp3469 = $tmp3468.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3464)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3459)));
if ($tmp3469) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3456)));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp3456);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3456)));
goto block55;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3470 = &((org$frostlang$frostc$Type*) $tmp3456)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3471 = *$tmp3470;
frost$core$Bit $tmp3472 = (frost$core$Bit) {$tmp3471 != NULL};
bool $tmp3473 = $tmp3472.value;
if ($tmp3473) goto block60; else goto block61;
block61:;
frost$core$Int $tmp3474 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3475, $tmp3474, &$s3476);
abort(); // unreachable
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
frost$core$Int $tmp3477 = (frost$core$Int) {0u};
frost$core$Object* $tmp3478 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3471, $tmp3477);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3478)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3478);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp3478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3478)));
goto block55;
block55:;
org$frostlang$frostc$Type* $tmp3479 = *(&local12);
// begin inline call to method org.frostlang.frostc.Type.RangeOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:591:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:298
org$frostlang$frostc$Type** $tmp3480 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3481 = *$tmp3480;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3482 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3483 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp3482, $tmp3483);
frost$collections$Array$add$frost$collections$Array$T($tmp3482, ((frost$core$Object*) $tmp3479));
org$frostlang$frostc$Type* $tmp3484 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3481, ((frost$collections$ListView*) $tmp3482));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Bit $tmp3485 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3440, $tmp3441, $tmp3484, $tmp3485);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
org$frostlang$frostc$Compiler$TypeContext* $tmp3486 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
*(&local11) = $tmp3440;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3479));
org$frostlang$frostc$Type* $tmp3487 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3456);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
goto block44;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:594
org$frostlang$frostc$Type* $tmp3488 = *(&local10);
frost$core$Bit $tmp3489 = (frost$core$Bit) {$tmp3488 != NULL};
bool $tmp3490 = $tmp3489.value;
if ($tmp3490) goto block65; else goto block64;
block65:;
org$frostlang$frostc$Type* $tmp3491 = *(&local10);
frost$core$Bit $tmp3492 = (frost$core$Bit) {$tmp3491 != NULL};
bool $tmp3493 = $tmp3492.value;
if ($tmp3493) goto block66; else goto block67;
block67:;
frost$core$Int $tmp3494 = (frost$core$Int) {594u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3495, $tmp3494, &$s3496);
abort(); // unreachable
block66:;
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:594:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp3497 = &((org$frostlang$frostc$Symbol*) $tmp3491)->name;
frost$core$String* $tmp3498 = *$tmp3497;
frost$core$Bit $tmp3499 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3498, &$s3500);
bool $tmp3501 = $tmp3499.value;
if ($tmp3501) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:595
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3502 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3503 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp3504 = *(&local10);
frost$core$Bit $tmp3505 = (frost$core$Bit) {$tmp3504 != NULL};
bool $tmp3506 = $tmp3505.value;
if ($tmp3506) goto block69; else goto block70;
block70:;
frost$core$Int $tmp3507 = (frost$core$Int) {596u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3508, $tmp3507, &$s3509);
abort(); // unreachable
block69:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3510 = &$tmp3504->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3511 = *$tmp3510;
frost$core$Bit $tmp3512 = (frost$core$Bit) {$tmp3511 != NULL};
bool $tmp3513 = $tmp3512.value;
if ($tmp3513) goto block72; else goto block73;
block73:;
frost$core$Int $tmp3514 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3515, $tmp3514, &$s3516);
abort(); // unreachable
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
frost$core$Int $tmp3517 = (frost$core$Int) {1u};
frost$core$Object* $tmp3518 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3511, $tmp3517);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:596:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp3519 = &((org$frostlang$frostc$Type*) $tmp3518)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3520 = *$tmp3519;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3521;
$tmp3521 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3521->value = $tmp3520;
frost$core$Int $tmp3522 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3523 = &(&local17)->$rawValue;
*$tmp3523 = $tmp3522;
org$frostlang$frostc$Type$Kind $tmp3524 = *(&local17);
*(&local16) = $tmp3524;
org$frostlang$frostc$Type$Kind $tmp3525 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3526;
$tmp3526 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3526->value = $tmp3525;
ITable* $tmp3527 = ((frost$core$Equatable*) $tmp3521)->$class->itable;
while ($tmp3527->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3527 = $tmp3527->next;
}
$fn3529 $tmp3528 = $tmp3527->methods[1];
frost$core$Bit $tmp3530 = $tmp3528(((frost$core$Equatable*) $tmp3521), ((frost$core$Equatable*) $tmp3526));
bool $tmp3531 = $tmp3530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3526)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3521)));
if ($tmp3531) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3518)));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3518)));
goto block74;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3532 = &((org$frostlang$frostc$Type*) $tmp3518)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3533 = *$tmp3532;
frost$core$Bit $tmp3534 = (frost$core$Bit) {$tmp3533 != NULL};
bool $tmp3535 = $tmp3534.value;
if ($tmp3535) goto block79; else goto block80;
block80:;
frost$core$Int $tmp3536 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3537, $tmp3536, &$s3538);
abort(); // unreachable
block79:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
frost$core$Int $tmp3539 = (frost$core$Int) {0u};
frost$core$Object* $tmp3540 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3533, $tmp3539);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3540)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3540);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3540);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3540)));
goto block74;
block74:;
org$frostlang$frostc$Type* $tmp3541 = *(&local15);
org$frostlang$frostc$Type* $tmp3542 = *(&local10);
frost$core$Bit $tmp3543 = (frost$core$Bit) {$tmp3542 != NULL};
bool $tmp3544 = $tmp3543.value;
if ($tmp3544) goto block81; else goto block82;
block82:;
frost$core$Int $tmp3545 = (frost$core$Int) {596u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3546, $tmp3545, &$s3547);
abort(); // unreachable
block81:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3548 = &$tmp3542->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3549 = *$tmp3548;
frost$core$Bit $tmp3550 = (frost$core$Bit) {$tmp3549 != NULL};
bool $tmp3551 = $tmp3550.value;
if ($tmp3551) goto block84; else goto block85;
block85:;
frost$core$Int $tmp3552 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3553, $tmp3552, &$s3554);
abort(); // unreachable
block84:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
frost$core$Int $tmp3555 = (frost$core$Int) {2u};
frost$core$Object* $tmp3556 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3549, $tmp3555);
// begin inline call to method org.frostlang.frostc.Type.SteppedRangeOf(compiler:org.frostlang.frostc.Compiler, endpoint:org.frostlang.frostc.Type, step:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:595:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:322
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3557 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3557);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
frost$collections$Array* $tmp3558 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
*(&local18) = $tmp3557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:323
frost$collections$Array* $tmp3559 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp3559, ((frost$core$Object*) $tmp3541));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:324
frost$collections$Array* $tmp3560 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp3560, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3556)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:325
org$frostlang$frostc$Type** $tmp3561 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3562 = *$tmp3561;
frost$collections$Array* $tmp3563 = *(&local18);
org$frostlang$frostc$Type* $tmp3564 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3562, ((frost$collections$ListView*) $tmp3563));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
frost$collections$Array* $tmp3565 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Bit $tmp3566 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3502, $tmp3503, $tmp3564, $tmp3566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
org$frostlang$frostc$Compiler$TypeContext* $tmp3567 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
*(&local11) = $tmp3502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
frost$core$Frost$unref$frost$core$Object$Q($tmp3556);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3541));
org$frostlang$frostc$Type* $tmp3568 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3568));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3518);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
goto block64;
block64:;
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:598
org$frostlang$frostc$Compiler$TypeContext* $tmp3569 = *(&local11);
org$frostlang$frostc$IR$Value* $tmp3570 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3569);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3570));
org$frostlang$frostc$IR$Value* $tmp3571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
*(&local1) = $tmp3570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3570));
org$frostlang$frostc$Compiler$TypeContext* $tmp3572 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
*(&local11) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp3573 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:601
org$frostlang$frostc$IR$Value* $tmp3574 = *(&local1);
frost$core$Bit $tmp3575 = (frost$core$Bit) {$tmp3574 == NULL};
bool $tmp3576 = $tmp3575.value;
if ($tmp3576) goto block87; else goto block88;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:602
org$frostlang$frostc$IR$Value* $tmp3577 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3578 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:604
org$frostlang$frostc$IR$Value* $tmp3579 = *(&local1);
frost$core$Bit $tmp3580 = (frost$core$Bit) {$tmp3579 != NULL};
bool $tmp3581 = $tmp3580.value;
if ($tmp3581) goto block89; else goto block90;
block90:;
frost$core$Int $tmp3582 = (frost$core$Int) {604u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3583, $tmp3582, &$s3584);
abort(); // unreachable
block89:;
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3579, param5);
org$frostlang$frostc$IR$Value* $tmp3585 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3585));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3586 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3586));
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
org$frostlang$frostc$IR** $tmp3587 = &param0->ir;
org$frostlang$frostc$IR* $tmp3588 = *$tmp3587;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
org$frostlang$frostc$IR* $tmp3589 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
*(&local0) = $tmp3588;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:612
org$frostlang$frostc$IR* $tmp3590 = *(&local0);
$fn3592 $tmp3591 = ($fn3592) $tmp3590->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3593 = $tmp3591($tmp3590, &$s3594);
*(&local1) = $tmp3593;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:613
org$frostlang$frostc$IR* $tmp3595 = *(&local0);
$fn3597 $tmp3596 = ($fn3597) $tmp3595->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3598 = $tmp3596($tmp3595, &$s3599);
*(&local2) = $tmp3598;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:614
org$frostlang$frostc$IR* $tmp3600 = *(&local0);
$fn3602 $tmp3601 = ($fn3602) $tmp3600->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3603 = $tmp3601($tmp3600, &$s3604);
*(&local3) = $tmp3603;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:615
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp3605 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3606 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp3607 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3608 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3609 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3606, $tmp3607, param2, $tmp3608, $tmp3609);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp3605, param0, $tmp3606);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
org$frostlang$frostc$Compiler$AutoContext* $tmp3610 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
*(&local4) = $tmp3605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:616
$fn3612 $tmp3611 = ($fn3612) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3613 = $tmp3611(param4);
org$frostlang$frostc$Type$Kind* $tmp3614 = &$tmp3613->typeKind;
org$frostlang$frostc$Type$Kind $tmp3615 = *$tmp3614;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3616;
$tmp3616 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3616->value = $tmp3615;
frost$core$Int $tmp3617 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:616:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3618 = &(&local7)->$rawValue;
*$tmp3618 = $tmp3617;
org$frostlang$frostc$Type$Kind $tmp3619 = *(&local7);
*(&local6) = $tmp3619;
org$frostlang$frostc$Type$Kind $tmp3620 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3621;
$tmp3621 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3621->value = $tmp3620;
ITable* $tmp3622 = ((frost$core$Equatable*) $tmp3616)->$class->itable;
while ($tmp3622->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3622 = $tmp3622->next;
}
$fn3624 $tmp3623 = $tmp3622->methods[0];
frost$core$Bit $tmp3625 = $tmp3623(((frost$core$Equatable*) $tmp3616), ((frost$core$Equatable*) $tmp3621));
bool $tmp3626 = $tmp3625.value;
if ($tmp3626) goto block2; else goto block3;
block2:;
$fn3628 $tmp3627 = ($fn3628) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3629 = $tmp3627(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:617:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3630 = &$tmp3629->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3631 = *$tmp3630;
frost$core$Bit $tmp3632 = (frost$core$Bit) {$tmp3631 != NULL};
bool $tmp3633 = $tmp3632.value;
if ($tmp3633) goto block6; else goto block7;
block7:;
frost$core$Int $tmp3634 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3635, $tmp3634, &$s3636);
abort(); // unreachable
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
frost$core$Int $tmp3637 = (frost$core$Int) {0u};
frost$core$Object* $tmp3638 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3631, $tmp3637);
org$frostlang$frostc$Type** $tmp3639 = &param0->ITERATOR_TYPE;
org$frostlang$frostc$Type* $tmp3640 = *$tmp3639;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:617:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp3641 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3638))->name;
frost$core$String* $tmp3642 = *$tmp3641;
frost$core$String** $tmp3643 = &((org$frostlang$frostc$Symbol*) $tmp3640)->name;
frost$core$String* $tmp3644 = *$tmp3643;
frost$core$Bit $tmp3645 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3642, $tmp3644);
bool $tmp3646 = $tmp3645.value;
if ($tmp3646) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp3647 = &((org$frostlang$frostc$Type*) $tmp3638)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3648 = *$tmp3647;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3649;
$tmp3649 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3649->value = $tmp3648;
org$frostlang$frostc$Type$Kind* $tmp3650 = &$tmp3640->typeKind;
org$frostlang$frostc$Type$Kind $tmp3651 = *$tmp3650;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3652;
$tmp3652 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3652->value = $tmp3651;
ITable* $tmp3653 = ((frost$core$Equatable*) $tmp3649)->$class->itable;
while ($tmp3653->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3653 = $tmp3653->next;
}
$fn3655 $tmp3654 = $tmp3653->methods[0];
frost$core$Bit $tmp3656 = $tmp3654(((frost$core$Equatable*) $tmp3649), ((frost$core$Equatable*) $tmp3652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3652)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3649)));
*(&local8) = $tmp3656;
goto block11;
block10:;
*(&local8) = $tmp3645;
goto block11;
block11:;
frost$core$Bit $tmp3657 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q($tmp3638);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
*(&local5) = $tmp3657;
goto block4;
block3:;
*(&local5) = $tmp3625;
goto block4;
block4:;
frost$core$Bit $tmp3658 = *(&local5);
bool $tmp3659 = $tmp3658.value;
if ($tmp3659) goto block12; else goto block13;
block13:;
frost$core$Int $tmp3660 = (frost$core$Int) {616u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3661, $tmp3660);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3621)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3616)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3613));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:618
org$frostlang$frostc$IR* $tmp3662 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3663 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp3664 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3665 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3663, $tmp3664, param1, $tmp3665);
$fn3667 $tmp3666 = ($fn3667) $tmp3662->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3668 = $tmp3666($tmp3662, $tmp3663);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:619
org$frostlang$frostc$IR* $tmp3669 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3670 = *(&local1);
$fn3672 $tmp3671 = ($fn3672) $tmp3669->$class->vtable[4];
$tmp3671($tmp3669, $tmp3670);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:620
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3673 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3673);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3674 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3675 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp3676 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp3677 = *$tmp3676;
frost$core$Bit $tmp3678 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp3674, $tmp3675, $tmp3677, $tmp3678);
org$frostlang$frostc$IR$Value* $tmp3679 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3680, ((frost$collections$ListView*) $tmp3673), $tmp3674);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
org$frostlang$frostc$IR$Value* $tmp3681 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3681));
*(&local9) = $tmp3679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:622
org$frostlang$frostc$IR$Value* $tmp3682 = *(&local9);
frost$core$Bit $tmp3683 = (frost$core$Bit) {$tmp3682 == NULL};
bool $tmp3684 = $tmp3683.value;
if ($tmp3684) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:623
org$frostlang$frostc$IR$Value* $tmp3685 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3685));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3686 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3686));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3687 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3687));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:625
org$frostlang$frostc$IR* $tmp3688 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3689 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp3690 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp3691 = *(&local9);
frost$core$Bit $tmp3692 = (frost$core$Bit) {$tmp3691 != NULL};
bool $tmp3693 = $tmp3692.value;
if ($tmp3693) goto block16; else goto block17;
block17:;
frost$core$Int $tmp3694 = (frost$core$Int) {626u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3695, $tmp3694, &$s3696);
abort(); // unreachable
block16:;
org$frostlang$frostc$IR$Value* $tmp3697 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp3691);
org$frostlang$frostc$IR$Block$ID $tmp3698 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3699 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3689, $tmp3690, param1, $tmp3697, $tmp3698, $tmp3699);
$fn3701 $tmp3700 = ($fn3701) $tmp3688->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3702 = $tmp3700($tmp3688, $tmp3689);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3689));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:627
org$frostlang$frostc$IR* $tmp3703 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3704 = *(&local2);
$fn3706 $tmp3705 = ($fn3706) $tmp3703->$class->vtable[4];
$tmp3705($tmp3703, $tmp3704);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:629
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp3707 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp3707, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
org$frostlang$frostc$Compiler$AutoScope* $tmp3708 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
*(&local10) = $tmp3707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:630
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:632
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3709 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp3709, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3710 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
*(&local12) = $tmp3709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:633
frost$core$Int $tmp3711 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from For.frost:633:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp3712 = &(&local14)->$rawValue;
*$tmp3712 = $tmp3711;
org$frostlang$frostc$Variable$Kind $tmp3713 = *(&local14);
*(&local13) = $tmp3713;
org$frostlang$frostc$Variable$Kind $tmp3714 = *(&local13);
$fn3716 $tmp3715 = ($fn3716) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3717 = $tmp3715(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:634:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3718 = &$tmp3717->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3719 = *$tmp3718;
frost$core$Bit $tmp3720 = (frost$core$Bit) {$tmp3719 != NULL};
bool $tmp3721 = $tmp3720.value;
if ($tmp3721) goto block20; else goto block21;
block21:;
frost$core$Int $tmp3722 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3723, $tmp3722, &$s3724);
abort(); // unreachable
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3719));
frost$core$Int $tmp3725 = (frost$core$Int) {1u};
frost$core$Object* $tmp3726 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3719, $tmp3725);
org$frostlang$frostc$Compiler$Target* $tmp3727 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp3714, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp3726));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
org$frostlang$frostc$Compiler$Target* $tmp3728 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
*(&local11) = $tmp3727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
frost$core$Frost$unref$frost$core$Object$Q($tmp3726);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:635
org$frostlang$frostc$Compiler$Target* $tmp3729 = *(&local11);
frost$core$Bit $tmp3730 = (frost$core$Bit) {$tmp3729 == NULL};
bool $tmp3731 = $tmp3730.value;
if ($tmp3731) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:636
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3732 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3732));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3733 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3734 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3734));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3735 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3735));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3736 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3736));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3737 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3737));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block23:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3738 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3738));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:639
org$frostlang$frostc$Compiler$Target* $tmp3739 = *(&local11);
frost$core$Bit $tmp3740 = (frost$core$Bit) {$tmp3739 != NULL};
bool $tmp3741 = $tmp3740.value;
if ($tmp3741) goto block24; else goto block25;
block25:;
frost$core$Int $tmp3742 = (frost$core$Int) {639u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3743, $tmp3742, &$s3744);
abort(); // unreachable
block24:;
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp3739);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:640
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:641
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3745 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3745);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3746 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3747 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3746, $tmp3747);
org$frostlang$frostc$IR$Value* $tmp3748 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3749, ((frost$collections$ListView*) $tmp3745), $tmp3746);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
org$frostlang$frostc$IR$Value* $tmp3750 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
*(&local15) = $tmp3748;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:643
org$frostlang$frostc$IR$Value* $tmp3751 = *(&local15);
frost$core$Bit $tmp3752 = (frost$core$Bit) {$tmp3751 == NULL};
bool $tmp3753 = $tmp3752.value;
if ($tmp3753) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:644
org$frostlang$frostc$IR$Value* $tmp3754 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3755 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3756 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3756));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3757 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3757));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3758 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3758));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3759 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:646
org$frostlang$frostc$Compiler$Target* $tmp3760 = *(&local11);
frost$core$Bit $tmp3761 = (frost$core$Bit) {$tmp3760 != NULL};
bool $tmp3762 = $tmp3761.value;
if ($tmp3762) goto block28; else goto block29;
block29:;
frost$core$Int $tmp3763 = (frost$core$Int) {646u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3764, $tmp3763, &$s3765);
abort(); // unreachable
block28:;
org$frostlang$frostc$IR$Value* $tmp3766 = *(&local15);
frost$core$Bit $tmp3767 = (frost$core$Bit) {$tmp3766 != NULL};
bool $tmp3768 = $tmp3767.value;
if ($tmp3768) goto block30; else goto block31;
block31:;
frost$core$Int $tmp3769 = (frost$core$Int) {646u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3770, $tmp3769, &$s3771);
abort(); // unreachable
block30:;
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, param1, $tmp3760, $tmp3766);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:647
ITable* $tmp3772 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp3772->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3772 = $tmp3772->next;
}
$fn3774 $tmp3773 = $tmp3772->methods[0];
frost$collections$Iterator* $tmp3775 = $tmp3773(((frost$collections$Iterable*) param5));
goto block32;
block32:;
ITable* $tmp3776 = $tmp3775->$class->itable;
while ($tmp3776->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3776 = $tmp3776->next;
}
$fn3778 $tmp3777 = $tmp3776->methods[0];
frost$core$Bit $tmp3779 = $tmp3777($tmp3775);
bool $tmp3780 = $tmp3779.value;
if ($tmp3780) goto block34; else goto block33;
block33:;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3781 = $tmp3775->$class->itable;
while ($tmp3781->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3781 = $tmp3781->next;
}
$fn3783 $tmp3782 = $tmp3781->methods[1];
frost$core$Object* $tmp3784 = $tmp3782($tmp3775);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3784)));
org$frostlang$frostc$ASTNode* $tmp3785 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
*(&local16) = ((org$frostlang$frostc$ASTNode*) $tmp3784);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:648
org$frostlang$frostc$ASTNode* $tmp3786 = *(&local16);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp3786);
frost$core$Frost$unref$frost$core$Object$Q($tmp3784);
org$frostlang$frostc$ASTNode* $tmp3787 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3787));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block32;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
org$frostlang$frostc$IR$Value* $tmp3788 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3788));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3789 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3789));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3790 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3790));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:651
org$frostlang$frostc$IR* $tmp3791 = *(&local0);
$fn3793 $tmp3792 = ($fn3793) $tmp3791->$class->vtable[5];
frost$core$Bit $tmp3794 = $tmp3792($tmp3791);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:651:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3795 = $tmp3794.value;
bool $tmp3796 = !$tmp3795;
frost$core$Bit $tmp3797 = (frost$core$Bit) {$tmp3796};
bool $tmp3798 = $tmp3797.value;
if ($tmp3798) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:652
org$frostlang$frostc$IR* $tmp3799 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3800 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp3801 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3802 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3800, $tmp3801, param1, $tmp3802);
$fn3804 $tmp3803 = ($fn3804) $tmp3799->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3805 = $tmp3803($tmp3799, $tmp3800);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3800));
goto block36;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:654
org$frostlang$frostc$IR* $tmp3806 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3807 = *(&local3);
$fn3809 $tmp3808 = ($fn3809) $tmp3806->$class->vtable[4];
$tmp3808($tmp3806, $tmp3807);
org$frostlang$frostc$IR$Value* $tmp3810 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3810));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3811 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3811));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3812 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
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
frost$core$Int* $tmp3813 = &param4->$rawValue;
frost$core$Int $tmp3814 = *$tmp3813;
frost$core$Int $tmp3815 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from For.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3816 = $tmp3814.value;
int64_t $tmp3817 = $tmp3815.value;
bool $tmp3818 = $tmp3816 == $tmp3817;
frost$core$Bit $tmp3819 = (frost$core$Bit) {$tmp3818};
bool $tmp3820 = $tmp3819.value;
if ($tmp3820) goto block2; else goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:664
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:665
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:668
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from For.frost:668:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5139
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3821 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3822 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3821, $tmp3822);
org$frostlang$frostc$IR$Value* $tmp3823 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3821);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
org$frostlang$frostc$IR$Value* $tmp3824 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3824));
*(&local0) = $tmp3823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:669
org$frostlang$frostc$IR$Value* $tmp3825 = *(&local0);
frost$core$Bit $tmp3826 = (frost$core$Bit) {$tmp3825 == NULL};
bool $tmp3827 = $tmp3826.value;
if ($tmp3827) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:670
org$frostlang$frostc$IR$Value* $tmp3828 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3828));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:672
org$frostlang$frostc$IR$Value* $tmp3829 = *(&local0);
frost$core$Bit $tmp3830 = (frost$core$Bit) {$tmp3829 != NULL};
bool $tmp3831 = $tmp3830.value;
if ($tmp3831) goto block11; else goto block12;
block12:;
frost$core$Int $tmp3832 = (frost$core$Int) {672u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3833, $tmp3832, &$s3834);
abort(); // unreachable
block11:;
$fn3836 $tmp3835 = ($fn3836) $tmp3829->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3837 = $tmp3835($tmp3829);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:672:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
frost$core$String** $tmp3838 = &((org$frostlang$frostc$Symbol*) $tmp3837)->name;
frost$core$String* $tmp3839 = *$tmp3838;
frost$core$Bit $tmp3840 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3839, &$s3841);
bool $tmp3842 = $tmp3840.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3837));
if ($tmp3842) goto block7; else goto block10;
block10:;
org$frostlang$frostc$IR$Value* $tmp3843 = *(&local0);
frost$core$Bit $tmp3844 = (frost$core$Bit) {$tmp3843 != NULL};
bool $tmp3845 = $tmp3844.value;
if ($tmp3845) goto block14; else goto block15;
block15:;
frost$core$Int $tmp3846 = (frost$core$Int) {672u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3847, $tmp3846, &$s3848);
abort(); // unreachable
block14:;
$fn3850 $tmp3849 = ($fn3850) $tmp3843->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3851 = $tmp3849($tmp3843);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:672:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
frost$core$String** $tmp3852 = &((org$frostlang$frostc$Symbol*) $tmp3851)->name;
frost$core$String* $tmp3853 = *$tmp3852;
frost$core$Bit $tmp3854 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3853, &$s3855);
bool $tmp3856 = $tmp3854.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3851));
if ($tmp3856) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:674
org$frostlang$frostc$IR$Value* $tmp3857 = *(&local0);
frost$core$Bit $tmp3858 = (frost$core$Bit) {$tmp3857 != NULL};
bool $tmp3859 = $tmp3858.value;
if ($tmp3859) goto block17; else goto block18;
block18:;
frost$core$Int $tmp3860 = (frost$core$Int) {674u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3861, $tmp3860, &$s3862);
abort(); // unreachable
block17:;
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3857, param5);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:677
org$frostlang$frostc$IR$Value* $tmp3863 = *(&local0);
frost$core$Bit $tmp3864 = (frost$core$Bit) {$tmp3863 != NULL};
bool $tmp3865 = $tmp3864.value;
if ($tmp3865) goto block19; else goto block20;
block20:;
frost$core$Int $tmp3866 = (frost$core$Int) {677u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3867, $tmp3866, &$s3868);
abort(); // unreachable
block19:;
$fn3870 $tmp3869 = ($fn3870) $tmp3863->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3871 = $tmp3869($tmp3863);
frost$collections$HashSet* $tmp3872 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp3871);
ITable* $tmp3873 = ((frost$collections$Iterable*) $tmp3872)->$class->itable;
while ($tmp3873->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3873 = $tmp3873->next;
}
$fn3875 $tmp3874 = $tmp3873->methods[0];
frost$collections$Iterator* $tmp3876 = $tmp3874(((frost$collections$Iterable*) $tmp3872));
goto block21;
block21:;
ITable* $tmp3877 = $tmp3876->$class->itable;
while ($tmp3877->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3877 = $tmp3877->next;
}
$fn3879 $tmp3878 = $tmp3877->methods[0];
frost$core$Bit $tmp3880 = $tmp3878($tmp3876);
bool $tmp3881 = $tmp3880.value;
if ($tmp3881) goto block23; else goto block22;
block22:;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp3882 = $tmp3876->$class->itable;
while ($tmp3882->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3882 = $tmp3882->next;
}
$fn3884 $tmp3883 = $tmp3882->methods[1];
frost$core$Object* $tmp3885 = $tmp3883($tmp3876);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3885)));
org$frostlang$frostc$Type* $tmp3886 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3886));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp3885);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:678
org$frostlang$frostc$Type* $tmp3887 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3888 = &$tmp3887->typeKind;
org$frostlang$frostc$Type$Kind $tmp3889 = *$tmp3888;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3890;
$tmp3890 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3890->value = $tmp3889;
frost$core$Int $tmp3891 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:678:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3892 = &(&local3)->$rawValue;
*$tmp3892 = $tmp3891;
org$frostlang$frostc$Type$Kind $tmp3893 = *(&local3);
*(&local2) = $tmp3893;
org$frostlang$frostc$Type$Kind $tmp3894 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3895;
$tmp3895 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3895->value = $tmp3894;
ITable* $tmp3896 = ((frost$core$Equatable*) $tmp3890)->$class->itable;
while ($tmp3896->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3896 = $tmp3896->next;
}
$fn3898 $tmp3897 = $tmp3896->methods[0];
frost$core$Bit $tmp3899 = $tmp3897(((frost$core$Equatable*) $tmp3890), ((frost$core$Equatable*) $tmp3895));
bool $tmp3900 = $tmp3899.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3895)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3890)));
if ($tmp3900) goto block26; else goto block25;
block26:;
org$frostlang$frostc$Type* $tmp3901 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:678:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3902 = &$tmp3901->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3903 = *$tmp3902;
frost$core$Bit $tmp3904 = (frost$core$Bit) {$tmp3903 != NULL};
bool $tmp3905 = $tmp3904.value;
if ($tmp3905) goto block29; else goto block30;
block30:;
frost$core$Int $tmp3906 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3907, $tmp3906, &$s3908);
abort(); // unreachable
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
frost$core$Int $tmp3909 = (frost$core$Int) {0u};
frost$core$Object* $tmp3910 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3903, $tmp3909);
org$frostlang$frostc$Type** $tmp3911 = &param0->ITERATOR_TYPE;
org$frostlang$frostc$Type* $tmp3912 = *$tmp3911;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:678:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp3913 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3910))->name;
frost$core$String* $tmp3914 = *$tmp3913;
frost$core$String** $tmp3915 = &((org$frostlang$frostc$Symbol*) $tmp3912)->name;
frost$core$String* $tmp3916 = *$tmp3915;
frost$core$Bit $tmp3917 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3914, $tmp3916);
bool $tmp3918 = $tmp3917.value;
if ($tmp3918) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Type$Kind* $tmp3919 = &((org$frostlang$frostc$Type*) $tmp3910)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3920 = *$tmp3919;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3921;
$tmp3921 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3921->value = $tmp3920;
org$frostlang$frostc$Type$Kind* $tmp3922 = &$tmp3912->typeKind;
org$frostlang$frostc$Type$Kind $tmp3923 = *$tmp3922;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3924;
$tmp3924 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3924->value = $tmp3923;
ITable* $tmp3925 = ((frost$core$Equatable*) $tmp3921)->$class->itable;
while ($tmp3925->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3925 = $tmp3925->next;
}
$fn3927 $tmp3926 = $tmp3925->methods[0];
frost$core$Bit $tmp3928 = $tmp3926(((frost$core$Equatable*) $tmp3921), ((frost$core$Equatable*) $tmp3924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3924)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3921)));
*(&local4) = $tmp3928;
goto block34;
block33:;
*(&local4) = $tmp3917;
goto block34;
block34:;
frost$core$Bit $tmp3929 = *(&local4);
bool $tmp3930 = $tmp3929.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3910);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
if ($tmp3930) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:679
$fn3932 $tmp3931 = ($fn3932) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3933 = $tmp3931(param4);
org$frostlang$frostc$IR$Value* $tmp3934 = *(&local0);
org$frostlang$frostc$Type* $tmp3935 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:679:52
org$frostlang$frostc$Type** $tmp3936 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3937 = *$tmp3936;
ITable* $tmp3938 = ((frost$core$Equatable*) $tmp3935)->$class->itable;
while ($tmp3938->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3938 = $tmp3938->next;
}
$fn3940 $tmp3939 = $tmp3938->methods[1];
frost$core$Bit $tmp3941 = $tmp3939(((frost$core$Equatable*) $tmp3935), ((frost$core$Equatable*) $tmp3937));
bool $tmp3942 = $tmp3941.value;
if ($tmp3942) goto block36; else goto block37;
block37:;
frost$core$Int $tmp3943 = (frost$core$Int) {4128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3944, $tmp3943, &$s3945);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4129
frost$core$Bit $tmp3946 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp3947 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp3933, $tmp3934, $tmp3935, $tmp3946);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
org$frostlang$frostc$IR$Value* $tmp3948 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3948));
*(&local5) = $tmp3947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:680
org$frostlang$frostc$IR$Value* $tmp3949 = *(&local5);
frost$core$Bit $tmp3950 = (frost$core$Bit) {$tmp3949 == NULL};
bool $tmp3951 = $tmp3950.value;
if ($tmp3951) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:681
org$frostlang$frostc$IR$Value* $tmp3952 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3952));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3885);
org$frostlang$frostc$Type* $tmp3953 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
org$frostlang$frostc$IR$Value* $tmp3954 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:683
org$frostlang$frostc$IR$Value* $tmp3955 = *(&local5);
frost$core$Bit $tmp3956 = (frost$core$Bit) {$tmp3955 != NULL};
bool $tmp3957 = $tmp3956.value;
if ($tmp3957) goto block40; else goto block41;
block41:;
frost$core$Int $tmp3958 = (frost$core$Int) {683u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3959, $tmp3958, &$s3960);
abort(); // unreachable
block40:;
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3955, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:684
org$frostlang$frostc$IR$Value* $tmp3961 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3961));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3885);
org$frostlang$frostc$Type* $tmp3962 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3962));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
org$frostlang$frostc$IR$Value* $tmp3963 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3963));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:686
org$frostlang$frostc$Type* $tmp3964 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3965 = &$tmp3964->typeKind;
org$frostlang$frostc$Type$Kind $tmp3966 = *$tmp3965;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3967;
$tmp3967 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3967->value = $tmp3966;
frost$core$Int $tmp3968 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from For.frost:686:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3969 = &(&local7)->$rawValue;
*$tmp3969 = $tmp3968;
org$frostlang$frostc$Type$Kind $tmp3970 = *(&local7);
*(&local6) = $tmp3970;
org$frostlang$frostc$Type$Kind $tmp3971 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3972;
$tmp3972 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3972->value = $tmp3971;
ITable* $tmp3973 = ((frost$core$Equatable*) $tmp3967)->$class->itable;
while ($tmp3973->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3973 = $tmp3973->next;
}
$fn3975 $tmp3974 = $tmp3973->methods[0];
frost$core$Bit $tmp3976 = $tmp3974(((frost$core$Equatable*) $tmp3967), ((frost$core$Equatable*) $tmp3972));
bool $tmp3977 = $tmp3976.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3972)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3967)));
if ($tmp3977) goto block44; else goto block43;
block44:;
org$frostlang$frostc$Type* $tmp3978 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:686:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3979 = &$tmp3978->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3980 = *$tmp3979;
frost$core$Bit $tmp3981 = (frost$core$Bit) {$tmp3980 != NULL};
bool $tmp3982 = $tmp3981.value;
if ($tmp3982) goto block47; else goto block48;
block48:;
frost$core$Int $tmp3983 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3984, $tmp3983, &$s3985);
abort(); // unreachable
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
frost$core$Int $tmp3986 = (frost$core$Int) {0u};
frost$core$Object* $tmp3987 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3980, $tmp3986);
org$frostlang$frostc$Type** $tmp3988 = &param0->ITERABLE_TYPE;
org$frostlang$frostc$Type* $tmp3989 = *$tmp3988;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:686:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp3990 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3987))->name;
frost$core$String* $tmp3991 = *$tmp3990;
frost$core$String** $tmp3992 = &((org$frostlang$frostc$Symbol*) $tmp3989)->name;
frost$core$String* $tmp3993 = *$tmp3992;
frost$core$Bit $tmp3994 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3991, $tmp3993);
bool $tmp3995 = $tmp3994.value;
if ($tmp3995) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Type$Kind* $tmp3996 = &((org$frostlang$frostc$Type*) $tmp3987)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3997 = *$tmp3996;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3998;
$tmp3998 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3998->value = $tmp3997;
org$frostlang$frostc$Type$Kind* $tmp3999 = &$tmp3989->typeKind;
org$frostlang$frostc$Type$Kind $tmp4000 = *$tmp3999;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4001;
$tmp4001 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4001->value = $tmp4000;
ITable* $tmp4002 = ((frost$core$Equatable*) $tmp3998)->$class->itable;
while ($tmp4002->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4002 = $tmp4002->next;
}
$fn4004 $tmp4003 = $tmp4002->methods[0];
frost$core$Bit $tmp4005 = $tmp4003(((frost$core$Equatable*) $tmp3998), ((frost$core$Equatable*) $tmp4001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4001)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3998)));
*(&local8) = $tmp4005;
goto block52;
block51:;
*(&local8) = $tmp3994;
goto block52;
block52:;
frost$core$Bit $tmp4006 = *(&local8);
bool $tmp4007 = $tmp4006.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3987);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
if ($tmp4007) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:687
$fn4009 $tmp4008 = ($fn4009) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp4010 = $tmp4008(param4);
org$frostlang$frostc$IR$Value* $tmp4011 = *(&local0);
org$frostlang$frostc$Type* $tmp4012 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:687:52
org$frostlang$frostc$Type** $tmp4013 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp4014 = *$tmp4013;
ITable* $tmp4015 = ((frost$core$Equatable*) $tmp4012)->$class->itable;
while ($tmp4015->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4015 = $tmp4015->next;
}
$fn4017 $tmp4016 = $tmp4015->methods[1];
frost$core$Bit $tmp4018 = $tmp4016(((frost$core$Equatable*) $tmp4012), ((frost$core$Equatable*) $tmp4014));
bool $tmp4019 = $tmp4018.value;
if ($tmp4019) goto block54; else goto block55;
block55:;
frost$core$Int $tmp4020 = (frost$core$Int) {4128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4021, $tmp4020, &$s4022);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4129
frost$core$Bit $tmp4023 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp4024 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp4010, $tmp4011, $tmp4012, $tmp4023);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
org$frostlang$frostc$IR$Value* $tmp4025 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
*(&local9) = $tmp4024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:688
org$frostlang$frostc$IR$Value* $tmp4026 = *(&local9);
frost$core$Bit $tmp4027 = (frost$core$Bit) {$tmp4026 == NULL};
bool $tmp4028 = $tmp4027.value;
if ($tmp4028) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:689
org$frostlang$frostc$IR$Value* $tmp4029 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3885);
org$frostlang$frostc$Type* $tmp4030 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
org$frostlang$frostc$IR$Value* $tmp4031 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:691
org$frostlang$frostc$IR$Value* $tmp4032 = *(&local9);
frost$core$Bit $tmp4033 = (frost$core$Bit) {$tmp4032 != NULL};
bool $tmp4034 = $tmp4033.value;
if ($tmp4034) goto block58; else goto block59;
block59:;
frost$core$Int $tmp4035 = (frost$core$Int) {691u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4036, $tmp4035, &$s4037);
abort(); // unreachable
block58:;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4038 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4038);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp4039 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp4040 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp4039, $tmp4040);
org$frostlang$frostc$IR$Value* $tmp4041 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4032, &$s4042, ((frost$collections$ListView*) $tmp4038), $tmp4039);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
org$frostlang$frostc$IR$Value* $tmp4043 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4043));
*(&local10) = $tmp4041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4038));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:693
org$frostlang$frostc$IR$Value* $tmp4044 = *(&local10);
frost$core$Bit $tmp4045 = (frost$core$Bit) {$tmp4044 != NULL};
bool $tmp4046 = $tmp4045.value;
if ($tmp4046) goto block60; else goto block61;
block61:;
frost$core$Int $tmp4047 = (frost$core$Int) {693u};
org$frostlang$frostc$IR$Value* $tmp4048 = *(&local9);
frost$core$Bit $tmp4049 = (frost$core$Bit) {$tmp4048 != NULL};
bool $tmp4050 = $tmp4049.value;
if ($tmp4050) goto block62; else goto block63;
block63:;
frost$core$Int $tmp4051 = (frost$core$Int) {694u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4052, $tmp4051, &$s4053);
abort(); // unreachable
block62:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:694:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4055 $tmp4054 = ($fn4055) ((frost$core$Object*) $tmp4048)->$class->vtable[0];
frost$core$String* $tmp4056 = $tmp4054(((frost$core$Object*) $tmp4048));
frost$core$String* $tmp4057 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4058, $tmp4056);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
frost$core$String* $tmp4059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4057, &$s4060);
org$frostlang$frostc$Position$wrapper* $tmp4061;
$tmp4061 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp4061->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:694:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4063 $tmp4062 = ($fn4063) ((frost$core$Object*) $tmp4061)->$class->vtable[0];
frost$core$String* $tmp4064 = $tmp4062(((frost$core$Object*) $tmp4061));
frost$core$String* $tmp4065 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4059, $tmp4064);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
frost$core$String* $tmp4066 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4065, &$s4067);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4068, $tmp4047, $tmp4066);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:695
org$frostlang$frostc$IR$Value* $tmp4069 = *(&local10);
frost$core$Bit $tmp4070 = (frost$core$Bit) {$tmp4069 != NULL};
bool $tmp4071 = $tmp4070.value;
if ($tmp4071) goto block66; else goto block67;
block67:;
frost$core$Int $tmp4072 = (frost$core$Int) {695u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4073, $tmp4072, &$s4074);
abort(); // unreachable
block66:;
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp4069, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:696
org$frostlang$frostc$IR$Value* $tmp4075 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4076 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3885);
org$frostlang$frostc$Type* $tmp4077 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4077));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
org$frostlang$frostc$IR$Value* $tmp4078 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block43:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3885);
org$frostlang$frostc$Type* $tmp4079 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4079));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:699
$fn4081 $tmp4080 = ($fn4081) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp4082 = $tmp4080(param4);
org$frostlang$frostc$IR$Value* $tmp4083 = *(&local0);
frost$core$Bit $tmp4084 = (frost$core$Bit) {$tmp4083 != NULL};
bool $tmp4085 = $tmp4084.value;
if ($tmp4085) goto block68; else goto block69;
block69:;
frost$core$Int $tmp4086 = (frost$core$Int) {700u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4087, $tmp4086, &$s4088);
abort(); // unreachable
block68:;
$fn4090 $tmp4089 = ($fn4090) $tmp4083->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4091 = $tmp4089($tmp4083);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:700:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4093 $tmp4092 = ($fn4093) ((frost$core$Object*) $tmp4091)->$class->vtable[0];
frost$core$String* $tmp4094 = $tmp4092(((frost$core$Object*) $tmp4091));
frost$core$String* $tmp4095 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4096, $tmp4094);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4094));
frost$core$String* $tmp4097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4095, &$s4098);
frost$core$String* $tmp4099 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4100, $tmp4097);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp4082, $tmp4099);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
goto block8;
block8:;
org$frostlang$frostc$IR$Value* $tmp4101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
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

