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
typedef frost$core$Bit (*$fn191)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn214)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn237)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn260)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn278)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn308)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn331)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn354)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn377)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn400)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn413)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn445)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn467)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn489)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn496)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn512)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn533)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn543)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn555)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn561)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn573)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn584)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn623)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn648)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn651)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn654)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn671)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn702)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn713)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn716)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn719)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn736)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn766)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn769)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn798)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn816)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn842)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn847)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn852)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn857)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn862)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn880)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn885)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn916)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn921)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn952)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn957)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn960)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn964)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn969)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn981)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn992)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn997)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1000)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1013)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn1051)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1074)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1097)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1120)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1143)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1162)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1167)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1177)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1182)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1213)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1218)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1249)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1254)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1292)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1299)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1304)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1330)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1342)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1348)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn1360)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1371)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1420)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1428)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1442)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn1466)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1469)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1472)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1489)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1521)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn1532)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1535)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1538)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1555)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1586)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1589)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1595)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1613)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1632)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1642)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1665)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1688)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1711)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1734)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1768)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1786)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1811)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1814)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1822)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1827)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1832)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1837)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1842)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1909)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1914)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1917)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1922)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1932)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1937)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1968)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1973)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2004)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2009)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2012)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2017)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2027)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2032)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2063)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2068)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2099)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2104)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2107)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2111)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2116)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2132)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2143)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2148)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2151)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2164)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2177)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2182)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2192)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2197)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2218)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2241)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2264)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2287)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2310)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2329)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2334)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2344)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2349)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2380)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2385)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2416)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2421)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2449)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2472)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2495)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2518)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2541)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2560)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2565)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2575)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2580)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2611)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2616)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2647)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2652)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2683)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2690)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2695)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2732)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2771)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn2776)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn2785)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2805)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2809)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2831)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2837)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2871)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2877)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn2903)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn2906)(frost$core$Object*);
typedef frost$core$Bit (*$fn2934)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3036)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3042)(frost$core$Object*);
typedef frost$core$String* (*$fn3067)(frost$core$Object*);
typedef frost$core$Bit (*$fn3160)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3214)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3269)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3274)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3279)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn3289)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3301)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3305)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3333)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3345)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3350)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3374)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3379)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3389)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3433)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3437)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3442)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3452)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3463)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3468)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn3490)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3499)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3509)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn3514)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3518)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3523)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3537)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3567)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3572)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3580)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3610)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3640)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3645)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3653)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3687)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn3691)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn3694)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 34, 8035563818917771412, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, -3848379638281795678, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -3818102238453651865, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, -8243849900526105723, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, 2895801343972463081, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s740 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 6004887031425356233, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, -6773890575270984264, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, -5757260016675641217, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 7819478318269437571, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 862953121163133953, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1002 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 4129098721710860897, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s1040 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -2517180725123787287, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 371504587453742575, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s1271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -1657626740712006728, NULL };
static frost$core$String $s1389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s1494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s1545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s1560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s1626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1757 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s1765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1824 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 6004887031425356233, NULL };
static frost$core$String $s1829 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, -6773890575270984264, NULL };
static frost$core$String $s1834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, -5757260016675641217, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, 6835485881888488082, NULL };
static frost$core$String $s1844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 3156828070342271752, NULL };
static frost$core$String $s1857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1877 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s1883 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1892 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s1895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, -3266654702256079504, NULL };
static frost$core$String $s1924 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, -1544085282621682558, NULL };
static frost$core$String $s1951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s1957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s1987 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1993 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2014 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 1700389036629462354, NULL };
static frost$core$String $s2019 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, -1590985972706820336, NULL };
static frost$core$String $s2046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2082 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2088 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 4129098721710860897, NULL };
static frost$core$String $s2174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, -9175798345561453926, NULL };
static frost$core$String $s2184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, 1352989231191166944, NULL };
static frost$core$String $s2208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, 8914406012094469804, NULL };
static frost$core$String $s2336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, 8797429780311193770, NULL };
static frost$core$String $s2363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, 583162507237697254, NULL };
static frost$core$String $s2567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -8356613504536380376, NULL };
static frost$core$String $s2594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s2600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s2671 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s2745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s2749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2779 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x6f\x72\x27\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x72\x61\x6e\x67\x65\x20\x27", 45, -6193764283733493999, NULL };
static frost$core$String $s2781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20", 3, -6196166834438432699, NULL };
static frost$core$String $s2783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x72\x61\x6e\x67\x65\x73\x20\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x62\x6f\x74\x68\x20\x73\x74\x61\x72\x74\x20\x61\x6e\x64\x20\x65\x6e\x64", 43, 7049180602675478362, NULL };
static frost$core$String $s2816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s2884 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s2909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s2911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s2913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, -5635255732749358298, NULL };
static frost$core$String $s2942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s2986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3045 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, -4445134852680863373, NULL };
static frost$core$String $s3047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s3070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3074 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, -4606220905787087156, NULL };
static frost$core$String $s3122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s3199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, -2208379357949812030, NULL };
static frost$core$String $s3276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 415422786092736210, NULL };
static frost$core$String $s3281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 4826375230611455343, NULL };
static frost$core$String $s3312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, -5672273796004150040, NULL };
static frost$core$String $s3396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, -1931643216358674392, NULL };
static frost$core$String $s3495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s3504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s3546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s3585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s3619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s3658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s3673 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -1037217257710868414, NULL };
static frost$core$String $s3679 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, -7180981533263634280, NULL };
static frost$core$String $s3697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, -8670400631145364674, NULL };
static frost$core$String $s3699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s3701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -1132365909717631325, NULL };

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
frost$core$Int64 $tmp5 = (frost$core$Int64) {1u};
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
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16 != NULL};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s20, $tmp19);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp21 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp22 = *$tmp21;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Int64 $tmp23 = (frost$core$Int64) {0u};
frost$core$Object* $tmp24 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp22, $tmp23);
frost$core$Bit $tmp25 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, ((org$frostlang$frostc$Type*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q($tmp24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
return $tmp25;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:28
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:397
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
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32 != NULL};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp35 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s36, $tmp35);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp37 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp38 = *$tmp37;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Int64 $tmp39 = (frost$core$Int64) {1u};
frost$core$Object* $tmp40 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp38, $tmp39);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:29:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp41 = &((org$frostlang$frostc$Type*) $tmp40)->typeKind;
org$frostlang$frostc$Type$Kind $tmp42 = *$tmp41;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = $tmp42;
frost$core$Int64 $tmp44 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp40)));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp40)));
goto block13;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp54 = &((org$frostlang$frostc$Type*) $tmp40)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55 != NULL};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp58 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s59, $tmp58);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp60 = &((org$frostlang$frostc$Type*) $tmp40)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp61 = *$tmp60;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Int64 $tmp62 = (frost$core$Int64) {0u};
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
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67 != NULL};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s71, $tmp70);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp72 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp73 = *$tmp72;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Int64 $tmp74 = (frost$core$Int64) {2u};
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
frost$core$Bit $tmp97 = (frost$core$Bit) {true};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:349
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
frost$core$Bit $tmp128 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp129 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp127, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp128);
frost$core$String* $tmp130 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp118, $tmp129);
frost$core$Bit $tmp131 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp115, $tmp130);
bool $tmp132 = $tmp131.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
if ($tmp132) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:36
frost$core$Bit $tmp133 = (frost$core$Bit) {true};
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
frost$core$Bit $tmp146 = (frost$core$Bit) {false};
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
frost$core$Bit $tmp150 = (frost$core$Bit) {true};
return $tmp150;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp151 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp152 = *$tmp151;
org$frostlang$frostc$Type$Kind$wrapper* $tmp153;
$tmp153 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp153->value = $tmp152;
frost$core$Int64 $tmp154 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local0) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp164 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp165 = *$tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165 != NULL};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp168 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s169, $tmp168);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp170 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp171 = *$tmp170;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Int64 $tmp172 = (frost$core$Int64) {0u};
frost$core$Object* $tmp173 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp171, $tmp172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp173)));
frost$core$Frost$unref$frost$core$Object$Q($tmp173);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp173)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp174 = *(&local0);
org$frostlang$frostc$Type** $tmp175 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp176 = *$tmp175;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp177 = &((org$frostlang$frostc$Symbol*) $tmp174)->name;
frost$core$String* $tmp178 = *$tmp177;
frost$core$String** $tmp179 = &((org$frostlang$frostc$Symbol*) $tmp176)->name;
frost$core$String* $tmp180 = *$tmp179;
frost$core$Bit $tmp181 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp178, $tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp183 = &$tmp174->typeKind;
org$frostlang$frostc$Type$Kind $tmp184 = *$tmp183;
org$frostlang$frostc$Type$Kind$wrapper* $tmp185;
$tmp185 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp185->value = $tmp184;
org$frostlang$frostc$Type$Kind* $tmp186 = &$tmp176->typeKind;
org$frostlang$frostc$Type$Kind $tmp187 = *$tmp186;
org$frostlang$frostc$Type$Kind$wrapper* $tmp188;
$tmp188 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp188->value = $tmp187;
ITable* $tmp189 = ((frost$core$Equatable*) $tmp185)->$class->itable;
while ($tmp189->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[0];
frost$core$Bit $tmp192 = $tmp190(((frost$core$Equatable*) $tmp185), ((frost$core$Equatable*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp188)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp185)));
*(&local3) = $tmp192;
goto block14;
block13:;
*(&local3) = $tmp181;
goto block14;
block14:;
frost$core$Bit $tmp193 = *(&local3);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:49
org$frostlang$frostc$Type** $tmp195 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp196 = *$tmp195;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp196;
block10:;
org$frostlang$frostc$Type** $tmp198 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp199 = *$tmp198;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:50:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp200 = &((org$frostlang$frostc$Symbol*) $tmp174)->name;
frost$core$String* $tmp201 = *$tmp200;
frost$core$String** $tmp202 = &((org$frostlang$frostc$Symbol*) $tmp199)->name;
frost$core$String* $tmp203 = *$tmp202;
frost$core$Bit $tmp204 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp201, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type$Kind* $tmp206 = &$tmp174->typeKind;
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
*(&local4) = $tmp215;
goto block20;
block19:;
*(&local4) = $tmp204;
goto block20;
block20:;
frost$core$Bit $tmp216 = *(&local4);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:50
org$frostlang$frostc$Type** $tmp218 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp219 = *$tmp218;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp219;
block16:;
org$frostlang$frostc$Type** $tmp221 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp222 = *$tmp221;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:51:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp223 = &((org$frostlang$frostc$Symbol*) $tmp174)->name;
frost$core$String* $tmp224 = *$tmp223;
frost$core$String** $tmp225 = &((org$frostlang$frostc$Symbol*) $tmp222)->name;
frost$core$String* $tmp226 = *$tmp225;
frost$core$Bit $tmp227 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp224, $tmp226);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp229 = &$tmp174->typeKind;
org$frostlang$frostc$Type$Kind $tmp230 = *$tmp229;
org$frostlang$frostc$Type$Kind$wrapper* $tmp231;
$tmp231 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp231->value = $tmp230;
org$frostlang$frostc$Type$Kind* $tmp232 = &$tmp222->typeKind;
org$frostlang$frostc$Type$Kind $tmp233 = *$tmp232;
org$frostlang$frostc$Type$Kind$wrapper* $tmp234;
$tmp234 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp234->value = $tmp233;
ITable* $tmp235 = ((frost$core$Equatable*) $tmp231)->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp235 = $tmp235->next;
}
$fn237 $tmp236 = $tmp235->methods[0];
frost$core$Bit $tmp238 = $tmp236(((frost$core$Equatable*) $tmp231), ((frost$core$Equatable*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp234)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp231)));
*(&local5) = $tmp238;
goto block26;
block25:;
*(&local5) = $tmp227;
goto block26;
block26:;
frost$core$Bit $tmp239 = *(&local5);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:51
org$frostlang$frostc$Type** $tmp241 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp242 = *$tmp241;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp242;
block22:;
org$frostlang$frostc$Type** $tmp244 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp245 = *$tmp244;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:52:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp246 = &((org$frostlang$frostc$Symbol*) $tmp174)->name;
frost$core$String* $tmp247 = *$tmp246;
frost$core$String** $tmp248 = &((org$frostlang$frostc$Symbol*) $tmp245)->name;
frost$core$String* $tmp249 = *$tmp248;
frost$core$Bit $tmp250 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp247, $tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Type$Kind* $tmp252 = &$tmp174->typeKind;
org$frostlang$frostc$Type$Kind $tmp253 = *$tmp252;
org$frostlang$frostc$Type$Kind$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp254->value = $tmp253;
org$frostlang$frostc$Type$Kind* $tmp255 = &$tmp245->typeKind;
org$frostlang$frostc$Type$Kind $tmp256 = *$tmp255;
org$frostlang$frostc$Type$Kind$wrapper* $tmp257;
$tmp257 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp257->value = $tmp256;
ITable* $tmp258 = ((frost$core$Equatable*) $tmp254)->$class->itable;
while ($tmp258->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp258 = $tmp258->next;
}
$fn260 $tmp259 = $tmp258->methods[0];
frost$core$Bit $tmp261 = $tmp259(((frost$core$Equatable*) $tmp254), ((frost$core$Equatable*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp257)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp254)));
*(&local6) = $tmp261;
goto block32;
block31:;
*(&local6) = $tmp250;
goto block32;
block32:;
frost$core$Bit $tmp262 = *(&local6);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:52
org$frostlang$frostc$Type** $tmp264 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp265 = *$tmp264;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp266 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp265;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp268 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp269 = *$tmp268;
org$frostlang$frostc$Type$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp270->value = $tmp269;
frost$core$Int64 $tmp271 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp272 = &(&local2)->$rawValue;
*$tmp272 = $tmp271;
org$frostlang$frostc$Type$Kind $tmp273 = *(&local2);
*(&local1) = $tmp273;
org$frostlang$frostc$Type$Kind $tmp274 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp275;
$tmp275 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp275->value = $tmp274;
ITable* $tmp276 = ((frost$core$Equatable*) $tmp270)->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[1];
frost$core$Bit $tmp279 = $tmp277(((frost$core$Equatable*) $tmp270), ((frost$core$Equatable*) $tmp275));
bool $tmp280 = $tmp279.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp275)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp270)));
if ($tmp280) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local0) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp281 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp282 = *$tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282 != NULL};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp285 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s286, $tmp285);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp287 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp288 = *$tmp287;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Int64 $tmp289 = (frost$core$Int64) {0u};
frost$core$Object* $tmp290 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp288, $tmp289);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp290)));
frost$core$Frost$unref$frost$core$Object$Q($tmp290);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp290)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp291 = *(&local0);
org$frostlang$frostc$Type** $tmp292 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp293 = *$tmp292;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp294 = &((org$frostlang$frostc$Symbol*) $tmp291)->name;
frost$core$String* $tmp295 = *$tmp294;
frost$core$String** $tmp296 = &((org$frostlang$frostc$Symbol*) $tmp293)->name;
frost$core$String* $tmp297 = *$tmp296;
frost$core$Bit $tmp298 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp295, $tmp297);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp300 = &$tmp291->typeKind;
org$frostlang$frostc$Type$Kind $tmp301 = *$tmp300;
org$frostlang$frostc$Type$Kind$wrapper* $tmp302;
$tmp302 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp302->value = $tmp301;
org$frostlang$frostc$Type$Kind* $tmp303 = &$tmp293->typeKind;
org$frostlang$frostc$Type$Kind $tmp304 = *$tmp303;
org$frostlang$frostc$Type$Kind$wrapper* $tmp305;
$tmp305 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp305->value = $tmp304;
ITable* $tmp306 = ((frost$core$Equatable*) $tmp302)->$class->itable;
while ($tmp306->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp306 = $tmp306->next;
}
$fn308 $tmp307 = $tmp306->methods[0];
frost$core$Bit $tmp309 = $tmp307(((frost$core$Equatable*) $tmp302), ((frost$core$Equatable*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp305)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp302)));
*(&local3) = $tmp309;
goto block14;
block13:;
*(&local3) = $tmp298;
goto block14;
block14:;
frost$core$Bit $tmp310 = *(&local3);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp312 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp313 = *$tmp312;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$Type* $tmp314 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp313;
block10:;
org$frostlang$frostc$Type** $tmp315 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp316 = *$tmp315;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp317 = &((org$frostlang$frostc$Symbol*) $tmp291)->name;
frost$core$String* $tmp318 = *$tmp317;
frost$core$String** $tmp319 = &((org$frostlang$frostc$Symbol*) $tmp316)->name;
frost$core$String* $tmp320 = *$tmp319;
frost$core$Bit $tmp321 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp318, $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type$Kind* $tmp323 = &$tmp291->typeKind;
org$frostlang$frostc$Type$Kind $tmp324 = *$tmp323;
org$frostlang$frostc$Type$Kind$wrapper* $tmp325;
$tmp325 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp325->value = $tmp324;
org$frostlang$frostc$Type$Kind* $tmp326 = &$tmp316->typeKind;
org$frostlang$frostc$Type$Kind $tmp327 = *$tmp326;
org$frostlang$frostc$Type$Kind$wrapper* $tmp328;
$tmp328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp328->value = $tmp327;
ITable* $tmp329 = ((frost$core$Equatable*) $tmp325)->$class->itable;
while ($tmp329->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp329 = $tmp329->next;
}
$fn331 $tmp330 = $tmp329->methods[0];
frost$core$Bit $tmp332 = $tmp330(((frost$core$Equatable*) $tmp325), ((frost$core$Equatable*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp328)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp325)));
*(&local4) = $tmp332;
goto block20;
block19:;
*(&local4) = $tmp321;
goto block20;
block20:;
frost$core$Bit $tmp333 = *(&local4);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp335 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp336 = *$tmp335;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$Type* $tmp337 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp336;
block16:;
org$frostlang$frostc$Type** $tmp338 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp339 = *$tmp338;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp340 = &((org$frostlang$frostc$Symbol*) $tmp291)->name;
frost$core$String* $tmp341 = *$tmp340;
frost$core$String** $tmp342 = &((org$frostlang$frostc$Symbol*) $tmp339)->name;
frost$core$String* $tmp343 = *$tmp342;
frost$core$Bit $tmp344 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp341, $tmp343);
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp346 = &$tmp291->typeKind;
org$frostlang$frostc$Type$Kind $tmp347 = *$tmp346;
org$frostlang$frostc$Type$Kind$wrapper* $tmp348;
$tmp348 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp348->value = $tmp347;
org$frostlang$frostc$Type$Kind* $tmp349 = &$tmp339->typeKind;
org$frostlang$frostc$Type$Kind $tmp350 = *$tmp349;
org$frostlang$frostc$Type$Kind$wrapper* $tmp351;
$tmp351 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp351->value = $tmp350;
ITable* $tmp352 = ((frost$core$Equatable*) $tmp348)->$class->itable;
while ($tmp352->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp352 = $tmp352->next;
}
$fn354 $tmp353 = $tmp352->methods[0];
frost$core$Bit $tmp355 = $tmp353(((frost$core$Equatable*) $tmp348), ((frost$core$Equatable*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp351)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp348)));
*(&local5) = $tmp355;
goto block26;
block25:;
*(&local5) = $tmp344;
goto block26;
block26:;
frost$core$Bit $tmp356 = *(&local5);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp358 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp359 = *$tmp358;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$Type* $tmp360 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp359;
block22:;
org$frostlang$frostc$Type** $tmp361 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp362 = *$tmp361;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp363 = &((org$frostlang$frostc$Symbol*) $tmp291)->name;
frost$core$String* $tmp364 = *$tmp363;
frost$core$String** $tmp365 = &((org$frostlang$frostc$Symbol*) $tmp362)->name;
frost$core$String* $tmp366 = *$tmp365;
frost$core$Bit $tmp367 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp364, $tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Type$Kind* $tmp369 = &$tmp291->typeKind;
org$frostlang$frostc$Type$Kind $tmp370 = *$tmp369;
org$frostlang$frostc$Type$Kind$wrapper* $tmp371;
$tmp371 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp371->value = $tmp370;
org$frostlang$frostc$Type$Kind* $tmp372 = &$tmp362->typeKind;
org$frostlang$frostc$Type$Kind $tmp373 = *$tmp372;
org$frostlang$frostc$Type$Kind$wrapper* $tmp374;
$tmp374 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp374->value = $tmp373;
ITable* $tmp375 = ((frost$core$Equatable*) $tmp371)->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[0];
frost$core$Bit $tmp378 = $tmp376(((frost$core$Equatable*) $tmp371), ((frost$core$Equatable*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp374)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp371)));
*(&local6) = $tmp378;
goto block32;
block31:;
*(&local6) = $tmp367;
goto block32;
block32:;
frost$core$Bit $tmp379 = *(&local6);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp381 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp382 = *$tmp381;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$Type* $tmp383 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp382;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$Type* $tmp384 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
goto block33;
block33:;

}
frost$collections$ListView* org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$IR$Value* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp385 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp386 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp385, $tmp386);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp387 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp388 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp389 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp387, $tmp388, $tmp389, param0);
frost$collections$Array$add$frost$collections$Array$T($tmp385, ((frost$core$Object*) $tmp387));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp385)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
return ((frost$collections$ListView*) $tmp385);

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
org$frostlang$frostc$Type$Kind* $tmp390 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp391 = *$tmp390;
org$frostlang$frostc$Type$Kind$wrapper* $tmp392;
$tmp392 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp392->value = $tmp391;
frost$core$Int64 $tmp393 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:78:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp394 = &(&local1)->$rawValue;
*$tmp394 = $tmp393;
org$frostlang$frostc$Type$Kind $tmp395 = *(&local1);
*(&local0) = $tmp395;
org$frostlang$frostc$Type$Kind $tmp396 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp397;
$tmp397 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp397->value = $tmp396;
ITable* $tmp398 = ((frost$core$Equatable*) $tmp392)->$class->itable;
while ($tmp398->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp398 = $tmp398->next;
}
$fn400 $tmp399 = $tmp398->methods[0];
frost$core$Bit $tmp401 = $tmp399(((frost$core$Equatable*) $tmp392), ((frost$core$Equatable*) $tmp397));
bool $tmp402 = $tmp401.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp397)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp392)));
if ($tmp402) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:79
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:79:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp403 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp404 = *$tmp403;
org$frostlang$frostc$Type$Kind$wrapper* $tmp405;
$tmp405 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp405->value = $tmp404;
frost$core$Int64 $tmp406 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp407 = &(&local4)->$rawValue;
*$tmp407 = $tmp406;
org$frostlang$frostc$Type$Kind $tmp408 = *(&local4);
*(&local3) = $tmp408;
org$frostlang$frostc$Type$Kind $tmp409 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp410;
$tmp410 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp410->value = $tmp409;
ITable* $tmp411 = ((frost$core$Equatable*) $tmp405)->$class->itable;
while ($tmp411->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp411 = $tmp411->next;
}
$fn413 $tmp412 = $tmp411->methods[1];
frost$core$Bit $tmp414 = $tmp412(((frost$core$Equatable*) $tmp405), ((frost$core$Equatable*) $tmp410));
bool $tmp415 = $tmp414.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp410)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp405)));
if ($tmp415) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local2) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp416 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp417 = *$tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417 != NULL};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp420 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s421, $tmp420);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp422 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp423 = *$tmp422;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Int64 $tmp424 = (frost$core$Int64) {0u};
frost$core$Object* $tmp425 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp423, $tmp424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp425)));
frost$core$Frost$unref$frost$core$Object$Q($tmp425);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp425);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp425)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp426 = *(&local2);
org$frostlang$frostc$Type* $tmp427 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp426);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
org$frostlang$frostc$Type* $tmp428 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp427;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:81
org$frostlang$frostc$Type** $tmp429 = &param0->CHAR8_TYPE;
org$frostlang$frostc$Type* $tmp430 = *$tmp429;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:81:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp431 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp432 = *$tmp431;
frost$core$String** $tmp433 = &((org$frostlang$frostc$Symbol*) $tmp430)->name;
frost$core$String* $tmp434 = *$tmp433;
frost$core$Bit $tmp435 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp432, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type$Kind* $tmp437 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp438 = *$tmp437;
org$frostlang$frostc$Type$Kind$wrapper* $tmp439;
$tmp439 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp439->value = $tmp438;
org$frostlang$frostc$Type$Kind* $tmp440 = &$tmp430->typeKind;
org$frostlang$frostc$Type$Kind $tmp441 = *$tmp440;
org$frostlang$frostc$Type$Kind$wrapper* $tmp442;
$tmp442 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp442->value = $tmp441;
ITable* $tmp443 = ((frost$core$Equatable*) $tmp439)->$class->itable;
while ($tmp443->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp443 = $tmp443->next;
}
$fn445 $tmp444 = $tmp443->methods[0];
frost$core$Bit $tmp446 = $tmp444(((frost$core$Equatable*) $tmp439), ((frost$core$Equatable*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp442)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp439)));
*(&local5) = $tmp446;
goto block17;
block16:;
*(&local5) = $tmp435;
goto block17;
block17:;
frost$core$Bit $tmp447 = *(&local5);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:82
org$frostlang$frostc$Type** $tmp449 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp450 = *$tmp449;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
return $tmp450;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:84
org$frostlang$frostc$Type** $tmp451 = &param0->CHAR16_TYPE;
org$frostlang$frostc$Type* $tmp452 = *$tmp451;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:84:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp453 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp454 = *$tmp453;
frost$core$String** $tmp455 = &((org$frostlang$frostc$Symbol*) $tmp452)->name;
frost$core$String* $tmp456 = *$tmp455;
frost$core$Bit $tmp457 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp454, $tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type$Kind* $tmp459 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp460 = *$tmp459;
org$frostlang$frostc$Type$Kind$wrapper* $tmp461;
$tmp461 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp461->value = $tmp460;
org$frostlang$frostc$Type$Kind* $tmp462 = &$tmp452->typeKind;
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
*(&local6) = $tmp468;
goto block24;
block23:;
*(&local6) = $tmp457;
goto block24;
block24:;
frost$core$Bit $tmp469 = *(&local6);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:85
org$frostlang$frostc$Type** $tmp471 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp472 = *$tmp471;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
return $tmp472;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:87
org$frostlang$frostc$Type** $tmp473 = &param0->CHAR32_TYPE;
org$frostlang$frostc$Type* $tmp474 = *$tmp473;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:87:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp475 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp476 = *$tmp475;
frost$core$String** $tmp477 = &((org$frostlang$frostc$Symbol*) $tmp474)->name;
frost$core$String* $tmp478 = *$tmp477;
frost$core$Bit $tmp479 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp476, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Type$Kind* $tmp481 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp482 = *$tmp481;
org$frostlang$frostc$Type$Kind$wrapper* $tmp483;
$tmp483 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp483->value = $tmp482;
org$frostlang$frostc$Type$Kind* $tmp484 = &$tmp474->typeKind;
org$frostlang$frostc$Type$Kind $tmp485 = *$tmp484;
org$frostlang$frostc$Type$Kind$wrapper* $tmp486;
$tmp486 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp486->value = $tmp485;
ITable* $tmp487 = ((frost$core$Equatable*) $tmp483)->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
frost$core$Bit $tmp490 = $tmp488(((frost$core$Equatable*) $tmp483), ((frost$core$Equatable*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp486)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp483)));
*(&local7) = $tmp490;
goto block31;
block30:;
*(&local7) = $tmp479;
goto block31;
block31:;
frost$core$Bit $tmp491 = *(&local7);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block25; else goto block27;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:88
org$frostlang$frostc$Type** $tmp493 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp494 = *$tmp493;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
return $tmp494;
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
$fn496 $tmp495 = ($fn496) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp497 = $tmp495(param2);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:99:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp498 = &((org$frostlang$frostc$Symbol*) $tmp497)->name;
frost$core$String* $tmp499 = *$tmp498;
frost$core$String** $tmp500 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp501 = *$tmp500;
frost$core$Bit $tmp502 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp499, $tmp501);
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind* $tmp504 = &$tmp497->typeKind;
org$frostlang$frostc$Type$Kind $tmp505 = *$tmp504;
org$frostlang$frostc$Type$Kind$wrapper* $tmp506;
$tmp506 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp506->value = $tmp505;
org$frostlang$frostc$Type$Kind* $tmp507 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp508 = *$tmp507;
org$frostlang$frostc$Type$Kind$wrapper* $tmp509;
$tmp509 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp509->value = $tmp508;
ITable* $tmp510 = ((frost$core$Equatable*) $tmp506)->$class->itable;
while ($tmp510->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp510 = $tmp510->next;
}
$fn512 $tmp511 = $tmp510->methods[0];
frost$core$Bit $tmp513 = $tmp511(((frost$core$Equatable*) $tmp506), ((frost$core$Equatable*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp509)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp506)));
*(&local0) = $tmp513;
goto block6;
block5:;
*(&local0) = $tmp502;
goto block6;
block6:;
frost$core$Bit $tmp514 = *(&local0);
bool $tmp515 = $tmp514.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
if ($tmp515) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:102
org$frostlang$frostc$ClassDecl* $tmp516 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
org$frostlang$frostc$ClassDecl* $tmp517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local1) = $tmp516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:103
org$frostlang$frostc$ClassDecl* $tmp518 = *(&local1);
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518 != NULL};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp521 = (frost$core$Int64) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s522, $tmp521);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:104
org$frostlang$frostc$IR** $tmp523 = &param0->ir;
org$frostlang$frostc$IR* $tmp524 = *$tmp523;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp525 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp526 = (frost$core$Int64) {7u};
org$frostlang$frostc$ClassDecl* $tmp527 = *(&local1);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp528 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp529 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp528, $tmp529);
org$frostlang$frostc$IR$Value* $tmp530 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp528, ((frost$core$Object*) $tmp530));
org$frostlang$frostc$FixedArray* $tmp531 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp528);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp525, $tmp526, param1, $tmp527, $tmp531);
$fn533 $tmp532 = ($fn533) $tmp524->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp534 = $tmp532($tmp524, $tmp525);
*(&local2) = $tmp534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:106
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp535 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp536 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp537 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp535, $tmp536, $tmp537, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
org$frostlang$frostc$ClassDecl* $tmp538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp535;

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
org$frostlang$frostc$IR** $tmp539 = &param0->ir;
org$frostlang$frostc$IR* $tmp540 = *$tmp539;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
org$frostlang$frostc$IR* $tmp541 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local0) = $tmp540;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:114
$fn543 $tmp542 = ($fn543) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp544 = $tmp542(param4);
org$frostlang$frostc$Type$Kind* $tmp545 = &$tmp544->typeKind;
org$frostlang$frostc$Type$Kind $tmp546 = *$tmp545;
org$frostlang$frostc$Type$Kind$wrapper* $tmp547;
$tmp547 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp547->value = $tmp546;
frost$core$Int64 $tmp548 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:114:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp549 = &(&local2)->$rawValue;
*$tmp549 = $tmp548;
org$frostlang$frostc$Type$Kind $tmp550 = *(&local2);
*(&local1) = $tmp550;
org$frostlang$frostc$Type$Kind $tmp551 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp552;
$tmp552 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp552->value = $tmp551;
ITable* $tmp553 = ((frost$core$Equatable*) $tmp547)->$class->itable;
while ($tmp553->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp553 = $tmp553->next;
}
$fn555 $tmp554 = $tmp553->methods[0];
frost$core$Bit $tmp556 = $tmp554(((frost$core$Equatable*) $tmp547), ((frost$core$Equatable*) $tmp552));
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp558 = (frost$core$Int64) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s559, $tmp558);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp552)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp547)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:115
$fn561 $tmp560 = ($fn561) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp562 = $tmp560(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:115:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp563 = &$tmp562->_subtypes;
org$frostlang$frostc$FixedArray* $tmp564 = *$tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564 != NULL};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp567 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s568, $tmp567);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp569 = &$tmp562->_subtypes;
org$frostlang$frostc$FixedArray* $tmp570 = *$tmp569;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
ITable* $tmp571 = ((frost$collections$CollectionView*) $tmp570)->$class->itable;
while ($tmp571->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp571 = $tmp571->next;
}
$fn573 $tmp572 = $tmp571->methods[0];
frost$core$Int64 $tmp574 = $tmp572(((frost$collections$CollectionView*) $tmp570));
frost$core$Int64 $tmp575 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:115:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp576 = $tmp574.value;
int64_t $tmp577 = $tmp575.value;
bool $tmp578 = $tmp576 == $tmp577;
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s582, $tmp581);
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:116
$fn584 $tmp583 = ($fn584) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp585 = $tmp583(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:116:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp586 = &$tmp585->_subtypes;
org$frostlang$frostc$FixedArray* $tmp587 = *$tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587 != NULL};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp590 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s591, $tmp590);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp592 = &$tmp585->_subtypes;
org$frostlang$frostc$FixedArray* $tmp593 = *$tmp592;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Int64 $tmp594 = (frost$core$Int64) {0u};
frost$core$Object* $tmp595 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp593, $tmp594);
frost$core$String** $tmp596 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp595))->name;
frost$core$String* $tmp597 = *$tmp596;
frost$core$Bit $tmp598 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp597, &$s599);
bool $tmp600 = $tmp598.value;
if ($tmp600) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp601 = (frost$core$Int64) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s602, $tmp601);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp595);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:117
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:118
org$frostlang$frostc$Variable$Storage** $tmp603 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp604 = *$tmp603;
frost$core$Int64* $tmp605 = &$tmp604->$rawValue;
frost$core$Int64 $tmp606 = *$tmp605;
frost$core$Int64 $tmp607 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:119:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 == $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block16; else goto block17;
block16:;
frost$core$Int64* $tmp613 = (frost$core$Int64*) ($tmp604->$data + 0);
frost$core$Int64 $tmp614 = *$tmp613;
*(&local4) = $tmp614;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:120
frost$core$Int64 $tmp615 = *(&local4);
*(&local3) = $tmp615;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:126
org$frostlang$frostc$Type** $tmp616 = &param3->type;
org$frostlang$frostc$Type* $tmp617 = *$tmp616;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
org$frostlang$frostc$Type* $tmp618 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local5) = $tmp617;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:127
org$frostlang$frostc$Type* $tmp619 = *(&local5);
org$frostlang$frostc$Type* $tmp620 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp619);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
org$frostlang$frostc$Type* $tmp621 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local6) = $tmp620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:129
$fn623 $tmp622 = ($fn623) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp624 = $tmp622(param4);
org$frostlang$frostc$ClassDecl* $tmp625 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp624);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
org$frostlang$frostc$ClassDecl* $tmp626 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local7) = $tmp625;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:130
org$frostlang$frostc$ClassDecl* $tmp627 = *(&local7);
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627 == NULL};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block19; else goto block20;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:123
frost$core$Int64 $tmp630 = (frost$core$Int64) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s631, $tmp630);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:131
org$frostlang$frostc$ClassDecl* $tmp632 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp633 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp634 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp635 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:133
org$frostlang$frostc$ClassDecl* $tmp636 = *(&local7);
frost$collections$ListView* $tmp637 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp636);
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$collections$ListView* $tmp638 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local8) = $tmp637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:136
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp639 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp640 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR* $tmp641 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp642 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp643 = (frost$core$Int64) {10u};
frost$collections$ListView* $tmp644 = *(&local8);
frost$core$Int64 $tmp645 = (frost$core$Int64) {0u};
ITable* $tmp646 = $tmp644->$class->itable;
while ($tmp646->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp646 = $tmp646->next;
}
$fn648 $tmp647 = $tmp646->methods[0];
frost$core$Object* $tmp649 = $tmp647($tmp644, $tmp645);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp642, $tmp643, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp649));
$fn651 $tmp650 = ($fn651) $tmp641->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp652 = $tmp650($tmp641, $tmp642);
$fn654 $tmp653 = ($fn654) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp655 = $tmp653(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:138:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp656 = &$tmp655->_subtypes;
org$frostlang$frostc$FixedArray* $tmp657 = *$tmp656;
frost$core$Bit $tmp658 = (frost$core$Bit) {$tmp657 != NULL};
bool $tmp659 = $tmp658.value;
if ($tmp659) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp660 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s661, $tmp660);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp662 = &$tmp655->_subtypes;
org$frostlang$frostc$FixedArray* $tmp663 = *$tmp662;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Int64 $tmp664 = (frost$core$Int64) {1u};
frost$core$Object* $tmp665 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp663, $tmp664);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp639, $tmp640, $tmp652, ((org$frostlang$frostc$Type*) $tmp665));
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
if ($tmp673) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp674 = (frost$core$Int64) {4112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s675, $tmp674, &$s676);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4113
frost$core$Bit $tmp677 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp678 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp639, $tmp666, $tmp677);
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$Frost$unref$frost$core$Object$Q($tmp649);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:139
org$frostlang$frostc$IR$Value* $tmp682 = *(&local9);
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp682 == NULL};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block27; else goto block28;
block27:;
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
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:144
org$frostlang$frostc$IR* $tmp691 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp692 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp693 = (frost$core$Int64) {27u};
org$frostlang$frostc$IR$Value* $tmp694 = *(&local9);
org$frostlang$frostc$Type* $tmp695 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp696 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp694, $tmp695);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp697 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp698 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp699 = *(&local3);
org$frostlang$frostc$Type* $tmp700 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp697, $tmp698, $tmp699, $tmp700);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp692, $tmp693, param1, $tmp696, $tmp697);
$fn702 $tmp701 = ($fn702) $tmp691->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp703 = $tmp701($tmp691, $tmp692);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:148
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp704 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp705 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR* $tmp706 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp707 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp708 = (frost$core$Int64) {10u};
frost$collections$ListView* $tmp709 = *(&local8);
frost$core$Int64 $tmp710 = (frost$core$Int64) {1u};
ITable* $tmp711 = $tmp709->$class->itable;
while ($tmp711->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp711 = $tmp711->next;
}
$fn713 $tmp712 = $tmp711->methods[0];
frost$core$Object* $tmp714 = $tmp712($tmp709, $tmp710);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp707, $tmp708, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp714));
$fn716 $tmp715 = ($fn716) $tmp706->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp717 = $tmp715($tmp706, $tmp707);
$fn719 $tmp718 = ($fn719) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp720 = $tmp718(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:150:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp721 = &$tmp720->_subtypes;
org$frostlang$frostc$FixedArray* $tmp722 = *$tmp721;
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722 != NULL};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp725 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s726, $tmp725);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp727 = &$tmp720->_subtypes;
org$frostlang$frostc$FixedArray* $tmp728 = *$tmp727;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
frost$core$Int64 $tmp729 = (frost$core$Int64) {1u};
frost$core$Object* $tmp730 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp728, $tmp729);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp704, $tmp705, $tmp717, ((org$frostlang$frostc$Type*) $tmp730));
org$frostlang$frostc$Type* $tmp731 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:148:52
org$frostlang$frostc$Type** $tmp732 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp733 = *$tmp732;
ITable* $tmp734 = ((frost$core$Equatable*) $tmp731)->$class->itable;
while ($tmp734->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp734 = $tmp734->next;
}
$fn736 $tmp735 = $tmp734->methods[1];
frost$core$Bit $tmp737 = $tmp735(((frost$core$Equatable*) $tmp731), ((frost$core$Equatable*) $tmp733));
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp739 = (frost$core$Int64) {4112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s740, $tmp739, &$s741);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4113
frost$core$Bit $tmp742 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp743 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp704, $tmp731, $tmp742);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
org$frostlang$frostc$Type* $tmp744 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp745 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp743, $tmp744);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
org$frostlang$frostc$IR$Value* $tmp746 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local10) = $tmp745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q($tmp730);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q($tmp714);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:151
org$frostlang$frostc$IR$Value* $tmp747 = *(&local10);
frost$core$Bit $tmp748 = (frost$core$Bit) {$tmp747 == NULL};
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:152
org$frostlang$frostc$IR$Value* $tmp750 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp751 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp752 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp753 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp754 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp755 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp756 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:156
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp757 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp758 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR* $tmp759 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp760 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp761 = (frost$core$Int64) {10u};
frost$collections$ListView* $tmp762 = *(&local8);
frost$core$Int64 $tmp763 = (frost$core$Int64) {2u};
ITable* $tmp764 = $tmp762->$class->itable;
while ($tmp764->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp764 = $tmp764->next;
}
$fn766 $tmp765 = $tmp764->methods[0];
frost$core$Object* $tmp767 = $tmp765($tmp762, $tmp763);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp760, $tmp761, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp767));
$fn769 $tmp768 = ($fn769) $tmp759->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp770 = $tmp768($tmp759, $tmp760);
org$frostlang$frostc$Type** $tmp771 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp772 = *$tmp771;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp757, $tmp758, $tmp770, $tmp772);
org$frostlang$frostc$IR$Value* $tmp773 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp757);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
org$frostlang$frostc$IR$Value* $tmp774 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local11) = $tmp773;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q($tmp767);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:159
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp775 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp776 = (frost$core$Int64) {25u};
frost$core$UInt64 $tmp777 = (frost$core$UInt64) {1u};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp775, $tmp776, param1, $tmp777);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp778 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp779 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type* $tmp780 = *(&local6);
frost$core$Bit $tmp781 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp778, $tmp779, $tmp780, $tmp781);
org$frostlang$frostc$IR$Value* $tmp782 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp775, $tmp778);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
org$frostlang$frostc$IR$Value* $tmp783 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local12) = $tmp782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:161
org$frostlang$frostc$IR$Value* $tmp784 = *(&local12);
frost$core$Bit $tmp785 = (frost$core$Bit) {$tmp784 == NULL};
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:162
org$frostlang$frostc$IR$Value* $tmp787 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp788 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp789 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp790 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp791 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp792 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp793 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp794 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp795 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:164
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:165
org$frostlang$frostc$IR$Value* $tmp796 = *(&local12);
$fn798 $tmp797 = ($fn798) $tmp796->$class->vtable[2];
org$frostlang$frostc$Type* $tmp799 = $tmp797($tmp796);
org$frostlang$frostc$Type** $tmp800 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp801 = *$tmp800;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:165:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp802 = &((org$frostlang$frostc$Symbol*) $tmp799)->name;
frost$core$String* $tmp803 = *$tmp802;
frost$core$String** $tmp804 = &((org$frostlang$frostc$Symbol*) $tmp801)->name;
frost$core$String* $tmp805 = *$tmp804;
frost$core$Bit $tmp806 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp803, $tmp805);
bool $tmp807 = $tmp806.value;
if ($tmp807) goto block43; else goto block44;
block43:;
org$frostlang$frostc$Type$Kind* $tmp808 = &$tmp799->typeKind;
org$frostlang$frostc$Type$Kind $tmp809 = *$tmp808;
org$frostlang$frostc$Type$Kind$wrapper* $tmp810;
$tmp810 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp810->value = $tmp809;
org$frostlang$frostc$Type$Kind* $tmp811 = &$tmp801->typeKind;
org$frostlang$frostc$Type$Kind $tmp812 = *$tmp811;
org$frostlang$frostc$Type$Kind$wrapper* $tmp813;
$tmp813 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp813->value = $tmp812;
ITable* $tmp814 = ((frost$core$Equatable*) $tmp810)->$class->itable;
while ($tmp814->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp814 = $tmp814->next;
}
$fn816 $tmp815 = $tmp814->methods[0];
frost$core$Bit $tmp817 = $tmp815(((frost$core$Equatable*) $tmp810), ((frost$core$Equatable*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp813)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp810)));
*(&local14) = $tmp817;
goto block45;
block44:;
*(&local14) = $tmp806;
goto block45;
block45:;
frost$core$Bit $tmp818 = *(&local14);
bool $tmp819 = $tmp818.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
if ($tmp819) goto block39; else goto block41;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:166
org$frostlang$frostc$IR$Value* $tmp820 = *(&local12);
org$frostlang$frostc$Type** $tmp821 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp822 = *$tmp821;
org$frostlang$frostc$IR$Value* $tmp823 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp820, $tmp822);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
org$frostlang$frostc$IR$Value* $tmp824 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local13) = $tmp823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:167
org$frostlang$frostc$IR$Value* $tmp825 = *(&local13);
frost$core$Bit $tmp826 = (frost$core$Bit) {$tmp825 == NULL};
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:168
org$frostlang$frostc$IR$Value* $tmp828 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp829 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp830 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp831 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp832 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp833 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp834 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp835 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp836 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp837 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block47:;
goto block40;
block41:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:172
org$frostlang$frostc$IR$Value* $tmp838 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
org$frostlang$frostc$IR$Value* $tmp839 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local13) = $tmp838;
goto block40;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:176
org$frostlang$frostc$IR* $tmp840 = *(&local0);
$fn842 $tmp841 = ($fn842) $tmp840->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp843 = $tmp841($tmp840, &$s844);
*(&local15) = $tmp843;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:177
org$frostlang$frostc$IR* $tmp845 = *(&local0);
$fn847 $tmp846 = ($fn847) $tmp845->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp848 = $tmp846($tmp845, &$s849);
*(&local16) = $tmp848;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:178
org$frostlang$frostc$IR* $tmp850 = *(&local0);
$fn852 $tmp851 = ($fn852) $tmp850->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp853 = $tmp851($tmp850, &$s854);
*(&local17) = $tmp853;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:179
org$frostlang$frostc$IR* $tmp855 = *(&local0);
$fn857 $tmp856 = ($fn857) $tmp855->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp858 = $tmp856($tmp855, &$s859);
*(&local18) = $tmp858;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:180
org$frostlang$frostc$IR* $tmp860 = *(&local0);
$fn862 $tmp861 = ($fn862) $tmp860->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp863 = $tmp861($tmp860, &$s864);
*(&local19) = $tmp863;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:181
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp865 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp866 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp867 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp868 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp869 = *(&local17);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp866, $tmp867, param2, $tmp868, $tmp869);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp865, param0, $tmp866);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
org$frostlang$frostc$Compiler$AutoContext* $tmp870 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local20) = $tmp865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:183
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp871 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp871, param0);
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
org$frostlang$frostc$Compiler$AutoScope* $tmp872 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local21) = $tmp871;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:184
org$frostlang$frostc$IR* $tmp873 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp874 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp875 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp876 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp877 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp878 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp874, $tmp875, param1, $tmp876, $tmp877, $tmp878);
$fn880 $tmp879 = ($fn880) $tmp873->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp881 = $tmp879($tmp873, $tmp874);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:186
org$frostlang$frostc$IR* $tmp882 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp883 = *(&local18);
$fn885 $tmp884 = ($fn885) $tmp882->$class->vtable[4];
$tmp884($tmp882, $tmp883);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:187
org$frostlang$frostc$IR$Value* $tmp886 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp887 = *(&local10);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:187:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp888 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp889 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp888, $tmp889);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp890 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp891 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp892 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp890, $tmp891, $tmp892, $tmp887);
frost$collections$Array$add$frost$collections$Array$T($tmp888, ((frost$core$Object*) $tmp890));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp888)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp893 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp894 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp895 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp896 = *$tmp895;
frost$core$Bit $tmp897 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp893, $tmp894, $tmp896, $tmp897);
org$frostlang$frostc$IR$Value* $tmp898 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp886, &$s899, ((frost$collections$ListView*) $tmp888), $tmp893);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
org$frostlang$frostc$IR$Value* $tmp900 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local22) = $tmp898;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp888)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:189
org$frostlang$frostc$IR$Value* $tmp901 = *(&local22);
frost$core$Bit $tmp902 = (frost$core$Bit) {$tmp901 != NULL};
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp904 = (frost$core$Int64) {189u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s905, $tmp904);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:190
org$frostlang$frostc$IR$Value* $tmp906 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp907 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp906);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
org$frostlang$frostc$IR$Value* $tmp908 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local23) = $tmp907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:191
org$frostlang$frostc$IR* $tmp909 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp910 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp911 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp912 = *(&local23);
org$frostlang$frostc$IR$Block$ID $tmp913 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp914 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp910, $tmp911, param1, $tmp912, $tmp913, $tmp914);
$fn916 $tmp915 = ($fn916) $tmp909->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp917 = $tmp915($tmp909, $tmp910);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:193
org$frostlang$frostc$IR* $tmp918 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp919 = *(&local19);
$fn921 $tmp920 = ($fn921) $tmp918->$class->vtable[4];
$tmp920($tmp918, $tmp919);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:194
org$frostlang$frostc$IR$Value* $tmp922 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp923 = *(&local10);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:194:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp924 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp925 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp924, $tmp925);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp926 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp927 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp928 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp926, $tmp927, $tmp928, $tmp923);
frost$collections$Array$add$frost$collections$Array$T($tmp924, ((frost$core$Object*) $tmp926));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp924)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp929 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp930 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp931 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp932 = *$tmp931;
frost$core$Bit $tmp933 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp929, $tmp930, $tmp932, $tmp933);
org$frostlang$frostc$IR$Value* $tmp934 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp922, &$s935, ((frost$collections$ListView*) $tmp924), $tmp929);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
org$frostlang$frostc$IR$Value* $tmp936 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local24) = $tmp934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp924)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:196
org$frostlang$frostc$IR$Value* $tmp937 = *(&local24);
frost$core$Bit $tmp938 = (frost$core$Bit) {$tmp937 != NULL};
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp940 = (frost$core$Int64) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s941, $tmp940);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:197
org$frostlang$frostc$IR$Value* $tmp942 = *(&local24);
org$frostlang$frostc$IR$Value* $tmp943 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp942);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
org$frostlang$frostc$IR$Value* $tmp944 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local25) = $tmp943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:198
org$frostlang$frostc$IR* $tmp945 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp946 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp947 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp948 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp949 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp950 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp946, $tmp947, param1, $tmp948, $tmp949, $tmp950);
$fn952 $tmp951 = ($fn952) $tmp945->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp953 = $tmp951($tmp945, $tmp946);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:200
org$frostlang$frostc$IR* $tmp954 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp955 = *(&local15);
$fn957 $tmp956 = ($fn957) $tmp954->$class->vtable[4];
$tmp956($tmp954, $tmp955);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:201
ITable* $tmp958 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp958->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp958 = $tmp958->next;
}
$fn960 $tmp959 = $tmp958->methods[0];
frost$collections$Iterator* $tmp961 = $tmp959(((frost$collections$Iterable*) param5));
goto block54;
block54:;
ITable* $tmp962 = $tmp961->$class->itable;
while ($tmp962->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp962 = $tmp962->next;
}
$fn964 $tmp963 = $tmp962->methods[0];
frost$core$Bit $tmp965 = $tmp963($tmp961);
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block56; else goto block55;
block55:;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp967 = $tmp961->$class->itable;
while ($tmp967->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp967 = $tmp967->next;
}
$fn969 $tmp968 = $tmp967->methods[1];
frost$core$Object* $tmp970 = $tmp968($tmp961);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp970)));
org$frostlang$frostc$ASTNode* $tmp971 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local26) = ((org$frostlang$frostc$ASTNode*) $tmp970);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:202
org$frostlang$frostc$ASTNode* $tmp972 = *(&local26);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp972);
frost$core$Frost$unref$frost$core$Object$Q($tmp970);
org$frostlang$frostc$ASTNode* $tmp973 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
org$frostlang$frostc$IR$Value* $tmp974 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp975 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp976 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp977 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp978 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:205
org$frostlang$frostc$IR* $tmp979 = *(&local0);
$fn981 $tmp980 = ($fn981) $tmp979->$class->vtable[5];
frost$core$Bit $tmp982 = $tmp980($tmp979);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:205:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp983 = $tmp982.value;
bool $tmp984 = !$tmp983;
frost$core$Bit $tmp985 = (frost$core$Bit) {$tmp984};
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:206
org$frostlang$frostc$IR* $tmp987 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp988 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp989 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp990 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp988, $tmp989, param1, $tmp990);
$fn992 $tmp991 = ($fn992) $tmp987->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp993 = $tmp991($tmp987, $tmp988);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:208
org$frostlang$frostc$IR* $tmp994 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp995 = *(&local17);
$fn997 $tmp996 = ($fn997) $tmp994->$class->vtable[4];
$tmp996($tmp994, $tmp995);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:209
org$frostlang$frostc$IR* $tmp998 = *(&local0);
$fn1000 $tmp999 = ($fn1000) $tmp998->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1001 = $tmp999($tmp998, &$s1002);
*(&local27) = $tmp1001;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:212
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1003 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1004 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR* $tmp1005 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1006 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1007 = (frost$core$Int64) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1008 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1009 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp1010 = *(&local3);
org$frostlang$frostc$Type* $tmp1011 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1008, $tmp1009, $tmp1010, $tmp1011);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1006, $tmp1007, param1, $tmp1008);
$fn1013 $tmp1012 = ($fn1013) $tmp1005->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1014 = $tmp1012($tmp1005, $tmp1006);
org$frostlang$frostc$Type* $tmp1015 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1003, $tmp1004, $tmp1014, $tmp1015);
org$frostlang$frostc$Type* $tmp1016 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1017 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1003, $tmp1016);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
org$frostlang$frostc$IR$Value* $tmp1018 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local28) = $tmp1017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:214
org$frostlang$frostc$IR$Value* $tmp1019 = *(&local28);
frost$core$Bit $tmp1020 = (frost$core$Bit) {$tmp1019 != NULL};
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp1022 = (frost$core$Int64) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1023, $tmp1022);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:217
org$frostlang$frostc$IR$Value* $tmp1024 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp1025 = *(&local28);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:217:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1026 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1027 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp1026, $tmp1027);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1028 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1029 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp1030 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1028, $tmp1029, $tmp1030, $tmp1025);
frost$collections$Array$add$frost$collections$Array$T($tmp1026, ((frost$core$Object*) $tmp1028));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1026)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1031 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1032 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1031, $tmp1032);
org$frostlang$frostc$IR$Value* $tmp1033 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1024, &$s1034, ((frost$collections$ListView*) $tmp1026), $tmp1031);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
org$frostlang$frostc$IR$Value* $tmp1035 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
*(&local29) = $tmp1033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1026)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:218
org$frostlang$frostc$IR$Value* $tmp1036 = *(&local29);
frost$core$Bit $tmp1037 = (frost$core$Bit) {$tmp1036 != NULL};
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp1039 = (frost$core$Int64) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1040, $tmp1039);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:219
org$frostlang$frostc$IR$Value* $tmp1041 = *(&local29);
org$frostlang$frostc$Type* $tmp1042 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:219:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1043 = &$tmp1042->typeKind;
org$frostlang$frostc$Type$Kind $tmp1044 = *$tmp1043;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1045;
$tmp1045 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1045->value = $tmp1044;
frost$core$Int64 $tmp1046 = (frost$core$Int64) {1u};
org$frostlang$frostc$Type$Kind $tmp1047 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1046);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1048;
$tmp1048 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1048->value = $tmp1047;
ITable* $tmp1049 = ((frost$core$Equatable*) $tmp1045)->$class->itable;
while ($tmp1049->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1049 = $tmp1049->next;
}
$fn1051 $tmp1050 = $tmp1049->methods[1];
frost$core$Bit $tmp1052 = $tmp1050(((frost$core$Equatable*) $tmp1045), ((frost$core$Equatable*) $tmp1048));
bool $tmp1053 = $tmp1052.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1048)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1045)));
if ($tmp1053) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local31) = $tmp1042;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
goto block66;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
org$frostlang$frostc$FixedArray* $tmp1054 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1042);
frost$core$Int64 $tmp1055 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1056 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1054, $tmp1055);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1056)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1056);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local31) = ((org$frostlang$frostc$Type*) $tmp1056);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1056)));
goto block66;
block66:;
org$frostlang$frostc$Type* $tmp1057 = *(&local31);
org$frostlang$frostc$Type** $tmp1058 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp1059 = *$tmp1058;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1060 = &((org$frostlang$frostc$Symbol*) $tmp1057)->name;
frost$core$String* $tmp1061 = *$tmp1060;
frost$core$String** $tmp1062 = &((org$frostlang$frostc$Symbol*) $tmp1059)->name;
frost$core$String* $tmp1063 = *$tmp1062;
frost$core$Bit $tmp1064 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1061, $tmp1063);
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Type$Kind* $tmp1066 = &$tmp1057->typeKind;
org$frostlang$frostc$Type$Kind $tmp1067 = *$tmp1066;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1068;
$tmp1068 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1068->value = $tmp1067;
org$frostlang$frostc$Type$Kind* $tmp1069 = &$tmp1059->typeKind;
org$frostlang$frostc$Type$Kind $tmp1070 = *$tmp1069;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1071;
$tmp1071 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1071->value = $tmp1070;
ITable* $tmp1072 = ((frost$core$Equatable*) $tmp1068)->$class->itable;
while ($tmp1072->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1072 = $tmp1072->next;
}
$fn1074 $tmp1073 = $tmp1072->methods[0];
frost$core$Bit $tmp1075 = $tmp1073(((frost$core$Equatable*) $tmp1068), ((frost$core$Equatable*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1071)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1068)));
*(&local32) = $tmp1075;
goto block75;
block74:;
*(&local32) = $tmp1064;
goto block75;
block75:;
frost$core$Bit $tmp1076 = *(&local32);
bool $tmp1077 = $tmp1076.value;
if ($tmp1077) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp1078 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp1079 = *$tmp1078;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
org$frostlang$frostc$Type* $tmp1080 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1079;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
goto block65;
block71:;
org$frostlang$frostc$Type** $tmp1081 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp1082 = *$tmp1081;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1083 = &((org$frostlang$frostc$Symbol*) $tmp1057)->name;
frost$core$String* $tmp1084 = *$tmp1083;
frost$core$String** $tmp1085 = &((org$frostlang$frostc$Symbol*) $tmp1082)->name;
frost$core$String* $tmp1086 = *$tmp1085;
frost$core$Bit $tmp1087 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1084, $tmp1086);
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block79; else goto block80;
block79:;
org$frostlang$frostc$Type$Kind* $tmp1089 = &$tmp1057->typeKind;
org$frostlang$frostc$Type$Kind $tmp1090 = *$tmp1089;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1091;
$tmp1091 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1091->value = $tmp1090;
org$frostlang$frostc$Type$Kind* $tmp1092 = &$tmp1082->typeKind;
org$frostlang$frostc$Type$Kind $tmp1093 = *$tmp1092;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1094;
$tmp1094 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1094->value = $tmp1093;
ITable* $tmp1095 = ((frost$core$Equatable*) $tmp1091)->$class->itable;
while ($tmp1095->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1095 = $tmp1095->next;
}
$fn1097 $tmp1096 = $tmp1095->methods[0];
frost$core$Bit $tmp1098 = $tmp1096(((frost$core$Equatable*) $tmp1091), ((frost$core$Equatable*) $tmp1094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1094)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1091)));
*(&local33) = $tmp1098;
goto block81;
block80:;
*(&local33) = $tmp1087;
goto block81;
block81:;
frost$core$Bit $tmp1099 = *(&local33);
bool $tmp1100 = $tmp1099.value;
if ($tmp1100) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp1101 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp1102 = *$tmp1101;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
org$frostlang$frostc$Type* $tmp1103 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1102;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
goto block65;
block77:;
org$frostlang$frostc$Type** $tmp1104 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp1105 = *$tmp1104;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1106 = &((org$frostlang$frostc$Symbol*) $tmp1057)->name;
frost$core$String* $tmp1107 = *$tmp1106;
frost$core$String** $tmp1108 = &((org$frostlang$frostc$Symbol*) $tmp1105)->name;
frost$core$String* $tmp1109 = *$tmp1108;
frost$core$Bit $tmp1110 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1107, $tmp1109);
bool $tmp1111 = $tmp1110.value;
if ($tmp1111) goto block85; else goto block86;
block85:;
org$frostlang$frostc$Type$Kind* $tmp1112 = &$tmp1057->typeKind;
org$frostlang$frostc$Type$Kind $tmp1113 = *$tmp1112;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1114;
$tmp1114 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1114->value = $tmp1113;
org$frostlang$frostc$Type$Kind* $tmp1115 = &$tmp1105->typeKind;
org$frostlang$frostc$Type$Kind $tmp1116 = *$tmp1115;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1117;
$tmp1117 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1117->value = $tmp1116;
ITable* $tmp1118 = ((frost$core$Equatable*) $tmp1114)->$class->itable;
while ($tmp1118->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1118 = $tmp1118->next;
}
$fn1120 $tmp1119 = $tmp1118->methods[0];
frost$core$Bit $tmp1121 = $tmp1119(((frost$core$Equatable*) $tmp1114), ((frost$core$Equatable*) $tmp1117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1117)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1114)));
*(&local34) = $tmp1121;
goto block87;
block86:;
*(&local34) = $tmp1110;
goto block87;
block87:;
frost$core$Bit $tmp1122 = *(&local34);
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp1124 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp1125 = *$tmp1124;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
org$frostlang$frostc$Type* $tmp1126 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1125;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
goto block65;
block83:;
org$frostlang$frostc$Type** $tmp1127 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1128 = *$tmp1127;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1129 = &((org$frostlang$frostc$Symbol*) $tmp1057)->name;
frost$core$String* $tmp1130 = *$tmp1129;
frost$core$String** $tmp1131 = &((org$frostlang$frostc$Symbol*) $tmp1128)->name;
frost$core$String* $tmp1132 = *$tmp1131;
frost$core$Bit $tmp1133 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1130, $tmp1132);
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Type$Kind* $tmp1135 = &$tmp1057->typeKind;
org$frostlang$frostc$Type$Kind $tmp1136 = *$tmp1135;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1137;
$tmp1137 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1137->value = $tmp1136;
org$frostlang$frostc$Type$Kind* $tmp1138 = &$tmp1128->typeKind;
org$frostlang$frostc$Type$Kind $tmp1139 = *$tmp1138;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1140;
$tmp1140 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1140->value = $tmp1139;
ITable* $tmp1141 = ((frost$core$Equatable*) $tmp1137)->$class->itable;
while ($tmp1141->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1141 = $tmp1141->next;
}
$fn1143 $tmp1142 = $tmp1141->methods[0];
frost$core$Bit $tmp1144 = $tmp1142(((frost$core$Equatable*) $tmp1137), ((frost$core$Equatable*) $tmp1140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1140)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1137)));
*(&local35) = $tmp1144;
goto block93;
block92:;
*(&local35) = $tmp1133;
goto block93;
block93:;
frost$core$Bit $tmp1145 = *(&local35);
bool $tmp1146 = $tmp1145.value;
if ($tmp1146) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp1147 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1148 = *$tmp1147;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
org$frostlang$frostc$Type* $tmp1149 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1148;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
goto block65;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
org$frostlang$frostc$Type* $tmp1150 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
*(&local30) = $tmp1042;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
goto block65;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
org$frostlang$frostc$Type* $tmp1151 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
goto block65;
block65:;
org$frostlang$frostc$Type* $tmp1152 = *(&local30);
org$frostlang$frostc$IR$Value* $tmp1153 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1041, $tmp1152);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
org$frostlang$frostc$IR$Value* $tmp1154 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local36) = $tmp1153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:220
org$frostlang$frostc$IR$Value* $tmp1155 = *(&local36);
frost$core$Bit $tmp1156 = (frost$core$Bit) {$tmp1155 != NULL};
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp1158 = (frost$core$Int64) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1159, $tmp1158);
abort(); // unreachable
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:222
org$frostlang$frostc$IR* $tmp1160 = *(&local0);
$fn1162 $tmp1161 = ($fn1162) $tmp1160->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1163 = $tmp1161($tmp1160, &$s1164);
*(&local37) = $tmp1163;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:223
org$frostlang$frostc$IR* $tmp1165 = *(&local0);
$fn1167 $tmp1166 = ($fn1167) $tmp1165->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1168 = $tmp1166($tmp1165, &$s1169);
*(&local38) = $tmp1168;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:224
org$frostlang$frostc$IR* $tmp1170 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1171 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1172 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp1173 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp1174 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1175 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1171, $tmp1172, param1, $tmp1173, $tmp1174, $tmp1175);
$fn1177 $tmp1176 = ($fn1177) $tmp1170->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1178 = $tmp1176($tmp1170, $tmp1171);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:227
org$frostlang$frostc$IR* $tmp1179 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1180 = *(&local37);
$fn1182 $tmp1181 = ($fn1182) $tmp1179->$class->vtable[4];
$tmp1181($tmp1179, $tmp1180);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:228
org$frostlang$frostc$IR$Value* $tmp1183 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1184 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:228:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1185 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1186 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp1185, $tmp1186);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1187 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1188 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp1189 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1187, $tmp1188, $tmp1189, $tmp1184);
frost$collections$Array$add$frost$collections$Array$T($tmp1185, ((frost$core$Object*) $tmp1187));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1185)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1190 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1191 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp1192 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1193 = *$tmp1192;
frost$core$Bit $tmp1194 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1190, $tmp1191, $tmp1193, $tmp1194);
org$frostlang$frostc$IR$Value* $tmp1195 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1183, &$s1196, ((frost$collections$ListView*) $tmp1185), $tmp1190);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
org$frostlang$frostc$IR$Value* $tmp1197 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local39) = $tmp1195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1185)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:230
org$frostlang$frostc$IR$Value* $tmp1198 = *(&local39);
frost$core$Bit $tmp1199 = (frost$core$Bit) {$tmp1198 != NULL};
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block97; else goto block98;
block98:;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1202, $tmp1201);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:231
org$frostlang$frostc$IR$Value* $tmp1203 = *(&local39);
org$frostlang$frostc$IR$Value* $tmp1204 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1203);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
org$frostlang$frostc$IR$Value* $tmp1205 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local40) = $tmp1204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:232
org$frostlang$frostc$IR* $tmp1206 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1207 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1208 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp1209 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1210 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1211 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1207, $tmp1208, param1, $tmp1209, $tmp1210, $tmp1211);
$fn1213 $tmp1212 = ($fn1213) $tmp1206->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1214 = $tmp1212($tmp1206, $tmp1207);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:235
org$frostlang$frostc$IR* $tmp1215 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1216 = *(&local38);
$fn1218 $tmp1217 = ($fn1218) $tmp1215->$class->vtable[4];
$tmp1217($tmp1215, $tmp1216);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:236
org$frostlang$frostc$IR$Value* $tmp1219 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1220 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:236:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1221 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1222 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp1221, $tmp1222);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1223 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1224 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp1225 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1223, $tmp1224, $tmp1225, $tmp1220);
frost$collections$Array$add$frost$collections$Array$T($tmp1221, ((frost$core$Object*) $tmp1223));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1221)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1226 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1227 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp1228 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1229 = *$tmp1228;
frost$core$Bit $tmp1230 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1226, $tmp1227, $tmp1229, $tmp1230);
org$frostlang$frostc$IR$Value* $tmp1231 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1219, &$s1232, ((frost$collections$ListView*) $tmp1221), $tmp1226);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
org$frostlang$frostc$IR$Value* $tmp1233 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local41) = $tmp1231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1221)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:238
org$frostlang$frostc$IR$Value* $tmp1234 = *(&local41);
frost$core$Bit $tmp1235 = (frost$core$Bit) {$tmp1234 != NULL};
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp1237 = (frost$core$Int64) {238u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1238, $tmp1237);
abort(); // unreachable
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:239
org$frostlang$frostc$IR$Value* $tmp1239 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1240 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1239);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
org$frostlang$frostc$IR$Value* $tmp1241 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local42) = $tmp1240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:240
org$frostlang$frostc$IR* $tmp1242 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1243 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1244 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp1245 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1246 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1247 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1243, $tmp1244, param1, $tmp1245, $tmp1246, $tmp1247);
$fn1249 $tmp1248 = ($fn1249) $tmp1242->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1250 = $tmp1248($tmp1242, $tmp1243);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:242
org$frostlang$frostc$IR* $tmp1251 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1252 = *(&local27);
$fn1254 $tmp1253 = ($fn1254) $tmp1251->$class->vtable[4];
$tmp1253($tmp1251, $tmp1252);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:243
org$frostlang$frostc$IR$Value* $tmp1255 = *(&local28);
org$frostlang$frostc$IR$Value* $tmp1256 = *(&local12);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:243:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1257 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1258 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp1257, $tmp1258);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1259 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1260 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp1261 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1259, $tmp1260, $tmp1261, $tmp1256);
frost$collections$Array$add$frost$collections$Array$T($tmp1257, ((frost$core$Object*) $tmp1259));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1257)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1262 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1263 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1262, $tmp1263);
org$frostlang$frostc$IR$Value* $tmp1264 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1255, &$s1265, ((frost$collections$ListView*) $tmp1257), $tmp1262);
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
org$frostlang$frostc$IR$Value* $tmp1266 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local43) = $tmp1264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1257)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:244
org$frostlang$frostc$IR$Value* $tmp1267 = *(&local43);
frost$core$Bit $tmp1268 = (frost$core$Bit) {$tmp1267 != NULL};
bool $tmp1269 = $tmp1268.value;
if ($tmp1269) goto block103; else goto block104;
block104:;
frost$core$Int64 $tmp1270 = (frost$core$Int64) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1271, $tmp1270);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:245
org$frostlang$frostc$IR$Value* $tmp1272 = *(&local43);
org$frostlang$frostc$Type* $tmp1273 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1274 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1272, $tmp1273);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
org$frostlang$frostc$IR$Value* $tmp1275 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local44) = $tmp1274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:246
org$frostlang$frostc$IR$Value* $tmp1276 = *(&local44);
frost$core$Bit $tmp1277 = (frost$core$Bit) {$tmp1276 != NULL};
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block105; else goto block106;
block106:;
frost$core$Int64 $tmp1279 = (frost$core$Int64) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1280, $tmp1279);
abort(); // unreachable
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:247
org$frostlang$frostc$IR* $tmp1281 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1282 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1283 = (frost$core$Int64) {27u};
org$frostlang$frostc$IR$Value* $tmp1284 = *(&local44);
org$frostlang$frostc$Type* $tmp1285 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1286 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1284, $tmp1285);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1287 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1288 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp1289 = *(&local3);
org$frostlang$frostc$Type* $tmp1290 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1287, $tmp1288, $tmp1289, $tmp1290);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1282, $tmp1283, param1, $tmp1286, $tmp1287);
$fn1292 $tmp1291 = ($fn1292) $tmp1281->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1293 = $tmp1291($tmp1281, $tmp1282);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:250
org$frostlang$frostc$IR* $tmp1294 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1295 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1297 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1295, $tmp1296, param1, $tmp1297);
$fn1299 $tmp1298 = ($fn1299) $tmp1294->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1300 = $tmp1298($tmp1294, $tmp1295);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:252
org$frostlang$frostc$IR* $tmp1301 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1302 = *(&local16);
$fn1304 $tmp1303 = ($fn1304) $tmp1301->$class->vtable[4];
$tmp1303($tmp1301, $tmp1302);
org$frostlang$frostc$IR$Value* $tmp1305 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1306 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1307 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1308 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1309 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1310 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1311 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1312 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1313 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1314 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1315 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1316 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1317 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1318 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1319 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1320 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1321 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local8) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1322 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1323 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1324 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1325 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
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
org$frostlang$frostc$IR** $tmp1326 = &param0->ir;
org$frostlang$frostc$IR* $tmp1327 = *$tmp1326;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
org$frostlang$frostc$IR* $tmp1328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local0) = $tmp1327;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:277
$fn1330 $tmp1329 = ($fn1330) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1331 = $tmp1329(param4);
org$frostlang$frostc$Type$Kind* $tmp1332 = &$tmp1331->typeKind;
org$frostlang$frostc$Type$Kind $tmp1333 = *$tmp1332;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1334;
$tmp1334 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1334->value = $tmp1333;
frost$core$Int64 $tmp1335 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:277:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1336 = &(&local2)->$rawValue;
*$tmp1336 = $tmp1335;
org$frostlang$frostc$Type$Kind $tmp1337 = *(&local2);
*(&local1) = $tmp1337;
org$frostlang$frostc$Type$Kind $tmp1338 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1339;
$tmp1339 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1339->value = $tmp1338;
ITable* $tmp1340 = ((frost$core$Equatable*) $tmp1334)->$class->itable;
while ($tmp1340->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[0];
frost$core$Bit $tmp1343 = $tmp1341(((frost$core$Equatable*) $tmp1334), ((frost$core$Equatable*) $tmp1339));
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1345 = (frost$core$Int64) {277u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1346, $tmp1345);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1339)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1334)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:278
$fn1348 $tmp1347 = ($fn1348) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1349 = $tmp1347(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:278:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1350 = &$tmp1349->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1351 = *$tmp1350;
frost$core$Bit $tmp1352 = (frost$core$Bit) {$tmp1351 != NULL};
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1354 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1355, $tmp1354);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1356 = &$tmp1349->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1357 = *$tmp1356;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
ITable* $tmp1358 = ((frost$collections$CollectionView*) $tmp1357)->$class->itable;
while ($tmp1358->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1358 = $tmp1358->next;
}
$fn1360 $tmp1359 = $tmp1358->methods[0];
frost$core$Int64 $tmp1361 = $tmp1359(((frost$collections$CollectionView*) $tmp1357));
frost$core$Int64 $tmp1362 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:278:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1363 = $tmp1361.value;
int64_t $tmp1364 = $tmp1362.value;
bool $tmp1365 = $tmp1363 == $tmp1364;
frost$core$Bit $tmp1366 = (frost$core$Bit) {$tmp1365};
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1368 = (frost$core$Int64) {278u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1369, $tmp1368);
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:279
$fn1371 $tmp1370 = ($fn1371) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1372 = $tmp1370(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:279:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1373 = &$tmp1372->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1374 = *$tmp1373;
frost$core$Bit $tmp1375 = (frost$core$Bit) {$tmp1374 != NULL};
bool $tmp1376 = $tmp1375.value;
if ($tmp1376) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1377 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1378, $tmp1377);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1379 = &$tmp1372->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1380 = *$tmp1379;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
frost$core$Int64 $tmp1381 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1382 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1380, $tmp1381);
frost$core$String** $tmp1383 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp1382))->name;
frost$core$String* $tmp1384 = *$tmp1383;
frost$core$Bit $tmp1385 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1384, &$s1386);
bool $tmp1387 = $tmp1385.value;
if ($tmp1387) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1388 = (frost$core$Int64) {279u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1389, $tmp1388);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1382);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:280
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:281
org$frostlang$frostc$Variable$Storage** $tmp1390 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp1391 = *$tmp1390;
frost$core$Int64* $tmp1392 = &$tmp1391->$rawValue;
frost$core$Int64 $tmp1393 = *$tmp1392;
frost$core$Int64 $tmp1394 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:282:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1395 = $tmp1393.value;
int64_t $tmp1396 = $tmp1394.value;
bool $tmp1397 = $tmp1395 == $tmp1396;
frost$core$Bit $tmp1398 = (frost$core$Bit) {$tmp1397};
bool $tmp1399 = $tmp1398.value;
if ($tmp1399) goto block16; else goto block17;
block16:;
frost$core$Int64* $tmp1400 = (frost$core$Int64*) ($tmp1391->$data + 0);
frost$core$Int64 $tmp1401 = *$tmp1400;
*(&local4) = $tmp1401;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:283
frost$core$Int64 $tmp1402 = *(&local4);
*(&local3) = $tmp1402;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:289
org$frostlang$frostc$Type** $tmp1403 = &param3->type;
org$frostlang$frostc$Type* $tmp1404 = *$tmp1403;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
org$frostlang$frostc$Type* $tmp1405 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local5) = $tmp1404;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:290
org$frostlang$frostc$Type* $tmp1406 = *(&local5);
org$frostlang$frostc$Type* $tmp1407 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp1406);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
org$frostlang$frostc$Type* $tmp1408 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local6) = $tmp1407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:291
org$frostlang$frostc$Type* $tmp1409 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1410 = &$tmp1409->typeKind;
org$frostlang$frostc$Type$Kind $tmp1411 = *$tmp1410;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1412;
$tmp1412 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1412->value = $tmp1411;
frost$core$Int64 $tmp1413 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:291:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1414 = &(&local8)->$rawValue;
*$tmp1414 = $tmp1413;
org$frostlang$frostc$Type$Kind $tmp1415 = *(&local8);
*(&local7) = $tmp1415;
org$frostlang$frostc$Type$Kind $tmp1416 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1417;
$tmp1417 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1417->value = $tmp1416;
ITable* $tmp1418 = ((frost$core$Equatable*) $tmp1412)->$class->itable;
while ($tmp1418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1418 = $tmp1418->next;
}
$fn1420 $tmp1419 = $tmp1418->methods[1];
frost$core$Bit $tmp1421 = $tmp1419(((frost$core$Equatable*) $tmp1412), ((frost$core$Equatable*) $tmp1417));
bool $tmp1422 = $tmp1421.value;
if ($tmp1422) goto block20; else goto block21;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:286
frost$core$Int64 $tmp1423 = (frost$core$Int64) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1424, $tmp1423);
abort(); // unreachable
block21:;
frost$core$Int64 $tmp1425 = (frost$core$Int64) {291u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1426, $tmp1425);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1412)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:292
$fn1428 $tmp1427 = ($fn1428) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1429 = $tmp1427(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:292:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1430 = &$tmp1429->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1431 = *$tmp1430;
frost$core$Bit $tmp1432 = (frost$core$Bit) {$tmp1431 != NULL};
bool $tmp1433 = $tmp1432.value;
if ($tmp1433) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp1434 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1435, $tmp1434);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1436 = &$tmp1429->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1437 = *$tmp1436;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Int64 $tmp1438 = (frost$core$Int64) {2u};
frost$core$Object* $tmp1439 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1437, $tmp1438);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1439)));
org$frostlang$frostc$Type* $tmp1440 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp1439);
frost$core$Frost$unref$frost$core$Object$Q($tmp1439);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:293
$fn1442 $tmp1441 = ($fn1442) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1443 = $tmp1441(param4);
org$frostlang$frostc$ClassDecl* $tmp1444 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1443);
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
org$frostlang$frostc$ClassDecl* $tmp1445 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
*(&local10) = $tmp1444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:294
org$frostlang$frostc$ClassDecl* $tmp1446 = *(&local10);
frost$core$Bit $tmp1447 = (frost$core$Bit) {$tmp1446 == NULL};
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:295
org$frostlang$frostc$ClassDecl* $tmp1449 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1450 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1451 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1452 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1453 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:297
org$frostlang$frostc$ClassDecl* $tmp1454 = *(&local10);
frost$collections$ListView* $tmp1455 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp1454);
*(&local11) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$collections$ListView* $tmp1456 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local11) = $tmp1455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:300
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1457 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1458 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR* $tmp1459 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1460 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1461 = (frost$core$Int64) {10u};
frost$collections$ListView* $tmp1462 = *(&local11);
frost$core$Int64 $tmp1463 = (frost$core$Int64) {0u};
ITable* $tmp1464 = $tmp1462->$class->itable;
while ($tmp1464->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1464 = $tmp1464->next;
}
$fn1466 $tmp1465 = $tmp1464->methods[0];
frost$core$Object* $tmp1467 = $tmp1465($tmp1462, $tmp1463);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1460, $tmp1461, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1467));
$fn1469 $tmp1468 = ($fn1469) $tmp1459->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1470 = $tmp1468($tmp1459, $tmp1460);
$fn1472 $tmp1471 = ($fn1472) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1473 = $tmp1471(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:302:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1474 = &$tmp1473->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1475 = *$tmp1474;
frost$core$Bit $tmp1476 = (frost$core$Bit) {$tmp1475 != NULL};
bool $tmp1477 = $tmp1476.value;
if ($tmp1477) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp1478 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1479, $tmp1478);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1480 = &$tmp1473->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1481 = *$tmp1480;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Int64 $tmp1482 = (frost$core$Int64) {1u};
frost$core$Object* $tmp1483 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1481, $tmp1482);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1457, $tmp1458, $tmp1470, ((org$frostlang$frostc$Type*) $tmp1483));
org$frostlang$frostc$Type* $tmp1484 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:300:54
org$frostlang$frostc$Type** $tmp1485 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1486 = *$tmp1485;
ITable* $tmp1487 = ((frost$core$Equatable*) $tmp1484)->$class->itable;
while ($tmp1487->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1487 = $tmp1487->next;
}
$fn1489 $tmp1488 = $tmp1487->methods[1];
frost$core$Bit $tmp1490 = $tmp1488(((frost$core$Equatable*) $tmp1484), ((frost$core$Equatable*) $tmp1486));
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1492 = (frost$core$Int64) {4112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1493, $tmp1492, &$s1494);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4113
frost$core$Bit $tmp1495 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp1496 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1457, $tmp1484, $tmp1495);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
org$frostlang$frostc$Type* $tmp1497 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1498 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1496, $tmp1497);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
org$frostlang$frostc$IR$Value* $tmp1499 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
*(&local12) = $tmp1498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$core$Frost$unref$frost$core$Object$Q($tmp1483);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
frost$core$Frost$unref$frost$core$Object$Q($tmp1467);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:303
org$frostlang$frostc$IR$Value* $tmp1500 = *(&local12);
frost$core$Bit $tmp1501 = (frost$core$Bit) {$tmp1500 == NULL};
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:304
org$frostlang$frostc$IR$Value* $tmp1503 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1504 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1505 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1506 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1507 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1508 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1509 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:308
org$frostlang$frostc$IR* $tmp1510 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1511 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1512 = (frost$core$Int64) {27u};
org$frostlang$frostc$IR$Value* $tmp1513 = *(&local12);
org$frostlang$frostc$Type* $tmp1514 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp1515 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1513, $tmp1514);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1516 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1517 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp1518 = *(&local3);
org$frostlang$frostc$Type* $tmp1519 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1516, $tmp1517, $tmp1518, $tmp1519);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1511, $tmp1512, param1, $tmp1515, $tmp1516);
$fn1521 $tmp1520 = ($fn1521) $tmp1510->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1522 = $tmp1520($tmp1510, $tmp1511);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:312
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1523 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1524 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR* $tmp1525 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1526 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1527 = (frost$core$Int64) {10u};
frost$collections$ListView* $tmp1528 = *(&local11);
frost$core$Int64 $tmp1529 = (frost$core$Int64) {1u};
ITable* $tmp1530 = $tmp1528->$class->itable;
while ($tmp1530->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1530 = $tmp1530->next;
}
$fn1532 $tmp1531 = $tmp1530->methods[0];
frost$core$Object* $tmp1533 = $tmp1531($tmp1528, $tmp1529);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1526, $tmp1527, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1533));
$fn1535 $tmp1534 = ($fn1535) $tmp1525->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1536 = $tmp1534($tmp1525, $tmp1526);
$fn1538 $tmp1537 = ($fn1538) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1539 = $tmp1537(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:314:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1540 = &$tmp1539->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1541 = *$tmp1540;
frost$core$Bit $tmp1542 = (frost$core$Bit) {$tmp1541 != NULL};
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1544 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1545, $tmp1544);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1546 = &$tmp1539->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1547 = *$tmp1546;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
frost$core$Int64 $tmp1548 = (frost$core$Int64) {1u};
frost$core$Object* $tmp1549 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1547, $tmp1548);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1523, $tmp1524, $tmp1536, ((org$frostlang$frostc$Type*) $tmp1549));
org$frostlang$frostc$Type* $tmp1550 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:312:52
org$frostlang$frostc$Type** $tmp1551 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1552 = *$tmp1551;
ITable* $tmp1553 = ((frost$core$Equatable*) $tmp1550)->$class->itable;
while ($tmp1553->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1553 = $tmp1553->next;
}
$fn1555 $tmp1554 = $tmp1553->methods[1];
frost$core$Bit $tmp1556 = $tmp1554(((frost$core$Equatable*) $tmp1550), ((frost$core$Equatable*) $tmp1552));
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp1558 = (frost$core$Int64) {4112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1559, $tmp1558, &$s1560);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4113
frost$core$Bit $tmp1561 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp1562 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1523, $tmp1550, $tmp1561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
org$frostlang$frostc$Type* $tmp1563 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1564 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1562, $tmp1563);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
org$frostlang$frostc$IR$Value* $tmp1565 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
*(&local13) = $tmp1564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
frost$core$Frost$unref$frost$core$Object$Q($tmp1549);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q($tmp1533);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:315
org$frostlang$frostc$IR$Value* $tmp1566 = *(&local13);
frost$core$Bit $tmp1567 = (frost$core$Bit) {$tmp1566 == NULL};
bool $tmp1568 = $tmp1567.value;
if ($tmp1568) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:316
org$frostlang$frostc$IR$Value* $tmp1569 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1570 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1571 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1572 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1573 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1574 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1575 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1576 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:320
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1577 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1578 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR* $tmp1579 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1580 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1581 = (frost$core$Int64) {10u};
frost$collections$ListView* $tmp1582 = *(&local11);
frost$core$Int64 $tmp1583 = (frost$core$Int64) {2u};
ITable* $tmp1584 = $tmp1582->$class->itable;
while ($tmp1584->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1584 = $tmp1584->next;
}
$fn1586 $tmp1585 = $tmp1584->methods[0];
frost$core$Object* $tmp1587 = $tmp1585($tmp1582, $tmp1583);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1580, $tmp1581, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1587));
$fn1589 $tmp1588 = ($fn1589) $tmp1579->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1590 = $tmp1588($tmp1579, $tmp1580);
org$frostlang$frostc$Type* $tmp1591 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1577, $tmp1578, $tmp1590, $tmp1591);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
org$frostlang$frostc$IR$Value* $tmp1592 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
*(&local14) = $tmp1577;
frost$core$Frost$unref$frost$core$Object$Q($tmp1587);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:322
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:323
org$frostlang$frostc$IR$Value* $tmp1593 = *(&local14);
$fn1595 $tmp1594 = ($fn1595) $tmp1593->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1596 = $tmp1594($tmp1593);
org$frostlang$frostc$Type** $tmp1597 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1598 = *$tmp1597;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:323:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1599 = &((org$frostlang$frostc$Symbol*) $tmp1596)->name;
frost$core$String* $tmp1600 = *$tmp1599;
frost$core$String** $tmp1601 = &((org$frostlang$frostc$Symbol*) $tmp1598)->name;
frost$core$String* $tmp1602 = *$tmp1601;
frost$core$Bit $tmp1603 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1600, $tmp1602);
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Type$Kind* $tmp1605 = &$tmp1596->typeKind;
org$frostlang$frostc$Type$Kind $tmp1606 = *$tmp1605;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1607;
$tmp1607 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1607->value = $tmp1606;
org$frostlang$frostc$Type$Kind* $tmp1608 = &$tmp1598->typeKind;
org$frostlang$frostc$Type$Kind $tmp1609 = *$tmp1608;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1610;
$tmp1610 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1610->value = $tmp1609;
ITable* $tmp1611 = ((frost$core$Equatable*) $tmp1607)->$class->itable;
while ($tmp1611->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1611 = $tmp1611->next;
}
$fn1613 $tmp1612 = $tmp1611->methods[0];
frost$core$Bit $tmp1614 = $tmp1612(((frost$core$Equatable*) $tmp1607), ((frost$core$Equatable*) $tmp1610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1610)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1607)));
*(&local16) = $tmp1614;
goto block49;
block48:;
*(&local16) = $tmp1603;
goto block49;
block49:;
frost$core$Bit $tmp1615 = *(&local16);
bool $tmp1616 = $tmp1615.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
if ($tmp1616) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:324
org$frostlang$frostc$IR$Value* $tmp1617 = *(&local14);
org$frostlang$frostc$Type** $tmp1618 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1619 = *$tmp1618;
org$frostlang$frostc$IR$Value* $tmp1620 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1617, $tmp1619);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
org$frostlang$frostc$IR$Value* $tmp1621 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local15) = $tmp1620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:325
org$frostlang$frostc$IR$Value* $tmp1622 = *(&local15);
frost$core$Bit $tmp1623 = (frost$core$Bit) {$tmp1622 != NULL};
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block50; else goto block51;
block51:;
frost$core$Int64 $tmp1625 = (frost$core$Int64) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1626, $tmp1625);
abort(); // unreachable
block50:;
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:328
org$frostlang$frostc$IR$Value* $tmp1627 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
org$frostlang$frostc$IR$Value* $tmp1628 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
*(&local15) = $tmp1627;
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:330
org$frostlang$frostc$IR$Value* $tmp1629 = *(&local14);
org$frostlang$frostc$IR$Value* $tmp1630 = *(&local14);
$fn1632 $tmp1631 = ($fn1632) $tmp1630->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1633 = $tmp1631($tmp1630);
// begin inline call to function org.frostlang.frostc.statement.For.signed(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:330:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:48
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:48:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1634 = &$tmp1633->typeKind;
org$frostlang$frostc$Type$Kind $tmp1635 = *$tmp1634;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1636;
$tmp1636 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1636->value = $tmp1635;
frost$core$Int64 $tmp1637 = (frost$core$Int64) {1u};
org$frostlang$frostc$Type$Kind $tmp1638 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1637);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1639;
$tmp1639 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1639->value = $tmp1638;
ITable* $tmp1640 = ((frost$core$Equatable*) $tmp1636)->$class->itable;
while ($tmp1640->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1640 = $tmp1640->next;
}
$fn1642 $tmp1641 = $tmp1640->methods[1];
frost$core$Bit $tmp1643 = $tmp1641(((frost$core$Equatable*) $tmp1636), ((frost$core$Equatable*) $tmp1639));
bool $tmp1644 = $tmp1643.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1639)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1636)));
if ($tmp1644) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
*(&local18) = $tmp1633;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
goto block53;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
org$frostlang$frostc$FixedArray* $tmp1645 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1633);
frost$core$Int64 $tmp1646 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1647 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1645, $tmp1646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1647)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1647);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
*(&local18) = ((org$frostlang$frostc$Type*) $tmp1647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1647)));
goto block53;
block53:;
org$frostlang$frostc$Type* $tmp1648 = *(&local18);
org$frostlang$frostc$Type** $tmp1649 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp1650 = *$tmp1649;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1651 = &((org$frostlang$frostc$Symbol*) $tmp1648)->name;
frost$core$String* $tmp1652 = *$tmp1651;
frost$core$String** $tmp1653 = &((org$frostlang$frostc$Symbol*) $tmp1650)->name;
frost$core$String* $tmp1654 = *$tmp1653;
frost$core$Bit $tmp1655 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1652, $tmp1654);
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Type$Kind* $tmp1657 = &$tmp1648->typeKind;
org$frostlang$frostc$Type$Kind $tmp1658 = *$tmp1657;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1659;
$tmp1659 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1659->value = $tmp1658;
org$frostlang$frostc$Type$Kind* $tmp1660 = &$tmp1650->typeKind;
org$frostlang$frostc$Type$Kind $tmp1661 = *$tmp1660;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1662;
$tmp1662 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1662->value = $tmp1661;
ITable* $tmp1663 = ((frost$core$Equatable*) $tmp1659)->$class->itable;
while ($tmp1663->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1663 = $tmp1663->next;
}
$fn1665 $tmp1664 = $tmp1663->methods[0];
frost$core$Bit $tmp1666 = $tmp1664(((frost$core$Equatable*) $tmp1659), ((frost$core$Equatable*) $tmp1662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1662)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1659)));
*(&local19) = $tmp1666;
goto block62;
block61:;
*(&local19) = $tmp1655;
goto block62;
block62:;
frost$core$Bit $tmp1667 = *(&local19);
bool $tmp1668 = $tmp1667.value;
if ($tmp1668) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:49
org$frostlang$frostc$Type** $tmp1669 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp1670 = *$tmp1669;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$Type* $tmp1671 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1670;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
goto block52;
block58:;
org$frostlang$frostc$Type** $tmp1672 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp1673 = *$tmp1672;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:50:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1674 = &((org$frostlang$frostc$Symbol*) $tmp1648)->name;
frost$core$String* $tmp1675 = *$tmp1674;
frost$core$String** $tmp1676 = &((org$frostlang$frostc$Symbol*) $tmp1673)->name;
frost$core$String* $tmp1677 = *$tmp1676;
frost$core$Bit $tmp1678 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1675, $tmp1677);
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Type$Kind* $tmp1680 = &$tmp1648->typeKind;
org$frostlang$frostc$Type$Kind $tmp1681 = *$tmp1680;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1682;
$tmp1682 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1682->value = $tmp1681;
org$frostlang$frostc$Type$Kind* $tmp1683 = &$tmp1673->typeKind;
org$frostlang$frostc$Type$Kind $tmp1684 = *$tmp1683;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1685;
$tmp1685 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1685->value = $tmp1684;
ITable* $tmp1686 = ((frost$core$Equatable*) $tmp1682)->$class->itable;
while ($tmp1686->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1686 = $tmp1686->next;
}
$fn1688 $tmp1687 = $tmp1686->methods[0];
frost$core$Bit $tmp1689 = $tmp1687(((frost$core$Equatable*) $tmp1682), ((frost$core$Equatable*) $tmp1685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1685)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1682)));
*(&local20) = $tmp1689;
goto block68;
block67:;
*(&local20) = $tmp1678;
goto block68;
block68:;
frost$core$Bit $tmp1690 = *(&local20);
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:50
org$frostlang$frostc$Type** $tmp1692 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp1693 = *$tmp1692;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$Type* $tmp1694 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1693;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
goto block52;
block64:;
org$frostlang$frostc$Type** $tmp1695 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp1696 = *$tmp1695;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:51:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1697 = &((org$frostlang$frostc$Symbol*) $tmp1648)->name;
frost$core$String* $tmp1698 = *$tmp1697;
frost$core$String** $tmp1699 = &((org$frostlang$frostc$Symbol*) $tmp1696)->name;
frost$core$String* $tmp1700 = *$tmp1699;
frost$core$Bit $tmp1701 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1698, $tmp1700);
bool $tmp1702 = $tmp1701.value;
if ($tmp1702) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Type$Kind* $tmp1703 = &$tmp1648->typeKind;
org$frostlang$frostc$Type$Kind $tmp1704 = *$tmp1703;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1705;
$tmp1705 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1705->value = $tmp1704;
org$frostlang$frostc$Type$Kind* $tmp1706 = &$tmp1696->typeKind;
org$frostlang$frostc$Type$Kind $tmp1707 = *$tmp1706;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1708;
$tmp1708 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1708->value = $tmp1707;
ITable* $tmp1709 = ((frost$core$Equatable*) $tmp1705)->$class->itable;
while ($tmp1709->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1709 = $tmp1709->next;
}
$fn1711 $tmp1710 = $tmp1709->methods[0];
frost$core$Bit $tmp1712 = $tmp1710(((frost$core$Equatable*) $tmp1705), ((frost$core$Equatable*) $tmp1708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1708)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1705)));
*(&local21) = $tmp1712;
goto block74;
block73:;
*(&local21) = $tmp1701;
goto block74;
block74:;
frost$core$Bit $tmp1713 = *(&local21);
bool $tmp1714 = $tmp1713.value;
if ($tmp1714) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:51
org$frostlang$frostc$Type** $tmp1715 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp1716 = *$tmp1715;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$Type* $tmp1717 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1716;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
goto block52;
block70:;
org$frostlang$frostc$Type** $tmp1718 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1719 = *$tmp1718;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:52:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1720 = &((org$frostlang$frostc$Symbol*) $tmp1648)->name;
frost$core$String* $tmp1721 = *$tmp1720;
frost$core$String** $tmp1722 = &((org$frostlang$frostc$Symbol*) $tmp1719)->name;
frost$core$String* $tmp1723 = *$tmp1722;
frost$core$Bit $tmp1724 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1721, $tmp1723);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Type$Kind* $tmp1726 = &$tmp1648->typeKind;
org$frostlang$frostc$Type$Kind $tmp1727 = *$tmp1726;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1728;
$tmp1728 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1728->value = $tmp1727;
org$frostlang$frostc$Type$Kind* $tmp1729 = &$tmp1719->typeKind;
org$frostlang$frostc$Type$Kind $tmp1730 = *$tmp1729;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1731;
$tmp1731 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1731->value = $tmp1730;
ITable* $tmp1732 = ((frost$core$Equatable*) $tmp1728)->$class->itable;
while ($tmp1732->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1732 = $tmp1732->next;
}
$fn1734 $tmp1733 = $tmp1732->methods[0];
frost$core$Bit $tmp1735 = $tmp1733(((frost$core$Equatable*) $tmp1728), ((frost$core$Equatable*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1731)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1728)));
*(&local22) = $tmp1735;
goto block80;
block79:;
*(&local22) = $tmp1724;
goto block80;
block80:;
frost$core$Bit $tmp1736 = *(&local22);
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:52
org$frostlang$frostc$Type** $tmp1738 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1739 = *$tmp1738;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$Type* $tmp1740 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1739;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
goto block52;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$Type* $tmp1741 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
*(&local17) = $tmp1633;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
goto block52;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$Type* $tmp1742 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
goto block52;
block52:;
org$frostlang$frostc$Type* $tmp1743 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp1744 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1629, $tmp1743);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
org$frostlang$frostc$IR$Value* $tmp1745 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
*(&local23) = $tmp1744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:331
org$frostlang$frostc$IR$Value* $tmp1746 = *(&local23);
frost$core$Bit $tmp1747 = (frost$core$Bit) {$tmp1746 != NULL};
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp1749 = (frost$core$Int64) {331u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1750, $tmp1749);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:332
org$frostlang$frostc$IR$Value* $tmp1751 = *(&local23);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1752 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1753 = (frost$core$Int64) {0u};
frost$collections$Array$init$frost$core$Int64($tmp1752, $tmp1753);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1754 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1755 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1754, $tmp1755);
org$frostlang$frostc$IR$Value* $tmp1756 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1751, &$s1757, ((frost$collections$ListView*) $tmp1752), $tmp1754);
org$frostlang$frostc$Type* $tmp1758 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp1759 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1756, $tmp1758);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
org$frostlang$frostc$IR$Value* $tmp1760 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
*(&local24) = $tmp1759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:334
org$frostlang$frostc$IR$Value* $tmp1761 = *(&local24);
frost$core$Bit $tmp1762 = (frost$core$Bit) {$tmp1761 != NULL};
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp1764 = (frost$core$Int64) {334u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1765, $tmp1764);
abort(); // unreachable
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:335
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:336
org$frostlang$frostc$IR$Value* $tmp1766 = *(&local14);
$fn1768 $tmp1767 = ($fn1768) $tmp1766->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1769 = $tmp1767($tmp1766);
org$frostlang$frostc$Type** $tmp1770 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp1771 = *$tmp1770;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:336:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1772 = &((org$frostlang$frostc$Symbol*) $tmp1769)->name;
frost$core$String* $tmp1773 = *$tmp1772;
frost$core$String** $tmp1774 = &((org$frostlang$frostc$Symbol*) $tmp1771)->name;
frost$core$String* $tmp1775 = *$tmp1774;
frost$core$Bit $tmp1776 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1773, $tmp1775);
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block89; else goto block90;
block89:;
org$frostlang$frostc$Type$Kind* $tmp1778 = &$tmp1769->typeKind;
org$frostlang$frostc$Type$Kind $tmp1779 = *$tmp1778;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1780;
$tmp1780 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1780->value = $tmp1779;
org$frostlang$frostc$Type$Kind* $tmp1781 = &$tmp1771->typeKind;
org$frostlang$frostc$Type$Kind $tmp1782 = *$tmp1781;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1783;
$tmp1783 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1783->value = $tmp1782;
ITable* $tmp1784 = ((frost$core$Equatable*) $tmp1780)->$class->itable;
while ($tmp1784->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1784 = $tmp1784->next;
}
$fn1786 $tmp1785 = $tmp1784->methods[0];
frost$core$Bit $tmp1787 = $tmp1785(((frost$core$Equatable*) $tmp1780), ((frost$core$Equatable*) $tmp1783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1783)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1780)));
*(&local26) = $tmp1787;
goto block91;
block90:;
*(&local26) = $tmp1776;
goto block91;
block91:;
frost$core$Bit $tmp1788 = *(&local26);
bool $tmp1789 = $tmp1788.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
if ($tmp1789) goto block85; else goto block87;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:337
org$frostlang$frostc$IR$Value* $tmp1790 = *(&local24);
org$frostlang$frostc$Type** $tmp1791 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp1792 = *$tmp1791;
org$frostlang$frostc$IR$Value* $tmp1793 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1790, $tmp1792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
org$frostlang$frostc$IR$Value* $tmp1794 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
*(&local25) = $tmp1793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:338
org$frostlang$frostc$IR$Value* $tmp1795 = *(&local25);
frost$core$Bit $tmp1796 = (frost$core$Bit) {$tmp1795 != NULL};
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp1798 = (frost$core$Int64) {338u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1799, $tmp1798);
abort(); // unreachable
block92:;
goto block86;
block87:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:341
org$frostlang$frostc$IR$Value* $tmp1800 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
org$frostlang$frostc$IR$Value* $tmp1801 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
*(&local25) = $tmp1800;
goto block86;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:345
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1802 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1803 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR* $tmp1804 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1805 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1806 = (frost$core$Int64) {10u};
frost$collections$ListView* $tmp1807 = *(&local11);
frost$core$Int64 $tmp1808 = (frost$core$Int64) {3u};
ITable* $tmp1809 = $tmp1807->$class->itable;
while ($tmp1809->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1809 = $tmp1809->next;
}
$fn1811 $tmp1810 = $tmp1809->methods[0];
frost$core$Object* $tmp1812 = $tmp1810($tmp1807, $tmp1808);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1805, $tmp1806, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1812));
$fn1814 $tmp1813 = ($fn1814) $tmp1804->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1815 = $tmp1813($tmp1804, $tmp1805);
org$frostlang$frostc$Type** $tmp1816 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1817 = *$tmp1816;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1802, $tmp1803, $tmp1815, $tmp1817);
org$frostlang$frostc$IR$Value* $tmp1818 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1802);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
org$frostlang$frostc$IR$Value* $tmp1819 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
*(&local27) = $tmp1818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
frost$core$Frost$unref$frost$core$Object$Q($tmp1812);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:349
org$frostlang$frostc$IR* $tmp1820 = *(&local0);
$fn1822 $tmp1821 = ($fn1822) $tmp1820->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1823 = $tmp1821($tmp1820, &$s1824);
*(&local28) = $tmp1823;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:350
org$frostlang$frostc$IR* $tmp1825 = *(&local0);
$fn1827 $tmp1826 = ($fn1827) $tmp1825->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1828 = $tmp1826($tmp1825, &$s1829);
*(&local29) = $tmp1828;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:351
org$frostlang$frostc$IR* $tmp1830 = *(&local0);
$fn1832 $tmp1831 = ($fn1832) $tmp1830->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1833 = $tmp1831($tmp1830, &$s1834);
*(&local30) = $tmp1833;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:352
org$frostlang$frostc$IR* $tmp1835 = *(&local0);
$fn1837 $tmp1836 = ($fn1837) $tmp1835->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1838 = $tmp1836($tmp1835, &$s1839);
*(&local31) = $tmp1838;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:353
org$frostlang$frostc$IR* $tmp1840 = *(&local0);
$fn1842 $tmp1841 = ($fn1842) $tmp1840->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1843 = $tmp1841($tmp1840, &$s1844);
*(&local32) = $tmp1843;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:354
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:355
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp1845 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1846 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1847 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1848 = *(&local29);
org$frostlang$frostc$IR$Block$ID $tmp1849 = *(&local30);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1846, $tmp1847, param2, $tmp1848, $tmp1849);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1845, param0, $tmp1846);
*(&local34) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
org$frostlang$frostc$Compiler$AutoContext* $tmp1850 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
*(&local34) = $tmp1845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:357
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp1851 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1851, param0);
*(&local35) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
org$frostlang$frostc$Compiler$AutoScope* $tmp1852 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local35) = $tmp1851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:358
org$frostlang$frostc$Type* $tmp1853 = *(&local9);
frost$core$String** $tmp1854 = &((org$frostlang$frostc$Symbol*) $tmp1853)->name;
frost$core$String* $tmp1855 = *$tmp1854;
frost$core$Bit $tmp1856 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1855, &$s1857);
bool $tmp1858 = $tmp1856.value;
if ($tmp1858) goto block94; else goto block97;
block97:;
org$frostlang$frostc$Type* $tmp1859 = *(&local9);
frost$core$String** $tmp1860 = &((org$frostlang$frostc$Symbol*) $tmp1859)->name;
frost$core$String* $tmp1861 = *$tmp1860;
frost$core$Bit $tmp1862 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1861, &$s1863);
bool $tmp1864 = $tmp1862.value;
if ($tmp1864) goto block94; else goto block96;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:360
org$frostlang$frostc$IR$Value* $tmp1865 = *(&local14);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1866 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1867 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp1866, $tmp1867);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1868 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1869 = (frost$core$Int64) {25u};
frost$core$UInt64 $tmp1870 = (frost$core$UInt64) {0u};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1868, $tmp1869, param1, $tmp1870);
frost$collections$Array$add$frost$collections$Array$T($tmp1866, ((frost$core$Object*) $tmp1868));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1871 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1872 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp1873 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1874 = *$tmp1873;
frost$core$Bit $tmp1875 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1871, $tmp1872, $tmp1874, $tmp1875);
org$frostlang$frostc$IR$Value* $tmp1876 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1865, &$s1877, ((frost$collections$ListView*) $tmp1866), $tmp1871);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
org$frostlang$frostc$IR$Value* $tmp1878 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local36) = $tmp1876;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:362
org$frostlang$frostc$IR$Value* $tmp1879 = *(&local36);
frost$core$Bit $tmp1880 = (frost$core$Bit) {$tmp1879 != NULL};
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp1882 = (frost$core$Int64) {362u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1883, $tmp1882);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:363
org$frostlang$frostc$IR$Value* $tmp1884 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1885 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1884);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
org$frostlang$frostc$IR$Value* $tmp1886 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
*(&local33) = $tmp1885;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
org$frostlang$frostc$IR$Value* $tmp1887 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block95;
block96:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:366
org$frostlang$frostc$Type* $tmp1888 = *(&local9);
frost$core$String** $tmp1889 = &((org$frostlang$frostc$Symbol*) $tmp1888)->name;
frost$core$String* $tmp1890 = *$tmp1889;
frost$core$Bit $tmp1891 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1890, &$s1892);
bool $tmp1893 = $tmp1891.value;
if ($tmp1893) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp1894 = (frost$core$Int64) {366u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1895, $tmp1894);
abort(); // unreachable
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:367
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1896 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1897 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1898 = (frost$core$Bit) {true};
org$frostlang$frostc$Type** $tmp1899 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1900 = *$tmp1899;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit$org$frostlang$frostc$Type($tmp1896, $tmp1897, $tmp1898, $tmp1900);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
org$frostlang$frostc$IR$Value* $tmp1901 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local33) = $tmp1896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
goto block95;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:369
org$frostlang$frostc$IR* $tmp1902 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1903 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1904 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp1905 = *(&local33);
org$frostlang$frostc$IR$Block$ID $tmp1906 = *(&local31);
org$frostlang$frostc$IR$Block$ID $tmp1907 = *(&local32);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1903, $tmp1904, param1, $tmp1905, $tmp1906, $tmp1907);
$fn1909 $tmp1908 = ($fn1909) $tmp1902->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1910 = $tmp1908($tmp1902, $tmp1903);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:370
org$frostlang$frostc$IR* $tmp1911 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1912 = *(&local31);
$fn1914 $tmp1913 = ($fn1914) $tmp1911->$class->vtable[4];
$tmp1913($tmp1911, $tmp1912);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:371
org$frostlang$frostc$IR* $tmp1915 = *(&local0);
$fn1917 $tmp1916 = ($fn1917) $tmp1915->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1918 = $tmp1916($tmp1915, &$s1919);
*(&local37) = $tmp1918;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:372
org$frostlang$frostc$IR* $tmp1920 = *(&local0);
$fn1922 $tmp1921 = ($fn1922) $tmp1920->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1923 = $tmp1921($tmp1920, &$s1924);
*(&local38) = $tmp1923;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:373
org$frostlang$frostc$IR* $tmp1925 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1926 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1927 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp1928 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1929 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1930 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1926, $tmp1927, param1, $tmp1928, $tmp1929, $tmp1930);
$fn1932 $tmp1931 = ($fn1932) $tmp1925->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1933 = $tmp1931($tmp1925, $tmp1926);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:375
org$frostlang$frostc$IR* $tmp1934 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1935 = *(&local37);
$fn1937 $tmp1936 = ($fn1937) $tmp1934->$class->vtable[4];
$tmp1936($tmp1934, $tmp1935);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:376
org$frostlang$frostc$IR$Value* $tmp1938 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp1939 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:376:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1940 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1941 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp1940, $tmp1941);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1942 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1943 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp1944 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1942, $tmp1943, $tmp1944, $tmp1939);
frost$collections$Array$add$frost$collections$Array$T($tmp1940, ((frost$core$Object*) $tmp1942));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1940)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1945 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1946 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp1947 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1948 = *$tmp1947;
frost$core$Bit $tmp1949 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1945, $tmp1946, $tmp1948, $tmp1949);
org$frostlang$frostc$IR$Value* $tmp1950 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1938, &$s1951, ((frost$collections$ListView*) $tmp1940), $tmp1945);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
org$frostlang$frostc$IR$Value* $tmp1952 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
*(&local39) = $tmp1950;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1940)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:378
org$frostlang$frostc$IR$Value* $tmp1953 = *(&local39);
frost$core$Bit $tmp1954 = (frost$core$Bit) {$tmp1953 != NULL};
bool $tmp1955 = $tmp1954.value;
if ($tmp1955) goto block103; else goto block104;
block104:;
frost$core$Int64 $tmp1956 = (frost$core$Int64) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1957, $tmp1956);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:379
org$frostlang$frostc$IR$Value* $tmp1958 = *(&local39);
org$frostlang$frostc$IR$Value* $tmp1959 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1958);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
org$frostlang$frostc$IR$Value* $tmp1960 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
*(&local40) = $tmp1959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:380
org$frostlang$frostc$IR* $tmp1961 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1962 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1963 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp1964 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1965 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp1966 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1962, $tmp1963, param1, $tmp1964, $tmp1965, $tmp1966);
$fn1968 $tmp1967 = ($fn1968) $tmp1961->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1969 = $tmp1967($tmp1961, $tmp1962);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:382
org$frostlang$frostc$IR* $tmp1970 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1971 = *(&local38);
$fn1973 $tmp1972 = ($fn1973) $tmp1970->$class->vtable[4];
$tmp1972($tmp1970, $tmp1971);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:383
org$frostlang$frostc$IR$Value* $tmp1974 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp1975 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:383:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1976 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1977 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp1976, $tmp1977);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1978 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1979 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp1980 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1978, $tmp1979, $tmp1980, $tmp1975);
frost$collections$Array$add$frost$collections$Array$T($tmp1976, ((frost$core$Object*) $tmp1978));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1976)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1981 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1982 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp1983 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1984 = *$tmp1983;
frost$core$Bit $tmp1985 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1981, $tmp1982, $tmp1984, $tmp1985);
org$frostlang$frostc$IR$Value* $tmp1986 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1974, &$s1987, ((frost$collections$ListView*) $tmp1976), $tmp1981);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
org$frostlang$frostc$IR$Value* $tmp1988 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
*(&local41) = $tmp1986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1976)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:385
org$frostlang$frostc$IR$Value* $tmp1989 = *(&local41);
frost$core$Bit $tmp1990 = (frost$core$Bit) {$tmp1989 != NULL};
bool $tmp1991 = $tmp1990.value;
if ($tmp1991) goto block106; else goto block107;
block107:;
frost$core$Int64 $tmp1992 = (frost$core$Int64) {385u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1993, $tmp1992);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:386
org$frostlang$frostc$IR$Value* $tmp1994 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1995 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1994);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
org$frostlang$frostc$IR$Value* $tmp1996 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local42) = $tmp1995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:387
org$frostlang$frostc$IR* $tmp1997 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1998 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1999 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2000 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp2001 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2002 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1998, $tmp1999, param1, $tmp2000, $tmp2001, $tmp2002);
$fn2004 $tmp2003 = ($fn2004) $tmp1997->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2005 = $tmp2003($tmp1997, $tmp1998);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:389
org$frostlang$frostc$IR* $tmp2006 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2007 = *(&local32);
$fn2009 $tmp2008 = ($fn2009) $tmp2006->$class->vtable[4];
$tmp2008($tmp2006, $tmp2007);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:390
org$frostlang$frostc$IR* $tmp2010 = *(&local0);
$fn2012 $tmp2011 = ($fn2012) $tmp2010->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2013 = $tmp2011($tmp2010, &$s2014);
*(&local43) = $tmp2013;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:391
org$frostlang$frostc$IR* $tmp2015 = *(&local0);
$fn2017 $tmp2016 = ($fn2017) $tmp2015->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2018 = $tmp2016($tmp2015, &$s2019);
*(&local44) = $tmp2018;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:392
org$frostlang$frostc$IR* $tmp2020 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2021 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2022 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2023 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2024 = *(&local43);
org$frostlang$frostc$IR$Block$ID $tmp2025 = *(&local44);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2021, $tmp2022, param1, $tmp2023, $tmp2024, $tmp2025);
$fn2027 $tmp2026 = ($fn2027) $tmp2020->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2028 = $tmp2026($tmp2020, $tmp2021);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:394
org$frostlang$frostc$IR* $tmp2029 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2030 = *(&local43);
$fn2032 $tmp2031 = ($fn2032) $tmp2029->$class->vtable[4];
$tmp2031($tmp2029, $tmp2030);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:395
org$frostlang$frostc$IR$Value* $tmp2033 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp2034 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:395:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2035 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2036 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2035, $tmp2036);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2037 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2038 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp2039 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2037, $tmp2038, $tmp2039, $tmp2034);
frost$collections$Array$add$frost$collections$Array$T($tmp2035, ((frost$core$Object*) $tmp2037));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2035)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2040 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2041 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp2042 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2043 = *$tmp2042;
frost$core$Bit $tmp2044 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2040, $tmp2041, $tmp2043, $tmp2044);
org$frostlang$frostc$IR$Value* $tmp2045 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2033, &$s2046, ((frost$collections$ListView*) $tmp2035), $tmp2040);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
org$frostlang$frostc$IR$Value* $tmp2047 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
*(&local45) = $tmp2045;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2035)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:397
org$frostlang$frostc$IR$Value* $tmp2048 = *(&local45);
frost$core$Bit $tmp2049 = (frost$core$Bit) {$tmp2048 != NULL};
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block109; else goto block110;
block110:;
frost$core$Int64 $tmp2051 = (frost$core$Int64) {397u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2052, $tmp2051);
abort(); // unreachable
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:398
org$frostlang$frostc$IR$Value* $tmp2053 = *(&local45);
org$frostlang$frostc$IR$Value* $tmp2054 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2053);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
org$frostlang$frostc$IR$Value* $tmp2055 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
*(&local46) = $tmp2054;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:399
org$frostlang$frostc$IR* $tmp2056 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2057 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2058 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2059 = *(&local46);
org$frostlang$frostc$IR$Block$ID $tmp2060 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2061 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2057, $tmp2058, param1, $tmp2059, $tmp2060, $tmp2061);
$fn2063 $tmp2062 = ($fn2063) $tmp2056->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2064 = $tmp2062($tmp2056, $tmp2057);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:401
org$frostlang$frostc$IR* $tmp2065 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2066 = *(&local44);
$fn2068 $tmp2067 = ($fn2068) $tmp2065->$class->vtable[4];
$tmp2067($tmp2065, $tmp2066);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:402
org$frostlang$frostc$IR$Value* $tmp2069 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp2070 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:402:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2071 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2072 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2071, $tmp2072);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2073 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2074 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp2075 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2073, $tmp2074, $tmp2075, $tmp2070);
frost$collections$Array$add$frost$collections$Array$T($tmp2071, ((frost$core$Object*) $tmp2073));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2071)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2076 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2077 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp2078 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2079 = *$tmp2078;
frost$core$Bit $tmp2080 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2076, $tmp2077, $tmp2079, $tmp2080);
org$frostlang$frostc$IR$Value* $tmp2081 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2069, &$s2082, ((frost$collections$ListView*) $tmp2071), $tmp2076);
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
org$frostlang$frostc$IR$Value* $tmp2083 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
*(&local47) = $tmp2081;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2071)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:404
org$frostlang$frostc$IR$Value* $tmp2084 = *(&local47);
frost$core$Bit $tmp2085 = (frost$core$Bit) {$tmp2084 != NULL};
bool $tmp2086 = $tmp2085.value;
if ($tmp2086) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp2087 = (frost$core$Int64) {404u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2088, $tmp2087);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:405
org$frostlang$frostc$IR$Value* $tmp2089 = *(&local47);
org$frostlang$frostc$IR$Value* $tmp2090 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2089);
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
org$frostlang$frostc$IR$Value* $tmp2091 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
*(&local48) = $tmp2090;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:406
org$frostlang$frostc$IR* $tmp2092 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2093 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2094 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2095 = *(&local48);
org$frostlang$frostc$IR$Block$ID $tmp2096 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp2097 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2093, $tmp2094, param1, $tmp2095, $tmp2096, $tmp2097);
$fn2099 $tmp2098 = ($fn2099) $tmp2092->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2100 = $tmp2098($tmp2092, $tmp2093);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:408
org$frostlang$frostc$IR* $tmp2101 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2102 = *(&local28);
$fn2104 $tmp2103 = ($fn2104) $tmp2101->$class->vtable[4];
$tmp2103($tmp2101, $tmp2102);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:409
ITable* $tmp2105 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2105->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2105 = $tmp2105->next;
}
$fn2107 $tmp2106 = $tmp2105->methods[0];
frost$collections$Iterator* $tmp2108 = $tmp2106(((frost$collections$Iterable*) param5));
goto block114;
block114:;
ITable* $tmp2109 = $tmp2108->$class->itable;
while ($tmp2109->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2109 = $tmp2109->next;
}
$fn2111 $tmp2110 = $tmp2109->methods[0];
frost$core$Bit $tmp2112 = $tmp2110($tmp2108);
bool $tmp2113 = $tmp2112.value;
if ($tmp2113) goto block116; else goto block115;
block115:;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2114 = $tmp2108->$class->itable;
while ($tmp2114->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2114 = $tmp2114->next;
}
$fn2116 $tmp2115 = $tmp2114->methods[1];
frost$core$Object* $tmp2117 = $tmp2115($tmp2108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2117)));
org$frostlang$frostc$ASTNode* $tmp2118 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
*(&local49) = ((org$frostlang$frostc$ASTNode*) $tmp2117);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:410
org$frostlang$frostc$ASTNode* $tmp2119 = *(&local49);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp2119);
frost$core$Frost$unref$frost$core$Object$Q($tmp2117);
org$frostlang$frostc$ASTNode* $tmp2120 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block114;
block116:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
org$frostlang$frostc$IR$Value* $tmp2121 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2122 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2123 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2124 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2125 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2126 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2127 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2128 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2129 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
*(&local35) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:413
org$frostlang$frostc$IR* $tmp2130 = *(&local0);
$fn2132 $tmp2131 = ($fn2132) $tmp2130->$class->vtable[5];
frost$core$Bit $tmp2133 = $tmp2131($tmp2130);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:413:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp2134 = $tmp2133.value;
bool $tmp2135 = !$tmp2134;
frost$core$Bit $tmp2136 = (frost$core$Bit) {$tmp2135};
bool $tmp2137 = $tmp2136.value;
if ($tmp2137) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:414
org$frostlang$frostc$IR* $tmp2138 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2139 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2140 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp2141 = *(&local30);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2139, $tmp2140, param1, $tmp2141);
$fn2143 $tmp2142 = ($fn2143) $tmp2138->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2144 = $tmp2142($tmp2138, $tmp2139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
goto block118;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:416
org$frostlang$frostc$IR* $tmp2145 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2146 = *(&local30);
$fn2148 $tmp2147 = ($fn2148) $tmp2145->$class->vtable[4];
$tmp2147($tmp2145, $tmp2146);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:417
org$frostlang$frostc$IR* $tmp2149 = *(&local0);
$fn2151 $tmp2150 = ($fn2151) $tmp2149->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2152 = $tmp2150($tmp2149, &$s2153);
*(&local50) = $tmp2152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:419
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2154 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2155 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR* $tmp2156 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2157 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2158 = (frost$core$Int64) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2159 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2160 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp2161 = *(&local3);
org$frostlang$frostc$Type* $tmp2162 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp2159, $tmp2160, $tmp2161, $tmp2162);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2157, $tmp2158, param1, $tmp2159);
$fn2164 $tmp2163 = ($fn2164) $tmp2156->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2165 = $tmp2163($tmp2156, $tmp2157);
org$frostlang$frostc$Type* $tmp2166 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2154, $tmp2155, $tmp2165, $tmp2166);
org$frostlang$frostc$Type* $tmp2167 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2168 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2154, $tmp2167);
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
org$frostlang$frostc$IR$Value* $tmp2169 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local51) = $tmp2168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:421
org$frostlang$frostc$IR$Value* $tmp2170 = *(&local51);
frost$core$Bit $tmp2171 = (frost$core$Bit) {$tmp2170 != NULL};
bool $tmp2172 = $tmp2171.value;
if ($tmp2172) goto block120; else goto block121;
block121:;
frost$core$Int64 $tmp2173 = (frost$core$Int64) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2174, $tmp2173);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:422
org$frostlang$frostc$IR* $tmp2175 = *(&local0);
$fn2177 $tmp2176 = ($fn2177) $tmp2175->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2178 = $tmp2176($tmp2175, &$s2179);
*(&local52) = $tmp2178;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:423
org$frostlang$frostc$IR* $tmp2180 = *(&local0);
$fn2182 $tmp2181 = ($fn2182) $tmp2180->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2183 = $tmp2181($tmp2180, &$s2184);
*(&local53) = $tmp2183;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:424
org$frostlang$frostc$IR* $tmp2185 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2186 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2187 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2188 = *(&local33);
org$frostlang$frostc$IR$Block$ID $tmp2189 = *(&local52);
org$frostlang$frostc$IR$Block$ID $tmp2190 = *(&local53);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2186, $tmp2187, param1, $tmp2188, $tmp2189, $tmp2190);
$fn2192 $tmp2191 = ($fn2192) $tmp2185->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2193 = $tmp2191($tmp2185, $tmp2186);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:428
org$frostlang$frostc$IR* $tmp2194 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2195 = *(&local52);
$fn2197 $tmp2196 = ($fn2197) $tmp2194->$class->vtable[4];
$tmp2196($tmp2194, $tmp2195);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:431
org$frostlang$frostc$IR$Value* $tmp2198 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp2199 = *(&local51);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:432:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2200 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2201 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2200, $tmp2201);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2202 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2203 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp2204 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2202, $tmp2203, $tmp2204, $tmp2199);
frost$collections$Array$add$frost$collections$Array$T($tmp2200, ((frost$core$Object*) $tmp2202));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2200)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2205 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2206 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2205, $tmp2206);
org$frostlang$frostc$IR$Value* $tmp2207 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2198, &$s2208, ((frost$collections$ListView*) $tmp2200), $tmp2205);
org$frostlang$frostc$Type* $tmp2209 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:432:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp2210 = &$tmp2209->typeKind;
org$frostlang$frostc$Type$Kind $tmp2211 = *$tmp2210;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2212;
$tmp2212 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2212->value = $tmp2211;
frost$core$Int64 $tmp2213 = (frost$core$Int64) {1u};
org$frostlang$frostc$Type$Kind $tmp2214 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2213);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2215;
$tmp2215 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2215->value = $tmp2214;
ITable* $tmp2216 = ((frost$core$Equatable*) $tmp2212)->$class->itable;
while ($tmp2216->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2216 = $tmp2216->next;
}
$fn2218 $tmp2217 = $tmp2216->methods[1];
frost$core$Bit $tmp2219 = $tmp2217(((frost$core$Equatable*) $tmp2212), ((frost$core$Equatable*) $tmp2215));
bool $tmp2220 = $tmp2219.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2215)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2212)));
if ($tmp2220) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
*(&local55) = $tmp2209;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
goto block124;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
org$frostlang$frostc$FixedArray* $tmp2221 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2209);
frost$core$Int64 $tmp2222 = (frost$core$Int64) {0u};
frost$core$Object* $tmp2223 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2221, $tmp2222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2223)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
*(&local55) = ((org$frostlang$frostc$Type*) $tmp2223);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2223)));
goto block124;
block124:;
org$frostlang$frostc$Type* $tmp2224 = *(&local55);
org$frostlang$frostc$Type** $tmp2225 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2226 = *$tmp2225;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2227 = &((org$frostlang$frostc$Symbol*) $tmp2224)->name;
frost$core$String* $tmp2228 = *$tmp2227;
frost$core$String** $tmp2229 = &((org$frostlang$frostc$Symbol*) $tmp2226)->name;
frost$core$String* $tmp2230 = *$tmp2229;
frost$core$Bit $tmp2231 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2228, $tmp2230);
bool $tmp2232 = $tmp2231.value;
if ($tmp2232) goto block131; else goto block132;
block131:;
org$frostlang$frostc$Type$Kind* $tmp2233 = &$tmp2224->typeKind;
org$frostlang$frostc$Type$Kind $tmp2234 = *$tmp2233;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2235;
$tmp2235 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2235->value = $tmp2234;
org$frostlang$frostc$Type$Kind* $tmp2236 = &$tmp2226->typeKind;
org$frostlang$frostc$Type$Kind $tmp2237 = *$tmp2236;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2238;
$tmp2238 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2238->value = $tmp2237;
ITable* $tmp2239 = ((frost$core$Equatable*) $tmp2235)->$class->itable;
while ($tmp2239->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2239 = $tmp2239->next;
}
$fn2241 $tmp2240 = $tmp2239->methods[0];
frost$core$Bit $tmp2242 = $tmp2240(((frost$core$Equatable*) $tmp2235), ((frost$core$Equatable*) $tmp2238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2238)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2235)));
*(&local56) = $tmp2242;
goto block133;
block132:;
*(&local56) = $tmp2231;
goto block133;
block133:;
frost$core$Bit $tmp2243 = *(&local56);
bool $tmp2244 = $tmp2243.value;
if ($tmp2244) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp2245 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp2246 = *$tmp2245;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
org$frostlang$frostc$Type* $tmp2247 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2246;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
goto block123;
block129:;
org$frostlang$frostc$Type** $tmp2248 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp2249 = *$tmp2248;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2250 = &((org$frostlang$frostc$Symbol*) $tmp2224)->name;
frost$core$String* $tmp2251 = *$tmp2250;
frost$core$String** $tmp2252 = &((org$frostlang$frostc$Symbol*) $tmp2249)->name;
frost$core$String* $tmp2253 = *$tmp2252;
frost$core$Bit $tmp2254 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2251, $tmp2253);
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block137; else goto block138;
block137:;
org$frostlang$frostc$Type$Kind* $tmp2256 = &$tmp2224->typeKind;
org$frostlang$frostc$Type$Kind $tmp2257 = *$tmp2256;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2258;
$tmp2258 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2258->value = $tmp2257;
org$frostlang$frostc$Type$Kind* $tmp2259 = &$tmp2249->typeKind;
org$frostlang$frostc$Type$Kind $tmp2260 = *$tmp2259;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2261;
$tmp2261 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2261->value = $tmp2260;
ITable* $tmp2262 = ((frost$core$Equatable*) $tmp2258)->$class->itable;
while ($tmp2262->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2262 = $tmp2262->next;
}
$fn2264 $tmp2263 = $tmp2262->methods[0];
frost$core$Bit $tmp2265 = $tmp2263(((frost$core$Equatable*) $tmp2258), ((frost$core$Equatable*) $tmp2261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2261)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2258)));
*(&local57) = $tmp2265;
goto block139;
block138:;
*(&local57) = $tmp2254;
goto block139;
block139:;
frost$core$Bit $tmp2266 = *(&local57);
bool $tmp2267 = $tmp2266.value;
if ($tmp2267) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp2268 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp2269 = *$tmp2268;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
org$frostlang$frostc$Type* $tmp2270 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2269;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
goto block123;
block135:;
org$frostlang$frostc$Type** $tmp2271 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp2272 = *$tmp2271;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2273 = &((org$frostlang$frostc$Symbol*) $tmp2224)->name;
frost$core$String* $tmp2274 = *$tmp2273;
frost$core$String** $tmp2275 = &((org$frostlang$frostc$Symbol*) $tmp2272)->name;
frost$core$String* $tmp2276 = *$tmp2275;
frost$core$Bit $tmp2277 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2274, $tmp2276);
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block143; else goto block144;
block143:;
org$frostlang$frostc$Type$Kind* $tmp2279 = &$tmp2224->typeKind;
org$frostlang$frostc$Type$Kind $tmp2280 = *$tmp2279;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2281;
$tmp2281 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2281->value = $tmp2280;
org$frostlang$frostc$Type$Kind* $tmp2282 = &$tmp2272->typeKind;
org$frostlang$frostc$Type$Kind $tmp2283 = *$tmp2282;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2284;
$tmp2284 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2284->value = $tmp2283;
ITable* $tmp2285 = ((frost$core$Equatable*) $tmp2281)->$class->itable;
while ($tmp2285->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2285 = $tmp2285->next;
}
$fn2287 $tmp2286 = $tmp2285->methods[0];
frost$core$Bit $tmp2288 = $tmp2286(((frost$core$Equatable*) $tmp2281), ((frost$core$Equatable*) $tmp2284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2284)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2281)));
*(&local58) = $tmp2288;
goto block145;
block144:;
*(&local58) = $tmp2277;
goto block145;
block145:;
frost$core$Bit $tmp2289 = *(&local58);
bool $tmp2290 = $tmp2289.value;
if ($tmp2290) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp2291 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp2292 = *$tmp2291;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
org$frostlang$frostc$Type* $tmp2293 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2292;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
goto block123;
block141:;
org$frostlang$frostc$Type** $tmp2294 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp2295 = *$tmp2294;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2296 = &((org$frostlang$frostc$Symbol*) $tmp2224)->name;
frost$core$String* $tmp2297 = *$tmp2296;
frost$core$String** $tmp2298 = &((org$frostlang$frostc$Symbol*) $tmp2295)->name;
frost$core$String* $tmp2299 = *$tmp2298;
frost$core$Bit $tmp2300 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2297, $tmp2299);
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Type$Kind* $tmp2302 = &$tmp2224->typeKind;
org$frostlang$frostc$Type$Kind $tmp2303 = *$tmp2302;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2304;
$tmp2304 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2304->value = $tmp2303;
org$frostlang$frostc$Type$Kind* $tmp2305 = &$tmp2295->typeKind;
org$frostlang$frostc$Type$Kind $tmp2306 = *$tmp2305;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2307;
$tmp2307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2307->value = $tmp2306;
ITable* $tmp2308 = ((frost$core$Equatable*) $tmp2304)->$class->itable;
while ($tmp2308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2308 = $tmp2308->next;
}
$fn2310 $tmp2309 = $tmp2308->methods[0];
frost$core$Bit $tmp2311 = $tmp2309(((frost$core$Equatable*) $tmp2304), ((frost$core$Equatable*) $tmp2307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2307)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2304)));
*(&local59) = $tmp2311;
goto block151;
block150:;
*(&local59) = $tmp2300;
goto block151;
block151:;
frost$core$Bit $tmp2312 = *(&local59);
bool $tmp2313 = $tmp2312.value;
if ($tmp2313) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp2314 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp2315 = *$tmp2314;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
org$frostlang$frostc$Type* $tmp2316 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2315;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
goto block123;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
org$frostlang$frostc$Type* $tmp2317 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
*(&local54) = $tmp2209;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
goto block123;
block127:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
org$frostlang$frostc$Type* $tmp2318 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
goto block123;
block123:;
org$frostlang$frostc$Type* $tmp2319 = *(&local54);
org$frostlang$frostc$IR$Value* $tmp2320 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2207, $tmp2319);
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
org$frostlang$frostc$IR$Value* $tmp2321 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
*(&local60) = $tmp2320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:433
org$frostlang$frostc$IR$Value* $tmp2322 = *(&local60);
frost$core$Bit $tmp2323 = (frost$core$Bit) {$tmp2322 != NULL};
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block152; else goto block153;
block153:;
frost$core$Int64 $tmp2325 = (frost$core$Int64) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2326, $tmp2325);
abort(); // unreachable
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:436
org$frostlang$frostc$IR* $tmp2327 = *(&local0);
$fn2329 $tmp2328 = ($fn2329) $tmp2327->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2330 = $tmp2328($tmp2327, &$s2331);
*(&local61) = $tmp2330;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:437
org$frostlang$frostc$IR* $tmp2332 = *(&local0);
$fn2334 $tmp2333 = ($fn2334) $tmp2332->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2335 = $tmp2333($tmp2332, &$s2336);
*(&local62) = $tmp2335;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:438
org$frostlang$frostc$IR* $tmp2337 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2338 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2339 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2340 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2341 = *(&local61);
org$frostlang$frostc$IR$Block$ID $tmp2342 = *(&local62);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2338, $tmp2339, param1, $tmp2340, $tmp2341, $tmp2342);
$fn2344 $tmp2343 = ($fn2344) $tmp2337->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2345 = $tmp2343($tmp2337, $tmp2338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:442
org$frostlang$frostc$IR* $tmp2346 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2347 = *(&local61);
$fn2349 $tmp2348 = ($fn2349) $tmp2346->$class->vtable[4];
$tmp2348($tmp2346, $tmp2347);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:443
org$frostlang$frostc$IR$Value* $tmp2350 = *(&local60);
org$frostlang$frostc$IR$Value* $tmp2351 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:443:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2352 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2353 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2352, $tmp2353);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2354 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2355 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp2356 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2354, $tmp2355, $tmp2356, $tmp2351);
frost$collections$Array$add$frost$collections$Array$T($tmp2352, ((frost$core$Object*) $tmp2354));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2352)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2357 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2358 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp2359 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2360 = *$tmp2359;
frost$core$Bit $tmp2361 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2357, $tmp2358, $tmp2360, $tmp2361);
org$frostlang$frostc$IR$Value* $tmp2362 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2350, &$s2363, ((frost$collections$ListView*) $tmp2352), $tmp2357);
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
org$frostlang$frostc$IR$Value* $tmp2364 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
*(&local63) = $tmp2362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2352)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:445
org$frostlang$frostc$IR$Value* $tmp2365 = *(&local63);
frost$core$Bit $tmp2366 = (frost$core$Bit) {$tmp2365 != NULL};
bool $tmp2367 = $tmp2366.value;
if ($tmp2367) goto block155; else goto block156;
block156:;
frost$core$Int64 $tmp2368 = (frost$core$Int64) {445u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2369, $tmp2368);
abort(); // unreachable
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:446
org$frostlang$frostc$IR$Value* $tmp2370 = *(&local63);
org$frostlang$frostc$IR$Value* $tmp2371 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2370);
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
org$frostlang$frostc$IR$Value* $tmp2372 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
*(&local64) = $tmp2371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:447
org$frostlang$frostc$IR* $tmp2373 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2374 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2375 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2376 = *(&local64);
org$frostlang$frostc$IR$Block$ID $tmp2377 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2378 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2374, $tmp2375, param1, $tmp2376, $tmp2377, $tmp2378);
$fn2380 $tmp2379 = ($fn2380) $tmp2373->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2381 = $tmp2379($tmp2373, $tmp2374);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:450
org$frostlang$frostc$IR* $tmp2382 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2383 = *(&local62);
$fn2385 $tmp2384 = ($fn2385) $tmp2382->$class->vtable[4];
$tmp2384($tmp2382, $tmp2383);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:451
org$frostlang$frostc$IR$Value* $tmp2386 = *(&local60);
org$frostlang$frostc$IR$Value* $tmp2387 = *(&local15);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:451:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2388 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2389 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2388, $tmp2389);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2390 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2391 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp2392 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2390, $tmp2391, $tmp2392, $tmp2387);
frost$collections$Array$add$frost$collections$Array$T($tmp2388, ((frost$core$Object*) $tmp2390));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2388)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2393 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2394 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp2395 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2396 = *$tmp2395;
frost$core$Bit $tmp2397 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2393, $tmp2394, $tmp2396, $tmp2397);
org$frostlang$frostc$IR$Value* $tmp2398 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2386, &$s2399, ((frost$collections$ListView*) $tmp2388), $tmp2393);
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
org$frostlang$frostc$IR$Value* $tmp2400 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
*(&local65) = $tmp2398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2388)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:453
org$frostlang$frostc$IR$Value* $tmp2401 = *(&local65);
frost$core$Bit $tmp2402 = (frost$core$Bit) {$tmp2401 != NULL};
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block158; else goto block159;
block159:;
frost$core$Int64 $tmp2404 = (frost$core$Int64) {453u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2405, $tmp2404);
abort(); // unreachable
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:454
org$frostlang$frostc$IR$Value* $tmp2406 = *(&local65);
org$frostlang$frostc$IR$Value* $tmp2407 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2406);
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
org$frostlang$frostc$IR$Value* $tmp2408 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
*(&local66) = $tmp2407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:455
org$frostlang$frostc$IR* $tmp2409 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2410 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2411 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2412 = *(&local66);
org$frostlang$frostc$IR$Block$ID $tmp2413 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2414 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2410, $tmp2411, param1, $tmp2412, $tmp2413, $tmp2414);
$fn2416 $tmp2415 = ($fn2416) $tmp2409->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2417 = $tmp2415($tmp2409, $tmp2410);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:459
org$frostlang$frostc$IR* $tmp2418 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2419 = *(&local53);
$fn2421 $tmp2420 = ($fn2421) $tmp2418->$class->vtable[4];
$tmp2420($tmp2418, $tmp2419);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:460
org$frostlang$frostc$IR$Value* $tmp2422 = *(&local51);
org$frostlang$frostc$IR$Value* $tmp2423 = *(&local13);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:460:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2424 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2425 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2424, $tmp2425);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2426 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2427 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp2428 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2426, $tmp2427, $tmp2428, $tmp2423);
frost$collections$Array$add$frost$collections$Array$T($tmp2424, ((frost$core$Object*) $tmp2426));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2424)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2429 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2430 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2429, $tmp2430);
org$frostlang$frostc$IR$Value* $tmp2431 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2422, &$s2432, ((frost$collections$ListView*) $tmp2424), $tmp2429);
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
org$frostlang$frostc$IR$Value* $tmp2433 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
*(&local67) = $tmp2431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2424)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:461
org$frostlang$frostc$IR$Value* $tmp2434 = *(&local67);
frost$core$Bit $tmp2435 = (frost$core$Bit) {$tmp2434 != NULL};
bool $tmp2436 = $tmp2435.value;
if ($tmp2436) goto block161; else goto block162;
block162:;
frost$core$Int64 $tmp2437 = (frost$core$Int64) {461u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2438, $tmp2437);
abort(); // unreachable
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:462
org$frostlang$frostc$IR$Value* $tmp2439 = *(&local67);
org$frostlang$frostc$Type* $tmp2440 = *(&local6);
// begin inline call to function org.frostlang.frostc.statement.For.unsigned(compiler:org.frostlang.frostc.Compiler, type:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:462:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:60
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:60:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp2441 = &$tmp2440->typeKind;
org$frostlang$frostc$Type$Kind $tmp2442 = *$tmp2441;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2443;
$tmp2443 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2443->value = $tmp2442;
frost$core$Int64 $tmp2444 = (frost$core$Int64) {1u};
org$frostlang$frostc$Type$Kind $tmp2445 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2444);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2446;
$tmp2446 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2446->value = $tmp2445;
ITable* $tmp2447 = ((frost$core$Equatable*) $tmp2443)->$class->itable;
while ($tmp2447->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2447 = $tmp2447->next;
}
$fn2449 $tmp2448 = $tmp2447->methods[1];
frost$core$Bit $tmp2450 = $tmp2448(((frost$core$Equatable*) $tmp2443), ((frost$core$Equatable*) $tmp2446));
bool $tmp2451 = $tmp2450.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2446)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2443)));
if ($tmp2451) goto block165; else goto block166;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
*(&local69) = $tmp2440;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
goto block164;
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
org$frostlang$frostc$FixedArray* $tmp2452 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2440);
frost$core$Int64 $tmp2453 = (frost$core$Int64) {0u};
frost$core$Object* $tmp2454 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2452, $tmp2453);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2454)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2454);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
*(&local69) = ((org$frostlang$frostc$Type*) $tmp2454);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2454)));
goto block164;
block164:;
org$frostlang$frostc$Type* $tmp2455 = *(&local69);
org$frostlang$frostc$Type** $tmp2456 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2457 = *$tmp2456;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:61:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2458 = &((org$frostlang$frostc$Symbol*) $tmp2455)->name;
frost$core$String* $tmp2459 = *$tmp2458;
frost$core$String** $tmp2460 = &((org$frostlang$frostc$Symbol*) $tmp2457)->name;
frost$core$String* $tmp2461 = *$tmp2460;
frost$core$Bit $tmp2462 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2459, $tmp2461);
bool $tmp2463 = $tmp2462.value;
if ($tmp2463) goto block171; else goto block172;
block171:;
org$frostlang$frostc$Type$Kind* $tmp2464 = &$tmp2455->typeKind;
org$frostlang$frostc$Type$Kind $tmp2465 = *$tmp2464;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2466;
$tmp2466 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2466->value = $tmp2465;
org$frostlang$frostc$Type$Kind* $tmp2467 = &$tmp2457->typeKind;
org$frostlang$frostc$Type$Kind $tmp2468 = *$tmp2467;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2469;
$tmp2469 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2469->value = $tmp2468;
ITable* $tmp2470 = ((frost$core$Equatable*) $tmp2466)->$class->itable;
while ($tmp2470->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2470 = $tmp2470->next;
}
$fn2472 $tmp2471 = $tmp2470->methods[0];
frost$core$Bit $tmp2473 = $tmp2471(((frost$core$Equatable*) $tmp2466), ((frost$core$Equatable*) $tmp2469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2469)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2466)));
*(&local70) = $tmp2473;
goto block173;
block172:;
*(&local70) = $tmp2462;
goto block173;
block173:;
frost$core$Bit $tmp2474 = *(&local70);
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block168; else goto block169;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:61
org$frostlang$frostc$Type** $tmp2476 = &param0->UINT8_TYPE;
org$frostlang$frostc$Type* $tmp2477 = *$tmp2476;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
org$frostlang$frostc$Type* $tmp2478 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2477;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
goto block163;
block169:;
org$frostlang$frostc$Type** $tmp2479 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp2480 = *$tmp2479;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2481 = &((org$frostlang$frostc$Symbol*) $tmp2455)->name;
frost$core$String* $tmp2482 = *$tmp2481;
frost$core$String** $tmp2483 = &((org$frostlang$frostc$Symbol*) $tmp2480)->name;
frost$core$String* $tmp2484 = *$tmp2483;
frost$core$Bit $tmp2485 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2482, $tmp2484);
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block177; else goto block178;
block177:;
org$frostlang$frostc$Type$Kind* $tmp2487 = &$tmp2455->typeKind;
org$frostlang$frostc$Type$Kind $tmp2488 = *$tmp2487;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2489;
$tmp2489 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2489->value = $tmp2488;
org$frostlang$frostc$Type$Kind* $tmp2490 = &$tmp2480->typeKind;
org$frostlang$frostc$Type$Kind $tmp2491 = *$tmp2490;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2492;
$tmp2492 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2492->value = $tmp2491;
ITable* $tmp2493 = ((frost$core$Equatable*) $tmp2489)->$class->itable;
while ($tmp2493->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2493 = $tmp2493->next;
}
$fn2495 $tmp2494 = $tmp2493->methods[0];
frost$core$Bit $tmp2496 = $tmp2494(((frost$core$Equatable*) $tmp2489), ((frost$core$Equatable*) $tmp2492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2492)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2489)));
*(&local71) = $tmp2496;
goto block179;
block178:;
*(&local71) = $tmp2485;
goto block179;
block179:;
frost$core$Bit $tmp2497 = *(&local71);
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block174; else goto block175;
block174:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:62
org$frostlang$frostc$Type** $tmp2499 = &param0->UINT16_TYPE;
org$frostlang$frostc$Type* $tmp2500 = *$tmp2499;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
org$frostlang$frostc$Type* $tmp2501 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2500;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
goto block163;
block175:;
org$frostlang$frostc$Type** $tmp2502 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp2503 = *$tmp2502;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2504 = &((org$frostlang$frostc$Symbol*) $tmp2455)->name;
frost$core$String* $tmp2505 = *$tmp2504;
frost$core$String** $tmp2506 = &((org$frostlang$frostc$Symbol*) $tmp2503)->name;
frost$core$String* $tmp2507 = *$tmp2506;
frost$core$Bit $tmp2508 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2505, $tmp2507);
bool $tmp2509 = $tmp2508.value;
if ($tmp2509) goto block183; else goto block184;
block183:;
org$frostlang$frostc$Type$Kind* $tmp2510 = &$tmp2455->typeKind;
org$frostlang$frostc$Type$Kind $tmp2511 = *$tmp2510;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2512;
$tmp2512 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2512->value = $tmp2511;
org$frostlang$frostc$Type$Kind* $tmp2513 = &$tmp2503->typeKind;
org$frostlang$frostc$Type$Kind $tmp2514 = *$tmp2513;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2515;
$tmp2515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2515->value = $tmp2514;
ITable* $tmp2516 = ((frost$core$Equatable*) $tmp2512)->$class->itable;
while ($tmp2516->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2516 = $tmp2516->next;
}
$fn2518 $tmp2517 = $tmp2516->methods[0];
frost$core$Bit $tmp2519 = $tmp2517(((frost$core$Equatable*) $tmp2512), ((frost$core$Equatable*) $tmp2515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2515)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2512)));
*(&local72) = $tmp2519;
goto block185;
block184:;
*(&local72) = $tmp2508;
goto block185;
block185:;
frost$core$Bit $tmp2520 = *(&local72);
bool $tmp2521 = $tmp2520.value;
if ($tmp2521) goto block180; else goto block181;
block180:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:63
org$frostlang$frostc$Type** $tmp2522 = &param0->UINT32_TYPE;
org$frostlang$frostc$Type* $tmp2523 = *$tmp2522;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
org$frostlang$frostc$Type* $tmp2524 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2523;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
goto block163;
block181:;
org$frostlang$frostc$Type** $tmp2525 = &param0->INT64_TYPE;
org$frostlang$frostc$Type* $tmp2526 = *$tmp2525;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2527 = &((org$frostlang$frostc$Symbol*) $tmp2455)->name;
frost$core$String* $tmp2528 = *$tmp2527;
frost$core$String** $tmp2529 = &((org$frostlang$frostc$Symbol*) $tmp2526)->name;
frost$core$String* $tmp2530 = *$tmp2529;
frost$core$Bit $tmp2531 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2528, $tmp2530);
bool $tmp2532 = $tmp2531.value;
if ($tmp2532) goto block189; else goto block190;
block189:;
org$frostlang$frostc$Type$Kind* $tmp2533 = &$tmp2455->typeKind;
org$frostlang$frostc$Type$Kind $tmp2534 = *$tmp2533;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2535;
$tmp2535 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2535->value = $tmp2534;
org$frostlang$frostc$Type$Kind* $tmp2536 = &$tmp2526->typeKind;
org$frostlang$frostc$Type$Kind $tmp2537 = *$tmp2536;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2538;
$tmp2538 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2538->value = $tmp2537;
ITable* $tmp2539 = ((frost$core$Equatable*) $tmp2535)->$class->itable;
while ($tmp2539->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2539 = $tmp2539->next;
}
$fn2541 $tmp2540 = $tmp2539->methods[0];
frost$core$Bit $tmp2542 = $tmp2540(((frost$core$Equatable*) $tmp2535), ((frost$core$Equatable*) $tmp2538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2538)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2535)));
*(&local73) = $tmp2542;
goto block191;
block190:;
*(&local73) = $tmp2531;
goto block191;
block191:;
frost$core$Bit $tmp2543 = *(&local73);
bool $tmp2544 = $tmp2543.value;
if ($tmp2544) goto block186; else goto block187;
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:64
org$frostlang$frostc$Type** $tmp2545 = &param0->UINT64_TYPE;
org$frostlang$frostc$Type* $tmp2546 = *$tmp2545;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
org$frostlang$frostc$Type* $tmp2547 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2546;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
goto block163;
block187:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
org$frostlang$frostc$Type* $tmp2548 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
*(&local68) = $tmp2440;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
goto block163;
block167:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
org$frostlang$frostc$Type* $tmp2549 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local69) = ((org$frostlang$frostc$Type*) NULL);
goto block163;
block163:;
org$frostlang$frostc$Type* $tmp2550 = *(&local68);
org$frostlang$frostc$IR$Value* $tmp2551 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2439, $tmp2550);
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
org$frostlang$frostc$IR$Value* $tmp2552 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
*(&local74) = $tmp2551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:463
org$frostlang$frostc$IR$Value* $tmp2553 = *(&local74);
frost$core$Bit $tmp2554 = (frost$core$Bit) {$tmp2553 != NULL};
bool $tmp2555 = $tmp2554.value;
if ($tmp2555) goto block192; else goto block193;
block193:;
frost$core$Int64 $tmp2556 = (frost$core$Int64) {463u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2557, $tmp2556);
abort(); // unreachable
block192:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:466
org$frostlang$frostc$IR* $tmp2558 = *(&local0);
$fn2560 $tmp2559 = ($fn2560) $tmp2558->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2561 = $tmp2559($tmp2558, &$s2562);
*(&local75) = $tmp2561;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:467
org$frostlang$frostc$IR* $tmp2563 = *(&local0);
$fn2565 $tmp2564 = ($fn2565) $tmp2563->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2566 = $tmp2564($tmp2563, &$s2567);
*(&local76) = $tmp2566;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:468
org$frostlang$frostc$IR* $tmp2568 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2569 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2570 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2571 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp2572 = *(&local75);
org$frostlang$frostc$IR$Block$ID $tmp2573 = *(&local76);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2569, $tmp2570, param1, $tmp2571, $tmp2572, $tmp2573);
$fn2575 $tmp2574 = ($fn2575) $tmp2568->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2576 = $tmp2574($tmp2568, $tmp2569);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:472
org$frostlang$frostc$IR* $tmp2577 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2578 = *(&local75);
$fn2580 $tmp2579 = ($fn2580) $tmp2577->$class->vtable[4];
$tmp2579($tmp2577, $tmp2578);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:473
org$frostlang$frostc$IR$Value* $tmp2581 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp2582 = *(&local25);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:473:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2583 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2584 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2583, $tmp2584);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2585 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2586 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp2587 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2585, $tmp2586, $tmp2587, $tmp2582);
frost$collections$Array$add$frost$collections$Array$T($tmp2583, ((frost$core$Object*) $tmp2585));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2583)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2588 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2589 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp2590 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2591 = *$tmp2590;
frost$core$Bit $tmp2592 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2588, $tmp2589, $tmp2591, $tmp2592);
org$frostlang$frostc$IR$Value* $tmp2593 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2581, &$s2594, ((frost$collections$ListView*) $tmp2583), $tmp2588);
*(&local77) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
org$frostlang$frostc$IR$Value* $tmp2595 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local77) = $tmp2593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2583)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:475
org$frostlang$frostc$IR$Value* $tmp2596 = *(&local77);
frost$core$Bit $tmp2597 = (frost$core$Bit) {$tmp2596 != NULL};
bool $tmp2598 = $tmp2597.value;
if ($tmp2598) goto block195; else goto block196;
block196:;
frost$core$Int64 $tmp2599 = (frost$core$Int64) {475u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2600, $tmp2599);
abort(); // unreachable
block195:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:476
org$frostlang$frostc$IR$Value* $tmp2601 = *(&local77);
org$frostlang$frostc$IR$Value* $tmp2602 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2601);
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
org$frostlang$frostc$IR$Value* $tmp2603 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local78) = $tmp2602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:477
org$frostlang$frostc$IR* $tmp2604 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2605 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2606 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2607 = *(&local78);
org$frostlang$frostc$IR$Block$ID $tmp2608 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2609 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2605, $tmp2606, param1, $tmp2607, $tmp2608, $tmp2609);
$fn2611 $tmp2610 = ($fn2611) $tmp2604->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2612 = $tmp2610($tmp2604, $tmp2605);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:481
org$frostlang$frostc$IR* $tmp2613 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2614 = *(&local76);
$fn2616 $tmp2615 = ($fn2616) $tmp2613->$class->vtable[4];
$tmp2615($tmp2613, $tmp2614);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:482
org$frostlang$frostc$IR$Value* $tmp2617 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp2618 = *(&local25);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:482:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2619 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2620 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2619, $tmp2620);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2621 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2622 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp2623 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2621, $tmp2622, $tmp2623, $tmp2618);
frost$collections$Array$add$frost$collections$Array$T($tmp2619, ((frost$core$Object*) $tmp2621));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2619)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2624 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2625 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp2626 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp2627 = *$tmp2626;
frost$core$Bit $tmp2628 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2624, $tmp2625, $tmp2627, $tmp2628);
org$frostlang$frostc$IR$Value* $tmp2629 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2617, &$s2630, ((frost$collections$ListView*) $tmp2619), $tmp2624);
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
org$frostlang$frostc$IR$Value* $tmp2631 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
*(&local79) = $tmp2629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2619)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:484
org$frostlang$frostc$IR$Value* $tmp2632 = *(&local79);
frost$core$Bit $tmp2633 = (frost$core$Bit) {$tmp2632 != NULL};
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block198; else goto block199;
block199:;
frost$core$Int64 $tmp2635 = (frost$core$Int64) {484u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2636, $tmp2635);
abort(); // unreachable
block198:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:485
org$frostlang$frostc$IR$Value* $tmp2637 = *(&local79);
org$frostlang$frostc$IR$Value* $tmp2638 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2637);
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
org$frostlang$frostc$IR$Value* $tmp2639 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
*(&local80) = $tmp2638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:486
org$frostlang$frostc$IR* $tmp2640 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2641 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2642 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp2643 = *(&local80);
org$frostlang$frostc$IR$Block$ID $tmp2644 = *(&local50);
org$frostlang$frostc$IR$Block$ID $tmp2645 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2641, $tmp2642, param1, $tmp2643, $tmp2644, $tmp2645);
$fn2647 $tmp2646 = ($fn2647) $tmp2640->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2648 = $tmp2646($tmp2640, $tmp2641);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:489
org$frostlang$frostc$IR* $tmp2649 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2650 = *(&local50);
$fn2652 $tmp2651 = ($fn2652) $tmp2649->$class->vtable[4];
$tmp2651($tmp2649, $tmp2650);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:490
org$frostlang$frostc$IR$Value* $tmp2653 = *(&local51);
org$frostlang$frostc$IR$Value* $tmp2654 = *(&local14);
// begin inline call to function org.frostlang.frostc.statement.For.arg(a:org.frostlang.frostc.IR.Value):frost.collections.ListView<org.frostlang.frostc.ASTNode> from For.frost:490:89
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2655 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2656 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2655, $tmp2656);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2657 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2658 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp2659 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2657, $tmp2658, $tmp2659, $tmp2654);
frost$collections$Array$add$frost$collections$Array$T($tmp2655, ((frost$core$Object*) $tmp2657));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2655)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2660 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2661 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2660, $tmp2661);
org$frostlang$frostc$IR$Value* $tmp2662 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2653, &$s2663, ((frost$collections$ListView*) $tmp2655), $tmp2660);
org$frostlang$frostc$Type* $tmp2664 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2665 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2662, $tmp2664);
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
org$frostlang$frostc$IR$Value* $tmp2666 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
*(&local81) = $tmp2665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2655)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:492
org$frostlang$frostc$IR$Value* $tmp2667 = *(&local81);
frost$core$Bit $tmp2668 = (frost$core$Bit) {$tmp2667 != NULL};
bool $tmp2669 = $tmp2668.value;
if ($tmp2669) goto block201; else goto block202;
block202:;
frost$core$Int64 $tmp2670 = (frost$core$Int64) {492u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2671, $tmp2670);
abort(); // unreachable
block201:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:493
org$frostlang$frostc$IR* $tmp2672 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2673 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2674 = (frost$core$Int64) {27u};
org$frostlang$frostc$IR$Value* $tmp2675 = *(&local81);
org$frostlang$frostc$Type* $tmp2676 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp2677 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2675, $tmp2676);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2678 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2679 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp2680 = *(&local3);
org$frostlang$frostc$Type* $tmp2681 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp2678, $tmp2679, $tmp2680, $tmp2681);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2673, $tmp2674, param1, $tmp2677, $tmp2678);
$fn2683 $tmp2682 = ($fn2683) $tmp2672->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2684 = $tmp2682($tmp2672, $tmp2673);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:495
org$frostlang$frostc$IR* $tmp2685 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2686 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2687 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp2688 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2686, $tmp2687, param1, $tmp2688);
$fn2690 $tmp2689 = ($fn2690) $tmp2685->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2691 = $tmp2689($tmp2685, $tmp2686);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:497
org$frostlang$frostc$IR* $tmp2692 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2693 = *(&local29);
$fn2695 $tmp2694 = ($fn2695) $tmp2692->$class->vtable[4];
$tmp2694($tmp2692, $tmp2693);
org$frostlang$frostc$IR$Value* $tmp2696 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
*(&local81) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2697 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local80) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2698 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local79) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2699 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local78) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2700 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local77) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2701 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2702 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
*(&local68) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2703 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2704 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2705 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2706 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2707 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2708 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local60) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2709 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
*(&local54) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2200)));
org$frostlang$frostc$IR$Value* $tmp2710 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2711 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
*(&local34) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp2712 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2713 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2714 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2715 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2716 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2717 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
org$frostlang$frostc$IR$Value* $tmp2718 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2719 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2720 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2721 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp2722 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local11) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2723 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2724 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2725 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2726 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2727 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
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
org$frostlang$frostc$IR** $tmp2728 = &param0->ir;
org$frostlang$frostc$IR* $tmp2729 = *$tmp2728;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
org$frostlang$frostc$IR* $tmp2730 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
*(&local0) = $tmp2729;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:505
$fn2732 $tmp2731 = ($fn2732) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2733 = $tmp2731(param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
org$frostlang$frostc$Type* $tmp2734 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
*(&local1) = $tmp2733;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:506
org$frostlang$frostc$Type* $tmp2735 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:506:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:393
frost$core$String** $tmp2736 = &((org$frostlang$frostc$Symbol*) $tmp2735)->name;
frost$core$String* $tmp2737 = *$tmp2736;
frost$core$Bit $tmp2738 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2737, &$s2739);
bool $tmp2740 = $tmp2738.value;
if ($tmp2740) goto block2; else goto block3;
block2:;
*(&local2) = $tmp2738;
goto block4;
block3:;
org$frostlang$frostc$Type* $tmp2741 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:506:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:397
frost$core$String** $tmp2742 = &((org$frostlang$frostc$Symbol*) $tmp2741)->name;
frost$core$String* $tmp2743 = *$tmp2742;
frost$core$Bit $tmp2744 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2743, &$s2745);
*(&local2) = $tmp2744;
goto block4;
block4:;
frost$core$Bit $tmp2746 = *(&local2);
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2748 = (frost$core$Int64) {506u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2749, $tmp2748);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:507
org$frostlang$frostc$Type* $tmp2750 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:507:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2751 = &$tmp2750->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2752 = *$tmp2751;
frost$core$Bit $tmp2753 = (frost$core$Bit) {$tmp2752 != NULL};
bool $tmp2754 = $tmp2753.value;
if ($tmp2754) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2755 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2756, $tmp2755);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2757 = &$tmp2750->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2758 = *$tmp2757;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
frost$core$Int64 $tmp2759 = (frost$core$Int64) {1u};
frost$core$Object* $tmp2760 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2758, $tmp2759);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from For.frost:507:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp2761 = &((org$frostlang$frostc$Type*) $tmp2760)->typeKind;
org$frostlang$frostc$Type$Kind $tmp2762 = *$tmp2761;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2763;
$tmp2763 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2763->value = $tmp2762;
frost$core$Int64 $tmp2764 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:401:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2765 = &(&local4)->$rawValue;
*$tmp2765 = $tmp2764;
org$frostlang$frostc$Type$Kind $tmp2766 = *(&local4);
*(&local3) = $tmp2766;
org$frostlang$frostc$Type$Kind $tmp2767 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2768;
$tmp2768 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2768->value = $tmp2767;
ITable* $tmp2769 = ((frost$core$Equatable*) $tmp2763)->$class->itable;
while ($tmp2769->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2769 = $tmp2769->next;
}
$fn2771 $tmp2770 = $tmp2769->methods[0];
frost$core$Bit $tmp2772 = $tmp2770(((frost$core$Equatable*) $tmp2763), ((frost$core$Equatable*) $tmp2768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2768)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2763)));
bool $tmp2773 = $tmp2772.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2760);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
if ($tmp2773) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:508
org$frostlang$frostc$Type* $tmp2774 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:508:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2776 $tmp2775 = ($fn2776) ((frost$core$Object*) $tmp2774)->$class->vtable[0];
frost$core$String* $tmp2777 = $tmp2775(((frost$core$Object*) $tmp2774));
frost$core$String* $tmp2778 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2779, $tmp2777);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
frost$core$String* $tmp2780 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2778, &$s2781);
frost$core$String* $tmp2782 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2780, &$s2783);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2782);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:511
$fn2785 $tmp2784 = ($fn2785) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2786 = $tmp2784(param4);
frost$core$Bit $tmp2787 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp2786);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:511:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp2788 = $tmp2787.value;
bool $tmp2789 = !$tmp2788;
frost$core$Bit $tmp2790 = (frost$core$Bit) {$tmp2789};
bool $tmp2791 = $tmp2790.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
if ($tmp2791) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:512
org$frostlang$frostc$Type* $tmp2792 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2793 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:514
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:515
org$frostlang$frostc$Type* $tmp2794 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2795 = &$tmp2794->typeKind;
org$frostlang$frostc$Type$Kind $tmp2796 = *$tmp2795;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2797;
$tmp2797 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2797->value = $tmp2796;
frost$core$Int64 $tmp2798 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:515:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2799 = &(&local7)->$rawValue;
*$tmp2799 = $tmp2798;
org$frostlang$frostc$Type$Kind $tmp2800 = *(&local7);
*(&local6) = $tmp2800;
org$frostlang$frostc$Type$Kind $tmp2801 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2802;
$tmp2802 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2802->value = $tmp2801;
ITable* $tmp2803 = ((frost$core$Equatable*) $tmp2797)->$class->itable;
while ($tmp2803->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2803 = $tmp2803->next;
}
$fn2805 $tmp2804 = $tmp2803->methods[0];
frost$core$Bit $tmp2806 = $tmp2804(((frost$core$Equatable*) $tmp2797), ((frost$core$Equatable*) $tmp2802));
bool $tmp2807 = $tmp2806.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2802)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2797)));
if ($tmp2807) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:516
$fn2809 $tmp2808 = ($fn2809) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2810 = $tmp2808(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:516:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2811 = &$tmp2810->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2812 = *$tmp2811;
frost$core$Bit $tmp2813 = (frost$core$Bit) {$tmp2812 != NULL};
bool $tmp2814 = $tmp2813.value;
if ($tmp2814) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2815 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2816, $tmp2815);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2817 = &$tmp2810->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2818 = *$tmp2817;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
frost$core$Int64 $tmp2819 = (frost$core$Int64) {0u};
frost$core$Object* $tmp2820 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2818, $tmp2819);
org$frostlang$frostc$Type$Kind* $tmp2821 = &((org$frostlang$frostc$Type*) $tmp2820)->typeKind;
org$frostlang$frostc$Type$Kind $tmp2822 = *$tmp2821;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2823;
$tmp2823 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2823->value = $tmp2822;
frost$core$Int64 $tmp2824 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:516:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2825 = &(&local9)->$rawValue;
*$tmp2825 = $tmp2824;
org$frostlang$frostc$Type$Kind $tmp2826 = *(&local9);
*(&local8) = $tmp2826;
org$frostlang$frostc$Type$Kind $tmp2827 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2828;
$tmp2828 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2828->value = $tmp2827;
ITable* $tmp2829 = ((frost$core$Equatable*) $tmp2823)->$class->itable;
while ($tmp2829->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2829 = $tmp2829->next;
}
$fn2831 $tmp2830 = $tmp2829->methods[0];
frost$core$Bit $tmp2832 = $tmp2830(((frost$core$Equatable*) $tmp2823), ((frost$core$Equatable*) $tmp2828));
bool $tmp2833 = $tmp2832.value;
if ($tmp2833) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp2834 = (frost$core$Int64) {516u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2835, $tmp2834);
abort(); // unreachable
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2828)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2823)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2820);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:517
$fn2837 $tmp2836 = ($fn2837) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2838 = $tmp2836(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2839 = &$tmp2838->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2840 = *$tmp2839;
frost$core$Bit $tmp2841 = (frost$core$Bit) {$tmp2840 != NULL};
bool $tmp2842 = $tmp2841.value;
if ($tmp2842) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp2843 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2844, $tmp2843);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2845 = &$tmp2838->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2846 = *$tmp2845;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
frost$core$Int64 $tmp2847 = (frost$core$Int64) {0u};
frost$core$Object* $tmp2848 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2846, $tmp2847);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:517:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2849 = &((org$frostlang$frostc$Type*) $tmp2848)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2850 = *$tmp2849;
frost$core$Bit $tmp2851 = (frost$core$Bit) {$tmp2850 != NULL};
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp2853 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2854, $tmp2853);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2855 = &((org$frostlang$frostc$Type*) $tmp2848)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2856 = *$tmp2855;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
frost$core$Int64 $tmp2857 = (frost$core$Int64) {1u};
frost$core$Object* $tmp2858 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2856, $tmp2857);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2858)));
org$frostlang$frostc$Type* $tmp2859 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp2858);
frost$core$Frost$unref$frost$core$Object$Q($tmp2858);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
frost$core$Frost$unref$frost$core$Object$Q($tmp2848);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:520
org$frostlang$frostc$Type* $tmp2860 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2861 = &$tmp2860->typeKind;
org$frostlang$frostc$Type$Kind $tmp2862 = *$tmp2861;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2863;
$tmp2863 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2863->value = $tmp2862;
frost$core$Int64 $tmp2864 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:520:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2865 = &(&local11)->$rawValue;
*$tmp2865 = $tmp2864;
org$frostlang$frostc$Type$Kind $tmp2866 = *(&local11);
*(&local10) = $tmp2866;
org$frostlang$frostc$Type$Kind $tmp2867 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2868;
$tmp2868 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2868->value = $tmp2867;
ITable* $tmp2869 = ((frost$core$Equatable*) $tmp2863)->$class->itable;
while ($tmp2869->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2869 = $tmp2869->next;
}
$fn2871 $tmp2870 = $tmp2869->methods[0];
frost$core$Bit $tmp2872 = $tmp2870(((frost$core$Equatable*) $tmp2863), ((frost$core$Equatable*) $tmp2868));
bool $tmp2873 = $tmp2872.value;
if ($tmp2873) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2874 = (frost$core$Int64) {520u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2875, $tmp2874);
abort(); // unreachable
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2868)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2863)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:521
$fn2877 $tmp2876 = ($fn2877) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2878 = $tmp2876(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:521:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2879 = &$tmp2878->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2880 = *$tmp2879;
frost$core$Bit $tmp2881 = (frost$core$Bit) {$tmp2880 != NULL};
bool $tmp2882 = $tmp2881.value;
if ($tmp2882) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp2883 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2884, $tmp2883);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2885 = &$tmp2878->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2886 = *$tmp2885;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
frost$core$Int64 $tmp2887 = (frost$core$Int64) {1u};
frost$core$Object* $tmp2888 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2886, $tmp2887);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2888)));
org$frostlang$frostc$Type* $tmp2889 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp2888);
frost$core$Frost$unref$frost$core$Object$Q($tmp2888);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:523
org$frostlang$frostc$Type* $tmp2890 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:523:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:353
frost$core$Bit $tmp2891 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp2890);
bool $tmp2892 = $tmp2891.value;
if ($tmp2892) goto block44; else goto block45;
block44:;
*(&local12) = $tmp2891;
goto block46;
block45:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:353:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:349
frost$core$String** $tmp2893 = &((org$frostlang$frostc$Symbol*) $tmp2890)->name;
frost$core$String* $tmp2894 = *$tmp2893;
frost$core$Bit $tmp2895 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2894, &$s2896);
*(&local12) = $tmp2895;
goto block46;
block46:;
frost$core$Bit $tmp2897 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:523:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp2898 = $tmp2897.value;
bool $tmp2899 = !$tmp2898;
frost$core$Bit $tmp2900 = (frost$core$Bit) {$tmp2899};
bool $tmp2901 = $tmp2900.value;
if ($tmp2901) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:524
$fn2903 $tmp2902 = ($fn2903) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2904 = $tmp2902(param4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:525:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2906 $tmp2905 = ($fn2906) ((frost$core$Object*) $tmp2904)->$class->vtable[0];
frost$core$String* $tmp2907 = $tmp2905(((frost$core$Object*) $tmp2904));
frost$core$String* $tmp2908 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2909, $tmp2907);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
frost$core$String* $tmp2910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2908, &$s2911);
frost$core$String* $tmp2912 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2913, $tmp2910);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2912);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:526
org$frostlang$frostc$Type* $tmp2914 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2915 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2916 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:528
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp2917 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2917, param0);
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
org$frostlang$frostc$Compiler$AutoScope* $tmp2918 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
*(&local13) = $tmp2917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:529
frost$core$Int64 $tmp2919 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Variable.Kind from For.frost:529:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp2920 = &(&local15)->$rawValue;
*$tmp2920 = $tmp2919;
org$frostlang$frostc$Variable$Kind $tmp2921 = *(&local15);
*(&local14) = $tmp2921;
org$frostlang$frostc$Variable$Kind $tmp2922 = *(&local14);
org$frostlang$frostc$Type* $tmp2923 = *(&local5);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:530:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp2924 = &$tmp2923->typeKind;
org$frostlang$frostc$Type$Kind $tmp2925 = *$tmp2924;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2926;
$tmp2926 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2926->value = $tmp2925;
frost$core$Int64 $tmp2927 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2928 = &(&local18)->$rawValue;
*$tmp2928 = $tmp2927;
org$frostlang$frostc$Type$Kind $tmp2929 = *(&local18);
*(&local17) = $tmp2929;
org$frostlang$frostc$Type$Kind $tmp2930 = *(&local17);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2931;
$tmp2931 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2931->value = $tmp2930;
ITable* $tmp2932 = ((frost$core$Equatable*) $tmp2926)->$class->itable;
while ($tmp2932->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2932 = $tmp2932->next;
}
$fn2934 $tmp2933 = $tmp2932->methods[1];
frost$core$Bit $tmp2935 = $tmp2933(((frost$core$Equatable*) $tmp2926), ((frost$core$Equatable*) $tmp2931));
bool $tmp2936 = $tmp2935.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2931)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2926)));
if ($tmp2936) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local16) = $tmp2923;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2937 = &$tmp2923->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2938 = *$tmp2937;
frost$core$Bit $tmp2939 = (frost$core$Bit) {$tmp2938 != NULL};
bool $tmp2940 = $tmp2939.value;
if ($tmp2940) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp2941 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2942, $tmp2941);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2943 = &$tmp2923->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2944 = *$tmp2943;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
frost$core$Int64 $tmp2945 = (frost$core$Int64) {0u};
frost$core$Object* $tmp2946 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2944, $tmp2945);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2946)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2946);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local16) = ((org$frostlang$frostc$Type*) $tmp2946);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2946)));
goto block51;
block51:;
org$frostlang$frostc$Type* $tmp2947 = *(&local16);
org$frostlang$frostc$Compiler$Target* $tmp2948 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp2922, ((org$frostlang$frostc$ASTNode*) NULL), $tmp2947);
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
org$frostlang$frostc$Compiler$Target* $tmp2949 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
*(&local19) = $tmp2948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:531
org$frostlang$frostc$Compiler$Target* $tmp2950 = *(&local19);
frost$core$Bit $tmp2951 = (frost$core$Bit) {$tmp2950 == NULL};
bool $tmp2952 = $tmp2951.value;
if ($tmp2952) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:532
org$frostlang$frostc$Compiler$Target* $tmp2953 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp2954 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2955 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp2956 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2957 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2958 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:534
org$frostlang$frostc$Compiler$Target* $tmp2959 = *(&local19);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp2959);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:535
org$frostlang$frostc$Compiler$Target* $tmp2960 = *(&local19);
frost$core$Int64* $tmp2961 = &$tmp2960->$rawValue;
frost$core$Int64 $tmp2962 = *$tmp2961;
frost$core$Int64 $tmp2963 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:536:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2964 = $tmp2962.value;
int64_t $tmp2965 = $tmp2963.value;
bool $tmp2966 = $tmp2964 == $tmp2965;
frost$core$Bit $tmp2967 = (frost$core$Bit) {$tmp2966};
bool $tmp2968 = $tmp2967.value;
if ($tmp2968) goto block61; else goto block62;
block61:;
org$frostlang$frostc$Variable** $tmp2969 = (org$frostlang$frostc$Variable**) ($tmp2960->$data + 0);
org$frostlang$frostc$Variable* $tmp2970 = *$tmp2969;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
org$frostlang$frostc$Variable* $tmp2971 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local20) = $tmp2970;
org$frostlang$frostc$IR$Value** $tmp2972 = (org$frostlang$frostc$IR$Value**) ($tmp2960->$data + 8);
org$frostlang$frostc$IR$Value* $tmp2973 = *$tmp2972;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:537
org$frostlang$frostc$Type* $tmp2974 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:537:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:393
frost$core$String** $tmp2975 = &((org$frostlang$frostc$Symbol*) $tmp2974)->name;
frost$core$String* $tmp2976 = *$tmp2975;
frost$core$Bit $tmp2977 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2976, &$s2978);
bool $tmp2979 = $tmp2977.value;
if ($tmp2979) goto block64; else goto block66;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:538
org$frostlang$frostc$Variable* $tmp2980 = *(&local20);
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp2980, param4, param5);
goto block65;
block66:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:541
org$frostlang$frostc$Variable* $tmp2981 = *(&local20);
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp2981, param4, param5);
goto block65;
block65:;
org$frostlang$frostc$Variable* $tmp2982 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:545
frost$core$Bit $tmp2983 = (frost$core$Bit) {false};
bool $tmp2984 = $tmp2983.value;
if ($tmp2984) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp2985 = (frost$core$Int64) {545u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2986, $tmp2985);
abort(); // unreachable
block68:;
goto block60;
block60:;
org$frostlang$frostc$Compiler$Target* $tmp2987 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
*(&local19) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Type* $tmp2988 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2989 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp2990 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2991 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2992 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
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
org$frostlang$frostc$IR** $tmp2993 = &param0->ir;
org$frostlang$frostc$IR* $tmp2994 = *$tmp2993;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
org$frostlang$frostc$IR* $tmp2995 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
*(&local0) = $tmp2994;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:555
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:556
frost$core$Int64* $tmp2996 = &param3->$rawValue;
frost$core$Int64 $tmp2997 = *$tmp2996;
frost$core$Int64 $tmp2998 = (frost$core$Int64) {48u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:557:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2999 = $tmp2997.value;
int64_t $tmp3000 = $tmp2998.value;
bool $tmp3001 = $tmp2999 == $tmp3000;
frost$core$Bit $tmp3002 = (frost$core$Bit) {$tmp3001};
bool $tmp3003 = $tmp3002.value;
if ($tmp3003) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp3004 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp3005 = *$tmp3004;
*(&local2) = $tmp3005;
frost$core$String** $tmp3006 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp3007 = *$tmp3006;
org$frostlang$frostc$ASTNode** $tmp3008 = (org$frostlang$frostc$ASTNode**) (param3->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3009 = *$tmp3008;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
org$frostlang$frostc$ASTNode* $tmp3010 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
*(&local3) = $tmp3009;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:558
org$frostlang$frostc$Scanner** $tmp3011 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp3012 = *$tmp3011;
org$frostlang$frostc$ASTNode* $tmp3013 = *(&local3);
org$frostlang$frostc$Type* $tmp3014 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp3012, $tmp3013);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from For.frost:558:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:952
frost$core$Bit $tmp3015 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp3016 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp3014, $tmp3015);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
org$frostlang$frostc$Type* $tmp3017 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
*(&local4) = $tmp3016;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:559
org$frostlang$frostc$Type* $tmp3018 = *(&local4);
frost$core$Bit $tmp3019 = (frost$core$Bit) {$tmp3018 == NULL};
bool $tmp3020 = $tmp3019.value;
if ($tmp3020) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:560
org$frostlang$frostc$Type* $tmp3021 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3022 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3023 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3024 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:562
org$frostlang$frostc$Type* $tmp3025 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp3026 = &$tmp3025->typeKind;
org$frostlang$frostc$Type$Kind $tmp3027 = *$tmp3026;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3028;
$tmp3028 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3028->value = $tmp3027;
frost$core$Int64 $tmp3029 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:562:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3030 = &(&local6)->$rawValue;
*$tmp3030 = $tmp3029;
org$frostlang$frostc$Type$Kind $tmp3031 = *(&local6);
*(&local5) = $tmp3031;
org$frostlang$frostc$Type$Kind $tmp3032 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3033;
$tmp3033 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3033->value = $tmp3032;
ITable* $tmp3034 = ((frost$core$Equatable*) $tmp3028)->$class->itable;
while ($tmp3034->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3034 = $tmp3034->next;
}
$fn3036 $tmp3035 = $tmp3034->methods[0];
frost$core$Bit $tmp3037 = $tmp3035(((frost$core$Equatable*) $tmp3028), ((frost$core$Equatable*) $tmp3033));
bool $tmp3038 = $tmp3037.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3033)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3028)));
if ($tmp3038) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:563
org$frostlang$frostc$Position $tmp3039 = *(&local2);
org$frostlang$frostc$Type* $tmp3040 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:563:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn3042 $tmp3041 = ($fn3042) ((frost$core$Object*) $tmp3040)->$class->vtable[0];
frost$core$String* $tmp3043 = $tmp3041(((frost$core$Object*) $tmp3040));
frost$core$String* $tmp3044 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3045, $tmp3043);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
frost$core$String* $tmp3046 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3044, &$s3047);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3039, $tmp3046);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:564
org$frostlang$frostc$Type* $tmp3048 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3048));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3049 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3050 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3050));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3051 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:566
org$frostlang$frostc$Type* $tmp3052 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isNumeric():frost.core.Bit from For.frost:566:22
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:353
frost$core$Bit $tmp3053 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp3052);
bool $tmp3054 = $tmp3053.value;
if ($tmp3054) goto block15; else goto block16;
block15:;
*(&local7) = $tmp3053;
goto block17;
block16:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:353:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:349
frost$core$String** $tmp3055 = &((org$frostlang$frostc$Symbol*) $tmp3052)->name;
frost$core$String* $tmp3056 = *$tmp3055;
frost$core$Bit $tmp3057 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3056, &$s3058);
*(&local7) = $tmp3057;
goto block17;
block17:;
frost$core$Bit $tmp3059 = *(&local7);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:566:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp3060 = $tmp3059.value;
bool $tmp3061 = !$tmp3060;
frost$core$Bit $tmp3062 = (frost$core$Bit) {$tmp3061};
bool $tmp3063 = $tmp3062.value;
if ($tmp3063) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:567
org$frostlang$frostc$Position $tmp3064 = *(&local2);
org$frostlang$frostc$Type* $tmp3065 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:568:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn3067 $tmp3066 = ($fn3067) ((frost$core$Object*) $tmp3065)->$class->vtable[0];
frost$core$String* $tmp3068 = $tmp3066(((frost$core$Object*) $tmp3065));
frost$core$String* $tmp3069 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3070, $tmp3068);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
frost$core$String* $tmp3071 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3069, &$s3072);
frost$core$String* $tmp3073 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3074, $tmp3071);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3064, $tmp3073);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:569
org$frostlang$frostc$Type* $tmp3075 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3076 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp3077 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3078 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:571
frost$core$Int64* $tmp3079 = &param4->$rawValue;
frost$core$Int64 $tmp3080 = *$tmp3079;
frost$core$Int64 $tmp3081 = (frost$core$Int64) {35u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:572:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3082 = $tmp3080.value;
int64_t $tmp3083 = $tmp3081.value;
bool $tmp3084 = $tmp3082 == $tmp3083;
frost$core$Bit $tmp3085 = (frost$core$Bit) {$tmp3084};
bool $tmp3086 = $tmp3085.value;
if ($tmp3086) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp3087 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp3088 = *$tmp3087;
org$frostlang$frostc$ASTNode** $tmp3089 = (org$frostlang$frostc$ASTNode**) (param4->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3090 = *$tmp3089;
frost$core$Bit* $tmp3091 = (frost$core$Bit*) (param4->$data + 32);
frost$core$Bit $tmp3092 = *$tmp3091;
org$frostlang$frostc$ASTNode** $tmp3093 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp3094 = *$tmp3093;
org$frostlang$frostc$ASTNode** $tmp3095 = (org$frostlang$frostc$ASTNode**) (param4->$data + 41);
org$frostlang$frostc$ASTNode* $tmp3096 = *$tmp3095;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
org$frostlang$frostc$ASTNode* $tmp3097 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
*(&local8) = $tmp3096;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:573
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:574
org$frostlang$frostc$ASTNode* $tmp3098 = *(&local8);
frost$core$Bit $tmp3099 = (frost$core$Bit) {$tmp3098 != NULL};
bool $tmp3100 = $tmp3099.value;
if ($tmp3100) goto block25; else goto block27;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:575
org$frostlang$frostc$Type* $tmp3101 = *(&local4);
org$frostlang$frostc$Type* $tmp3102 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp3101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
org$frostlang$frostc$Type* $tmp3103 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
*(&local9) = $tmp3102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
goto block26;
block27:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:578
org$frostlang$frostc$Type* $tmp3104 = *(&local4);
// begin inline call to method org.frostlang.frostc.Type.RangeOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:578:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:299
org$frostlang$frostc$Type** $tmp3105 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3106 = *$tmp3105;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3107 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3108 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp3107, $tmp3108);
frost$collections$Array$add$frost$collections$Array$T($tmp3107, ((frost$core$Object*) $tmp3104));
org$frostlang$frostc$Type* $tmp3109 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3106, ((frost$collections$ListView*) $tmp3107));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
org$frostlang$frostc$Type* $tmp3110 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
*(&local9) = $tmp3109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:580
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3111 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3112 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type* $tmp3113 = *(&local9);
frost$core$Bit $tmp3114 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3111, $tmp3112, $tmp3113, $tmp3114);
org$frostlang$frostc$IR$Value* $tmp3115 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
org$frostlang$frostc$IR$Value* $tmp3116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
*(&local1) = $tmp3115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
org$frostlang$frostc$Type* $tmp3117 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3118 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3118));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp3119 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3120 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:583
frost$core$Int64 $tmp3121 = (frost$core$Int64) {583u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3122, $tmp3121);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:588
org$frostlang$frostc$Type* $tmp3123 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
org$frostlang$frostc$Type* $tmp3124 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
*(&local10) = $tmp3123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:589
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3125 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3126 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3125, $tmp3126);
*(&local11) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
org$frostlang$frostc$Compiler$TypeContext* $tmp3127 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
*(&local11) = $tmp3125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:590
org$frostlang$frostc$Type* $tmp3128 = *(&local10);
frost$core$Bit $tmp3129 = (frost$core$Bit) {$tmp3128 != NULL};
bool $tmp3130 = $tmp3129.value;
if ($tmp3130) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Type* $tmp3131 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:590:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:393
frost$core$String** $tmp3132 = &((org$frostlang$frostc$Symbol*) $tmp3131)->name;
frost$core$String* $tmp3133 = *$tmp3132;
frost$core$Bit $tmp3134 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3133, &$s3135);
bool $tmp3136 = $tmp3134.value;
if ($tmp3136) goto block29; else goto block31;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:591
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3137 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3138 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type* $tmp3139 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:592:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3140 = &$tmp3139->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3141 = *$tmp3140;
frost$core$Bit $tmp3142 = (frost$core$Bit) {$tmp3141 != NULL};
bool $tmp3143 = $tmp3142.value;
if ($tmp3143) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp3144 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3145, $tmp3144);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3146 = &$tmp3139->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3147 = *$tmp3146;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
frost$core$Int64 $tmp3148 = (frost$core$Int64) {1u};
frost$core$Object* $tmp3149 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3147, $tmp3148);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:592:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp3150 = &((org$frostlang$frostc$Type*) $tmp3149)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3151 = *$tmp3150;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3152;
$tmp3152 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3152->value = $tmp3151;
frost$core$Int64 $tmp3153 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3154 = &(&local14)->$rawValue;
*$tmp3154 = $tmp3153;
org$frostlang$frostc$Type$Kind $tmp3155 = *(&local14);
*(&local13) = $tmp3155;
org$frostlang$frostc$Type$Kind $tmp3156 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3157;
$tmp3157 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3157->value = $tmp3156;
ITable* $tmp3158 = ((frost$core$Equatable*) $tmp3152)->$class->itable;
while ($tmp3158->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3158 = $tmp3158->next;
}
$fn3160 $tmp3159 = $tmp3158->methods[1];
frost$core$Bit $tmp3161 = $tmp3159(((frost$core$Equatable*) $tmp3152), ((frost$core$Equatable*) $tmp3157));
bool $tmp3162 = $tmp3161.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3157)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3152)));
if ($tmp3162) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3149)));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp3149);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3149)));
goto block37;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3163 = &((org$frostlang$frostc$Type*) $tmp3149)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3164 = *$tmp3163;
frost$core$Bit $tmp3165 = (frost$core$Bit) {$tmp3164 != NULL};
bool $tmp3166 = $tmp3165.value;
if ($tmp3166) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp3167 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3168, $tmp3167);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3169 = &((org$frostlang$frostc$Type*) $tmp3149)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3170 = *$tmp3169;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
frost$core$Int64 $tmp3171 = (frost$core$Int64) {0u};
frost$core$Object* $tmp3172 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3170, $tmp3171);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3172)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3172);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp3172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3172)));
goto block37;
block37:;
org$frostlang$frostc$Type* $tmp3173 = *(&local12);
// begin inline call to method org.frostlang.frostc.Type.RangeOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:591:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:299
org$frostlang$frostc$Type** $tmp3174 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3175 = *$tmp3174;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3176 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3177 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp3176, $tmp3177);
frost$collections$Array$add$frost$collections$Array$T($tmp3176, ((frost$core$Object*) $tmp3173));
org$frostlang$frostc$Type* $tmp3178 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3175, ((frost$collections$ListView*) $tmp3176));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
frost$core$Bit $tmp3179 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3137, $tmp3138, $tmp3178, $tmp3179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
org$frostlang$frostc$Compiler$TypeContext* $tmp3180 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
*(&local11) = $tmp3137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
org$frostlang$frostc$Type* $tmp3181 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
goto block30;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:594
org$frostlang$frostc$Type* $tmp3182 = *(&local10);
frost$core$Bit $tmp3183 = (frost$core$Bit) {$tmp3182 != NULL};
bool $tmp3184 = $tmp3183.value;
if ($tmp3184) goto block47; else goto block46;
block47:;
org$frostlang$frostc$Type* $tmp3185 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:594:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:397
frost$core$String** $tmp3186 = &((org$frostlang$frostc$Symbol*) $tmp3185)->name;
frost$core$String* $tmp3187 = *$tmp3186;
frost$core$Bit $tmp3188 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3187, &$s3189);
bool $tmp3190 = $tmp3188.value;
if ($tmp3190) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:595
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3191 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3192 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type* $tmp3193 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3194 = &$tmp3193->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3195 = *$tmp3194;
frost$core$Bit $tmp3196 = (frost$core$Bit) {$tmp3195 != NULL};
bool $tmp3197 = $tmp3196.value;
if ($tmp3197) goto block50; else goto block51;
block51:;
frost$core$Int64 $tmp3198 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3199, $tmp3198);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3200 = &$tmp3193->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3201 = *$tmp3200;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Int64 $tmp3202 = (frost$core$Int64) {1u};
frost$core$Object* $tmp3203 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3201, $tmp3202);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from For.frost:596:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp3204 = &((org$frostlang$frostc$Type*) $tmp3203)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3205 = *$tmp3204;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3206;
$tmp3206 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3206->value = $tmp3205;
frost$core$Int64 $tmp3207 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3208 = &(&local17)->$rawValue;
*$tmp3208 = $tmp3207;
org$frostlang$frostc$Type$Kind $tmp3209 = *(&local17);
*(&local16) = $tmp3209;
org$frostlang$frostc$Type$Kind $tmp3210 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3211;
$tmp3211 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3211->value = $tmp3210;
ITable* $tmp3212 = ((frost$core$Equatable*) $tmp3206)->$class->itable;
while ($tmp3212->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3212 = $tmp3212->next;
}
$fn3214 $tmp3213 = $tmp3212->methods[1];
frost$core$Bit $tmp3215 = $tmp3213(((frost$core$Equatable*) $tmp3206), ((frost$core$Equatable*) $tmp3211));
bool $tmp3216 = $tmp3215.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3211)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3206)));
if ($tmp3216) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3203)));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3203)));
goto block52;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3217 = &((org$frostlang$frostc$Type*) $tmp3203)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3218 = *$tmp3217;
frost$core$Bit $tmp3219 = (frost$core$Bit) {$tmp3218 != NULL};
bool $tmp3220 = $tmp3219.value;
if ($tmp3220) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp3221 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3222, $tmp3221);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3223 = &((org$frostlang$frostc$Type*) $tmp3203)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3224 = *$tmp3223;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
frost$core$Int64 $tmp3225 = (frost$core$Int64) {0u};
frost$core$Object* $tmp3226 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3224, $tmp3225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3226)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp3226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3226)));
goto block52;
block52:;
org$frostlang$frostc$Type* $tmp3227 = *(&local15);
org$frostlang$frostc$Type* $tmp3228 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:596:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3229 = &$tmp3228->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3230 = *$tmp3229;
frost$core$Bit $tmp3231 = (frost$core$Bit) {$tmp3230 != NULL};
bool $tmp3232 = $tmp3231.value;
if ($tmp3232) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp3233 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3234, $tmp3233);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3235 = &$tmp3228->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3236 = *$tmp3235;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
frost$core$Int64 $tmp3237 = (frost$core$Int64) {2u};
frost$core$Object* $tmp3238 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3236, $tmp3237);
// begin inline call to method org.frostlang.frostc.Type.SteppedRangeOf(compiler:org.frostlang.frostc.Compiler, endpoint:org.frostlang.frostc.Type, step:org.frostlang.frostc.Type):org.frostlang.frostc.Type from For.frost:595:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:323
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3239 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3239);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
frost$collections$Array* $tmp3240 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
*(&local18) = $tmp3239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:324
frost$collections$Array* $tmp3241 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp3241, ((frost$core$Object*) $tmp3227));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:325
frost$collections$Array* $tmp3242 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp3242, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3238)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:326
org$frostlang$frostc$Type** $tmp3243 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp3244 = *$tmp3243;
frost$collections$Array* $tmp3245 = *(&local18);
org$frostlang$frostc$Type* $tmp3246 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3244, ((frost$collections$ListView*) $tmp3245));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
frost$collections$Array* $tmp3247 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Bit $tmp3248 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3191, $tmp3192, $tmp3246, $tmp3248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
org$frostlang$frostc$Compiler$TypeContext* $tmp3249 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
*(&local11) = $tmp3191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
frost$core$Frost$unref$frost$core$Object$Q($tmp3238);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
org$frostlang$frostc$Type* $tmp3250 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3250));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3203);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
goto block46;
block46:;
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:598
org$frostlang$frostc$Compiler$TypeContext* $tmp3251 = *(&local11);
org$frostlang$frostc$IR$Value* $tmp3252 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
org$frostlang$frostc$IR$Value* $tmp3253 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
*(&local1) = $tmp3252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
org$frostlang$frostc$Compiler$TypeContext* $tmp3254 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
*(&local11) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp3255 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:601
org$frostlang$frostc$IR$Value* $tmp3256 = *(&local1);
frost$core$Bit $tmp3257 = (frost$core$Bit) {$tmp3256 == NULL};
bool $tmp3258 = $tmp3257.value;
if ($tmp3258) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:602
org$frostlang$frostc$IR$Value* $tmp3259 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:604
org$frostlang$frostc$IR$Value* $tmp3261 = *(&local1);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3261, param5);
org$frostlang$frostc$IR$Value* $tmp3262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3262));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp3263 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
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
org$frostlang$frostc$IR** $tmp3264 = &param0->ir;
org$frostlang$frostc$IR* $tmp3265 = *$tmp3264;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
org$frostlang$frostc$IR* $tmp3266 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
*(&local0) = $tmp3265;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:612
org$frostlang$frostc$IR* $tmp3267 = *(&local0);
$fn3269 $tmp3268 = ($fn3269) $tmp3267->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3270 = $tmp3268($tmp3267, &$s3271);
*(&local1) = $tmp3270;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:613
org$frostlang$frostc$IR* $tmp3272 = *(&local0);
$fn3274 $tmp3273 = ($fn3274) $tmp3272->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3275 = $tmp3273($tmp3272, &$s3276);
*(&local2) = $tmp3275;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:614
org$frostlang$frostc$IR* $tmp3277 = *(&local0);
$fn3279 $tmp3278 = ($fn3279) $tmp3277->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3280 = $tmp3278($tmp3277, &$s3281);
*(&local3) = $tmp3280;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:615
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp3282 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3283 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp3284 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3285 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3286 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3283, $tmp3284, param2, $tmp3285, $tmp3286);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp3282, param0, $tmp3283);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
org$frostlang$frostc$Compiler$AutoContext* $tmp3287 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3287));
*(&local4) = $tmp3282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:616
$fn3289 $tmp3288 = ($fn3289) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3290 = $tmp3288(param4);
org$frostlang$frostc$Type$Kind* $tmp3291 = &$tmp3290->typeKind;
org$frostlang$frostc$Type$Kind $tmp3292 = *$tmp3291;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3293;
$tmp3293 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3293->value = $tmp3292;
frost$core$Int64 $tmp3294 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:616:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3295 = &(&local7)->$rawValue;
*$tmp3295 = $tmp3294;
org$frostlang$frostc$Type$Kind $tmp3296 = *(&local7);
*(&local6) = $tmp3296;
org$frostlang$frostc$Type$Kind $tmp3297 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3298;
$tmp3298 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3298->value = $tmp3297;
ITable* $tmp3299 = ((frost$core$Equatable*) $tmp3293)->$class->itable;
while ($tmp3299->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3299 = $tmp3299->next;
}
$fn3301 $tmp3300 = $tmp3299->methods[0];
frost$core$Bit $tmp3302 = $tmp3300(((frost$core$Equatable*) $tmp3293), ((frost$core$Equatable*) $tmp3298));
bool $tmp3303 = $tmp3302.value;
if ($tmp3303) goto block2; else goto block3;
block2:;
$fn3305 $tmp3304 = ($fn3305) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3306 = $tmp3304(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:617:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3307 = &$tmp3306->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3308 = *$tmp3307;
frost$core$Bit $tmp3309 = (frost$core$Bit) {$tmp3308 != NULL};
bool $tmp3310 = $tmp3309.value;
if ($tmp3310) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3311 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3312, $tmp3311);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3313 = &$tmp3306->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3314 = *$tmp3313;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
frost$core$Int64 $tmp3315 = (frost$core$Int64) {0u};
frost$core$Object* $tmp3316 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3314, $tmp3315);
org$frostlang$frostc$Type** $tmp3317 = &param0->ITERATOR_TYPE;
org$frostlang$frostc$Type* $tmp3318 = *$tmp3317;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:617:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp3319 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3316))->name;
frost$core$String* $tmp3320 = *$tmp3319;
frost$core$String** $tmp3321 = &((org$frostlang$frostc$Symbol*) $tmp3318)->name;
frost$core$String* $tmp3322 = *$tmp3321;
frost$core$Bit $tmp3323 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3320, $tmp3322);
bool $tmp3324 = $tmp3323.value;
if ($tmp3324) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp3325 = &((org$frostlang$frostc$Type*) $tmp3316)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3326 = *$tmp3325;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3327;
$tmp3327 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3327->value = $tmp3326;
org$frostlang$frostc$Type$Kind* $tmp3328 = &$tmp3318->typeKind;
org$frostlang$frostc$Type$Kind $tmp3329 = *$tmp3328;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3330;
$tmp3330 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3330->value = $tmp3329;
ITable* $tmp3331 = ((frost$core$Equatable*) $tmp3327)->$class->itable;
while ($tmp3331->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3331 = $tmp3331->next;
}
$fn3333 $tmp3332 = $tmp3331->methods[0];
frost$core$Bit $tmp3334 = $tmp3332(((frost$core$Equatable*) $tmp3327), ((frost$core$Equatable*) $tmp3330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3330)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3327)));
*(&local8) = $tmp3334;
goto block11;
block10:;
*(&local8) = $tmp3323;
goto block11;
block11:;
frost$core$Bit $tmp3335 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q($tmp3316);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
*(&local5) = $tmp3335;
goto block4;
block3:;
*(&local5) = $tmp3302;
goto block4;
block4:;
frost$core$Bit $tmp3336 = *(&local5);
bool $tmp3337 = $tmp3336.value;
if ($tmp3337) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp3338 = (frost$core$Int64) {616u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3339, $tmp3338);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3298)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3293)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:618
org$frostlang$frostc$IR* $tmp3340 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3341 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3342 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3343 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3341, $tmp3342, param1, $tmp3343);
$fn3345 $tmp3344 = ($fn3345) $tmp3340->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3346 = $tmp3344($tmp3340, $tmp3341);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:619
org$frostlang$frostc$IR* $tmp3347 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3348 = *(&local1);
$fn3350 $tmp3349 = ($fn3350) $tmp3347->$class->vtable[4];
$tmp3349($tmp3347, $tmp3348);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:620
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3351 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3351);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3352 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3353 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp3354 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp3355 = *$tmp3354;
frost$core$Bit $tmp3356 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3352, $tmp3353, $tmp3355, $tmp3356);
org$frostlang$frostc$IR$Value* $tmp3357 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3358, ((frost$collections$ListView*) $tmp3351), $tmp3352);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
org$frostlang$frostc$IR$Value* $tmp3359 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
*(&local9) = $tmp3357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3351));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:622
org$frostlang$frostc$IR$Value* $tmp3360 = *(&local9);
frost$core$Bit $tmp3361 = (frost$core$Bit) {$tmp3360 == NULL};
bool $tmp3362 = $tmp3361.value;
if ($tmp3362) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:623
org$frostlang$frostc$IR$Value* $tmp3363 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3364 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3365 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:625
org$frostlang$frostc$IR* $tmp3366 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3367 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3368 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp3369 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp3370 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp3369);
org$frostlang$frostc$IR$Block$ID $tmp3371 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp3372 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3367, $tmp3368, param1, $tmp3370, $tmp3371, $tmp3372);
$fn3374 $tmp3373 = ($fn3374) $tmp3366->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3375 = $tmp3373($tmp3366, $tmp3367);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:627
org$frostlang$frostc$IR* $tmp3376 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3377 = *(&local2);
$fn3379 $tmp3378 = ($fn3379) $tmp3376->$class->vtable[4];
$tmp3378($tmp3376, $tmp3377);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:629
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp3380 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp3380, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3380));
org$frostlang$frostc$Compiler$AutoScope* $tmp3381 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
*(&local10) = $tmp3380;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3380));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:630
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:632
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3382 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp3382, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3383 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
*(&local12) = $tmp3382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:633
frost$core$Int64 $tmp3384 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Variable.Kind from For.frost:633:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp3385 = &(&local14)->$rawValue;
*$tmp3385 = $tmp3384;
org$frostlang$frostc$Variable$Kind $tmp3386 = *(&local14);
*(&local13) = $tmp3386;
org$frostlang$frostc$Variable$Kind $tmp3387 = *(&local13);
$fn3389 $tmp3388 = ($fn3389) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3390 = $tmp3388(param4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:634:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3391 = &$tmp3390->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3392 = *$tmp3391;
frost$core$Bit $tmp3393 = (frost$core$Bit) {$tmp3392 != NULL};
bool $tmp3394 = $tmp3393.value;
if ($tmp3394) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp3395 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3396, $tmp3395);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3397 = &$tmp3390->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3398 = *$tmp3397;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
frost$core$Int64 $tmp3399 = (frost$core$Int64) {1u};
frost$core$Object* $tmp3400 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3398, $tmp3399);
org$frostlang$frostc$Compiler$Target* $tmp3401 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp3387, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp3400));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
org$frostlang$frostc$Compiler$Target* $tmp3402 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3402));
*(&local11) = $tmp3401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
frost$core$Frost$unref$frost$core$Object$Q($tmp3400);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:635
org$frostlang$frostc$Compiler$Target* $tmp3403 = *(&local11);
frost$core$Bit $tmp3404 = (frost$core$Bit) {$tmp3403 == NULL};
bool $tmp3405 = $tmp3404.value;
if ($tmp3405) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:636
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3406 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3407 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3408 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3409 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3410 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3411 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block21:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3412 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3412));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:639
org$frostlang$frostc$Compiler$Target* $tmp3413 = *(&local11);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp3413);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:640
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:641
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3414 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3414);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3415 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3416 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3415, $tmp3416);
org$frostlang$frostc$IR$Value* $tmp3417 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s3418, ((frost$collections$ListView*) $tmp3414), $tmp3415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
org$frostlang$frostc$IR$Value* $tmp3419 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
*(&local15) = $tmp3417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:643
org$frostlang$frostc$IR$Value* $tmp3420 = *(&local15);
frost$core$Bit $tmp3421 = (frost$core$Bit) {$tmp3420 == NULL};
bool $tmp3422 = $tmp3421.value;
if ($tmp3422) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:644
org$frostlang$frostc$IR$Value* $tmp3423 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3424 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3425 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp3426 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3426));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3427 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3428 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3428));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:646
org$frostlang$frostc$Compiler$Target* $tmp3429 = *(&local11);
org$frostlang$frostc$IR$Value* $tmp3430 = *(&local15);
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, param1, $tmp3429, $tmp3430);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:647
ITable* $tmp3431 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp3431->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3431 = $tmp3431->next;
}
$fn3433 $tmp3432 = $tmp3431->methods[0];
frost$collections$Iterator* $tmp3434 = $tmp3432(((frost$collections$Iterable*) param5));
goto block24;
block24:;
ITable* $tmp3435 = $tmp3434->$class->itable;
while ($tmp3435->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3435 = $tmp3435->next;
}
$fn3437 $tmp3436 = $tmp3435->methods[0];
frost$core$Bit $tmp3438 = $tmp3436($tmp3434);
bool $tmp3439 = $tmp3438.value;
if ($tmp3439) goto block26; else goto block25;
block25:;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3440 = $tmp3434->$class->itable;
while ($tmp3440->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3440 = $tmp3440->next;
}
$fn3442 $tmp3441 = $tmp3440->methods[1];
frost$core$Object* $tmp3443 = $tmp3441($tmp3434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3443)));
org$frostlang$frostc$ASTNode* $tmp3444 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
*(&local16) = ((org$frostlang$frostc$ASTNode*) $tmp3443);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:648
org$frostlang$frostc$ASTNode* $tmp3445 = *(&local16);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp3445);
frost$core$Frost$unref$frost$core$Object$Q($tmp3443);
org$frostlang$frostc$ASTNode* $tmp3446 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3434));
org$frostlang$frostc$IR$Value* $tmp3447 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3447));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp3448 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3448));
*(&local11) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp3449 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:651
org$frostlang$frostc$IR* $tmp3450 = *(&local0);
$fn3452 $tmp3451 = ($fn3452) $tmp3450->$class->vtable[5];
frost$core$Bit $tmp3453 = $tmp3451($tmp3450);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from For.frost:651:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp3454 = $tmp3453.value;
bool $tmp3455 = !$tmp3454;
frost$core$Bit $tmp3456 = (frost$core$Bit) {$tmp3455};
bool $tmp3457 = $tmp3456.value;
if ($tmp3457) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:652
org$frostlang$frostc$IR* $tmp3458 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3459 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3460 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp3461 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3459, $tmp3460, param1, $tmp3461);
$fn3463 $tmp3462 = ($fn3463) $tmp3458->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3464 = $tmp3462($tmp3458, $tmp3459);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
goto block28;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:654
org$frostlang$frostc$IR* $tmp3465 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp3466 = *(&local3);
$fn3468 $tmp3467 = ($fn3468) $tmp3465->$class->vtable[4];
$tmp3467($tmp3465, $tmp3466);
org$frostlang$frostc$IR$Value* $tmp3469 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp3470 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp3471 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
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
frost$core$Int64* $tmp3472 = &param4->$rawValue;
frost$core$Int64 $tmp3473 = *$tmp3472;
frost$core$Int64 $tmp3474 = (frost$core$Int64) {35u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from For.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3475 = $tmp3473.value;
int64_t $tmp3476 = $tmp3474.value;
bool $tmp3477 = $tmp3475 == $tmp3476;
frost$core$Bit $tmp3478 = (frost$core$Bit) {$tmp3477};
bool $tmp3479 = $tmp3478.value;
if ($tmp3479) goto block2; else goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:664
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:665
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:668
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from For.frost:668:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5097
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3480 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3481 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3480, $tmp3481);
org$frostlang$frostc$IR$Value* $tmp3482 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp3480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
org$frostlang$frostc$IR$Value* $tmp3483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
*(&local0) = $tmp3482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:669
org$frostlang$frostc$IR$Value* $tmp3484 = *(&local0);
frost$core$Bit $tmp3485 = (frost$core$Bit) {$tmp3484 == NULL};
bool $tmp3486 = $tmp3485.value;
if ($tmp3486) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:670
org$frostlang$frostc$IR$Value* $tmp3487 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:672
org$frostlang$frostc$IR$Value* $tmp3488 = *(&local0);
$fn3490 $tmp3489 = ($fn3490) $tmp3488->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3491 = $tmp3489($tmp3488);
// begin inline call to function org.frostlang.frostc.Type.get_isRange():frost.core.Bit from For.frost:672:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:393
frost$core$String** $tmp3492 = &((org$frostlang$frostc$Symbol*) $tmp3491)->name;
frost$core$String* $tmp3493 = *$tmp3492;
frost$core$Bit $tmp3494 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3493, &$s3495);
bool $tmp3496 = $tmp3494.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3491));
if ($tmp3496) goto block7; else goto block10;
block10:;
org$frostlang$frostc$IR$Value* $tmp3497 = *(&local0);
$fn3499 $tmp3498 = ($fn3499) $tmp3497->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3500 = $tmp3498($tmp3497);
// begin inline call to function org.frostlang.frostc.Type.get_isSteppedRange():frost.core.Bit from For.frost:672:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:397
frost$core$String** $tmp3501 = &((org$frostlang$frostc$Symbol*) $tmp3500)->name;
frost$core$String* $tmp3502 = *$tmp3501;
frost$core$Bit $tmp3503 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp3502, &$s3504);
bool $tmp3505 = $tmp3503.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
if ($tmp3505) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:674
org$frostlang$frostc$IR$Value* $tmp3506 = *(&local0);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3506, param5);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:677
org$frostlang$frostc$IR$Value* $tmp3507 = *(&local0);
$fn3509 $tmp3508 = ($fn3509) $tmp3507->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3510 = $tmp3508($tmp3507);
frost$collections$HashSet* $tmp3511 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp3510);
ITable* $tmp3512 = ((frost$collections$Iterable*) $tmp3511)->$class->itable;
while ($tmp3512->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3512 = $tmp3512->next;
}
$fn3514 $tmp3513 = $tmp3512->methods[0];
frost$collections$Iterator* $tmp3515 = $tmp3513(((frost$collections$Iterable*) $tmp3511));
goto block13;
block13:;
ITable* $tmp3516 = $tmp3515->$class->itable;
while ($tmp3516->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3516 = $tmp3516->next;
}
$fn3518 $tmp3517 = $tmp3516->methods[0];
frost$core$Bit $tmp3519 = $tmp3517($tmp3515);
bool $tmp3520 = $tmp3519.value;
if ($tmp3520) goto block15; else goto block14;
block14:;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp3521 = $tmp3515->$class->itable;
while ($tmp3521->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3521 = $tmp3521->next;
}
$fn3523 $tmp3522 = $tmp3521->methods[1];
frost$core$Object* $tmp3524 = $tmp3522($tmp3515);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3524)));
org$frostlang$frostc$Type* $tmp3525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp3524);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:678
org$frostlang$frostc$Type* $tmp3526 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3527 = &$tmp3526->typeKind;
org$frostlang$frostc$Type$Kind $tmp3528 = *$tmp3527;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3529;
$tmp3529 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3529->value = $tmp3528;
frost$core$Int64 $tmp3530 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:678:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3531 = &(&local3)->$rawValue;
*$tmp3531 = $tmp3530;
org$frostlang$frostc$Type$Kind $tmp3532 = *(&local3);
*(&local2) = $tmp3532;
org$frostlang$frostc$Type$Kind $tmp3533 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3534;
$tmp3534 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3534->value = $tmp3533;
ITable* $tmp3535 = ((frost$core$Equatable*) $tmp3529)->$class->itable;
while ($tmp3535->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3535 = $tmp3535->next;
}
$fn3537 $tmp3536 = $tmp3535->methods[0];
frost$core$Bit $tmp3538 = $tmp3536(((frost$core$Equatable*) $tmp3529), ((frost$core$Equatable*) $tmp3534));
bool $tmp3539 = $tmp3538.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3534)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3529)));
if ($tmp3539) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Type* $tmp3540 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:678:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3541 = &$tmp3540->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3542 = *$tmp3541;
frost$core$Bit $tmp3543 = (frost$core$Bit) {$tmp3542 != NULL};
bool $tmp3544 = $tmp3543.value;
if ($tmp3544) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp3545 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3546, $tmp3545);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3547 = &$tmp3540->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3548 = *$tmp3547;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
frost$core$Int64 $tmp3549 = (frost$core$Int64) {0u};
frost$core$Object* $tmp3550 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3548, $tmp3549);
org$frostlang$frostc$Type** $tmp3551 = &param0->ITERATOR_TYPE;
org$frostlang$frostc$Type* $tmp3552 = *$tmp3551;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:678:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp3553 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3550))->name;
frost$core$String* $tmp3554 = *$tmp3553;
frost$core$String** $tmp3555 = &((org$frostlang$frostc$Symbol*) $tmp3552)->name;
frost$core$String* $tmp3556 = *$tmp3555;
frost$core$Bit $tmp3557 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3554, $tmp3556);
bool $tmp3558 = $tmp3557.value;
if ($tmp3558) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp3559 = &((org$frostlang$frostc$Type*) $tmp3550)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3560 = *$tmp3559;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3561;
$tmp3561 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3561->value = $tmp3560;
org$frostlang$frostc$Type$Kind* $tmp3562 = &$tmp3552->typeKind;
org$frostlang$frostc$Type$Kind $tmp3563 = *$tmp3562;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3564;
$tmp3564 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3564->value = $tmp3563;
ITable* $tmp3565 = ((frost$core$Equatable*) $tmp3561)->$class->itable;
while ($tmp3565->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3565 = $tmp3565->next;
}
$fn3567 $tmp3566 = $tmp3565->methods[0];
frost$core$Bit $tmp3568 = $tmp3566(((frost$core$Equatable*) $tmp3561), ((frost$core$Equatable*) $tmp3564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3564)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3561)));
*(&local4) = $tmp3568;
goto block26;
block25:;
*(&local4) = $tmp3557;
goto block26;
block26:;
frost$core$Bit $tmp3569 = *(&local4);
bool $tmp3570 = $tmp3569.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3550);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
if ($tmp3570) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:679
$fn3572 $tmp3571 = ($fn3572) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3573 = $tmp3571(param4);
org$frostlang$frostc$IR$Value* $tmp3574 = *(&local0);
org$frostlang$frostc$Type* $tmp3575 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:679:52
org$frostlang$frostc$Type** $tmp3576 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3577 = *$tmp3576;
ITable* $tmp3578 = ((frost$core$Equatable*) $tmp3575)->$class->itable;
while ($tmp3578->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3578 = $tmp3578->next;
}
$fn3580 $tmp3579 = $tmp3578->methods[1];
frost$core$Bit $tmp3581 = $tmp3579(((frost$core$Equatable*) $tmp3575), ((frost$core$Equatable*) $tmp3577));
bool $tmp3582 = $tmp3581.value;
if ($tmp3582) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp3583 = (frost$core$Int64) {4112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3584, $tmp3583, &$s3585);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4113
frost$core$Bit $tmp3586 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp3587 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp3573, $tmp3574, $tmp3575, $tmp3586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
org$frostlang$frostc$IR$Value* $tmp3588 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
*(&local5) = $tmp3587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:680
org$frostlang$frostc$IR$Value* $tmp3589 = *(&local5);
frost$core$Bit $tmp3590 = (frost$core$Bit) {$tmp3589 == NULL};
bool $tmp3591 = $tmp3590.value;
if ($tmp3591) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:681
org$frostlang$frostc$IR$Value* $tmp3592 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3524);
org$frostlang$frostc$Type* $tmp3593 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3593));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
org$frostlang$frostc$IR$Value* $tmp3594 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3594));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:683
org$frostlang$frostc$IR$Value* $tmp3595 = *(&local5);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3595, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:684
org$frostlang$frostc$IR$Value* $tmp3596 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3524);
org$frostlang$frostc$Type* $tmp3597 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3597));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
org$frostlang$frostc$IR$Value* $tmp3598 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3598));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:686
org$frostlang$frostc$Type* $tmp3599 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp3600 = &$tmp3599->typeKind;
org$frostlang$frostc$Type$Kind $tmp3601 = *$tmp3600;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3602;
$tmp3602 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3602->value = $tmp3601;
frost$core$Int64 $tmp3603 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from For.frost:686:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3604 = &(&local7)->$rawValue;
*$tmp3604 = $tmp3603;
org$frostlang$frostc$Type$Kind $tmp3605 = *(&local7);
*(&local6) = $tmp3605;
org$frostlang$frostc$Type$Kind $tmp3606 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3607;
$tmp3607 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3607->value = $tmp3606;
ITable* $tmp3608 = ((frost$core$Equatable*) $tmp3602)->$class->itable;
while ($tmp3608->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3608 = $tmp3608->next;
}
$fn3610 $tmp3609 = $tmp3608->methods[0];
frost$core$Bit $tmp3611 = $tmp3609(((frost$core$Equatable*) $tmp3602), ((frost$core$Equatable*) $tmp3607));
bool $tmp3612 = $tmp3611.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3607)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3602)));
if ($tmp3612) goto block34; else goto block33;
block34:;
org$frostlang$frostc$Type* $tmp3613 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from For.frost:686:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3614 = &$tmp3613->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3615 = *$tmp3614;
frost$core$Bit $tmp3616 = (frost$core$Bit) {$tmp3615 != NULL};
bool $tmp3617 = $tmp3616.value;
if ($tmp3617) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp3618 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3619, $tmp3618);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3620 = &$tmp3613->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3621 = *$tmp3620;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3621));
frost$core$Int64 $tmp3622 = (frost$core$Int64) {0u};
frost$core$Object* $tmp3623 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3621, $tmp3622);
org$frostlang$frostc$Type** $tmp3624 = &param0->ITERABLE_TYPE;
org$frostlang$frostc$Type* $tmp3625 = *$tmp3624;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from For.frost:686:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp3626 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3623))->name;
frost$core$String* $tmp3627 = *$tmp3626;
frost$core$String** $tmp3628 = &((org$frostlang$frostc$Symbol*) $tmp3625)->name;
frost$core$String* $tmp3629 = *$tmp3628;
frost$core$Bit $tmp3630 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3627, $tmp3629);
bool $tmp3631 = $tmp3630.value;
if ($tmp3631) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Type$Kind* $tmp3632 = &((org$frostlang$frostc$Type*) $tmp3623)->typeKind;
org$frostlang$frostc$Type$Kind $tmp3633 = *$tmp3632;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3634;
$tmp3634 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3634->value = $tmp3633;
org$frostlang$frostc$Type$Kind* $tmp3635 = &$tmp3625->typeKind;
org$frostlang$frostc$Type$Kind $tmp3636 = *$tmp3635;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3637;
$tmp3637 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3637->value = $tmp3636;
ITable* $tmp3638 = ((frost$core$Equatable*) $tmp3634)->$class->itable;
while ($tmp3638->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3638 = $tmp3638->next;
}
$fn3640 $tmp3639 = $tmp3638->methods[0];
frost$core$Bit $tmp3641 = $tmp3639(((frost$core$Equatable*) $tmp3634), ((frost$core$Equatable*) $tmp3637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3637)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3634)));
*(&local8) = $tmp3641;
goto block42;
block41:;
*(&local8) = $tmp3630;
goto block42;
block42:;
frost$core$Bit $tmp3642 = *(&local8);
bool $tmp3643 = $tmp3642.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3623);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3621));
if ($tmp3643) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:687
$fn3645 $tmp3644 = ($fn3645) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3646 = $tmp3644(param4);
org$frostlang$frostc$IR$Value* $tmp3647 = *(&local0);
org$frostlang$frostc$Type* $tmp3648 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from For.frost:687:52
org$frostlang$frostc$Type** $tmp3649 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3650 = *$tmp3649;
ITable* $tmp3651 = ((frost$core$Equatable*) $tmp3648)->$class->itable;
while ($tmp3651->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3651 = $tmp3651->next;
}
$fn3653 $tmp3652 = $tmp3651->methods[1];
frost$core$Bit $tmp3654 = $tmp3652(((frost$core$Equatable*) $tmp3648), ((frost$core$Equatable*) $tmp3650));
bool $tmp3655 = $tmp3654.value;
if ($tmp3655) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp3656 = (frost$core$Int64) {4112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3657, $tmp3656, &$s3658);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4113
frost$core$Bit $tmp3659 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp3660 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp3646, $tmp3647, $tmp3648, $tmp3659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3660));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3660));
org$frostlang$frostc$IR$Value* $tmp3661 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
*(&local9) = $tmp3660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3660));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:688
org$frostlang$frostc$IR$Value* $tmp3662 = *(&local9);
frost$core$Bit $tmp3663 = (frost$core$Bit) {$tmp3662 == NULL};
bool $tmp3664 = $tmp3663.value;
if ($tmp3664) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:689
org$frostlang$frostc$IR$Value* $tmp3665 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3665));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3524);
org$frostlang$frostc$Type* $tmp3666 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3666));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
org$frostlang$frostc$IR$Value* $tmp3667 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:691
org$frostlang$frostc$IR$Value* $tmp3668 = *(&local9);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3669 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3669);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3670 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3671 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3670, $tmp3671);
org$frostlang$frostc$IR$Value* $tmp3672 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3668, &$s3673, ((frost$collections$ListView*) $tmp3669), $tmp3670);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
org$frostlang$frostc$IR$Value* $tmp3674 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
*(&local10) = $tmp3672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:693
org$frostlang$frostc$IR$Value* $tmp3675 = *(&local10);
frost$core$Bit $tmp3676 = (frost$core$Bit) {$tmp3675 != NULL};
bool $tmp3677 = $tmp3676.value;
if ($tmp3677) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp3678 = (frost$core$Int64) {693u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3679, $tmp3678);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:694
org$frostlang$frostc$IR$Value* $tmp3680 = *(&local10);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp3680, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:695
org$frostlang$frostc$IR$Value* $tmp3681 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3681));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3682 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3524);
org$frostlang$frostc$Type* $tmp3683 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
org$frostlang$frostc$IR$Value* $tmp3684 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3524);
org$frostlang$frostc$Type* $tmp3685 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3685));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/For.frost:698
$fn3687 $tmp3686 = ($fn3687) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp3688 = $tmp3686(param4);
org$frostlang$frostc$IR$Value* $tmp3689 = *(&local0);
$fn3691 $tmp3690 = ($fn3691) $tmp3689->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3692 = $tmp3690($tmp3689);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from For.frost:699:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn3694 $tmp3693 = ($fn3694) ((frost$core$Object*) $tmp3692)->$class->vtable[0];
frost$core$String* $tmp3695 = $tmp3693(((frost$core$Object*) $tmp3692));
frost$core$String* $tmp3696 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3697, $tmp3695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3695));
frost$core$String* $tmp3698 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3696, &$s3699);
frost$core$String* $tmp3700 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3701, $tmp3698);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3688, $tmp3700);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
goto block8;
block8:;
org$frostlang$frostc$IR$Value* $tmp3702 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3702));
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

