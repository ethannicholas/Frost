#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/ASTNode/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "org/frostlang/frostc/ASTNode/_Closure4.h"


static frost$core$String $s1;
org$frostlang$frostc$ASTNode$class_type org$frostlang$frostc$ASTNode$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String, org$frostlang$frostc$ASTNode$cleanup, org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position} };

typedef frost$core$String* (*$fn752)(frost$core$Object*);
typedef frost$core$String* (*$fn775)(frost$core$Object*);
typedef frost$core$String* (*$fn797)(frost$core$Object*);
typedef frost$core$String* (*$fn807)(frost$core$Object*);
typedef frost$core$String* (*$fn815)(frost$core$Object*);
typedef frost$core$String* (*$fn835)(frost$core$Object*);
typedef frost$core$Bit (*$fn877)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn882)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn888)(frost$core$Object*);
typedef frost$core$String* (*$fn900)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn907)(frost$core$Object*);
typedef frost$core$String* (*$fn914)(frost$core$Object*);
typedef frost$core$String* (*$fn923)(frost$core$Object*);
typedef frost$core$String* (*$fn932)(frost$core$Object*);
typedef frost$core$String* (*$fn939)(frost$core$Object*);
typedef frost$core$String* (*$fn959)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn978)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn982)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn987)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn993)(frost$core$Object*);
typedef frost$core$String* (*$fn1043)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1050)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1083)(frost$core$Object*);
typedef frost$core$String* (*$fn1094)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1124)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1130)(frost$core$Object*);
typedef frost$core$String* (*$fn1138)(frost$core$Object*);
typedef frost$core$String* (*$fn1181)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1188)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1192)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1197)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1203)(frost$core$Object*);
typedef frost$core$String* (*$fn1243)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1257)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1269)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1273)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1278)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1284)(frost$core$Object*);
typedef frost$core$String* (*$fn1342)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1348)(frost$core$Object*);
typedef frost$core$String* (*$fn1357)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1392)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1396)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1401)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1407)(frost$core$Object*);
typedef frost$core$String* (*$fn1415)(frost$core$Object*);
typedef frost$core$String* (*$fn1443)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1472)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1483)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1517)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1524)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1528)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1533)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1539)(frost$core$Object*);
typedef frost$core$String* (*$fn1547)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1569)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1573)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1578)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1584)(frost$core$Object*);
typedef frost$core$String* (*$fn1625)(frost$core$Object*);
typedef frost$core$String* (*$fn1633)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1641)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1645)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1650)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1656)(frost$core$Object*);
typedef frost$core$String* (*$fn1690)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1733)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1761)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1771)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1775)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1780)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1786)(frost$core$Object*);
typedef frost$core$String* (*$fn1799)(frost$core$Object*);
typedef frost$core$String* (*$fn1824)(frost$core$Object*);
typedef frost$core$String* (*$fn1839)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1870)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1874)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1879)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1885)(frost$core$Object*);
typedef frost$core$String* (*$fn1917)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1927)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1931)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1936)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1942)(frost$core$Object*);
typedef frost$core$String* (*$fn1954)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2008)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2015)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2019)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2024)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2030)(frost$core$Object*);
typedef frost$core$String* (*$fn2068)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2079)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2092)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2106)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2110)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2115)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2121)(frost$core$Object*);
typedef frost$core$String* (*$fn2195)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2215)(frost$core$Object*);
typedef frost$core$String* (*$fn2252)(frost$core$Object*);
typedef frost$core$String* (*$fn2289)(frost$core$Object*);
typedef frost$core$String* (*$fn2323)(frost$core$Object*);
typedef frost$core$String* (*$fn2337)(frost$core$Object*);
typedef frost$core$String* (*$fn2345)(frost$core$Object*);
typedef frost$core$String* (*$fn2368)(frost$core$Object*);
typedef frost$core$String* (*$fn2403)(frost$core$Object*);
typedef frost$core$String* (*$fn2458)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2480)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2502)(frost$collections$CollectionView*, frost$core$String*);
typedef void (*$fn2535)(org$frostlang$frostc$ASTNode$_Closure2*, frost$core$Object*);
typedef void (*$fn2543)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2550)(frost$core$Object*);
typedef void (*$fn2563)(org$frostlang$frostc$ASTNode$_Closure4*, frost$core$Object*);
typedef void (*$fn2571)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2617)(frost$core$Object*);
typedef frost$core$String* (*$fn2644)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2653)(frost$core$Object*);
typedef frost$core$String* (*$fn2718)(frost$core$Object*);
typedef frost$core$String* (*$fn2741)(frost$core$Object*);
typedef frost$core$String* (*$fn2768)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2777)(frost$core$Object*);
typedef frost$core$String* (*$fn2850)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn2880)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2884)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2889)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2898)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2912)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2916)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2921)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2927)(frost$core$Object*);
typedef frost$core$String* (*$fn2969)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2978)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2982)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2987)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2993)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 28, 2259226173871209856, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, -5648485517632880895, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, -5648485517632880895, NULL };
static frost$core$String $s812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, -3005768931565142592, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 3862259953841813309, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 3862259953841813309, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x0a", 2, 645197854336348944, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, -4009745356995480888, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, -7802669844351431112, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, -7802669844351431112, NULL };
static frost$core$String $s1046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1055 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s1086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s1184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s1225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, -8457991779168398576, NULL };
static frost$core$String $s1233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 8239240588283385762, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 3845678946966909516, NULL };
static frost$core$String $s1318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, -3260652667040864604, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, -3260652667040864604, NULL };
static frost$core$String $s1345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 6240486548179417074, NULL };
static frost$core$String $s1352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, -132858756693273155, NULL };
static frost$core$String $s1410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 1551900757386413905, NULL };
static frost$core$String $s1420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s1628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, -2513920666828367600, NULL };
static frost$core$String $s1630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, -4672451134882412660, NULL };
static frost$core$String $s1637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s1659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, 7008644811477646607, NULL };
static frost$core$String $s1729 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x29", 2, 581090828866184664, NULL };
static frost$core$String $s1764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20", 3, 3135810569060049970, NULL };
static frost$core$String $s1766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s1789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 255937440374704776, NULL };
static frost$core$String $s1804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, -7243352351154767332, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1891 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1920 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, -1503173836575230814, NULL };
static frost$core$String $s1922 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s1945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x20\x7b\x0a", 12, 5730672801218777498, NULL };
static frost$core$String $s1960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s2011 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2033 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2044 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s2052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s2070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s2074 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s2081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2097 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s2124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s2162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 578299168842724610, NULL };
static frost$core$String $s2164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 578299168842724610, NULL };
static frost$core$String $s2171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 7580368616763478972, NULL };
static frost$core$String $s2173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 7580368616763478972, NULL };
static frost$core$String $s2180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 7588087188392006392, NULL };
static frost$core$String $s2182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 7588087188392006392, NULL };
static frost$core$String $s2189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 8523082171760740322, NULL };
static frost$core$String $s2191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 8523082171760740322, NULL };
static frost$core$String $s2197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x29", 2, 567769145981429338, NULL };
static frost$core$String $s2237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s2238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s2255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s2286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2e", 3, -587370003925626343, NULL };
static frost$core$String $s2330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s2348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x62\x79\x20", 4, -229567638518546866, NULL };
static frost$core$String $s2383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s2385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s2406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, -8138645579369886003, NULL };
static frost$core$String $s2408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, -4195180554649555617, NULL };
static frost$core$String $s2412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, -4195180554649555617, NULL };
static frost$core$String $s2419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 3249880500923765431, NULL };
static frost$core$String $s2420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 3249880500923765431, NULL };
static frost$core$String $s2434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s2442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, -3398237824395938252, NULL };
static frost$core$String $s2443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, -3398237824395938252, NULL };
static frost$core$String $s2460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 6067664983089856075, NULL };
static frost$core$String $s2553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x28", 7, 6075539153696769322, NULL };
static frost$core$String $s2555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b\x0a", 4, -7356922811060594803, NULL };
static frost$core$String $s2557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x20\x7b\x0a", 9, -2885440192676299181, NULL };
static frost$core$String $s2573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s2614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e", 3, 43478091129369215, NULL };
static frost$core$String $s2657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s2682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s2683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s2690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s2691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s2692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s2699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s2708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29", 9, 6104512261600802090, NULL };
static frost$core$String $s2709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29", 9, 6104512261600802090, NULL };
static frost$core$String $s2710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29", 9, 6104512261600802090, NULL };
static frost$core$String $s2712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s2715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x2c\x20", 13, -7202926641727240027, NULL };
static frost$core$String $s2746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2748 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s2750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s2770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2774 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e", 3, 43478091129369215, NULL };
static frost$core$String $s2781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 4850958444317981178, NULL };
static frost$core$String $s2829 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, -6503404126614323964, NULL };
static frost$core$String $s2837 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, -1568754217983211905, NULL };
static frost$core$String $s2845 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 8604313941350852984, NULL };
static frost$core$String $s2852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 3980698872071072891, NULL };
static frost$core$String $s2874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2902 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2908 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 559938424166824396, NULL };
static frost$core$String $s2930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2933 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s2965 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2972 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 118270813553635210, NULL };
static frost$core$String $s2974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s2996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s3007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, 5826800788555867771, NULL };

org$frostlang$frostc$Position org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$Position local1;
org$frostlang$frostc$Position local2;
org$frostlang$frostc$Position local3;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$Position local7;
org$frostlang$frostc$Position local8;
org$frostlang$frostc$Position local9;
org$frostlang$frostc$Position local10;
org$frostlang$frostc$Position local11;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$Position local13;
org$frostlang$frostc$Position local14;
org$frostlang$frostc$Position local15;
org$frostlang$frostc$Position local16;
org$frostlang$frostc$Position local17;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$Position local19;
org$frostlang$frostc$Position local20;
org$frostlang$frostc$Position local21;
org$frostlang$frostc$Position local22;
org$frostlang$frostc$Position local23;
org$frostlang$frostc$Position local24;
org$frostlang$frostc$Position local25;
org$frostlang$frostc$Position local26;
org$frostlang$frostc$Position local27;
org$frostlang$frostc$Position local28;
org$frostlang$frostc$Position local29;
org$frostlang$frostc$Position local30;
org$frostlang$frostc$Position local31;
org$frostlang$frostc$Position local32;
org$frostlang$frostc$Position local33;
org$frostlang$frostc$Position local34;
org$frostlang$frostc$Position local35;
org$frostlang$frostc$Position local36;
org$frostlang$frostc$Position local37;
org$frostlang$frostc$Position local38;
org$frostlang$frostc$Position local39;
org$frostlang$frostc$Position local40;
org$frostlang$frostc$Position local41;
org$frostlang$frostc$Position local42;
org$frostlang$frostc$Position local43;
org$frostlang$frostc$Position local44;
org$frostlang$frostc$Position local45;
org$frostlang$frostc$Position local46;
org$frostlang$frostc$Position local47;
org$frostlang$frostc$Position local48;
org$frostlang$frostc$Position local49;
org$frostlang$frostc$Position local50;
org$frostlang$frostc$Position local51;
org$frostlang$frostc$Position local52;
org$frostlang$frostc$Position local53;
org$frostlang$frostc$Position local54;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:95
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:96:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp10 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp11 = *$tmp10;
*(&local0) = $tmp11;
frost$core$String** $tmp12 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp13 = *$tmp12;
frost$core$String** $tmp14 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp15 = *$tmp14;
org$frostlang$frostc$ASTNode** $tmp16 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp17 = *$tmp16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:97
org$frostlang$frostc$Position $tmp18 = *(&local0);
return $tmp18;
block3:;
frost$core$Int $tmp19 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:99:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp20 = $tmp3.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 == $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp25 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp26 = *$tmp25;
*(&local1) = $tmp26;
org$frostlang$frostc$FixedArray** $tmp27 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp28 = *$tmp27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:100
org$frostlang$frostc$Position $tmp29 = *(&local1);
return $tmp29;
block6:;
frost$core$Int $tmp30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:102:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp31 = $tmp3.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 == $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp36 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp37 = *$tmp36;
*(&local2) = $tmp37;
org$frostlang$frostc$ASTNode** $tmp38 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp39 = *$tmp38;
org$frostlang$frostc$ASTNode** $tmp40 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp41 = *$tmp40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:103
org$frostlang$frostc$Position $tmp42 = *(&local2);
return $tmp42;
block9:;
frost$core$Int $tmp43 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:105:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp44 = $tmp3.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 == $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp49 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp50 = *$tmp49;
*(&local3) = $tmp50;
org$frostlang$frostc$ASTNode** $tmp51 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp52 = *$tmp51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:106
org$frostlang$frostc$Position $tmp53 = *(&local3);
return $tmp53;
block12:;
frost$core$Int $tmp54 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:108:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp55 = $tmp3.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 == $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp60 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp61 = *$tmp60;
*(&local4) = $tmp61;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:109
org$frostlang$frostc$Position $tmp62 = *(&local4);
return $tmp62;
block15:;
frost$core$Int $tmp63 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:111:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp64 = $tmp3.value;
int64_t $tmp65 = $tmp63.value;
bool $tmp66 = $tmp64 == $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp69 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp70 = *$tmp69;
*(&local5) = $tmp70;
org$frostlang$frostc$ASTNode** $tmp71 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp72 = *$tmp71;
org$frostlang$frostc$expression$Binary$Operator* $tmp73 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp74 = *$tmp73;
org$frostlang$frostc$ASTNode** $tmp75 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp76 = *$tmp75;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:112
org$frostlang$frostc$Position $tmp77 = *(&local5);
return $tmp77;
block18:;
frost$core$Int $tmp78 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:114:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp79 = $tmp3.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 == $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp84 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp85 = *$tmp84;
*(&local6) = $tmp85;
frost$core$Bit* $tmp86 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp87 = *$tmp86;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:115
org$frostlang$frostc$Position $tmp88 = *(&local6);
return $tmp88;
block21:;
frost$core$Int $tmp89 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:117:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp90 = $tmp3.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 == $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp95 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp96 = *$tmp95;
*(&local7) = $tmp96;
org$frostlang$frostc$FixedArray** $tmp97 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp98 = *$tmp97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:118
org$frostlang$frostc$Position $tmp99 = *(&local7);
return $tmp99;
block24:;
frost$core$Int $tmp100 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:120:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp101 = $tmp3.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp106 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp107 = *$tmp106;
*(&local8) = $tmp107;
frost$core$String** $tmp108 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp109 = *$tmp108;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:121
org$frostlang$frostc$Position $tmp110 = *(&local8);
return $tmp110;
block27:;
frost$core$Int $tmp111 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:123:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp112 = $tmp3.value;
int64_t $tmp113 = $tmp111.value;
bool $tmp114 = $tmp112 == $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp117 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp118 = *$tmp117;
*(&local9) = $tmp118;
org$frostlang$frostc$ASTNode** $tmp119 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp120 = *$tmp119;
org$frostlang$frostc$FixedArray** $tmp121 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp122 = *$tmp121;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:124
org$frostlang$frostc$Position $tmp123 = *(&local9);
return $tmp123;
block30:;
frost$core$Int $tmp124 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:126:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp125 = $tmp3.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp130 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp131 = *$tmp130;
*(&local10) = $tmp131;
org$frostlang$frostc$ASTNode** $tmp132 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp133 = *$tmp132;
frost$core$String** $tmp134 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp135 = *$tmp134;
org$frostlang$frostc$FixedArray** $tmp136 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp137 = *$tmp136;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:127
org$frostlang$frostc$Position $tmp138 = *(&local10);
return $tmp138;
block33:;
frost$core$Int $tmp139 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:129:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp140 = $tmp3.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 == $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp145 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp146 = *$tmp145;
*(&local11) = $tmp146;
org$frostlang$frostc$ASTNode** $tmp147 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp148 = *$tmp147;
org$frostlang$frostc$ChoiceCase** $tmp149 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp150 = *$tmp149;
frost$core$Int* $tmp151 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp152 = *$tmp151;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:130
org$frostlang$frostc$Position $tmp153 = *(&local11);
return $tmp153;
block36:;
frost$core$Int $tmp154 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:132:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp155 = $tmp3.value;
int64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 == $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp160 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp161 = *$tmp160;
*(&local12) = $tmp161;
org$frostlang$frostc$ASTNode** $tmp162 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp163 = *$tmp162;
org$frostlang$frostc$FixedArray** $tmp164 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp165 = *$tmp164;
org$frostlang$frostc$ClassDecl$Kind* $tmp166 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp167 = *$tmp166;
frost$core$String** $tmp168 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp169 = *$tmp168;
org$frostlang$frostc$FixedArray** $tmp170 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp171 = *$tmp170;
org$frostlang$frostc$FixedArray** $tmp172 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp173 = *$tmp172;
org$frostlang$frostc$FixedArray** $tmp174 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp175 = *$tmp174;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:133
org$frostlang$frostc$Position $tmp176 = *(&local12);
return $tmp176;
block39:;
frost$core$Int $tmp177 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:135:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp178 = $tmp3.value;
int64_t $tmp179 = $tmp177.value;
bool $tmp180 = $tmp178 == $tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp183 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp184 = *$tmp183;
*(&local13) = $tmp184;
frost$core$String** $tmp185 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp186 = *$tmp185;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:136
org$frostlang$frostc$Position $tmp187 = *(&local13);
return $tmp187;
block42:;
frost$core$Int $tmp188 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:138:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp189 = $tmp3.value;
int64_t $tmp190 = $tmp188.value;
bool $tmp191 = $tmp189 == $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp194 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp195 = *$tmp194;
*(&local14) = $tmp195;
org$frostlang$frostc$ASTNode** $tmp196 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp197 = *$tmp196;
org$frostlang$frostc$ASTNode** $tmp198 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp199 = *$tmp198;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:139
org$frostlang$frostc$Position $tmp200 = *(&local14);
return $tmp200;
block45:;
frost$core$Int $tmp201 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:141:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp202 = $tmp3.value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 == $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp207 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp208 = *$tmp207;
*(&local15) = $tmp208;
frost$core$String** $tmp209 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp210 = *$tmp209;
org$frostlang$frostc$FixedArray** $tmp211 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp212 = *$tmp211;
org$frostlang$frostc$ASTNode** $tmp213 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp214 = *$tmp213;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:142
org$frostlang$frostc$Position $tmp215 = *(&local15);
return $tmp215;
block48:;
frost$core$Int $tmp216 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:144:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp217 = $tmp3.value;
int64_t $tmp218 = $tmp216.value;
bool $tmp219 = $tmp217 == $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp222 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp223 = *$tmp222;
*(&local16) = $tmp223;
org$frostlang$frostc$ASTNode** $tmp224 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp225 = *$tmp224;
frost$core$String** $tmp226 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp227 = *$tmp226;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:145
org$frostlang$frostc$Position $tmp228 = *(&local16);
return $tmp228;
block51:;
frost$core$Int $tmp229 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:147:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp230 = $tmp3.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 == $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Position* $tmp235 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp236 = *$tmp235;
*(&local17) = $tmp236;
org$frostlang$frostc$ASTNode** $tmp237 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp238 = *$tmp237;
frost$core$String** $tmp239 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp240 = *$tmp239;
org$frostlang$frostc$FixedArray** $tmp241 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp242 = *$tmp241;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:148
org$frostlang$frostc$Position $tmp243 = *(&local17);
return $tmp243;
block54:;
frost$core$Int $tmp244 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:150:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp245 = $tmp3.value;
int64_t $tmp246 = $tmp244.value;
bool $tmp247 = $tmp245 == $tmp246;
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp250 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp251 = *$tmp250;
*(&local18) = $tmp251;
org$frostlang$frostc$ASTNode** $tmp252 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp253 = *$tmp252;
org$frostlang$frostc$FixedArray** $tmp254 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp255 = *$tmp254;
org$frostlang$frostc$ASTNode** $tmp256 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp257 = *$tmp256;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:151
org$frostlang$frostc$Position $tmp258 = *(&local18);
return $tmp258;
block57:;
frost$core$Int $tmp259 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:153:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp260 = $tmp3.value;
int64_t $tmp261 = $tmp259.value;
bool $tmp262 = $tmp260 == $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block59; else goto block60;
block59:;
org$frostlang$frostc$FixedArray** $tmp265 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp266 = *$tmp265;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:154
org$frostlang$frostc$Position $tmp267 = org$frostlang$frostc$Position$init();
return $tmp267;
block60:;
frost$core$Int $tmp268 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:156:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp269 = $tmp3.value;
int64_t $tmp270 = $tmp268.value;
bool $tmp271 = $tmp269 == $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp274 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp275 = *$tmp274;
*(&local19) = $tmp275;
frost$core$String** $tmp276 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp277 = *$tmp276;
org$frostlang$frostc$ASTNode** $tmp278 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp279 = *$tmp278;
org$frostlang$frostc$ASTNode** $tmp280 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp281 = *$tmp280;
org$frostlang$frostc$FixedArray** $tmp282 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp283 = *$tmp282;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:157
org$frostlang$frostc$Position $tmp284 = *(&local19);
return $tmp284;
block63:;
frost$core$Int $tmp285 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:159:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp286 = $tmp3.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 == $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Position* $tmp291 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp292 = *$tmp291;
*(&local20) = $tmp292;
frost$core$String** $tmp293 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp294 = *$tmp293;
org$frostlang$frostc$FixedArray** $tmp295 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp296 = *$tmp295;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:160
org$frostlang$frostc$Position $tmp297 = *(&local20);
return $tmp297;
block66:;
frost$core$Int $tmp298 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:162:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp299 = $tmp3.value;
int64_t $tmp300 = $tmp298.value;
bool $tmp301 = $tmp299 == $tmp300;
frost$core$Bit $tmp302 = (frost$core$Bit) {$tmp301};
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp304 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp305 = *$tmp304;
*(&local21) = $tmp305;
frost$core$String** $tmp306 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp307 = *$tmp306;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:163
org$frostlang$frostc$Position $tmp308 = *(&local21);
return $tmp308;
block69:;
frost$core$Int $tmp309 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:165:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp310 = $tmp3.value;
int64_t $tmp311 = $tmp309.value;
bool $tmp312 = $tmp310 == $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block71; else goto block72;
block71:;
org$frostlang$frostc$Position* $tmp315 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp316 = *$tmp315;
*(&local22) = $tmp316;
frost$core$String** $tmp317 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp318 = *$tmp317;
org$frostlang$frostc$FixedArray** $tmp319 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp320 = *$tmp319;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:166
org$frostlang$frostc$Position $tmp321 = *(&local22);
return $tmp321;
block72:;
frost$core$Int $tmp322 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:168:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp323 = $tmp3.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 == $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp328 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp329 = *$tmp328;
*(&local23) = $tmp329;
org$frostlang$frostc$ASTNode** $tmp330 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp331 = *$tmp330;
org$frostlang$frostc$FixedArray** $tmp332 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp333 = *$tmp332;
org$frostlang$frostc$ASTNode** $tmp334 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp335 = *$tmp334;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:169
org$frostlang$frostc$Position $tmp336 = *(&local23);
return $tmp336;
block75:;
frost$core$Int $tmp337 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:171:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp338 = $tmp3.value;
int64_t $tmp339 = $tmp337.value;
bool $tmp340 = $tmp338 == $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Position* $tmp343 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp344 = *$tmp343;
*(&local24) = $tmp344;
frost$core$UInt64* $tmp345 = (frost$core$UInt64*) (param0->$data + 24);
frost$core$UInt64 $tmp346 = *$tmp345;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:172
org$frostlang$frostc$Position $tmp347 = *(&local24);
return $tmp347;
block78:;
frost$core$Int $tmp348 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:174:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp349 = $tmp3.value;
int64_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 == $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp354 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp355 = *$tmp354;
*(&local25) = $tmp355;
org$frostlang$frostc$IR$Value** $tmp356 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp357 = *$tmp356;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:175
org$frostlang$frostc$Position $tmp358 = *(&local25);
return $tmp358;
block81:;
frost$core$Int $tmp359 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:177:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp360 = $tmp3.value;
int64_t $tmp361 = $tmp359.value;
bool $tmp362 = $tmp360 == $tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Position* $tmp365 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp366 = *$tmp365;
*(&local26) = $tmp366;
frost$core$String** $tmp367 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp368 = *$tmp367;
org$frostlang$frostc$FixedArray** $tmp369 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp370 = *$tmp369;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:178
org$frostlang$frostc$Position $tmp371 = *(&local26);
return $tmp371;
block84:;
frost$core$Int $tmp372 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:180:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp373 = $tmp3.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 == $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp378 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp379 = *$tmp378;
*(&local27) = $tmp379;
org$frostlang$frostc$ASTNode** $tmp380 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp381 = *$tmp380;
org$frostlang$frostc$FixedArray** $tmp382 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp383 = *$tmp382;
org$frostlang$frostc$FixedArray** $tmp384 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp385 = *$tmp384;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:181
org$frostlang$frostc$Position $tmp386 = *(&local27);
return $tmp386;
block87:;
frost$core$Int $tmp387 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:183:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp388 = $tmp3.value;
int64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 == $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block89; else goto block90;
block89:;
org$frostlang$frostc$Position* $tmp393 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp394 = *$tmp393;
*(&local28) = $tmp394;
org$frostlang$frostc$ASTNode** $tmp395 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp396 = *$tmp395;
org$frostlang$frostc$FixedArray** $tmp397 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp398 = *$tmp397;
org$frostlang$frostc$MethodDecl$Kind* $tmp399 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp400 = *$tmp399;
frost$core$String** $tmp401 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp402 = *$tmp401;
org$frostlang$frostc$FixedArray** $tmp403 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp404 = *$tmp403;
org$frostlang$frostc$FixedArray** $tmp405 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp406 = *$tmp405;
org$frostlang$frostc$ASTNode** $tmp407 = (org$frostlang$frostc$ASTNode**) (param0->$data + 72);
org$frostlang$frostc$ASTNode* $tmp408 = *$tmp407;
org$frostlang$frostc$FixedArray** $tmp409 = (org$frostlang$frostc$FixedArray**) (param0->$data + 80);
org$frostlang$frostc$FixedArray* $tmp410 = *$tmp409;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:184
org$frostlang$frostc$Position $tmp411 = *(&local28);
return $tmp411;
block90:;
frost$core$Int $tmp412 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:186:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp413 = $tmp3.value;
int64_t $tmp414 = $tmp412.value;
bool $tmp415 = $tmp413 == $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp418 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp419 = *$tmp418;
*(&local29) = $tmp419;
org$frostlang$frostc$parser$Token$Kind* $tmp420 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp421 = *$tmp420;
org$frostlang$frostc$FixedArray** $tmp422 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp423 = *$tmp422;
org$frostlang$frostc$ASTNode** $tmp424 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp425 = *$tmp424;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:187
org$frostlang$frostc$Position $tmp426 = *(&local29);
return $tmp426;
block93:;
frost$core$Int $tmp427 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:189:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp428 = $tmp3.value;
int64_t $tmp429 = $tmp427.value;
bool $tmp430 = $tmp428 == $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Position* $tmp433 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp434 = *$tmp433;
*(&local30) = $tmp434;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:190
org$frostlang$frostc$Position $tmp435 = *(&local30);
return $tmp435;
block96:;
frost$core$Int $tmp436 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:192:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp437 = $tmp3.value;
int64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 == $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp442 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp443 = *$tmp442;
*(&local31) = $tmp443;
org$frostlang$frostc$ASTNode** $tmp444 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp445 = *$tmp444;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:193
org$frostlang$frostc$Position $tmp446 = *(&local31);
return $tmp446;
block99:;
frost$core$Int $tmp447 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:195:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp448 = $tmp3.value;
int64_t $tmp449 = $tmp447.value;
bool $tmp450 = $tmp448 == $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp453 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp454 = *$tmp453;
*(&local32) = $tmp454;
frost$core$String** $tmp455 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp456 = *$tmp455;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:196
org$frostlang$frostc$Position $tmp457 = *(&local32);
return $tmp457;
block102:;
frost$core$Int $tmp458 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:198:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp459 = $tmp3.value;
int64_t $tmp460 = $tmp458.value;
bool $tmp461 = $tmp459 == $tmp460;
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp464 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp465 = *$tmp464;
*(&local33) = $tmp465;
frost$core$String** $tmp466 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp467 = *$tmp466;
org$frostlang$frostc$ASTNode** $tmp468 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp469 = *$tmp468;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:199
org$frostlang$frostc$Position $tmp470 = *(&local33);
return $tmp470;
block105:;
frost$core$Int $tmp471 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:201:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp472 = $tmp3.value;
int64_t $tmp473 = $tmp471.value;
bool $tmp474 = $tmp472 == $tmp473;
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Position* $tmp477 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp478 = *$tmp477;
*(&local34) = $tmp478;
org$frostlang$frostc$ASTNode** $tmp479 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp480 = *$tmp479;
frost$core$Bit* $tmp481 = (frost$core$Bit*) (param0->$data + 32);
frost$core$Bit $tmp482 = *$tmp481;
org$frostlang$frostc$ASTNode** $tmp483 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp484 = *$tmp483;
org$frostlang$frostc$ASTNode** $tmp485 = (org$frostlang$frostc$ASTNode**) (param0->$data + 41);
org$frostlang$frostc$ASTNode* $tmp486 = *$tmp485;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:202
org$frostlang$frostc$Position $tmp487 = *(&local34);
return $tmp487;
block108:;
frost$core$Int $tmp488 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:204:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp489 = $tmp3.value;
int64_t $tmp490 = $tmp488.value;
bool $tmp491 = $tmp489 == $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp494 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp495 = *$tmp494;
*(&local35) = $tmp495;
frost$core$Real64* $tmp496 = (frost$core$Real64*) (param0->$data + 24);
frost$core$Real64 $tmp497 = *$tmp496;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:205
org$frostlang$frostc$Position $tmp498 = *(&local35);
return $tmp498;
block111:;
frost$core$Int $tmp499 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:207:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp500 = $tmp3.value;
int64_t $tmp501 = $tmp499.value;
bool $tmp502 = $tmp500 == $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp505 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp506 = *$tmp505;
*(&local36) = $tmp506;
frost$core$String** $tmp507 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp508 = *$tmp507;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:208
org$frostlang$frostc$Position $tmp509 = *(&local36);
return $tmp509;
block114:;
frost$core$Int $tmp510 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:210:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp511 = $tmp3.value;
int64_t $tmp512 = $tmp510.value;
bool $tmp513 = $tmp511 == $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block116; else goto block117;
block116:;
org$frostlang$frostc$Position* $tmp516 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp517 = *$tmp516;
*(&local37) = $tmp517;
org$frostlang$frostc$ASTNode** $tmp518 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp519 = *$tmp518;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:211
org$frostlang$frostc$Position $tmp520 = *(&local37);
return $tmp520;
block117:;
frost$core$Int $tmp521 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:213:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp522 = $tmp3.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 == $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp527 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp528 = *$tmp527;
*(&local38) = $tmp528;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:214
org$frostlang$frostc$Position $tmp529 = *(&local38);
return $tmp529;
block120:;
frost$core$Int $tmp530 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:216:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp531 = $tmp3.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 == $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block122; else goto block123;
block122:;
org$frostlang$frostc$Position* $tmp536 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp537 = *$tmp536;
*(&local39) = $tmp537;
frost$core$String** $tmp538 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp539 = *$tmp538;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:217
org$frostlang$frostc$Position $tmp540 = *(&local39);
return $tmp540;
block123:;
frost$core$Int $tmp541 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:219:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp542 = $tmp3.value;
int64_t $tmp543 = $tmp541.value;
bool $tmp544 = $tmp542 == $tmp543;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block125; else goto block126;
block125:;
org$frostlang$frostc$Position* $tmp547 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp548 = *$tmp547;
*(&local40) = $tmp548;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:220
org$frostlang$frostc$Position $tmp549 = *(&local40);
return $tmp549;
block126:;
frost$core$Int $tmp550 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:222:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp551 = $tmp3.value;
int64_t $tmp552 = $tmp550.value;
bool $tmp553 = $tmp551 == $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Position* $tmp556 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp557 = *$tmp556;
*(&local41) = $tmp557;
org$frostlang$frostc$FixedArray** $tmp558 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp559 = *$tmp558;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:223
org$frostlang$frostc$Position $tmp560 = *(&local41);
return $tmp560;
block129:;
frost$core$Int $tmp561 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:225:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp562 = $tmp3.value;
int64_t $tmp563 = $tmp561.value;
bool $tmp564 = $tmp562 == $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block131; else goto block132;
block131:;
org$frostlang$frostc$Position* $tmp567 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp568 = *$tmp567;
*(&local42) = $tmp568;
org$frostlang$frostc$FixedArray** $tmp569 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp570 = *$tmp569;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:226
org$frostlang$frostc$Position $tmp571 = *(&local42);
return $tmp571;
block132:;
frost$core$Int $tmp572 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:228:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp573 = $tmp3.value;
int64_t $tmp574 = $tmp572.value;
bool $tmp575 = $tmp573 == $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block134; else goto block135;
block134:;
org$frostlang$frostc$Position* $tmp578 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp579 = *$tmp578;
*(&local43) = $tmp579;
org$frostlang$frostc$FixedArray** $tmp580 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp581 = *$tmp580;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:229
org$frostlang$frostc$Position $tmp582 = *(&local43);
return $tmp582;
block135:;
frost$core$Int $tmp583 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:231:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp584 = $tmp3.value;
int64_t $tmp585 = $tmp583.value;
bool $tmp586 = $tmp584 == $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block137; else goto block138;
block137:;
org$frostlang$frostc$Position* $tmp589 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp590 = *$tmp589;
*(&local44) = $tmp590;
frost$core$String** $tmp591 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp592 = *$tmp591;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:232
org$frostlang$frostc$Position $tmp593 = *(&local44);
return $tmp593;
block138:;
frost$core$Int $tmp594 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:234:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp595 = $tmp3.value;
int64_t $tmp596 = $tmp594.value;
bool $tmp597 = $tmp595 == $tmp596;
frost$core$Bit $tmp598 = (frost$core$Bit) {$tmp597};
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp600 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp601 = *$tmp600;
*(&local45) = $tmp601;
frost$core$String** $tmp602 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp603 = *$tmp602;
org$frostlang$frostc$ASTNode** $tmp604 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp605 = *$tmp604;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:235
org$frostlang$frostc$Position $tmp606 = *(&local45);
return $tmp606;
block141:;
frost$core$Int $tmp607 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:237:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp608 = $tmp3.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 == $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block143; else goto block144;
block143:;
org$frostlang$frostc$Position* $tmp613 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp614 = *$tmp613;
*(&local46) = $tmp614;
org$frostlang$frostc$FixedArray** $tmp615 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp616 = *$tmp615;
org$frostlang$frostc$ASTNode** $tmp617 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp618 = *$tmp617;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:238
org$frostlang$frostc$Position $tmp619 = *(&local46);
return $tmp619;
block144:;
frost$core$Int $tmp620 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:240:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp621 = $tmp3.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block146; else goto block147;
block146:;
org$frostlang$frostc$Position* $tmp626 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp627 = *$tmp626;
*(&local47) = $tmp627;
org$frostlang$frostc$expression$Unary$Operator* $tmp628 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp629 = *$tmp628;
org$frostlang$frostc$ASTNode** $tmp630 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp631 = *$tmp630;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:241
org$frostlang$frostc$Position $tmp632 = *(&local47);
return $tmp632;
block147:;
frost$core$Int $tmp633 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:243:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp634 = $tmp3.value;
int64_t $tmp635 = $tmp633.value;
bool $tmp636 = $tmp634 == $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Position* $tmp639 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp640 = *$tmp639;
*(&local48) = $tmp640;
org$frostlang$frostc$ASTNode** $tmp641 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp642 = *$tmp641;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:244
org$frostlang$frostc$Position $tmp643 = *(&local48);
return $tmp643;
block150:;
frost$core$Int $tmp644 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:246:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp645 = $tmp3.value;
int64_t $tmp646 = $tmp644.value;
bool $tmp647 = $tmp645 == $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block152; else goto block153;
block152:;
org$frostlang$frostc$Position* $tmp650 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp651 = *$tmp650;
*(&local49) = $tmp651;
org$frostlang$frostc$FixedArray** $tmp652 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp653 = *$tmp652;
org$frostlang$frostc$ASTNode** $tmp654 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp655 = *$tmp654;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:247
org$frostlang$frostc$Position $tmp656 = *(&local49);
return $tmp656;
block153:;
frost$core$Int $tmp657 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:249:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp658 = $tmp3.value;
int64_t $tmp659 = $tmp657.value;
bool $tmp660 = $tmp658 == $tmp659;
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660};
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block155; else goto block156;
block155:;
org$frostlang$frostc$Position* $tmp663 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp664 = *$tmp663;
*(&local50) = $tmp664;
frost$core$String** $tmp665 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp666 = *$tmp665;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:250
org$frostlang$frostc$Position $tmp667 = *(&local50);
return $tmp667;
block156:;
frost$core$Int $tmp668 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:252:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp669 = $tmp3.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block158; else goto block159;
block158:;
org$frostlang$frostc$Position* $tmp674 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp675 = *$tmp674;
*(&local51) = $tmp675;
org$frostlang$frostc$FixedArray** $tmp676 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp677 = *$tmp676;
org$frostlang$frostc$ASTNode** $tmp678 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp679 = *$tmp678;
org$frostlang$frostc$FixedArray** $tmp680 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp681 = *$tmp680;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:253
org$frostlang$frostc$Position $tmp682 = *(&local51);
return $tmp682;
block159:;
frost$core$Int $tmp683 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:255:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp684 = $tmp3.value;
int64_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 == $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block161; else goto block162;
block161:;
org$frostlang$frostc$Position* $tmp689 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp690 = *$tmp689;
*(&local52) = $tmp690;
org$frostlang$frostc$Variable$Kind* $tmp691 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp692 = *$tmp691;
org$frostlang$frostc$FixedArray** $tmp693 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp694 = *$tmp693;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:256
org$frostlang$frostc$Position $tmp695 = *(&local52);
return $tmp695;
block162:;
frost$core$Int $tmp696 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:258:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp697 = $tmp3.value;
int64_t $tmp698 = $tmp696.value;
bool $tmp699 = $tmp697 == $tmp698;
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block164; else goto block165;
block164:;
org$frostlang$frostc$Position* $tmp702 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp703 = *$tmp702;
*(&local53) = $tmp703;
org$frostlang$frostc$FixedArray** $tmp704 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp705 = *$tmp704;
org$frostlang$frostc$FixedArray** $tmp706 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp707 = *$tmp706;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:259
org$frostlang$frostc$Position $tmp708 = *(&local53);
return $tmp708;
block165:;
frost$core$Int $tmp709 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:261:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp710 = $tmp3.value;
int64_t $tmp711 = $tmp709.value;
bool $tmp712 = $tmp710 == $tmp711;
frost$core$Bit $tmp713 = (frost$core$Bit) {$tmp712};
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block167; else goto block168;
block167:;
org$frostlang$frostc$Position* $tmp715 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp716 = *$tmp715;
*(&local54) = $tmp716;
frost$core$String** $tmp717 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp718 = *$tmp717;
org$frostlang$frostc$ASTNode** $tmp719 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp720 = *$tmp719;
org$frostlang$frostc$FixedArray** $tmp721 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp722 = *$tmp721;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:262
org$frostlang$frostc$Position $tmp723 = *(&local54);
return $tmp723;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:265
frost$core$Int $tmp724 = (frost$core$Int) {265u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s725, $tmp724);
abort(); // unreachable
block1:;
goto block170;
block170:;

}
frost$core$String* org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String(org$frostlang$frostc$ASTNode* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$expression$Binary$Operator local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$expression$Binary$Operator local9;
org$frostlang$frostc$expression$Binary$Operator local10;
frost$core$Bit local11;
org$frostlang$frostc$FixedArray* local12 = NULL;
frost$core$MutableString* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
frost$core$String* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
org$frostlang$frostc$FixedArray* local17 = NULL;
org$frostlang$frostc$ASTNode* local18 = NULL;
frost$core$String* local19 = NULL;
org$frostlang$frostc$FixedArray* local20 = NULL;
frost$core$MutableString* local21 = NULL;
org$frostlang$frostc$ASTNode* local22 = NULL;
org$frostlang$frostc$ChoiceCase* local23 = NULL;
frost$core$Int local24;
org$frostlang$frostc$ASTNode* local25 = NULL;
org$frostlang$frostc$FixedArray* local26 = NULL;
org$frostlang$frostc$ClassDecl$Kind local27;
frost$core$String* local28 = NULL;
org$frostlang$frostc$FixedArray* local29 = NULL;
org$frostlang$frostc$FixedArray* local30 = NULL;
org$frostlang$frostc$FixedArray* local31 = NULL;
frost$core$MutableString* local32 = NULL;
org$frostlang$frostc$ASTNode* local33 = NULL;
org$frostlang$frostc$ASTNode* local34 = NULL;
frost$core$String* local35 = NULL;
org$frostlang$frostc$ASTNode* local36 = NULL;
org$frostlang$frostc$ASTNode* local37 = NULL;
frost$core$String* local38 = NULL;
org$frostlang$frostc$FixedArray* local39 = NULL;
org$frostlang$frostc$ASTNode* local40 = NULL;
frost$core$MutableString* local41 = NULL;
org$frostlang$frostc$ASTNode* local42 = NULL;
org$frostlang$frostc$ASTNode* local43 = NULL;
frost$core$String* local44 = NULL;
org$frostlang$frostc$ASTNode* local45 = NULL;
frost$core$String* local46 = NULL;
org$frostlang$frostc$FixedArray* local47 = NULL;
org$frostlang$frostc$ASTNode* local48 = NULL;
org$frostlang$frostc$FixedArray* local49 = NULL;
org$frostlang$frostc$ASTNode* local50 = NULL;
frost$core$MutableString* local51 = NULL;
org$frostlang$frostc$ASTNode* local52 = NULL;
org$frostlang$frostc$FixedArray* local53 = NULL;
frost$core$MutableString* local54 = NULL;
org$frostlang$frostc$ASTNode* local55 = NULL;
frost$core$String* local56 = NULL;
org$frostlang$frostc$ASTNode* local57 = NULL;
org$frostlang$frostc$ASTNode* local58 = NULL;
org$frostlang$frostc$FixedArray* local59 = NULL;
frost$core$MutableString* local60 = NULL;
org$frostlang$frostc$ASTNode* local61 = NULL;
frost$core$String* local62 = NULL;
org$frostlang$frostc$FixedArray* local63 = NULL;
frost$core$String* local64 = NULL;
frost$core$String* local65 = NULL;
org$frostlang$frostc$FixedArray* local66 = NULL;
org$frostlang$frostc$ASTNode* local67 = NULL;
org$frostlang$frostc$FixedArray* local68 = NULL;
org$frostlang$frostc$ASTNode* local69 = NULL;
frost$core$MutableString* local70 = NULL;
org$frostlang$frostc$ASTNode* local71 = NULL;
frost$core$UInt64 local72;
org$frostlang$frostc$IR$Value* local73 = NULL;
frost$core$String* local74 = NULL;
org$frostlang$frostc$FixedArray* local75 = NULL;
frost$core$MutableString* local76 = NULL;
org$frostlang$frostc$ASTNode* local77 = NULL;
org$frostlang$frostc$ASTNode* local78 = NULL;
org$frostlang$frostc$FixedArray* local79 = NULL;
org$frostlang$frostc$FixedArray* local80 = NULL;
frost$core$MutableString* local81 = NULL;
org$frostlang$frostc$ASTNode* local82 = NULL;
org$frostlang$frostc$ASTNode* local83 = NULL;
org$frostlang$frostc$FixedArray* local84 = NULL;
org$frostlang$frostc$MethodDecl$Kind local85;
frost$core$String* local86 = NULL;
org$frostlang$frostc$FixedArray* local87 = NULL;
org$frostlang$frostc$FixedArray* local88 = NULL;
org$frostlang$frostc$ASTNode* local89 = NULL;
org$frostlang$frostc$FixedArray* local90 = NULL;
frost$core$MutableString* local91 = NULL;
org$frostlang$frostc$ASTNode* local92 = NULL;
org$frostlang$frostc$ASTNode* local93 = NULL;
org$frostlang$frostc$parser$Token$Kind local94;
org$frostlang$frostc$FixedArray* local95 = NULL;
org$frostlang$frostc$ASTNode* local96 = NULL;
frost$core$String* local97 = NULL;
frost$core$String* local98 = NULL;
org$frostlang$frostc$ASTNode* local99 = NULL;
frost$core$String* local100 = NULL;
frost$core$String* local101 = NULL;
org$frostlang$frostc$ASTNode* local102 = NULL;
org$frostlang$frostc$ASTNode* local103 = NULL;
frost$core$Bit local104;
org$frostlang$frostc$ASTNode* local105 = NULL;
org$frostlang$frostc$ASTNode* local106 = NULL;
frost$core$MutableString* local107 = NULL;
frost$core$Real64 local108;
frost$core$String* local109 = NULL;
org$frostlang$frostc$ASTNode* local110 = NULL;
frost$core$String* local111 = NULL;
org$frostlang$frostc$FixedArray* local112 = NULL;
org$frostlang$frostc$FixedArray* local113 = NULL;
org$frostlang$frostc$FixedArray* local114 = NULL;
org$frostlang$frostc$FixedArray* local115 = NULL;
org$frostlang$frostc$ASTNode* local116 = NULL;
org$frostlang$frostc$FixedArray* local117 = NULL;
frost$core$MutableString* local118 = NULL;
frost$core$MutableString* local119 = NULL;
frost$core$MutableString* local120 = NULL;
frost$core$String* local121 = NULL;
frost$core$String* local122 = NULL;
org$frostlang$frostc$ASTNode* local123 = NULL;
org$frostlang$frostc$FixedArray* local124 = NULL;
org$frostlang$frostc$ASTNode* local125 = NULL;
org$frostlang$frostc$expression$Unary$Operator local126;
org$frostlang$frostc$ASTNode* local127 = NULL;
frost$core$String* local128 = NULL;
org$frostlang$frostc$ASTNode* local129 = NULL;
org$frostlang$frostc$FixedArray* local130 = NULL;
org$frostlang$frostc$ASTNode* local131 = NULL;
frost$core$String* local132 = NULL;
org$frostlang$frostc$Variable$Kind local133;
org$frostlang$frostc$FixedArray* local134 = NULL;
frost$core$MutableString* local135 = NULL;
org$frostlang$frostc$FixedArray* local136 = NULL;
org$frostlang$frostc$FixedArray* local137 = NULL;
frost$core$MutableString* local138 = NULL;
frost$core$String* local139 = NULL;
org$frostlang$frostc$ASTNode* local140 = NULL;
org$frostlang$frostc$ASTNode* local141 = NULL;
frost$core$String* local142 = NULL;
org$frostlang$frostc$ASTNode* local143 = NULL;
org$frostlang$frostc$FixedArray* local144 = NULL;
frost$core$MutableString* local145 = NULL;
org$frostlang$frostc$ASTNode* local146 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:272
frost$core$Int* $tmp726 = &param0->$rawValue;
frost$core$Int $tmp727 = *$tmp726;
frost$core$Int $tmp728 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:273:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp729 = $tmp727.value;
int64_t $tmp730 = $tmp728.value;
bool $tmp731 = $tmp729 == $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp734 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp735 = *$tmp734;
frost$core$String** $tmp736 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp737 = *$tmp736;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$String* $tmp738 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local0) = $tmp737;
frost$core$String** $tmp739 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp740 = *$tmp739;
org$frostlang$frostc$ASTNode** $tmp741 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp742 = *$tmp741;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
org$frostlang$frostc$ASTNode* $tmp743 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local1) = $tmp742;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:274
org$frostlang$frostc$ASTNode* $tmp744 = *(&local1);
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744 != NULL};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:275
frost$core$String* $tmp747 = *(&local0);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:275:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$String* $tmp748 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp747, &$s749);
org$frostlang$frostc$ASTNode* $tmp750 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:275:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn752 $tmp751 = ($fn752) ((frost$core$Object*) $tmp750)->$class->vtable[0];
frost$core$String* $tmp753 = $tmp751(((frost$core$Object*) $tmp750));
frost$core$String* $tmp754 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp748, $tmp753);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$String* $tmp755 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp754, &$s756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
org$frostlang$frostc$ASTNode* $tmp757 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp758 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local0) = ((frost$core$String*) NULL);
return $tmp755;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:277
frost$core$String* $tmp759 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
org$frostlang$frostc$ASTNode* $tmp760 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp761 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local0) = ((frost$core$String*) NULL);
return $tmp759;
block3:;
frost$core$Int $tmp762 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:279:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp763 = $tmp727.value;
int64_t $tmp764 = $tmp762.value;
bool $tmp765 = $tmp763 == $tmp764;
frost$core$Bit $tmp766 = (frost$core$Bit) {$tmp765};
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp768 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp769 = *$tmp768;
org$frostlang$frostc$FixedArray** $tmp770 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp771 = *$tmp770;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
org$frostlang$frostc$FixedArray* $tmp772 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local2) = $tmp771;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:280
org$frostlang$frostc$FixedArray* $tmp773 = *(&local2);
$fn775 $tmp774 = ($fn775) ((frost$core$Object*) $tmp773)->$class->vtable[0];
frost$core$String* $tmp776 = $tmp774(((frost$core$Object*) $tmp773));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
org$frostlang$frostc$FixedArray* $tmp777 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp776;
block10:;
frost$core$Int $tmp778 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:282:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp779 = $tmp727.value;
int64_t $tmp780 = $tmp778.value;
bool $tmp781 = $tmp779 == $tmp780;
frost$core$Bit $tmp782 = (frost$core$Bit) {$tmp781};
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp784 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp785 = *$tmp784;
org$frostlang$frostc$ASTNode** $tmp786 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp787 = *$tmp786;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
org$frostlang$frostc$ASTNode* $tmp788 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local3) = $tmp787;
org$frostlang$frostc$ASTNode** $tmp789 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp790 = *$tmp789;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
org$frostlang$frostc$ASTNode* $tmp791 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local4) = $tmp790;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:283
org$frostlang$frostc$ASTNode* $tmp792 = *(&local4);
frost$core$Bit $tmp793 = (frost$core$Bit) {$tmp792 == NULL};
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:284
org$frostlang$frostc$ASTNode* $tmp795 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:284:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn797 $tmp796 = ($fn797) ((frost$core$Object*) $tmp795)->$class->vtable[0];
frost$core$String* $tmp798 = $tmp796(((frost$core$Object*) $tmp795));
frost$core$String* $tmp799 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s800, $tmp798);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$String* $tmp801 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp799, &$s802);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
org$frostlang$frostc$ASTNode* $tmp803 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp804 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp801;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:286
org$frostlang$frostc$ASTNode* $tmp805 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:286:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn807 $tmp806 = ($fn807) ((frost$core$Object*) $tmp805)->$class->vtable[0];
frost$core$String* $tmp808 = $tmp806(((frost$core$Object*) $tmp805));
frost$core$String* $tmp809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s810, $tmp808);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$String* $tmp811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp809, &$s812);
org$frostlang$frostc$ASTNode* $tmp813 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:286:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn815 $tmp814 = ($fn815) ((frost$core$Object*) $tmp813)->$class->vtable[0];
frost$core$String* $tmp816 = $tmp814(((frost$core$Object*) $tmp813));
frost$core$String* $tmp817 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp811, $tmp816);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$String* $tmp818 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp817, &$s819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
org$frostlang$frostc$ASTNode* $tmp820 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp821 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp818;
block13:;
frost$core$Int $tmp822 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:288:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp823 = $tmp727.value;
int64_t $tmp824 = $tmp822.value;
bool $tmp825 = $tmp823 == $tmp824;
frost$core$Bit $tmp826 = (frost$core$Bit) {$tmp825};
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp828 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp829 = *$tmp828;
org$frostlang$frostc$ASTNode** $tmp830 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp831 = *$tmp830;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
org$frostlang$frostc$ASTNode* $tmp832 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local5) = $tmp831;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:289
org$frostlang$frostc$ASTNode* $tmp833 = *(&local5);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:289:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn835 $tmp834 = ($fn835) ((frost$core$Object*) $tmp833)->$class->vtable[0];
frost$core$String* $tmp836 = $tmp834(((frost$core$Object*) $tmp833));
frost$core$String* $tmp837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s838, $tmp836);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$String* $tmp839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp837, &$s840);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
org$frostlang$frostc$ASTNode* $tmp841 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp839;
block21:;
frost$core$Int $tmp842 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:291:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp843 = $tmp727.value;
int64_t $tmp844 = $tmp842.value;
bool $tmp845 = $tmp843 == $tmp844;
frost$core$Bit $tmp846 = (frost$core$Bit) {$tmp845};
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp848 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp849 = *$tmp848;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:292
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s850));
return &$s851;
block25:;
frost$core$Int $tmp852 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:294:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp853 = $tmp727.value;
int64_t $tmp854 = $tmp852.value;
bool $tmp855 = $tmp853 == $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Position* $tmp858 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp859 = *$tmp858;
org$frostlang$frostc$ASTNode** $tmp860 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp861 = *$tmp860;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
org$frostlang$frostc$ASTNode* $tmp862 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local6) = $tmp861;
org$frostlang$frostc$expression$Binary$Operator* $tmp863 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp864 = *$tmp863;
*(&local7) = $tmp864;
org$frostlang$frostc$ASTNode** $tmp865 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp866 = *$tmp865;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
org$frostlang$frostc$ASTNode* $tmp867 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local8) = $tmp866;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:295
org$frostlang$frostc$expression$Binary$Operator $tmp868 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp869;
$tmp869 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp869->value = $tmp868;
frost$core$Int $tmp870 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from ASTNode.frost:295:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp871 = &(&local10)->$rawValue;
*$tmp871 = $tmp870;
org$frostlang$frostc$expression$Binary$Operator $tmp872 = *(&local10);
*(&local9) = $tmp872;
org$frostlang$frostc$expression$Binary$Operator $tmp873 = *(&local9);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp874;
$tmp874 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp874->value = $tmp873;
ITable* $tmp875 = ((frost$core$Equatable*) $tmp869)->$class->itable;
while ($tmp875->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp875 = $tmp875->next;
}
$fn877 $tmp876 = $tmp875->methods[0];
frost$core$Bit $tmp878 = $tmp876(((frost$core$Equatable*) $tmp869), ((frost$core$Equatable*) $tmp874));
bool $tmp879 = $tmp878.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp874)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp869)));
if ($tmp879) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:296
org$frostlang$frostc$ASTNode* $tmp880 = *(&local6);
$fn882 $tmp881 = ($fn882) $tmp880->$class->vtable[0];
frost$core$String* $tmp883 = $tmp881($tmp880);
frost$core$String* $tmp884 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp883, &$s885);
org$frostlang$frostc$ASTNode* $tmp886 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:296:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn888 $tmp887 = ($fn888) ((frost$core$Object*) $tmp886)->$class->vtable[0];
frost$core$String* $tmp889 = $tmp887(((frost$core$Object*) $tmp886));
frost$core$String* $tmp890 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp884, $tmp889);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$core$String* $tmp891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp890, &$s892);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
org$frostlang$frostc$ASTNode* $tmp893 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp894 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp891;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:298
org$frostlang$frostc$expression$Binary$Operator $tmp895 = *(&local7);
frost$core$Bit $tmp896 = org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit($tmp895);
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:299
org$frostlang$frostc$ASTNode* $tmp898 = *(&local6);
$fn900 $tmp899 = ($fn900) $tmp898->$class->vtable[0];
frost$core$String* $tmp901 = $tmp899($tmp898);
frost$core$String* $tmp902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp901, &$s903);
org$frostlang$frostc$expression$Binary$Operator $tmp904 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp905;
$tmp905 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp905->value = $tmp904;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:299:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn907 $tmp906 = ($fn907) ((frost$core$Object*) $tmp905)->$class->vtable[0];
frost$core$String* $tmp908 = $tmp906(((frost$core$Object*) $tmp905));
frost$core$String* $tmp909 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp902, $tmp908);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$String* $tmp910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp909, &$s911);
org$frostlang$frostc$ASTNode* $tmp912 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:299:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn914 $tmp913 = ($fn914) ((frost$core$Object*) $tmp912)->$class->vtable[0];
frost$core$String* $tmp915 = $tmp913(((frost$core$Object*) $tmp912));
frost$core$String* $tmp916 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp910, $tmp915);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$String* $tmp917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp916, &$s918);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
org$frostlang$frostc$ASTNode* $tmp919 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp920 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp917;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:301
org$frostlang$frostc$ASTNode* $tmp921 = *(&local6);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:301:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn923 $tmp922 = ($fn923) ((frost$core$Object*) $tmp921)->$class->vtable[0];
frost$core$String* $tmp924 = $tmp922(((frost$core$Object*) $tmp921));
frost$core$String* $tmp925 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s926, $tmp924);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
frost$core$String* $tmp927 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp925, &$s928);
org$frostlang$frostc$expression$Binary$Operator $tmp929 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp930;
$tmp930 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp930->value = $tmp929;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:301:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn932 $tmp931 = ($fn932) ((frost$core$Object*) $tmp930)->$class->vtable[0];
frost$core$String* $tmp933 = $tmp931(((frost$core$Object*) $tmp930));
frost$core$String* $tmp934 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp927, $tmp933);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
frost$core$String* $tmp935 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp934, &$s936);
org$frostlang$frostc$ASTNode* $tmp937 = *(&local8);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:301:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn939 $tmp938 = ($fn939) ((frost$core$Object*) $tmp937)->$class->vtable[0];
frost$core$String* $tmp940 = $tmp938(((frost$core$Object*) $tmp937));
frost$core$String* $tmp941 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp935, $tmp940);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$String* $tmp942 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp941, &$s943);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
org$frostlang$frostc$ASTNode* $tmp944 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp945 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp942;
block28:;
frost$core$Int $tmp946 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:303:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp947 = $tmp727.value;
int64_t $tmp948 = $tmp946.value;
bool $tmp949 = $tmp947 == $tmp948;
frost$core$Bit $tmp950 = (frost$core$Bit) {$tmp949};
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp952 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp953 = *$tmp952;
frost$core$Bit* $tmp954 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp955 = *$tmp954;
*(&local11) = $tmp955;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:304
frost$core$Bit $tmp956 = *(&local11);
frost$core$Bit$wrapper* $tmp957;
$tmp957 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp957->value = $tmp956;
$fn959 $tmp958 = ($fn959) ((frost$core$Object*) $tmp957)->$class->vtable[0];
frost$core$String* $tmp960 = $tmp958(((frost$core$Object*) $tmp957));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
return $tmp960;
block42:;
frost$core$Int $tmp961 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:306:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp962 = $tmp727.value;
int64_t $tmp963 = $tmp961.value;
bool $tmp964 = $tmp962 == $tmp963;
frost$core$Bit $tmp965 = (frost$core$Bit) {$tmp964};
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp967 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp968 = *$tmp967;
org$frostlang$frostc$FixedArray** $tmp969 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp970 = *$tmp969;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
org$frostlang$frostc$FixedArray* $tmp971 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local12) = $tmp970;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:307
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp972 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp972, &$s973);
*(&local13) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$MutableString* $tmp974 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local13) = $tmp972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:308
org$frostlang$frostc$FixedArray* $tmp975 = *(&local12);
ITable* $tmp976 = ((frost$collections$Iterable*) $tmp975)->$class->itable;
while ($tmp976->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp976 = $tmp976->next;
}
$fn978 $tmp977 = $tmp976->methods[0];
frost$collections$Iterator* $tmp979 = $tmp977(((frost$collections$Iterable*) $tmp975));
goto block47;
block47:;
ITable* $tmp980 = $tmp979->$class->itable;
while ($tmp980->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp980 = $tmp980->next;
}
$fn982 $tmp981 = $tmp980->methods[0];
frost$core$Bit $tmp983 = $tmp981($tmp979);
bool $tmp984 = $tmp983.value;
if ($tmp984) goto block49; else goto block48;
block48:;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp985 = $tmp979->$class->itable;
while ($tmp985->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp985 = $tmp985->next;
}
$fn987 $tmp986 = $tmp985->methods[1];
frost$core$Object* $tmp988 = $tmp986($tmp979);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp988)));
org$frostlang$frostc$ASTNode* $tmp989 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local14) = ((org$frostlang$frostc$ASTNode*) $tmp988);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:309
frost$core$MutableString* $tmp990 = *(&local13);
org$frostlang$frostc$ASTNode* $tmp991 = *(&local14);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:309:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn993 $tmp992 = ($fn993) ((frost$core$Object*) $tmp991)->$class->vtable[0];
frost$core$String* $tmp994 = $tmp992(((frost$core$Object*) $tmp991));
frost$core$String* $tmp995 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp994, &$s996);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$MutableString$append$frost$core$String($tmp990, $tmp995);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q($tmp988);
org$frostlang$frostc$ASTNode* $tmp997 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:311
frost$core$MutableString* $tmp998 = *(&local13);
frost$core$MutableString$append$frost$core$String($tmp998, &$s999);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:312
frost$core$MutableString* $tmp1000 = *(&local13);
frost$core$String* $tmp1001 = frost$core$MutableString$finish$R$frost$core$String($tmp1000);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$MutableString* $tmp1002 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local13) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1003 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1001;
block45:;
frost$core$Int $tmp1004 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:314:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1005 = $tmp727.value;
int64_t $tmp1006 = $tmp1004.value;
bool $tmp1007 = $tmp1005 == $tmp1006;
frost$core$Bit $tmp1008 = (frost$core$Bit) {$tmp1007};
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Position* $tmp1010 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1011 = *$tmp1010;
frost$core$String** $tmp1012 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1013 = *$tmp1012;
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
frost$core$String* $tmp1014 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local15) = $tmp1013;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:315
frost$core$String* $tmp1015 = *(&local15);
frost$core$Bit $tmp1016 = (frost$core$Bit) {$tmp1015 != NULL};
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:316
frost$core$String* $tmp1018 = *(&local15);
frost$core$String* $tmp1019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1020, $tmp1018);
frost$core$String* $tmp1021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1019, &$s1022);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$String* $tmp1023 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local15) = ((frost$core$String*) NULL);
return $tmp1021;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:318
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1024));
frost$core$String* $tmp1025 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local15) = ((frost$core$String*) NULL);
return &$s1026;
block52:;
frost$core$Int $tmp1027 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:320:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1028 = $tmp727.value;
int64_t $tmp1029 = $tmp1027.value;
bool $tmp1030 = $tmp1028 == $tmp1029;
frost$core$Bit $tmp1031 = (frost$core$Bit) {$tmp1030};
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp1033 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1034 = *$tmp1033;
org$frostlang$frostc$ASTNode** $tmp1035 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1036 = *$tmp1035;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
org$frostlang$frostc$ASTNode* $tmp1037 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local16) = $tmp1036;
org$frostlang$frostc$FixedArray** $tmp1038 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1039 = *$tmp1038;
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
org$frostlang$frostc$FixedArray* $tmp1040 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local17) = $tmp1039;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:321
org$frostlang$frostc$ASTNode* $tmp1041 = *(&local16);
$fn1043 $tmp1042 = ($fn1043) $tmp1041->$class->vtable[0];
frost$core$String* $tmp1044 = $tmp1042($tmp1041);
frost$core$String* $tmp1045 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1044, &$s1046);
org$frostlang$frostc$FixedArray* $tmp1047 = *(&local17);
ITable* $tmp1048 = ((frost$collections$CollectionView*) $tmp1047)->$class->itable;
while ($tmp1048->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1048 = $tmp1048->next;
}
$fn1050 $tmp1049 = $tmp1048->methods[3];
frost$core$String* $tmp1051 = $tmp1049(((frost$collections$CollectionView*) $tmp1047), &$s1052);
frost$core$String* $tmp1053 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1045, $tmp1051);
frost$core$String* $tmp1054 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1053, &$s1055);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
org$frostlang$frostc$FixedArray* $tmp1056 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1057 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1054;
block57:;
frost$core$Int $tmp1058 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:323:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1059 = $tmp727.value;
int64_t $tmp1060 = $tmp1058.value;
bool $tmp1061 = $tmp1059 == $tmp1060;
frost$core$Bit $tmp1062 = (frost$core$Bit) {$tmp1061};
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Position* $tmp1064 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1065 = *$tmp1064;
org$frostlang$frostc$ASTNode** $tmp1066 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1067 = *$tmp1066;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
org$frostlang$frostc$ASTNode* $tmp1068 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local18) = $tmp1067;
frost$core$String** $tmp1069 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp1070 = *$tmp1069;
*(&local19) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$String* $tmp1071 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local19) = $tmp1070;
org$frostlang$frostc$FixedArray** $tmp1072 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1073 = *$tmp1072;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
org$frostlang$frostc$FixedArray* $tmp1074 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local20) = $tmp1073;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:324
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1075 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1075);
*(&local21) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$MutableString* $tmp1076 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local21) = $tmp1075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:325
org$frostlang$frostc$ASTNode* $tmp1077 = *(&local18);
frost$core$Bit $tmp1078 = (frost$core$Bit) {$tmp1077 != NULL};
bool $tmp1079 = $tmp1078.value;
if ($tmp1079) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:326
frost$core$MutableString* $tmp1080 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1081 = *(&local18);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:326:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1083 $tmp1082 = ($fn1083) ((frost$core$Object*) $tmp1081)->$class->vtable[0];
frost$core$String* $tmp1084 = $tmp1082(((frost$core$Object*) $tmp1081));
frost$core$String* $tmp1085 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1084, &$s1086);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$MutableString$append$frost$core$String($tmp1080, $tmp1085);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
goto block63;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:328
frost$core$MutableString* $tmp1087 = *(&local21);
frost$core$String* $tmp1088 = *(&local19);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:328:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$String* $tmp1089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1088, &$s1090);
org$frostlang$frostc$FixedArray* $tmp1091 = *(&local20);
ITable* $tmp1092 = ((frost$collections$CollectionView*) $tmp1091)->$class->itable;
while ($tmp1092->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1092 = $tmp1092->next;
}
$fn1094 $tmp1093 = $tmp1092->methods[3];
frost$core$String* $tmp1095 = $tmp1093(((frost$collections$CollectionView*) $tmp1091), &$s1096);
frost$core$String* $tmp1097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1089, $tmp1095);
frost$core$String* $tmp1098 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1097, &$s1099);
frost$core$MutableString$append$frost$core$String($tmp1087, $tmp1098);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:329
frost$core$MutableString* $tmp1100 = *(&local21);
frost$core$String* $tmp1101 = frost$core$MutableString$finish$R$frost$core$String($tmp1100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$MutableString* $tmp1102 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
*(&local21) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1103 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1104 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
*(&local19) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1105 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1101;
block60:;
frost$core$Int $tmp1106 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:331:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1107 = $tmp727.value;
int64_t $tmp1108 = $tmp1106.value;
bool $tmp1109 = $tmp1107 == $tmp1108;
frost$core$Bit $tmp1110 = (frost$core$Bit) {$tmp1109};
bool $tmp1111 = $tmp1110.value;
if ($tmp1111) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp1112 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1113 = *$tmp1112;
org$frostlang$frostc$ASTNode** $tmp1114 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1115 = *$tmp1114;
*(&local22) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
org$frostlang$frostc$ASTNode* $tmp1116 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
*(&local22) = $tmp1115;
org$frostlang$frostc$ChoiceCase** $tmp1117 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp1118 = *$tmp1117;
*(&local23) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
org$frostlang$frostc$ChoiceCase* $tmp1119 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
*(&local23) = $tmp1118;
frost$core$Int* $tmp1120 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp1121 = *$tmp1120;
*(&local24) = $tmp1121;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:332
org$frostlang$frostc$ASTNode* $tmp1122 = *(&local22);
$fn1124 $tmp1123 = ($fn1124) $tmp1122->$class->vtable[0];
frost$core$String* $tmp1125 = $tmp1123($tmp1122);
frost$core$String* $tmp1126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1125, &$s1127);
org$frostlang$frostc$ChoiceCase* $tmp1128 = *(&local23);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:332:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1130 $tmp1129 = ($fn1130) ((frost$core$Object*) $tmp1128)->$class->vtable[0];
frost$core$String* $tmp1131 = $tmp1129(((frost$core$Object*) $tmp1128));
frost$core$String* $tmp1132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1126, $tmp1131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$String* $tmp1133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1132, &$s1134);
frost$core$Int $tmp1135 = *(&local24);
frost$core$Int$wrapper* $tmp1136;
$tmp1136 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1136->value = $tmp1135;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:332:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1138 $tmp1137 = ($fn1138) ((frost$core$Object*) $tmp1136)->$class->vtable[0];
frost$core$String* $tmp1139 = $tmp1137(((frost$core$Object*) $tmp1136));
frost$core$String* $tmp1140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1133, $tmp1139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$String* $tmp1141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1140, &$s1142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
org$frostlang$frostc$ChoiceCase* $tmp1143 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local23) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp1144 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local22) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1141;
block67:;
frost$core$Int $tmp1145 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:334:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1146 = $tmp727.value;
int64_t $tmp1147 = $tmp1145.value;
bool $tmp1148 = $tmp1146 == $tmp1147;
frost$core$Bit $tmp1149 = (frost$core$Bit) {$tmp1148};
bool $tmp1150 = $tmp1149.value;
if ($tmp1150) goto block71; else goto block72;
block71:;
org$frostlang$frostc$Position* $tmp1151 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1152 = *$tmp1151;
org$frostlang$frostc$ASTNode** $tmp1153 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1154 = *$tmp1153;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
org$frostlang$frostc$ASTNode* $tmp1155 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local25) = $tmp1154;
org$frostlang$frostc$FixedArray** $tmp1156 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1157 = *$tmp1156;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
org$frostlang$frostc$FixedArray* $tmp1158 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local26) = $tmp1157;
org$frostlang$frostc$ClassDecl$Kind* $tmp1159 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp1160 = *$tmp1159;
*(&local27) = $tmp1160;
frost$core$String** $tmp1161 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp1162 = *$tmp1161;
*(&local28) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$String* $tmp1163 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local28) = $tmp1162;
org$frostlang$frostc$FixedArray** $tmp1164 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1165 = *$tmp1164;
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
org$frostlang$frostc$FixedArray* $tmp1166 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local29) = $tmp1165;
org$frostlang$frostc$FixedArray** $tmp1167 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp1168 = *$tmp1167;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
org$frostlang$frostc$FixedArray* $tmp1169 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local30) = $tmp1168;
org$frostlang$frostc$FixedArray** $tmp1170 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1171 = *$tmp1170;
*(&local31) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
org$frostlang$frostc$FixedArray* $tmp1172 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local31) = $tmp1171;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:335
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1173 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1173);
*(&local32) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
frost$core$MutableString* $tmp1174 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
*(&local32) = $tmp1173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:336
org$frostlang$frostc$ASTNode* $tmp1175 = *(&local25);
frost$core$Bit $tmp1176 = (frost$core$Bit) {$tmp1175 != NULL};
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:337
frost$core$MutableString* $tmp1178 = *(&local32);
org$frostlang$frostc$ASTNode* $tmp1179 = *(&local25);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:337:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1181 $tmp1180 = ($fn1181) ((frost$core$Object*) $tmp1179)->$class->vtable[0];
frost$core$String* $tmp1182 = $tmp1180(((frost$core$Object*) $tmp1179));
frost$core$String* $tmp1183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1182, &$s1184);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$MutableString$append$frost$core$String($tmp1178, $tmp1183);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
goto block75;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:339
org$frostlang$frostc$FixedArray* $tmp1185 = *(&local26);
ITable* $tmp1186 = ((frost$collections$Iterable*) $tmp1185)->$class->itable;
while ($tmp1186->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1186 = $tmp1186->next;
}
$fn1188 $tmp1187 = $tmp1186->methods[0];
frost$collections$Iterator* $tmp1189 = $tmp1187(((frost$collections$Iterable*) $tmp1185));
goto block77;
block77:;
ITable* $tmp1190 = $tmp1189->$class->itable;
while ($tmp1190->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1190 = $tmp1190->next;
}
$fn1192 $tmp1191 = $tmp1190->methods[0];
frost$core$Bit $tmp1193 = $tmp1191($tmp1189);
bool $tmp1194 = $tmp1193.value;
if ($tmp1194) goto block79; else goto block78;
block78:;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1195 = $tmp1189->$class->itable;
while ($tmp1195->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1195 = $tmp1195->next;
}
$fn1197 $tmp1196 = $tmp1195->methods[1];
frost$core$Object* $tmp1198 = $tmp1196($tmp1189);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1198)));
org$frostlang$frostc$ASTNode* $tmp1199 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
*(&local33) = ((org$frostlang$frostc$ASTNode*) $tmp1198);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:340
frost$core$MutableString* $tmp1200 = *(&local32);
org$frostlang$frostc$ASTNode* $tmp1201 = *(&local33);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:340:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1203 $tmp1202 = ($fn1203) ((frost$core$Object*) $tmp1201)->$class->vtable[0];
frost$core$String* $tmp1204 = $tmp1202(((frost$core$Object*) $tmp1201));
frost$core$String* $tmp1205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1204, &$s1206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$MutableString$append$frost$core$String($tmp1200, $tmp1205);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q($tmp1198);
org$frostlang$frostc$ASTNode* $tmp1207 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block77;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:342
org$frostlang$frostc$ClassDecl$Kind $tmp1208 = *(&local27);
frost$core$Int $tmp1209 = $tmp1208.$rawValue;
frost$core$Int $tmp1210 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:343:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1211 = $tmp1209.value;
int64_t $tmp1212 = $tmp1210.value;
bool $tmp1213 = $tmp1211 == $tmp1212;
frost$core$Bit $tmp1214 = (frost$core$Bit) {$tmp1213};
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:343
frost$core$MutableString* $tmp1216 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1216, &$s1217);
goto block81;
block83:;
frost$core$Int $tmp1218 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:344:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1219 = $tmp1209.value;
int64_t $tmp1220 = $tmp1218.value;
bool $tmp1221 = $tmp1219 == $tmp1220;
frost$core$Bit $tmp1222 = (frost$core$Bit) {$tmp1221};
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block85; else goto block86;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:344
frost$core$MutableString* $tmp1224 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1224, &$s1225);
goto block81;
block86:;
frost$core$Int $tmp1226 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:345:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1227 = $tmp1209.value;
int64_t $tmp1228 = $tmp1226.value;
bool $tmp1229 = $tmp1227 == $tmp1228;
frost$core$Bit $tmp1230 = (frost$core$Bit) {$tmp1229};
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block88; else goto block81;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:345
frost$core$MutableString* $tmp1232 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1232, &$s1233);
goto block81;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:347
frost$core$MutableString* $tmp1234 = *(&local32);
frost$core$String* $tmp1235 = *(&local28);
frost$core$MutableString$append$frost$core$String($tmp1234, $tmp1235);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:348
org$frostlang$frostc$FixedArray* $tmp1236 = *(&local29);
frost$core$Bit $tmp1237 = (frost$core$Bit) {$tmp1236 != NULL};
bool $tmp1238 = $tmp1237.value;
if ($tmp1238) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:349
frost$core$MutableString* $tmp1239 = *(&local32);
org$frostlang$frostc$FixedArray* $tmp1240 = *(&local29);
ITable* $tmp1241 = ((frost$collections$CollectionView*) $tmp1240)->$class->itable;
while ($tmp1241->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1241 = $tmp1241->next;
}
$fn1243 $tmp1242 = $tmp1241->methods[3];
frost$core$String* $tmp1244 = $tmp1242(((frost$collections$CollectionView*) $tmp1240), &$s1245);
frost$core$String* $tmp1246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1247, $tmp1244);
frost$core$String* $tmp1248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1246, &$s1249);
frost$core$MutableString$append$frost$core$String($tmp1239, $tmp1248);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
goto block91;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:351
org$frostlang$frostc$FixedArray* $tmp1250 = *(&local30);
frost$core$Bit $tmp1251 = (frost$core$Bit) {$tmp1250 != NULL};
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:352
frost$core$MutableString* $tmp1253 = *(&local32);
org$frostlang$frostc$FixedArray* $tmp1254 = *(&local30);
ITable* $tmp1255 = ((frost$collections$CollectionView*) $tmp1254)->$class->itable;
while ($tmp1255->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1255 = $tmp1255->next;
}
$fn1257 $tmp1256 = $tmp1255->methods[3];
frost$core$String* $tmp1258 = $tmp1256(((frost$collections$CollectionView*) $tmp1254), &$s1259);
frost$core$String* $tmp1260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1261, $tmp1258);
frost$core$String* $tmp1262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1260, &$s1263);
frost$core$MutableString$append$frost$core$String($tmp1253, $tmp1262);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
goto block93;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:354
frost$core$MutableString* $tmp1264 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1264, &$s1265);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:355
org$frostlang$frostc$FixedArray* $tmp1266 = *(&local31);
ITable* $tmp1267 = ((frost$collections$Iterable*) $tmp1266)->$class->itable;
while ($tmp1267->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1267 = $tmp1267->next;
}
$fn1269 $tmp1268 = $tmp1267->methods[0];
frost$collections$Iterator* $tmp1270 = $tmp1268(((frost$collections$Iterable*) $tmp1266));
goto block94;
block94:;
ITable* $tmp1271 = $tmp1270->$class->itable;
while ($tmp1271->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1271 = $tmp1271->next;
}
$fn1273 $tmp1272 = $tmp1271->methods[0];
frost$core$Bit $tmp1274 = $tmp1272($tmp1270);
bool $tmp1275 = $tmp1274.value;
if ($tmp1275) goto block96; else goto block95;
block95:;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1276 = $tmp1270->$class->itable;
while ($tmp1276->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1276 = $tmp1276->next;
}
$fn1278 $tmp1277 = $tmp1276->methods[1];
frost$core$Object* $tmp1279 = $tmp1277($tmp1270);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1279)));
org$frostlang$frostc$ASTNode* $tmp1280 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local34) = ((org$frostlang$frostc$ASTNode*) $tmp1279);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:356
frost$core$MutableString* $tmp1281 = *(&local32);
org$frostlang$frostc$ASTNode* $tmp1282 = *(&local34);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:356:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1284 $tmp1283 = ($fn1284) ((frost$core$Object*) $tmp1282)->$class->vtable[0];
frost$core$String* $tmp1285 = $tmp1283(((frost$core$Object*) $tmp1282));
frost$core$String* $tmp1286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1285, &$s1287);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$MutableString$append$frost$core$String($tmp1281, $tmp1286);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q($tmp1279);
org$frostlang$frostc$ASTNode* $tmp1288 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block94;
block96:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:358
frost$core$MutableString* $tmp1289 = *(&local32);
frost$core$MutableString$append$frost$core$String($tmp1289, &$s1290);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:359
frost$core$MutableString* $tmp1291 = *(&local32);
frost$core$String* $tmp1292 = frost$core$MutableString$finish$R$frost$core$String($tmp1291);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$MutableString* $tmp1293 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local32) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1294 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local31) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1295 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1296 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1297 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local28) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1298 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1299 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1292;
block72:;
frost$core$Int $tmp1300 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:361:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1301 = $tmp727.value;
int64_t $tmp1302 = $tmp1300.value;
bool $tmp1303 = $tmp1301 == $tmp1302;
frost$core$Bit $tmp1304 = (frost$core$Bit) {$tmp1303};
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp1306 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1307 = *$tmp1306;
frost$core$String** $tmp1308 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1309 = *$tmp1308;
*(&local35) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$String* $tmp1310 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local35) = $tmp1309;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:362
frost$core$String* $tmp1311 = *(&local35);
frost$core$Bit $tmp1312 = (frost$core$Bit) {$tmp1311 != NULL};
bool $tmp1313 = $tmp1312.value;
if ($tmp1313) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:363
frost$core$String* $tmp1314 = *(&local35);
frost$core$String* $tmp1315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1316, $tmp1314);
frost$core$String* $tmp1317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1315, &$s1318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
frost$core$String* $tmp1319 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local35) = ((frost$core$String*) NULL);
return $tmp1317;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:365
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1320));
frost$core$String* $tmp1321 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local35) = ((frost$core$String*) NULL);
return &$s1322;
block99:;
frost$core$Int $tmp1323 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:367:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1324 = $tmp727.value;
int64_t $tmp1325 = $tmp1323.value;
bool $tmp1326 = $tmp1324 == $tmp1325;
frost$core$Bit $tmp1327 = (frost$core$Bit) {$tmp1326};
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block103; else goto block104;
block103:;
org$frostlang$frostc$Position* $tmp1329 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1330 = *$tmp1329;
org$frostlang$frostc$ASTNode** $tmp1331 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1332 = *$tmp1331;
*(&local36) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
org$frostlang$frostc$ASTNode* $tmp1333 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local36) = $tmp1332;
org$frostlang$frostc$ASTNode** $tmp1334 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1335 = *$tmp1334;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
org$frostlang$frostc$ASTNode* $tmp1336 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local37) = $tmp1335;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:368
org$frostlang$frostc$ASTNode* $tmp1337 = *(&local37);
frost$core$Bit $tmp1338 = (frost$core$Bit) {$tmp1337 != NULL};
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:369
org$frostlang$frostc$ASTNode* $tmp1340 = *(&local36);
$fn1342 $tmp1341 = ($fn1342) $tmp1340->$class->vtable[0];
frost$core$String* $tmp1343 = $tmp1341($tmp1340);
frost$core$String* $tmp1344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1343, &$s1345);
org$frostlang$frostc$ASTNode* $tmp1346 = *(&local37);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1348 $tmp1347 = ($fn1348) ((frost$core$Object*) $tmp1346)->$class->vtable[0];
frost$core$String* $tmp1349 = $tmp1347(((frost$core$Object*) $tmp1346));
frost$core$String* $tmp1350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1344, $tmp1349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$String* $tmp1351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1350, &$s1352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
org$frostlang$frostc$ASTNode* $tmp1353 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1354 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local36) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1351;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:371
org$frostlang$frostc$ASTNode* $tmp1355 = *(&local36);
$fn1357 $tmp1356 = ($fn1357) ((frost$core$Object*) $tmp1355)->$class->vtable[0];
frost$core$String* $tmp1358 = $tmp1356(((frost$core$Object*) $tmp1355));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
org$frostlang$frostc$ASTNode* $tmp1359 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1360 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local36) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1358;
block104:;
frost$core$Int $tmp1361 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:373:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1362 = $tmp727.value;
int64_t $tmp1363 = $tmp1361.value;
bool $tmp1364 = $tmp1362 == $tmp1363;
frost$core$Bit $tmp1365 = (frost$core$Bit) {$tmp1364};
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block109; else goto block110;
block109:;
org$frostlang$frostc$Position* $tmp1367 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1368 = *$tmp1367;
frost$core$String** $tmp1369 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1370 = *$tmp1369;
*(&local38) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$String* $tmp1371 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local38) = $tmp1370;
org$frostlang$frostc$FixedArray** $tmp1372 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1373 = *$tmp1372;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
org$frostlang$frostc$FixedArray* $tmp1374 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local39) = $tmp1373;
org$frostlang$frostc$ASTNode** $tmp1375 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1376 = *$tmp1375;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
org$frostlang$frostc$ASTNode* $tmp1377 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local40) = $tmp1376;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:374
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1378 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1378);
*(&local41) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$MutableString* $tmp1379 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local41) = $tmp1378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:375
frost$core$String* $tmp1380 = *(&local38);
frost$core$Bit $tmp1381 = (frost$core$Bit) {$tmp1380 != NULL};
bool $tmp1382 = $tmp1381.value;
if ($tmp1382) goto block112; else goto block113;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:376
frost$core$MutableString* $tmp1383 = *(&local41);
frost$core$String* $tmp1384 = *(&local38);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:376:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
frost$core$String* $tmp1385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1384, &$s1386);
frost$core$MutableString$append$frost$core$String($tmp1383, $tmp1385);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
goto block113;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:378
frost$core$MutableString* $tmp1387 = *(&local41);
frost$core$MutableString$append$frost$core$String($tmp1387, &$s1388);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:379
org$frostlang$frostc$FixedArray* $tmp1389 = *(&local39);
ITable* $tmp1390 = ((frost$collections$Iterable*) $tmp1389)->$class->itable;
while ($tmp1390->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1390 = $tmp1390->next;
}
$fn1392 $tmp1391 = $tmp1390->methods[0];
frost$collections$Iterator* $tmp1393 = $tmp1391(((frost$collections$Iterable*) $tmp1389));
goto block115;
block115:;
ITable* $tmp1394 = $tmp1393->$class->itable;
while ($tmp1394->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1394 = $tmp1394->next;
}
$fn1396 $tmp1395 = $tmp1394->methods[0];
frost$core$Bit $tmp1397 = $tmp1395($tmp1393);
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block117; else goto block116;
block116:;
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1399 = $tmp1393->$class->itable;
while ($tmp1399->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1399 = $tmp1399->next;
}
$fn1401 $tmp1400 = $tmp1399->methods[1];
frost$core$Object* $tmp1402 = $tmp1400($tmp1393);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1402)));
org$frostlang$frostc$ASTNode* $tmp1403 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local42) = ((org$frostlang$frostc$ASTNode*) $tmp1402);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:380
frost$core$MutableString* $tmp1404 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp1405 = *(&local42);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:380:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1407 $tmp1406 = ($fn1407) ((frost$core$Object*) $tmp1405)->$class->vtable[0];
frost$core$String* $tmp1408 = $tmp1406(((frost$core$Object*) $tmp1405));
frost$core$String* $tmp1409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1408, &$s1410);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$MutableString$append$frost$core$String($tmp1404, $tmp1409);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q($tmp1402);
org$frostlang$frostc$ASTNode* $tmp1411 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block115;
block117:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:382
frost$core$MutableString* $tmp1412 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp1413 = *(&local40);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:382:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1415 $tmp1414 = ($fn1415) ((frost$core$Object*) $tmp1413)->$class->vtable[0];
frost$core$String* $tmp1416 = $tmp1414(((frost$core$Object*) $tmp1413));
frost$core$String* $tmp1417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1418, $tmp1416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$String* $tmp1419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1417, &$s1420);
frost$core$MutableString$append$frost$core$String($tmp1412, $tmp1419);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:383
frost$core$MutableString* $tmp1421 = *(&local41);
frost$core$String* $tmp1422 = frost$core$MutableString$finish$R$frost$core$String($tmp1421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$MutableString* $tmp1423 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local41) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1424 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1425 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1426 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local38) = ((frost$core$String*) NULL);
return $tmp1422;
block110:;
frost$core$Int $tmp1427 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:385:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1428 = $tmp727.value;
int64_t $tmp1429 = $tmp1427.value;
bool $tmp1430 = $tmp1428 == $tmp1429;
frost$core$Bit $tmp1431 = (frost$core$Bit) {$tmp1430};
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block120; else goto block121;
block120:;
org$frostlang$frostc$Position* $tmp1433 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1434 = *$tmp1433;
org$frostlang$frostc$ASTNode** $tmp1435 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1436 = *$tmp1435;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
org$frostlang$frostc$ASTNode* $tmp1437 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local43) = $tmp1436;
frost$core$String** $tmp1438 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp1439 = *$tmp1438;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$String* $tmp1440 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local44) = $tmp1439;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:386
org$frostlang$frostc$ASTNode* $tmp1441 = *(&local43);
$fn1443 $tmp1442 = ($fn1443) $tmp1441->$class->vtable[0];
frost$core$String* $tmp1444 = $tmp1442($tmp1441);
frost$core$String* $tmp1445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1444, &$s1446);
frost$core$String* $tmp1447 = *(&local44);
frost$core$String* $tmp1448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1445, $tmp1447);
frost$core$String* $tmp1449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1448, &$s1450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$String* $tmp1451 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1452 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1449;
block121:;
frost$core$Int $tmp1453 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:388:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1454 = $tmp727.value;
int64_t $tmp1455 = $tmp1453.value;
bool $tmp1456 = $tmp1454 == $tmp1455;
frost$core$Bit $tmp1457 = (frost$core$Bit) {$tmp1456};
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block123; else goto block124;
block123:;
org$frostlang$frostc$Position* $tmp1459 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1460 = *$tmp1459;
org$frostlang$frostc$ASTNode** $tmp1461 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1462 = *$tmp1461;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
org$frostlang$frostc$ASTNode* $tmp1463 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
*(&local45) = $tmp1462;
frost$core$String** $tmp1464 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp1465 = *$tmp1464;
*(&local46) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
frost$core$String* $tmp1466 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local46) = $tmp1465;
org$frostlang$frostc$FixedArray** $tmp1467 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1468 = *$tmp1467;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
org$frostlang$frostc$FixedArray* $tmp1469 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local47) = $tmp1468;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:389
org$frostlang$frostc$ASTNode* $tmp1470 = *(&local45);
$fn1472 $tmp1471 = ($fn1472) $tmp1470->$class->vtable[0];
frost$core$String* $tmp1473 = $tmp1471($tmp1470);
frost$core$String* $tmp1474 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1473, &$s1475);
frost$core$String* $tmp1476 = *(&local46);
frost$core$String* $tmp1477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1474, $tmp1476);
frost$core$String* $tmp1478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1477, &$s1479);
org$frostlang$frostc$FixedArray* $tmp1480 = *(&local47);
ITable* $tmp1481 = ((frost$collections$CollectionView*) $tmp1480)->$class->itable;
while ($tmp1481->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1481 = $tmp1481->next;
}
$fn1483 $tmp1482 = $tmp1481->methods[3];
frost$core$String* $tmp1484 = $tmp1482(((frost$collections$CollectionView*) $tmp1480), &$s1485);
frost$core$String* $tmp1486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1478, $tmp1484);
frost$core$String* $tmp1487 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1486, &$s1488);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
org$frostlang$frostc$FixedArray* $tmp1489 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1490 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local46) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1491 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1487;
block124:;
frost$core$Int $tmp1492 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:391:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1493 = $tmp727.value;
int64_t $tmp1494 = $tmp1492.value;
bool $tmp1495 = $tmp1493 == $tmp1494;
frost$core$Bit $tmp1496 = (frost$core$Bit) {$tmp1495};
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block126; else goto block127;
block126:;
org$frostlang$frostc$Position* $tmp1498 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1499 = *$tmp1498;
org$frostlang$frostc$ASTNode** $tmp1500 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1501 = *$tmp1500;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
org$frostlang$frostc$ASTNode* $tmp1502 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local48) = $tmp1501;
org$frostlang$frostc$FixedArray** $tmp1503 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1504 = *$tmp1503;
*(&local49) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
org$frostlang$frostc$FixedArray* $tmp1505 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
*(&local49) = $tmp1504;
org$frostlang$frostc$ASTNode** $tmp1506 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1507 = *$tmp1506;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
org$frostlang$frostc$ASTNode* $tmp1508 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local50) = $tmp1507;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:392
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1509 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1509);
*(&local51) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
frost$core$MutableString* $tmp1510 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
*(&local51) = $tmp1509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:393
org$frostlang$frostc$ASTNode* $tmp1511 = *(&local48);
frost$core$Bit $tmp1512 = (frost$core$Bit) {$tmp1511 != NULL};
bool $tmp1513 = $tmp1512.value;
if ($tmp1513) goto block129; else goto block130;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:394
frost$core$MutableString* $tmp1514 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1515 = *(&local48);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:394:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1517 $tmp1516 = ($fn1517) ((frost$core$Object*) $tmp1515)->$class->vtable[0];
frost$core$String* $tmp1518 = $tmp1516(((frost$core$Object*) $tmp1515));
frost$core$String* $tmp1519 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1518, &$s1520);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$core$MutableString$append$frost$core$String($tmp1514, $tmp1519);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
goto block130;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:396
org$frostlang$frostc$FixedArray* $tmp1521 = *(&local49);
ITable* $tmp1522 = ((frost$collections$Iterable*) $tmp1521)->$class->itable;
while ($tmp1522->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1522 = $tmp1522->next;
}
$fn1524 $tmp1523 = $tmp1522->methods[0];
frost$collections$Iterator* $tmp1525 = $tmp1523(((frost$collections$Iterable*) $tmp1521));
goto block132;
block132:;
ITable* $tmp1526 = $tmp1525->$class->itable;
while ($tmp1526->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1526 = $tmp1526->next;
}
$fn1528 $tmp1527 = $tmp1526->methods[0];
frost$core$Bit $tmp1529 = $tmp1527($tmp1525);
bool $tmp1530 = $tmp1529.value;
if ($tmp1530) goto block134; else goto block133;
block133:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1531 = $tmp1525->$class->itable;
while ($tmp1531->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1531 = $tmp1531->next;
}
$fn1533 $tmp1532 = $tmp1531->methods[1];
frost$core$Object* $tmp1534 = $tmp1532($tmp1525);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1534)));
org$frostlang$frostc$ASTNode* $tmp1535 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp1534);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:397
frost$core$MutableString* $tmp1536 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1537 = *(&local52);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:397:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1539 $tmp1538 = ($fn1539) ((frost$core$Object*) $tmp1537)->$class->vtable[0];
frost$core$String* $tmp1540 = $tmp1538(((frost$core$Object*) $tmp1537));
frost$core$String* $tmp1541 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1540, &$s1542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
frost$core$MutableString$append$frost$core$String($tmp1536, $tmp1541);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$core$Frost$unref$frost$core$Object$Q($tmp1534);
org$frostlang$frostc$ASTNode* $tmp1543 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block132;
block134:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:399
frost$core$MutableString* $tmp1544 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1545 = *(&local50);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from ASTNode.frost:399:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn1547 $tmp1546 = ($fn1547) ((frost$core$Object*) $tmp1545)->$class->vtable[0];
frost$core$String* $tmp1548 = $tmp1546(((frost$core$Object*) $tmp1545));
frost$core$MutableString$append$frost$core$String($tmp1544, $tmp1548);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:400
frost$core$MutableString* $tmp1549 = *(&local51);
frost$core$String* $tmp1550 = frost$core$MutableString$finish$R$frost$core$String($tmp1549);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
frost$core$MutableString* $tmp1551 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
*(&local51) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1552 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1553 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
*(&local49) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1554 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1550;
block127:;
frost$core$Int $tmp1555 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:402:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1556 = $tmp727.value;
int64_t $tmp1557 = $tmp1555.value;
bool $tmp1558 = $tmp1556 == $tmp1557;
frost$core$Bit $tmp1559 = (frost$core$Bit) {$tmp1558};
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block137; else goto block138;
block137:;
org$frostlang$frostc$FixedArray** $tmp1561 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1562 = *$tmp1561;
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
org$frostlang$frostc$FixedArray* $tmp1563 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local53) = $tmp1562;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:403
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1564 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1564);
*(&local54) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
frost$core$MutableString* $tmp1565 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
*(&local54) = $tmp1564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:404
org$frostlang$frostc$FixedArray* $tmp1566 = *(&local53);
ITable* $tmp1567 = ((frost$collections$Iterable*) $tmp1566)->$class->itable;
while ($tmp1567->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1567 = $tmp1567->next;
}
$fn1569 $tmp1568 = $tmp1567->methods[0];
frost$collections$Iterator* $tmp1570 = $tmp1568(((frost$collections$Iterable*) $tmp1566));
goto block140;
block140:;
ITable* $tmp1571 = $tmp1570->$class->itable;
while ($tmp1571->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1571 = $tmp1571->next;
}
$fn1573 $tmp1572 = $tmp1571->methods[0];
frost$core$Bit $tmp1574 = $tmp1572($tmp1570);
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block142; else goto block141;
block141:;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1576 = $tmp1570->$class->itable;
while ($tmp1576->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1576 = $tmp1576->next;
}
$fn1578 $tmp1577 = $tmp1576->methods[1];
frost$core$Object* $tmp1579 = $tmp1577($tmp1570);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1579)));
org$frostlang$frostc$ASTNode* $tmp1580 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
*(&local55) = ((org$frostlang$frostc$ASTNode*) $tmp1579);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:405
frost$core$MutableString* $tmp1581 = *(&local54);
org$frostlang$frostc$ASTNode* $tmp1582 = *(&local55);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:405:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1584 $tmp1583 = ($fn1584) ((frost$core$Object*) $tmp1582)->$class->vtable[0];
frost$core$String* $tmp1585 = $tmp1583(((frost$core$Object*) $tmp1582));
frost$core$String* $tmp1586 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1585, &$s1587);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$core$MutableString$append$frost$core$String($tmp1581, $tmp1586);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
frost$core$Frost$unref$frost$core$Object$Q($tmp1579);
org$frostlang$frostc$ASTNode* $tmp1588 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block140;
block142:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:407
frost$core$MutableString* $tmp1589 = *(&local54);
frost$core$String* $tmp1590 = frost$core$MutableString$finish$R$frost$core$String($tmp1589);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
frost$core$MutableString* $tmp1591 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
*(&local54) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1592 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1590;
block138:;
frost$core$Int $tmp1593 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:409:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1594 = $tmp727.value;
int64_t $tmp1595 = $tmp1593.value;
bool $tmp1596 = $tmp1594 == $tmp1595;
frost$core$Bit $tmp1597 = (frost$core$Bit) {$tmp1596};
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block144; else goto block145;
block144:;
org$frostlang$frostc$Position* $tmp1599 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1600 = *$tmp1599;
frost$core$String** $tmp1601 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1602 = *$tmp1601;
*(&local56) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
frost$core$String* $tmp1603 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local56) = $tmp1602;
org$frostlang$frostc$ASTNode** $tmp1604 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1605 = *$tmp1604;
*(&local57) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
org$frostlang$frostc$ASTNode* $tmp1606 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
*(&local57) = $tmp1605;
org$frostlang$frostc$ASTNode** $tmp1607 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1608 = *$tmp1607;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
org$frostlang$frostc$ASTNode* $tmp1609 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
*(&local58) = $tmp1608;
org$frostlang$frostc$FixedArray** $tmp1610 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1611 = *$tmp1610;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
org$frostlang$frostc$FixedArray* $tmp1612 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local59) = $tmp1611;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:410
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1613 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1613);
*(&local60) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
frost$core$MutableString* $tmp1614 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local60) = $tmp1613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:411
frost$core$String* $tmp1615 = *(&local56);
frost$core$Bit $tmp1616 = (frost$core$Bit) {$tmp1615 != NULL};
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block147; else goto block148;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:412
frost$core$MutableString* $tmp1618 = *(&local60);
frost$core$String* $tmp1619 = *(&local56);
frost$core$String* $tmp1620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1619, &$s1621);
frost$core$MutableString$append$frost$core$String($tmp1618, $tmp1620);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
goto block148;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:414
frost$core$MutableString* $tmp1622 = *(&local60);
org$frostlang$frostc$ASTNode* $tmp1623 = *(&local57);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:414:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1625 $tmp1624 = ($fn1625) ((frost$core$Object*) $tmp1623)->$class->vtable[0];
frost$core$String* $tmp1626 = $tmp1624(((frost$core$Object*) $tmp1623));
frost$core$String* $tmp1627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1628, $tmp1626);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$core$String* $tmp1629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1627, &$s1630);
org$frostlang$frostc$ASTNode* $tmp1631 = *(&local58);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:414:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1633 $tmp1632 = ($fn1633) ((frost$core$Object*) $tmp1631)->$class->vtable[0];
frost$core$String* $tmp1634 = $tmp1632(((frost$core$Object*) $tmp1631));
frost$core$String* $tmp1635 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1629, $tmp1634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$String* $tmp1636 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1635, &$s1637);
frost$core$MutableString$append$frost$core$String($tmp1622, $tmp1636);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:415
org$frostlang$frostc$FixedArray* $tmp1638 = *(&local59);
ITable* $tmp1639 = ((frost$collections$Iterable*) $tmp1638)->$class->itable;
while ($tmp1639->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1639 = $tmp1639->next;
}
$fn1641 $tmp1640 = $tmp1639->methods[0];
frost$collections$Iterator* $tmp1642 = $tmp1640(((frost$collections$Iterable*) $tmp1638));
goto block151;
block151:;
ITable* $tmp1643 = $tmp1642->$class->itable;
while ($tmp1643->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1643 = $tmp1643->next;
}
$fn1645 $tmp1644 = $tmp1643->methods[0];
frost$core$Bit $tmp1646 = $tmp1644($tmp1642);
bool $tmp1647 = $tmp1646.value;
if ($tmp1647) goto block153; else goto block152;
block152:;
*(&local61) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1648 = $tmp1642->$class->itable;
while ($tmp1648->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1648 = $tmp1648->next;
}
$fn1650 $tmp1649 = $tmp1648->methods[1];
frost$core$Object* $tmp1651 = $tmp1649($tmp1642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1651)));
org$frostlang$frostc$ASTNode* $tmp1652 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local61) = ((org$frostlang$frostc$ASTNode*) $tmp1651);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:416
frost$core$MutableString* $tmp1653 = *(&local60);
org$frostlang$frostc$ASTNode* $tmp1654 = *(&local61);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:416:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1656 $tmp1655 = ($fn1656) ((frost$core$Object*) $tmp1654)->$class->vtable[0];
frost$core$String* $tmp1657 = $tmp1655(((frost$core$Object*) $tmp1654));
frost$core$String* $tmp1658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1657, &$s1659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
frost$core$MutableString$append$frost$core$String($tmp1653, $tmp1658);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q($tmp1651);
org$frostlang$frostc$ASTNode* $tmp1660 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local61) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block151;
block153:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:418
frost$core$MutableString* $tmp1661 = *(&local60);
frost$core$MutableString$append$frost$core$String($tmp1661, &$s1662);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:419
frost$core$MutableString* $tmp1663 = *(&local60);
frost$core$String* $tmp1664 = frost$core$MutableString$finish$R$frost$core$String($tmp1663);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
frost$core$MutableString* $tmp1665 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
*(&local60) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1666 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1667 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1668 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
*(&local57) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1669 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
*(&local56) = ((frost$core$String*) NULL);
return $tmp1664;
block145:;
frost$core$Int $tmp1670 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:421:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1671 = $tmp727.value;
int64_t $tmp1672 = $tmp1670.value;
bool $tmp1673 = $tmp1671 == $tmp1672;
frost$core$Bit $tmp1674 = (frost$core$Bit) {$tmp1673};
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block155; else goto block156;
block155:;
org$frostlang$frostc$Position* $tmp1676 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1677 = *$tmp1676;
frost$core$String** $tmp1678 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1679 = *$tmp1678;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
frost$core$String* $tmp1680 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local62) = $tmp1679;
org$frostlang$frostc$FixedArray** $tmp1681 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1682 = *$tmp1681;
*(&local63) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
org$frostlang$frostc$FixedArray* $tmp1683 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
*(&local63) = $tmp1682;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:422
frost$core$String* $tmp1684 = *(&local62);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:422:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$String* $tmp1685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1684, &$s1686);
org$frostlang$frostc$FixedArray* $tmp1687 = *(&local63);
ITable* $tmp1688 = ((frost$collections$CollectionView*) $tmp1687)->$class->itable;
while ($tmp1688->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1688 = $tmp1688->next;
}
$fn1690 $tmp1689 = $tmp1688->methods[3];
frost$core$String* $tmp1691 = $tmp1689(((frost$collections$CollectionView*) $tmp1687), &$s1692);
frost$core$String* $tmp1693 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1685, $tmp1691);
frost$core$String* $tmp1694 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1693, &$s1695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
org$frostlang$frostc$FixedArray* $tmp1696 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
*(&local63) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1697 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local62) = ((frost$core$String*) NULL);
return $tmp1694;
block156:;
frost$core$Int $tmp1698 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:424:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1699 = $tmp727.value;
int64_t $tmp1700 = $tmp1698.value;
bool $tmp1701 = $tmp1699 == $tmp1700;
frost$core$Bit $tmp1702 = (frost$core$Bit) {$tmp1701};
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block159; else goto block160;
block159:;
org$frostlang$frostc$Position* $tmp1704 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1705 = *$tmp1704;
frost$core$String** $tmp1706 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1707 = *$tmp1706;
*(&local64) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$String* $tmp1708 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local64) = $tmp1707;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:425
frost$core$String* $tmp1709 = *(&local64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
frost$core$String* $tmp1710 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local64) = ((frost$core$String*) NULL);
return $tmp1709;
block160:;
frost$core$Int $tmp1711 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:427:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1712 = $tmp727.value;
int64_t $tmp1713 = $tmp1711.value;
bool $tmp1714 = $tmp1712 == $tmp1713;
frost$core$Bit $tmp1715 = (frost$core$Bit) {$tmp1714};
bool $tmp1716 = $tmp1715.value;
if ($tmp1716) goto block162; else goto block163;
block162:;
org$frostlang$frostc$Position* $tmp1717 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1718 = *$tmp1717;
frost$core$String** $tmp1719 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1720 = *$tmp1719;
*(&local65) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$core$String* $tmp1721 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
*(&local65) = $tmp1720;
org$frostlang$frostc$FixedArray** $tmp1722 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1723 = *$tmp1722;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
org$frostlang$frostc$FixedArray* $tmp1724 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local66) = $tmp1723;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:428
frost$core$String* $tmp1725 = *(&local65);
frost$core$String* $tmp1726 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1727, $tmp1725);
frost$core$String* $tmp1728 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1726, &$s1729);
org$frostlang$frostc$FixedArray* $tmp1730 = *(&local66);
ITable* $tmp1731 = ((frost$collections$CollectionView*) $tmp1730)->$class->itable;
while ($tmp1731->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1731 = $tmp1731->next;
}
$fn1733 $tmp1732 = $tmp1731->methods[3];
frost$core$String* $tmp1734 = $tmp1732(((frost$collections$CollectionView*) $tmp1730), &$s1735);
frost$core$String* $tmp1736 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1728, $tmp1734);
frost$core$String* $tmp1737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1736, &$s1738);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
org$frostlang$frostc$FixedArray* $tmp1739 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1740 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
*(&local65) = ((frost$core$String*) NULL);
return $tmp1737;
block163:;
frost$core$Int $tmp1741 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:430:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1742 = $tmp727.value;
int64_t $tmp1743 = $tmp1741.value;
bool $tmp1744 = $tmp1742 == $tmp1743;
frost$core$Bit $tmp1745 = (frost$core$Bit) {$tmp1744};
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block165; else goto block166;
block165:;
org$frostlang$frostc$Position* $tmp1747 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1748 = *$tmp1747;
org$frostlang$frostc$ASTNode** $tmp1749 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1750 = *$tmp1749;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
org$frostlang$frostc$ASTNode* $tmp1751 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local67) = $tmp1750;
org$frostlang$frostc$FixedArray** $tmp1752 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1753 = *$tmp1752;
*(&local68) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
org$frostlang$frostc$FixedArray* $tmp1754 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
*(&local68) = $tmp1753;
org$frostlang$frostc$ASTNode** $tmp1755 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1756 = *$tmp1755;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
org$frostlang$frostc$ASTNode* $tmp1757 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
*(&local69) = $tmp1756;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:431
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1758 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1759 = *(&local67);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:431:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1761 $tmp1760 = ($fn1761) ((frost$core$Object*) $tmp1759)->$class->vtable[0];
frost$core$String* $tmp1762 = $tmp1760(((frost$core$Object*) $tmp1759));
frost$core$String* $tmp1763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1764, $tmp1762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
frost$core$String* $tmp1765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1763, &$s1766);
frost$core$MutableString$init$frost$core$String($tmp1758, $tmp1765);
*(&local70) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
frost$core$MutableString* $tmp1767 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
*(&local70) = $tmp1758;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:432
org$frostlang$frostc$FixedArray* $tmp1768 = *(&local68);
ITable* $tmp1769 = ((frost$collections$Iterable*) $tmp1768)->$class->itable;
while ($tmp1769->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1769 = $tmp1769->next;
}
$fn1771 $tmp1770 = $tmp1769->methods[0];
frost$collections$Iterator* $tmp1772 = $tmp1770(((frost$collections$Iterable*) $tmp1768));
goto block169;
block169:;
ITable* $tmp1773 = $tmp1772->$class->itable;
while ($tmp1773->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1773 = $tmp1773->next;
}
$fn1775 $tmp1774 = $tmp1773->methods[0];
frost$core$Bit $tmp1776 = $tmp1774($tmp1772);
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block171; else goto block170;
block170:;
*(&local71) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1778 = $tmp1772->$class->itable;
while ($tmp1778->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1778 = $tmp1778->next;
}
$fn1780 $tmp1779 = $tmp1778->methods[1];
frost$core$Object* $tmp1781 = $tmp1779($tmp1772);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1781)));
org$frostlang$frostc$ASTNode* $tmp1782 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
*(&local71) = ((org$frostlang$frostc$ASTNode*) $tmp1781);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:433
frost$core$MutableString* $tmp1783 = *(&local70);
org$frostlang$frostc$ASTNode* $tmp1784 = *(&local71);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:433:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1786 $tmp1785 = ($fn1786) ((frost$core$Object*) $tmp1784)->$class->vtable[0];
frost$core$String* $tmp1787 = $tmp1785(((frost$core$Object*) $tmp1784));
frost$core$String* $tmp1788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1787, &$s1789);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
frost$core$MutableString$append$frost$core$String($tmp1783, $tmp1788);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
frost$core$Frost$unref$frost$core$Object$Q($tmp1781);
org$frostlang$frostc$ASTNode* $tmp1790 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local71) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block169;
block171:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:435
frost$core$MutableString* $tmp1791 = *(&local70);
frost$core$MutableString$append$frost$core$String($tmp1791, &$s1792);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:436
org$frostlang$frostc$ASTNode* $tmp1793 = *(&local69);
frost$core$Bit $tmp1794 = (frost$core$Bit) {$tmp1793 != NULL};
bool $tmp1795 = $tmp1794.value;
if ($tmp1795) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:437
frost$core$MutableString* $tmp1796 = *(&local70);
org$frostlang$frostc$ASTNode* $tmp1797 = *(&local69);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:437:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1799 $tmp1798 = ($fn1799) ((frost$core$Object*) $tmp1797)->$class->vtable[0];
frost$core$String* $tmp1800 = $tmp1798(((frost$core$Object*) $tmp1797));
frost$core$String* $tmp1801 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1802, $tmp1800);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$String* $tmp1803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1801, &$s1804);
frost$core$MutableString$append$frost$core$String($tmp1796, $tmp1803);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
goto block174;
block174:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:439
frost$core$MutableString* $tmp1805 = *(&local70);
frost$core$String* $tmp1806 = frost$core$MutableString$finish$R$frost$core$String($tmp1805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$core$MutableString* $tmp1807 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
*(&local70) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1808 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1809 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
*(&local68) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1810 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1806;
block166:;
frost$core$Int $tmp1811 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:441:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1812 = $tmp727.value;
int64_t $tmp1813 = $tmp1811.value;
bool $tmp1814 = $tmp1812 == $tmp1813;
frost$core$Bit $tmp1815 = (frost$core$Bit) {$tmp1814};
bool $tmp1816 = $tmp1815.value;
if ($tmp1816) goto block176; else goto block177;
block176:;
org$frostlang$frostc$Position* $tmp1817 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1818 = *$tmp1817;
frost$core$UInt64* $tmp1819 = (frost$core$UInt64*) (param0->$data + 24);
frost$core$UInt64 $tmp1820 = *$tmp1819;
*(&local72) = $tmp1820;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:442
frost$core$UInt64 $tmp1821 = *(&local72);
frost$core$UInt64$wrapper* $tmp1822;
$tmp1822 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1822->value = $tmp1821;
$fn1824 $tmp1823 = ($fn1824) ((frost$core$Object*) $tmp1822)->$class->vtable[0];
frost$core$String* $tmp1825 = $tmp1823(((frost$core$Object*) $tmp1822));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
return $tmp1825;
block177:;
frost$core$Int $tmp1826 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:444:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1827 = $tmp727.value;
int64_t $tmp1828 = $tmp1826.value;
bool $tmp1829 = $tmp1827 == $tmp1828;
frost$core$Bit $tmp1830 = (frost$core$Bit) {$tmp1829};
bool $tmp1831 = $tmp1830.value;
if ($tmp1831) goto block179; else goto block180;
block179:;
org$frostlang$frostc$Position* $tmp1832 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1833 = *$tmp1832;
org$frostlang$frostc$IR$Value** $tmp1834 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1835 = *$tmp1834;
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
org$frostlang$frostc$IR$Value* $tmp1836 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
*(&local73) = $tmp1835;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:445
org$frostlang$frostc$IR$Value* $tmp1837 = *(&local73);
$fn1839 $tmp1838 = ($fn1839) ((frost$core$Object*) $tmp1837)->$class->vtable[0];
frost$core$String* $tmp1840 = $tmp1838(((frost$core$Object*) $tmp1837));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
org$frostlang$frostc$IR$Value* $tmp1841 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
*(&local73) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1840;
block180:;
frost$core$Int $tmp1842 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:447:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1843 = $tmp727.value;
int64_t $tmp1844 = $tmp1842.value;
bool $tmp1845 = $tmp1843 == $tmp1844;
frost$core$Bit $tmp1846 = (frost$core$Bit) {$tmp1845};
bool $tmp1847 = $tmp1846.value;
if ($tmp1847) goto block182; else goto block183;
block182:;
org$frostlang$frostc$Position* $tmp1848 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1849 = *$tmp1848;
frost$core$String** $tmp1850 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1851 = *$tmp1850;
*(&local74) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$String* $tmp1852 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local74) = $tmp1851;
org$frostlang$frostc$FixedArray** $tmp1853 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1854 = *$tmp1853;
*(&local75) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
org$frostlang$frostc$FixedArray* $tmp1855 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
*(&local75) = $tmp1854;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:448
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1856 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1856);
*(&local76) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$MutableString* $tmp1857 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
*(&local76) = $tmp1856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:449
frost$core$String* $tmp1858 = *(&local74);
frost$core$Bit $tmp1859 = (frost$core$Bit) {$tmp1858 != NULL};
bool $tmp1860 = $tmp1859.value;
if ($tmp1860) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:450
frost$core$MutableString* $tmp1861 = *(&local76);
frost$core$String* $tmp1862 = *(&local74);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:450:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
frost$core$String* $tmp1863 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1862, &$s1864);
frost$core$MutableString$append$frost$core$String($tmp1861, $tmp1863);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
goto block186;
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:452
frost$core$MutableString* $tmp1865 = *(&local76);
frost$core$MutableString$append$frost$core$String($tmp1865, &$s1866);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:453
org$frostlang$frostc$FixedArray* $tmp1867 = *(&local75);
ITable* $tmp1868 = ((frost$collections$Iterable*) $tmp1867)->$class->itable;
while ($tmp1868->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1868 = $tmp1868->next;
}
$fn1870 $tmp1869 = $tmp1868->methods[0];
frost$collections$Iterator* $tmp1871 = $tmp1869(((frost$collections$Iterable*) $tmp1867));
goto block188;
block188:;
ITable* $tmp1872 = $tmp1871->$class->itable;
while ($tmp1872->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1872 = $tmp1872->next;
}
$fn1874 $tmp1873 = $tmp1872->methods[0];
frost$core$Bit $tmp1875 = $tmp1873($tmp1871);
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block190; else goto block189;
block189:;
*(&local77) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1877 = $tmp1871->$class->itable;
while ($tmp1877->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1877 = $tmp1877->next;
}
$fn1879 $tmp1878 = $tmp1877->methods[1];
frost$core$Object* $tmp1880 = $tmp1878($tmp1871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1880)));
org$frostlang$frostc$ASTNode* $tmp1881 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
*(&local77) = ((org$frostlang$frostc$ASTNode*) $tmp1880);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:454
frost$core$MutableString* $tmp1882 = *(&local76);
org$frostlang$frostc$ASTNode* $tmp1883 = *(&local77);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:454:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1885 $tmp1884 = ($fn1885) ((frost$core$Object*) $tmp1883)->$class->vtable[0];
frost$core$String* $tmp1886 = $tmp1884(((frost$core$Object*) $tmp1883));
frost$core$String* $tmp1887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1886, &$s1888);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
frost$core$MutableString$append$frost$core$String($tmp1882, $tmp1887);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q($tmp1880);
org$frostlang$frostc$ASTNode* $tmp1889 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local77) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block188;
block190:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:456
frost$core$MutableString* $tmp1890 = *(&local76);
frost$core$MutableString$append$frost$core$String($tmp1890, &$s1891);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:457
frost$core$MutableString* $tmp1892 = *(&local76);
frost$core$String* $tmp1893 = frost$core$MutableString$finish$R$frost$core$String($tmp1892);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$MutableString* $tmp1894 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
*(&local76) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1895 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
*(&local75) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1896 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
*(&local74) = ((frost$core$String*) NULL);
return $tmp1893;
block183:;
frost$core$Int $tmp1897 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:459:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1898 = $tmp727.value;
int64_t $tmp1899 = $tmp1897.value;
bool $tmp1900 = $tmp1898 == $tmp1899;
frost$core$Bit $tmp1901 = (frost$core$Bit) {$tmp1900};
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block192; else goto block193;
block192:;
org$frostlang$frostc$Position* $tmp1903 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1904 = *$tmp1903;
org$frostlang$frostc$ASTNode** $tmp1905 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1906 = *$tmp1905;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
org$frostlang$frostc$ASTNode* $tmp1907 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local78) = $tmp1906;
org$frostlang$frostc$FixedArray** $tmp1908 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1909 = *$tmp1908;
*(&local79) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
org$frostlang$frostc$FixedArray* $tmp1910 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
*(&local79) = $tmp1909;
org$frostlang$frostc$FixedArray** $tmp1911 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1912 = *$tmp1911;
*(&local80) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
org$frostlang$frostc$FixedArray* $tmp1913 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
*(&local80) = $tmp1912;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:460
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1914 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1915 = *(&local78);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:460:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1917 $tmp1916 = ($fn1917) ((frost$core$Object*) $tmp1915)->$class->vtable[0];
frost$core$String* $tmp1918 = $tmp1916(((frost$core$Object*) $tmp1915));
frost$core$String* $tmp1919 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1920, $tmp1918);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
frost$core$String* $tmp1921 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1919, &$s1922);
frost$core$MutableString$init$frost$core$String($tmp1914, $tmp1921);
*(&local81) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
frost$core$MutableString* $tmp1923 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local81) = $tmp1914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:461
org$frostlang$frostc$FixedArray* $tmp1924 = *(&local79);
ITable* $tmp1925 = ((frost$collections$Iterable*) $tmp1924)->$class->itable;
while ($tmp1925->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1925 = $tmp1925->next;
}
$fn1927 $tmp1926 = $tmp1925->methods[0];
frost$collections$Iterator* $tmp1928 = $tmp1926(((frost$collections$Iterable*) $tmp1924));
goto block196;
block196:;
ITable* $tmp1929 = $tmp1928->$class->itable;
while ($tmp1929->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1929 = $tmp1929->next;
}
$fn1931 $tmp1930 = $tmp1929->methods[0];
frost$core$Bit $tmp1932 = $tmp1930($tmp1928);
bool $tmp1933 = $tmp1932.value;
if ($tmp1933) goto block198; else goto block197;
block197:;
*(&local82) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1934 = $tmp1928->$class->itable;
while ($tmp1934->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1934 = $tmp1934->next;
}
$fn1936 $tmp1935 = $tmp1934->methods[1];
frost$core$Object* $tmp1937 = $tmp1935($tmp1928);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1937)));
org$frostlang$frostc$ASTNode* $tmp1938 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local82) = ((org$frostlang$frostc$ASTNode*) $tmp1937);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:462
frost$core$MutableString* $tmp1939 = *(&local81);
org$frostlang$frostc$ASTNode* $tmp1940 = *(&local82);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:462:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn1942 $tmp1941 = ($fn1942) ((frost$core$Object*) $tmp1940)->$class->vtable[0];
frost$core$String* $tmp1943 = $tmp1941(((frost$core$Object*) $tmp1940));
frost$core$String* $tmp1944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1943, &$s1945);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
frost$core$MutableString$append$frost$core$String($tmp1939, $tmp1944);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
frost$core$Frost$unref$frost$core$Object$Q($tmp1937);
org$frostlang$frostc$ASTNode* $tmp1946 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
*(&local82) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block196;
block198:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:464
org$frostlang$frostc$FixedArray* $tmp1947 = *(&local80);
frost$core$Bit $tmp1948 = (frost$core$Bit) {$tmp1947 != NULL};
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:465
frost$core$MutableString* $tmp1950 = *(&local81);
org$frostlang$frostc$FixedArray* $tmp1951 = *(&local80);
ITable* $tmp1952 = ((frost$collections$CollectionView*) $tmp1951)->$class->itable;
while ($tmp1952->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1952 = $tmp1952->next;
}
$fn1954 $tmp1953 = $tmp1952->methods[3];
frost$core$String* $tmp1955 = $tmp1953(((frost$collections$CollectionView*) $tmp1951), &$s1956);
frost$core$String* $tmp1957 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1958, $tmp1955);
frost$core$String* $tmp1959 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1957, &$s1960);
frost$core$MutableString$append$frost$core$String($tmp1950, $tmp1959);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
goto block201;
block201:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:467
frost$core$MutableString* $tmp1961 = *(&local81);
frost$core$MutableString$append$frost$core$String($tmp1961, &$s1962);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:468
frost$core$MutableString* $tmp1963 = *(&local81);
frost$core$String* $tmp1964 = frost$core$MutableString$finish$R$frost$core$String($tmp1963);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
frost$core$MutableString* $tmp1965 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
*(&local81) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1966 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
*(&local80) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1967 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
*(&local79) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1968 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1964;
block193:;
frost$core$Int $tmp1969 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:470:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1970 = $tmp727.value;
int64_t $tmp1971 = $tmp1969.value;
bool $tmp1972 = $tmp1970 == $tmp1971;
frost$core$Bit $tmp1973 = (frost$core$Bit) {$tmp1972};
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block202; else goto block203;
block202:;
org$frostlang$frostc$Position* $tmp1975 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1976 = *$tmp1975;
org$frostlang$frostc$ASTNode** $tmp1977 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1978 = *$tmp1977;
*(&local83) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
org$frostlang$frostc$ASTNode* $tmp1979 = *(&local83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
*(&local83) = $tmp1978;
org$frostlang$frostc$FixedArray** $tmp1980 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1981 = *$tmp1980;
*(&local84) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
org$frostlang$frostc$FixedArray* $tmp1982 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local84) = $tmp1981;
org$frostlang$frostc$MethodDecl$Kind* $tmp1983 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp1984 = *$tmp1983;
*(&local85) = $tmp1984;
frost$core$String** $tmp1985 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp1986 = *$tmp1985;
*(&local86) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
frost$core$String* $tmp1987 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
*(&local86) = $tmp1986;
org$frostlang$frostc$FixedArray** $tmp1988 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1989 = *$tmp1988;
*(&local87) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
org$frostlang$frostc$FixedArray* $tmp1990 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local87) = $tmp1989;
org$frostlang$frostc$FixedArray** $tmp1991 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp1992 = *$tmp1991;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
org$frostlang$frostc$FixedArray* $tmp1993 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
*(&local88) = $tmp1992;
org$frostlang$frostc$ASTNode** $tmp1994 = (org$frostlang$frostc$ASTNode**) (param0->$data + 72);
org$frostlang$frostc$ASTNode* $tmp1995 = *$tmp1994;
*(&local89) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
org$frostlang$frostc$ASTNode* $tmp1996 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local89) = $tmp1995;
org$frostlang$frostc$FixedArray** $tmp1997 = (org$frostlang$frostc$FixedArray**) (param0->$data + 80);
org$frostlang$frostc$FixedArray* $tmp1998 = *$tmp1997;
*(&local90) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
org$frostlang$frostc$FixedArray* $tmp1999 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local90) = $tmp1998;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:472
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2000 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2000);
*(&local91) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$MutableString* $tmp2001 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
*(&local91) = $tmp2000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:473
org$frostlang$frostc$ASTNode* $tmp2002 = *(&local83);
frost$core$Bit $tmp2003 = (frost$core$Bit) {$tmp2002 != NULL};
bool $tmp2004 = $tmp2003.value;
if ($tmp2004) goto block205; else goto block206;
block205:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:474
frost$core$MutableString* $tmp2005 = *(&local91);
org$frostlang$frostc$ASTNode* $tmp2006 = *(&local83);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:474:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2008 $tmp2007 = ($fn2008) ((frost$core$Object*) $tmp2006)->$class->vtable[0];
frost$core$String* $tmp2009 = $tmp2007(((frost$core$Object*) $tmp2006));
frost$core$String* $tmp2010 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2009, &$s2011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
frost$core$MutableString$append$frost$core$String($tmp2005, $tmp2010);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
goto block206;
block206:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:476
org$frostlang$frostc$FixedArray* $tmp2012 = *(&local84);
ITable* $tmp2013 = ((frost$collections$Iterable*) $tmp2012)->$class->itable;
while ($tmp2013->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2013 = $tmp2013->next;
}
$fn2015 $tmp2014 = $tmp2013->methods[0];
frost$collections$Iterator* $tmp2016 = $tmp2014(((frost$collections$Iterable*) $tmp2012));
goto block208;
block208:;
ITable* $tmp2017 = $tmp2016->$class->itable;
while ($tmp2017->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2017 = $tmp2017->next;
}
$fn2019 $tmp2018 = $tmp2017->methods[0];
frost$core$Bit $tmp2020 = $tmp2018($tmp2016);
bool $tmp2021 = $tmp2020.value;
if ($tmp2021) goto block210; else goto block209;
block209:;
*(&local92) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2022 = $tmp2016->$class->itable;
while ($tmp2022->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2022 = $tmp2022->next;
}
$fn2024 $tmp2023 = $tmp2022->methods[1];
frost$core$Object* $tmp2025 = $tmp2023($tmp2016);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2025)));
org$frostlang$frostc$ASTNode* $tmp2026 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
*(&local92) = ((org$frostlang$frostc$ASTNode*) $tmp2025);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:477
frost$core$MutableString* $tmp2027 = *(&local91);
org$frostlang$frostc$ASTNode* $tmp2028 = *(&local92);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:477:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2030 $tmp2029 = ($fn2030) ((frost$core$Object*) $tmp2028)->$class->vtable[0];
frost$core$String* $tmp2031 = $tmp2029(((frost$core$Object*) $tmp2028));
frost$core$String* $tmp2032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2031, &$s2033);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
frost$core$MutableString$append$frost$core$String($tmp2027, $tmp2032);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q($tmp2025);
org$frostlang$frostc$ASTNode* $tmp2034 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local92) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block208;
block210:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:479
org$frostlang$frostc$MethodDecl$Kind $tmp2035 = *(&local85);
frost$core$Int $tmp2036 = $tmp2035.$rawValue;
frost$core$Int $tmp2037 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:480:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2038 = $tmp2036.value;
int64_t $tmp2039 = $tmp2037.value;
bool $tmp2040 = $tmp2038 == $tmp2039;
frost$core$Bit $tmp2041 = (frost$core$Bit) {$tmp2040};
bool $tmp2042 = $tmp2041.value;
if ($tmp2042) goto block213; else goto block214;
block213:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:480
frost$core$MutableString* $tmp2043 = *(&local91);
frost$core$MutableString$append$frost$core$String($tmp2043, &$s2044);
goto block212;
block214:;
frost$core$Int $tmp2045 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:481:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2046 = $tmp2036.value;
int64_t $tmp2047 = $tmp2045.value;
bool $tmp2048 = $tmp2046 == $tmp2047;
frost$core$Bit $tmp2049 = (frost$core$Bit) {$tmp2048};
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block216; else goto block217;
block216:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:481
frost$core$MutableString* $tmp2051 = *(&local91);
frost$core$MutableString$append$frost$core$String($tmp2051, &$s2052);
goto block212;
block217:;
frost$core$Int $tmp2053 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:482:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2054 = $tmp2036.value;
int64_t $tmp2055 = $tmp2053.value;
bool $tmp2056 = $tmp2054 == $tmp2055;
frost$core$Bit $tmp2057 = (frost$core$Bit) {$tmp2056};
bool $tmp2058 = $tmp2057.value;
if ($tmp2058) goto block219; else goto block212;
block219:;
goto block212;
block212:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:484
frost$core$MutableString* $tmp2059 = *(&local91);
frost$core$String* $tmp2060 = *(&local86);
frost$core$MutableString$append$frost$core$String($tmp2059, $tmp2060);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:485
org$frostlang$frostc$FixedArray* $tmp2061 = *(&local87);
frost$core$Bit $tmp2062 = (frost$core$Bit) {$tmp2061 != NULL};
bool $tmp2063 = $tmp2062.value;
if ($tmp2063) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:486
frost$core$MutableString* $tmp2064 = *(&local91);
org$frostlang$frostc$FixedArray* $tmp2065 = *(&local87);
ITable* $tmp2066 = ((frost$collections$CollectionView*) $tmp2065)->$class->itable;
while ($tmp2066->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2066 = $tmp2066->next;
}
$fn2068 $tmp2067 = $tmp2066->methods[3];
frost$core$String* $tmp2069 = $tmp2067(((frost$collections$CollectionView*) $tmp2065), &$s2070);
frost$core$String* $tmp2071 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2072, $tmp2069);
frost$core$String* $tmp2073 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2071, &$s2074);
frost$core$MutableString$append$frost$core$String($tmp2064, $tmp2073);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
goto block222;
block222:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:488
frost$core$MutableString* $tmp2075 = *(&local91);
org$frostlang$frostc$FixedArray* $tmp2076 = *(&local88);
ITable* $tmp2077 = ((frost$collections$CollectionView*) $tmp2076)->$class->itable;
while ($tmp2077->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2077 = $tmp2077->next;
}
$fn2079 $tmp2078 = $tmp2077->methods[3];
frost$core$String* $tmp2080 = $tmp2078(((frost$collections$CollectionView*) $tmp2076), &$s2081);
frost$core$String* $tmp2082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2083, $tmp2080);
frost$core$String* $tmp2084 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2082, &$s2085);
frost$core$MutableString$append$frost$core$String($tmp2075, $tmp2084);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:489
org$frostlang$frostc$ASTNode* $tmp2086 = *(&local89);
frost$core$Bit $tmp2087 = (frost$core$Bit) {$tmp2086 != NULL};
bool $tmp2088 = $tmp2087.value;
if ($tmp2088) goto block223; else goto block224;
block223:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:490
frost$core$MutableString* $tmp2089 = *(&local91);
org$frostlang$frostc$ASTNode* $tmp2090 = *(&local89);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:490:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2092 $tmp2091 = ($fn2092) ((frost$core$Object*) $tmp2090)->$class->vtable[0];
frost$core$String* $tmp2093 = $tmp2091(((frost$core$Object*) $tmp2090));
frost$core$String* $tmp2094 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2095, $tmp2093);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
frost$core$String* $tmp2096 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2094, &$s2097);
frost$core$MutableString$append$frost$core$String($tmp2089, $tmp2096);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
goto block224;
block224:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:492
org$frostlang$frostc$FixedArray* $tmp2098 = *(&local90);
frost$core$Bit $tmp2099 = (frost$core$Bit) {$tmp2098 != NULL};
bool $tmp2100 = $tmp2099.value;
if ($tmp2100) goto block226; else goto block227;
block226:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:493
frost$core$MutableString* $tmp2101 = *(&local91);
frost$core$MutableString$append$frost$core$String($tmp2101, &$s2102);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:494
org$frostlang$frostc$FixedArray* $tmp2103 = *(&local90);
ITable* $tmp2104 = ((frost$collections$Iterable*) $tmp2103)->$class->itable;
while ($tmp2104->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2104 = $tmp2104->next;
}
$fn2106 $tmp2105 = $tmp2104->methods[0];
frost$collections$Iterator* $tmp2107 = $tmp2105(((frost$collections$Iterable*) $tmp2103));
goto block228;
block228:;
ITable* $tmp2108 = $tmp2107->$class->itable;
while ($tmp2108->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2108 = $tmp2108->next;
}
$fn2110 $tmp2109 = $tmp2108->methods[0];
frost$core$Bit $tmp2111 = $tmp2109($tmp2107);
bool $tmp2112 = $tmp2111.value;
if ($tmp2112) goto block230; else goto block229;
block229:;
*(&local93) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2113 = $tmp2107->$class->itable;
while ($tmp2113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2113 = $tmp2113->next;
}
$fn2115 $tmp2114 = $tmp2113->methods[1];
frost$core$Object* $tmp2116 = $tmp2114($tmp2107);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2116)));
org$frostlang$frostc$ASTNode* $tmp2117 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
*(&local93) = ((org$frostlang$frostc$ASTNode*) $tmp2116);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:495
frost$core$MutableString* $tmp2118 = *(&local91);
org$frostlang$frostc$ASTNode* $tmp2119 = *(&local93);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:495:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2121 $tmp2120 = ($fn2121) ((frost$core$Object*) $tmp2119)->$class->vtable[0];
frost$core$String* $tmp2122 = $tmp2120(((frost$core$Object*) $tmp2119));
frost$core$String* $tmp2123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2122, &$s2124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
frost$core$MutableString$append$frost$core$String($tmp2118, $tmp2123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
frost$core$Frost$unref$frost$core$Object$Q($tmp2116);
org$frostlang$frostc$ASTNode* $tmp2125 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local93) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block228;
block230:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:497
frost$core$MutableString* $tmp2126 = *(&local91);
frost$core$MutableString$append$frost$core$String($tmp2126, &$s2127);
goto block227;
block227:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:499
frost$core$MutableString* $tmp2128 = *(&local91);
frost$core$String* $tmp2129 = frost$core$MutableString$finish$R$frost$core$String($tmp2128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
frost$core$MutableString* $tmp2130 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
*(&local91) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2131 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
*(&local90) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2132 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
*(&local89) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2133 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2134 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
*(&local87) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2135 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
*(&local86) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2136 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
*(&local84) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2137 = *(&local83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
*(&local83) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2129;
block203:;
frost$core$Int $tmp2138 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:501:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2139 = $tmp727.value;
int64_t $tmp2140 = $tmp2138.value;
bool $tmp2141 = $tmp2139 == $tmp2140;
frost$core$Bit $tmp2142 = (frost$core$Bit) {$tmp2141};
bool $tmp2143 = $tmp2142.value;
if ($tmp2143) goto block232; else goto block233;
block232:;
org$frostlang$frostc$Position* $tmp2144 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2145 = *$tmp2144;
org$frostlang$frostc$parser$Token$Kind* $tmp2146 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp2147 = *$tmp2146;
*(&local94) = $tmp2147;
org$frostlang$frostc$FixedArray** $tmp2148 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2149 = *$tmp2148;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
org$frostlang$frostc$FixedArray* $tmp2150 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
*(&local95) = $tmp2149;
org$frostlang$frostc$ASTNode** $tmp2151 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp2152 = *$tmp2151;
*(&local96) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
org$frostlang$frostc$ASTNode* $tmp2153 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
*(&local96) = $tmp2152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:502
*(&local97) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:503
org$frostlang$frostc$parser$Token$Kind $tmp2154 = *(&local94);
frost$core$Int $tmp2155 = $tmp2154.$rawValue;
frost$core$Int $tmp2156 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:504:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2157 = $tmp2155.value;
int64_t $tmp2158 = $tmp2156.value;
bool $tmp2159 = $tmp2157 == $tmp2158;
frost$core$Bit $tmp2160 = (frost$core$Bit) {$tmp2159};
bool $tmp2161 = $tmp2160.value;
if ($tmp2161) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2162));
frost$core$String* $tmp2163 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
*(&local97) = &$s2164;
goto block235;
block237:;
frost$core$Int $tmp2165 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:507:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2166 = $tmp2155.value;
int64_t $tmp2167 = $tmp2165.value;
bool $tmp2168 = $tmp2166 == $tmp2167;
frost$core$Bit $tmp2169 = (frost$core$Bit) {$tmp2168};
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block239; else goto block240;
block239:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:508
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2171));
frost$core$String* $tmp2172 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
*(&local97) = &$s2173;
goto block235;
block240:;
frost$core$Int $tmp2174 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:510:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2175 = $tmp2155.value;
int64_t $tmp2176 = $tmp2174.value;
bool $tmp2177 = $tmp2175 == $tmp2176;
frost$core$Bit $tmp2178 = (frost$core$Bit) {$tmp2177};
bool $tmp2179 = $tmp2178.value;
if ($tmp2179) goto block242; else goto block243;
block242:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:511
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2180));
frost$core$String* $tmp2181 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
*(&local97) = &$s2182;
goto block235;
block243:;
frost$core$Int $tmp2183 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:513:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2184 = $tmp2155.value;
int64_t $tmp2185 = $tmp2183.value;
bool $tmp2186 = $tmp2184 == $tmp2185;
frost$core$Bit $tmp2187 = (frost$core$Bit) {$tmp2186};
bool $tmp2188 = $tmp2187.value;
if ($tmp2188) goto block245; else goto block235;
block245:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:514
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2189));
frost$core$String* $tmp2190 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
*(&local97) = &$s2191;
goto block235;
block235:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:517
org$frostlang$frostc$FixedArray* $tmp2192 = *(&local95);
ITable* $tmp2193 = ((frost$collections$CollectionView*) $tmp2192)->$class->itable;
while ($tmp2193->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2193 = $tmp2193->next;
}
$fn2195 $tmp2194 = $tmp2193->methods[3];
frost$core$String* $tmp2196 = $tmp2194(((frost$collections$CollectionView*) $tmp2192), &$s2197);
frost$core$String* $tmp2198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2199, $tmp2196);
frost$core$String* $tmp2200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2198, &$s2201);
frost$core$String* $tmp2202 = *(&local97);
frost$core$String* $tmp2203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2200, $tmp2202);
frost$core$String* $tmp2204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2203, &$s2205);
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
frost$core$String* $tmp2206 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
*(&local98) = $tmp2204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:518
org$frostlang$frostc$ASTNode* $tmp2207 = *(&local96);
frost$core$Bit $tmp2208 = (frost$core$Bit) {$tmp2207 != NULL};
bool $tmp2209 = $tmp2208.value;
if ($tmp2209) goto block247; else goto block248;
block247:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:519
frost$core$String* $tmp2210 = *(&local98);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:519:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
frost$core$String* $tmp2211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2210, &$s2212);
org$frostlang$frostc$ASTNode* $tmp2213 = *(&local96);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:519:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2215 $tmp2214 = ($fn2215) ((frost$core$Object*) $tmp2213)->$class->vtable[0];
frost$core$String* $tmp2216 = $tmp2214(((frost$core$Object*) $tmp2213));
frost$core$String* $tmp2217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2211, $tmp2216);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
frost$core$String* $tmp2218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2217, &$s2219);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
frost$core$String* $tmp2220 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
*(&local98) = ((frost$core$String*) NULL);
frost$core$String* $tmp2221 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
*(&local97) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2222 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local96) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2223 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2218;
block248:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:521
frost$core$String* $tmp2224 = *(&local98);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:521:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
frost$core$String* $tmp2225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2224, &$s2226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
frost$core$String* $tmp2227 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local98) = ((frost$core$String*) NULL);
frost$core$String* $tmp2228 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
*(&local97) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2229 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
*(&local96) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2230 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2225;
block233:;
frost$core$Int $tmp2231 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:523:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2232 = $tmp727.value;
int64_t $tmp2233 = $tmp2231.value;
bool $tmp2234 = $tmp2232 == $tmp2233;
frost$core$Bit $tmp2235 = (frost$core$Bit) {$tmp2234};
bool $tmp2236 = $tmp2235.value;
if ($tmp2236) goto block252; else goto block253;
block252:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:524
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2237));
return &$s2238;
block253:;
frost$core$Int $tmp2239 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:526:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2240 = $tmp727.value;
int64_t $tmp2241 = $tmp2239.value;
bool $tmp2242 = $tmp2240 == $tmp2241;
frost$core$Bit $tmp2243 = (frost$core$Bit) {$tmp2242};
bool $tmp2244 = $tmp2243.value;
if ($tmp2244) goto block255; else goto block256;
block255:;
org$frostlang$frostc$Position* $tmp2245 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2246 = *$tmp2245;
org$frostlang$frostc$ASTNode** $tmp2247 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2248 = *$tmp2247;
*(&local99) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
org$frostlang$frostc$ASTNode* $tmp2249 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
*(&local99) = $tmp2248;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:527
org$frostlang$frostc$ASTNode* $tmp2250 = *(&local99);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:527:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2252 $tmp2251 = ($fn2252) ((frost$core$Object*) $tmp2250)->$class->vtable[0];
frost$core$String* $tmp2253 = $tmp2251(((frost$core$Object*) $tmp2250));
frost$core$String* $tmp2254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2253, &$s2255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
org$frostlang$frostc$ASTNode* $tmp2256 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local99) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2254;
block256:;
frost$core$Int $tmp2257 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:529:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2258 = $tmp727.value;
int64_t $tmp2259 = $tmp2257.value;
bool $tmp2260 = $tmp2258 == $tmp2259;
frost$core$Bit $tmp2261 = (frost$core$Bit) {$tmp2260};
bool $tmp2262 = $tmp2261.value;
if ($tmp2262) goto block259; else goto block260;
block259:;
org$frostlang$frostc$Position* $tmp2263 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2264 = *$tmp2263;
frost$core$String** $tmp2265 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2266 = *$tmp2265;
*(&local100) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$String* $tmp2267 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
*(&local100) = $tmp2266;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:530
frost$core$String* $tmp2268 = *(&local100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
frost$core$String* $tmp2269 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
*(&local100) = ((frost$core$String*) NULL);
return $tmp2268;
block260:;
frost$core$Int $tmp2270 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:532:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2271 = $tmp727.value;
int64_t $tmp2272 = $tmp2270.value;
bool $tmp2273 = $tmp2271 == $tmp2272;
frost$core$Bit $tmp2274 = (frost$core$Bit) {$tmp2273};
bool $tmp2275 = $tmp2274.value;
if ($tmp2275) goto block262; else goto block263;
block262:;
org$frostlang$frostc$Position* $tmp2276 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2277 = *$tmp2276;
frost$core$String** $tmp2278 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2279 = *$tmp2278;
*(&local101) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
frost$core$String* $tmp2280 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
*(&local101) = $tmp2279;
org$frostlang$frostc$ASTNode** $tmp2281 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2282 = *$tmp2281;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
org$frostlang$frostc$ASTNode* $tmp2283 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
*(&local102) = $tmp2282;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:533
frost$core$String* $tmp2284 = *(&local101);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:533:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
frost$core$String* $tmp2285 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2284, &$s2286);
org$frostlang$frostc$ASTNode* $tmp2287 = *(&local102);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:533:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2289 $tmp2288 = ($fn2289) ((frost$core$Object*) $tmp2287)->$class->vtable[0];
frost$core$String* $tmp2290 = $tmp2288(((frost$core$Object*) $tmp2287));
frost$core$String* $tmp2291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2285, $tmp2290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
frost$core$String* $tmp2292 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2291, &$s2293);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
org$frostlang$frostc$ASTNode* $tmp2294 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2295 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
*(&local101) = ((frost$core$String*) NULL);
return $tmp2292;
block263:;
frost$core$Int $tmp2296 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:535:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2297 = $tmp727.value;
int64_t $tmp2298 = $tmp2296.value;
bool $tmp2299 = $tmp2297 == $tmp2298;
frost$core$Bit $tmp2300 = (frost$core$Bit) {$tmp2299};
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block267; else goto block268;
block267:;
org$frostlang$frostc$Position* $tmp2302 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2303 = *$tmp2302;
org$frostlang$frostc$ASTNode** $tmp2304 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2305 = *$tmp2304;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
org$frostlang$frostc$ASTNode* $tmp2306 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local103) = $tmp2305;
frost$core$Bit* $tmp2307 = (frost$core$Bit*) (param0->$data + 32);
frost$core$Bit $tmp2308 = *$tmp2307;
*(&local104) = $tmp2308;
org$frostlang$frostc$ASTNode** $tmp2309 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp2310 = *$tmp2309;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
org$frostlang$frostc$ASTNode* $tmp2311 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
*(&local105) = $tmp2310;
org$frostlang$frostc$ASTNode** $tmp2312 = (org$frostlang$frostc$ASTNode**) (param0->$data + 41);
org$frostlang$frostc$ASTNode* $tmp2313 = *$tmp2312;
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
org$frostlang$frostc$ASTNode* $tmp2314 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
*(&local106) = $tmp2313;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:536
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2315 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2315);
*(&local107) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$MutableString* $tmp2316 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
*(&local107) = $tmp2315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:537
org$frostlang$frostc$ASTNode* $tmp2317 = *(&local103);
frost$core$Bit $tmp2318 = (frost$core$Bit) {$tmp2317 != NULL};
bool $tmp2319 = $tmp2318.value;
if ($tmp2319) goto block270; else goto block271;
block270:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:538
frost$core$MutableString* $tmp2320 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp2321 = *(&local103);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from ASTNode.frost:538:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn2323 $tmp2322 = ($fn2323) ((frost$core$Object*) $tmp2321)->$class->vtable[0];
frost$core$String* $tmp2324 = $tmp2322(((frost$core$Object*) $tmp2321));
frost$core$MutableString$append$frost$core$String($tmp2320, $tmp2324);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
goto block271;
block271:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:540
frost$core$Bit $tmp2325 = *(&local104);
bool $tmp2326 = $tmp2325.value;
if ($tmp2326) goto block273; else goto block275;
block273:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:541
frost$core$MutableString* $tmp2327 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp2327, &$s2328);
goto block274;
block275:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:544
frost$core$MutableString* $tmp2329 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp2329, &$s2330);
goto block274;
block274:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:546
org$frostlang$frostc$ASTNode* $tmp2331 = *(&local105);
frost$core$Bit $tmp2332 = (frost$core$Bit) {$tmp2331 != NULL};
bool $tmp2333 = $tmp2332.value;
if ($tmp2333) goto block276; else goto block277;
block276:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:547
frost$core$MutableString* $tmp2334 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp2335 = *(&local105);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from ASTNode.frost:547:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn2337 $tmp2336 = ($fn2337) ((frost$core$Object*) $tmp2335)->$class->vtable[0];
frost$core$String* $tmp2338 = $tmp2336(((frost$core$Object*) $tmp2335));
frost$core$MutableString$append$frost$core$String($tmp2334, $tmp2338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
goto block277;
block277:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:549
org$frostlang$frostc$ASTNode* $tmp2339 = *(&local106);
frost$core$Bit $tmp2340 = (frost$core$Bit) {$tmp2339 != NULL};
bool $tmp2341 = $tmp2340.value;
if ($tmp2341) goto block279; else goto block280;
block279:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:550
frost$core$MutableString* $tmp2342 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp2343 = *(&local106);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:550:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2345 $tmp2344 = ($fn2345) ((frost$core$Object*) $tmp2343)->$class->vtable[0];
frost$core$String* $tmp2346 = $tmp2344(((frost$core$Object*) $tmp2343));
frost$core$String* $tmp2347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2348, $tmp2346);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$MutableString$append$frost$core$String($tmp2342, $tmp2347);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
goto block280;
block280:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:552
frost$core$MutableString* $tmp2349 = *(&local107);
frost$core$String* $tmp2350 = frost$core$MutableString$finish$R$frost$core$String($tmp2349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
frost$core$MutableString* $tmp2351 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
*(&local107) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2352 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2353 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2354 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2350;
block268:;
frost$core$Int $tmp2355 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:554:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2356 = $tmp727.value;
int64_t $tmp2357 = $tmp2355.value;
bool $tmp2358 = $tmp2356 == $tmp2357;
frost$core$Bit $tmp2359 = (frost$core$Bit) {$tmp2358};
bool $tmp2360 = $tmp2359.value;
if ($tmp2360) goto block282; else goto block283;
block282:;
org$frostlang$frostc$Position* $tmp2361 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2362 = *$tmp2361;
frost$core$Real64* $tmp2363 = (frost$core$Real64*) (param0->$data + 24);
frost$core$Real64 $tmp2364 = *$tmp2363;
*(&local108) = $tmp2364;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:555
frost$core$Real64 $tmp2365 = *(&local108);
frost$core$Real64$wrapper* $tmp2366;
$tmp2366 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp2366->value = $tmp2365;
$fn2368 $tmp2367 = ($fn2368) ((frost$core$Object*) $tmp2366)->$class->vtable[0];
frost$core$String* $tmp2369 = $tmp2367(((frost$core$Object*) $tmp2366));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
return $tmp2369;
block283:;
frost$core$Int $tmp2370 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:557:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2371 = $tmp727.value;
int64_t $tmp2372 = $tmp2370.value;
bool $tmp2373 = $tmp2371 == $tmp2372;
frost$core$Bit $tmp2374 = (frost$core$Bit) {$tmp2373};
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block285; else goto block286;
block285:;
org$frostlang$frostc$Position* $tmp2376 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2377 = *$tmp2376;
frost$core$String** $tmp2378 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2379 = *$tmp2378;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
frost$core$String* $tmp2380 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
*(&local109) = $tmp2379;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:558
frost$core$String* $tmp2381 = *(&local109);
frost$core$String* $tmp2382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2383, $tmp2381);
frost$core$String* $tmp2384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2382, &$s2385);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
frost$core$String* $tmp2386 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
*(&local109) = ((frost$core$String*) NULL);
return $tmp2384;
block286:;
frost$core$Int $tmp2387 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:560:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2388 = $tmp727.value;
int64_t $tmp2389 = $tmp2387.value;
bool $tmp2390 = $tmp2388 == $tmp2389;
frost$core$Bit $tmp2391 = (frost$core$Bit) {$tmp2390};
bool $tmp2392 = $tmp2391.value;
if ($tmp2392) goto block288; else goto block289;
block288:;
org$frostlang$frostc$Position* $tmp2393 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2394 = *$tmp2393;
org$frostlang$frostc$ASTNode** $tmp2395 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2396 = *$tmp2395;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
org$frostlang$frostc$ASTNode* $tmp2397 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
*(&local110) = $tmp2396;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:561
org$frostlang$frostc$ASTNode* $tmp2398 = *(&local110);
frost$core$Bit $tmp2399 = (frost$core$Bit) {$tmp2398 != NULL};
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block291; else goto block292;
block291:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:562
org$frostlang$frostc$ASTNode* $tmp2401 = *(&local110);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:562:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2403 $tmp2402 = ($fn2403) ((frost$core$Object*) $tmp2401)->$class->vtable[0];
frost$core$String* $tmp2404 = $tmp2402(((frost$core$Object*) $tmp2401));
frost$core$String* $tmp2405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2406, $tmp2404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
frost$core$String* $tmp2407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2405, &$s2408);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
org$frostlang$frostc$ASTNode* $tmp2409 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2407;
block292:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:564
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2410));
org$frostlang$frostc$ASTNode* $tmp2411 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2412;
block289:;
frost$core$Int $tmp2413 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:566:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2414 = $tmp727.value;
int64_t $tmp2415 = $tmp2413.value;
bool $tmp2416 = $tmp2414 == $tmp2415;
frost$core$Bit $tmp2417 = (frost$core$Bit) {$tmp2416};
bool $tmp2418 = $tmp2417.value;
if ($tmp2418) goto block294; else goto block295;
block294:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:567
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2419));
return &$s2420;
block295:;
frost$core$Int $tmp2421 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:569:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2422 = $tmp727.value;
int64_t $tmp2423 = $tmp2421.value;
bool $tmp2424 = $tmp2422 == $tmp2423;
frost$core$Bit $tmp2425 = (frost$core$Bit) {$tmp2424};
bool $tmp2426 = $tmp2425.value;
if ($tmp2426) goto block297; else goto block298;
block297:;
org$frostlang$frostc$Position* $tmp2427 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2428 = *$tmp2427;
frost$core$String** $tmp2429 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2430 = *$tmp2429;
*(&local111) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
frost$core$String* $tmp2431 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
*(&local111) = $tmp2430;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:570
frost$core$String* $tmp2432 = *(&local111);
frost$core$String* $tmp2433 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp2432, &$s2434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
frost$core$String* $tmp2435 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local111) = ((frost$core$String*) NULL);
return $tmp2433;
block298:;
frost$core$Int $tmp2436 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:572:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2437 = $tmp727.value;
int64_t $tmp2438 = $tmp2436.value;
bool $tmp2439 = $tmp2437 == $tmp2438;
frost$core$Bit $tmp2440 = (frost$core$Bit) {$tmp2439};
bool $tmp2441 = $tmp2440.value;
if ($tmp2441) goto block300; else goto block301;
block300:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2442));
return &$s2443;
block301:;
frost$core$Int $tmp2444 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:575:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2445 = $tmp727.value;
int64_t $tmp2446 = $tmp2444.value;
bool $tmp2447 = $tmp2445 == $tmp2446;
frost$core$Bit $tmp2448 = (frost$core$Bit) {$tmp2447};
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block303; else goto block304;
block303:;
org$frostlang$frostc$Position* $tmp2450 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2451 = *$tmp2450;
org$frostlang$frostc$FixedArray** $tmp2452 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2453 = *$tmp2452;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
org$frostlang$frostc$FixedArray* $tmp2454 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
*(&local112) = $tmp2453;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:576
org$frostlang$frostc$FixedArray* $tmp2455 = *(&local112);
ITable* $tmp2456 = ((frost$collections$CollectionView*) $tmp2455)->$class->itable;
while ($tmp2456->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2456 = $tmp2456->next;
}
$fn2458 $tmp2457 = $tmp2456->methods[3];
frost$core$String* $tmp2459 = $tmp2457(((frost$collections$CollectionView*) $tmp2455), &$s2460);
frost$core$String* $tmp2461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2462, $tmp2459);
frost$core$String* $tmp2463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2461, &$s2464);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
org$frostlang$frostc$FixedArray* $tmp2465 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2463;
block304:;
frost$core$Int $tmp2466 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:578:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2467 = $tmp727.value;
int64_t $tmp2468 = $tmp2466.value;
bool $tmp2469 = $tmp2467 == $tmp2468;
frost$core$Bit $tmp2470 = (frost$core$Bit) {$tmp2469};
bool $tmp2471 = $tmp2470.value;
if ($tmp2471) goto block306; else goto block307;
block306:;
org$frostlang$frostc$Position* $tmp2472 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2473 = *$tmp2472;
org$frostlang$frostc$FixedArray** $tmp2474 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2475 = *$tmp2474;
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
org$frostlang$frostc$FixedArray* $tmp2476 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
*(&local113) = $tmp2475;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:579
org$frostlang$frostc$FixedArray* $tmp2477 = *(&local113);
ITable* $tmp2478 = ((frost$collections$CollectionView*) $tmp2477)->$class->itable;
while ($tmp2478->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2478 = $tmp2478->next;
}
$fn2480 $tmp2479 = $tmp2478->methods[3];
frost$core$String* $tmp2481 = $tmp2479(((frost$collections$CollectionView*) $tmp2477), &$s2482);
frost$core$String* $tmp2483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2484, $tmp2481);
frost$core$String* $tmp2485 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2483, &$s2486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
org$frostlang$frostc$FixedArray* $tmp2487 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2485;
block307:;
frost$core$Int $tmp2488 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:581:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2489 = $tmp727.value;
int64_t $tmp2490 = $tmp2488.value;
bool $tmp2491 = $tmp2489 == $tmp2490;
frost$core$Bit $tmp2492 = (frost$core$Bit) {$tmp2491};
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block309; else goto block310;
block309:;
org$frostlang$frostc$Position* $tmp2494 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2495 = *$tmp2494;
org$frostlang$frostc$FixedArray** $tmp2496 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2497 = *$tmp2496;
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
org$frostlang$frostc$FixedArray* $tmp2498 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
*(&local114) = $tmp2497;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:582
org$frostlang$frostc$FixedArray* $tmp2499 = *(&local114);
ITable* $tmp2500 = ((frost$collections$CollectionView*) $tmp2499)->$class->itable;
while ($tmp2500->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2500 = $tmp2500->next;
}
$fn2502 $tmp2501 = $tmp2500->methods[3];
frost$core$String* $tmp2503 = $tmp2501(((frost$collections$CollectionView*) $tmp2499), &$s2504);
frost$core$String* $tmp2505 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2506, $tmp2503);
frost$core$String* $tmp2507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2505, &$s2508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
org$frostlang$frostc$FixedArray* $tmp2509 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2507;
block310:;
frost$core$Int $tmp2510 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:584:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2511 = $tmp727.value;
int64_t $tmp2512 = $tmp2510.value;
bool $tmp2513 = $tmp2511 == $tmp2512;
frost$core$Bit $tmp2514 = (frost$core$Bit) {$tmp2513};
bool $tmp2515 = $tmp2514.value;
if ($tmp2515) goto block312; else goto block313;
block312:;
org$frostlang$frostc$Position* $tmp2516 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2517 = *$tmp2516;
org$frostlang$frostc$FixedArray** $tmp2518 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2519 = *$tmp2518;
*(&local115) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
org$frostlang$frostc$FixedArray* $tmp2520 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local115) = $tmp2519;
org$frostlang$frostc$ASTNode** $tmp2521 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2522 = *$tmp2521;
*(&local116) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
org$frostlang$frostc$ASTNode* $tmp2523 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
*(&local116) = $tmp2522;
org$frostlang$frostc$FixedArray** $tmp2524 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2525 = *$tmp2524;
*(&local117) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
org$frostlang$frostc$FixedArray* $tmp2526 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
*(&local117) = $tmp2525;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:585
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2527 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2527, &$s2528);
*(&local118) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
frost$core$MutableString* $tmp2529 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local118) = $tmp2527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:586
org$frostlang$frostc$FixedArray* $tmp2530 = *(&local115);
frost$core$MutableString* $tmp2531 = *(&local118);
*(&local119) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
frost$core$MutableString* $tmp2532 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
*(&local119) = $tmp2531;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$ASTNode$_Closure2));
org$frostlang$frostc$ASTNode$_Closure2* $tmp2533 = (org$frostlang$frostc$ASTNode$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ASTNode$_Closure2$class);
frost$core$MutableString* $tmp2534 = *(&local119);
org$frostlang$frostc$ASTNode$_Closure2$init$frost$core$MutableString($tmp2533, $tmp2534);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2536 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from ASTNode.frost:586:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2537 = &$tmp2536->pointer;
*$tmp2537 = ((frost$core$Int8*) org$frostlang$frostc$ASTNode$_Closure2$$anonymous1$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
frost$core$Object** $tmp2538 = &$tmp2536->target;
frost$core$Object* $tmp2539 = *$tmp2538;
frost$core$Frost$unref$frost$core$Object$Q($tmp2539);
frost$core$Object** $tmp2540 = &$tmp2536->target;
*$tmp2540 = ((frost$core$Object*) $tmp2533);
ITable* $tmp2541 = ((frost$collections$CollectionView*) $tmp2530)->$class->itable;
while ($tmp2541->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2541 = $tmp2541->next;
}
$fn2543 $tmp2542 = $tmp2541->methods[8];
$tmp2542(((frost$collections$CollectionView*) $tmp2530), $tmp2536);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:587
org$frostlang$frostc$ASTNode* $tmp2544 = *(&local116);
frost$core$Bit $tmp2545 = (frost$core$Bit) {$tmp2544 != NULL};
bool $tmp2546 = $tmp2545.value;
if ($tmp2546) goto block316; else goto block318;
block316:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:588
frost$core$MutableString* $tmp2547 = *(&local118);
org$frostlang$frostc$ASTNode* $tmp2548 = *(&local116);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:588:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2550 $tmp2549 = ($fn2550) ((frost$core$Object*) $tmp2548)->$class->vtable[0];
frost$core$String* $tmp2551 = $tmp2549(((frost$core$Object*) $tmp2548));
frost$core$String* $tmp2552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2553, $tmp2551);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
frost$core$String* $tmp2554 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2552, &$s2555);
frost$core$MutableString$append$frost$core$String($tmp2547, $tmp2554);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
goto block317;
block318:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:591
frost$core$MutableString* $tmp2556 = *(&local118);
frost$core$MutableString$append$frost$core$String($tmp2556, &$s2557);
goto block317;
block317:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:593
org$frostlang$frostc$FixedArray* $tmp2558 = *(&local117);
frost$core$MutableString* $tmp2559 = *(&local118);
*(&local120) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
frost$core$MutableString* $tmp2560 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
*(&local120) = $tmp2559;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$ASTNode$_Closure4));
org$frostlang$frostc$ASTNode$_Closure4* $tmp2561 = (org$frostlang$frostc$ASTNode$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ASTNode$_Closure4$class);
frost$core$MutableString* $tmp2562 = *(&local120);
org$frostlang$frostc$ASTNode$_Closure4$init$frost$core$MutableString($tmp2561, $tmp2562);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2564 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from ASTNode.frost:593:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2565 = &$tmp2564->pointer;
*$tmp2565 = ((frost$core$Int8*) org$frostlang$frostc$ASTNode$_Closure4$$anonymous3$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Object** $tmp2566 = &$tmp2564->target;
frost$core$Object* $tmp2567 = *$tmp2566;
frost$core$Frost$unref$frost$core$Object$Q($tmp2567);
frost$core$Object** $tmp2568 = &$tmp2564->target;
*$tmp2568 = ((frost$core$Object*) $tmp2561);
ITable* $tmp2569 = ((frost$collections$CollectionView*) $tmp2558)->$class->itable;
while ($tmp2569->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2569 = $tmp2569->next;
}
$fn2571 $tmp2570 = $tmp2569->methods[8];
$tmp2570(((frost$collections$CollectionView*) $tmp2558), $tmp2564);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:594
frost$core$MutableString* $tmp2572 = *(&local118);
frost$core$MutableString$append$frost$core$String($tmp2572, &$s2573);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:595
frost$core$MutableString* $tmp2574 = *(&local118);
frost$core$String* $tmp2575 = frost$core$MutableString$finish$R$frost$core$String($tmp2574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
frost$core$MutableString* $tmp2576 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
*(&local120) = ((frost$core$MutableString*) NULL);
frost$core$MutableString* $tmp2577 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
*(&local119) = ((frost$core$MutableString*) NULL);
frost$core$MutableString* $tmp2578 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
*(&local118) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2579 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
*(&local117) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2580 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
*(&local116) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2581 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
*(&local115) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2575;
block313:;
frost$core$Int $tmp2582 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:597:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2583 = $tmp727.value;
int64_t $tmp2584 = $tmp2582.value;
bool $tmp2585 = $tmp2583 == $tmp2584;
frost$core$Bit $tmp2586 = (frost$core$Bit) {$tmp2585};
bool $tmp2587 = $tmp2586.value;
if ($tmp2587) goto block321; else goto block322;
block321:;
org$frostlang$frostc$Position* $tmp2588 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2589 = *$tmp2588;
frost$core$String** $tmp2590 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2591 = *$tmp2590;
*(&local121) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
frost$core$String* $tmp2592 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
*(&local121) = $tmp2591;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:598
frost$core$String* $tmp2593 = *(&local121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
frost$core$String* $tmp2594 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
*(&local121) = ((frost$core$String*) NULL);
return $tmp2593;
block322:;
frost$core$Int $tmp2595 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:600:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2596 = $tmp727.value;
int64_t $tmp2597 = $tmp2595.value;
bool $tmp2598 = $tmp2596 == $tmp2597;
frost$core$Bit $tmp2599 = (frost$core$Bit) {$tmp2598};
bool $tmp2600 = $tmp2599.value;
if ($tmp2600) goto block324; else goto block325;
block324:;
org$frostlang$frostc$Position* $tmp2601 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2602 = *$tmp2601;
frost$core$String** $tmp2603 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2604 = *$tmp2603;
*(&local122) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
frost$core$String* $tmp2605 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
*(&local122) = $tmp2604;
org$frostlang$frostc$ASTNode** $tmp2606 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2607 = *$tmp2606;
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
org$frostlang$frostc$ASTNode* $tmp2608 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
*(&local123) = $tmp2607;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:601
org$frostlang$frostc$ASTNode* $tmp2609 = *(&local123);
frost$core$Bit $tmp2610 = (frost$core$Bit) {$tmp2609 != NULL};
bool $tmp2611 = $tmp2610.value;
if ($tmp2611) goto block327; else goto block328;
block327:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:602
frost$core$String* $tmp2612 = *(&local122);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:602:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
frost$core$String* $tmp2613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2612, &$s2614);
org$frostlang$frostc$ASTNode* $tmp2615 = *(&local123);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:602:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2617 $tmp2616 = ($fn2617) ((frost$core$Object*) $tmp2615)->$class->vtable[0];
frost$core$String* $tmp2618 = $tmp2616(((frost$core$Object*) $tmp2615));
frost$core$String* $tmp2619 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2613, $tmp2618);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
frost$core$String* $tmp2620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2619, &$s2621);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
org$frostlang$frostc$ASTNode* $tmp2622 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2623 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
*(&local122) = ((frost$core$String*) NULL);
return $tmp2620;
block328:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:604
frost$core$String* $tmp2624 = *(&local122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
org$frostlang$frostc$ASTNode* $tmp2625 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2626 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
*(&local122) = ((frost$core$String*) NULL);
return $tmp2624;
block325:;
frost$core$Int $tmp2627 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:606:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2628 = $tmp727.value;
int64_t $tmp2629 = $tmp2627.value;
bool $tmp2630 = $tmp2628 == $tmp2629;
frost$core$Bit $tmp2631 = (frost$core$Bit) {$tmp2630};
bool $tmp2632 = $tmp2631.value;
if ($tmp2632) goto block331; else goto block332;
block331:;
org$frostlang$frostc$Position* $tmp2633 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2634 = *$tmp2633;
org$frostlang$frostc$FixedArray** $tmp2635 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2636 = *$tmp2635;
*(&local124) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
org$frostlang$frostc$FixedArray* $tmp2637 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
*(&local124) = $tmp2636;
org$frostlang$frostc$ASTNode** $tmp2638 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2639 = *$tmp2638;
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
org$frostlang$frostc$ASTNode* $tmp2640 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
*(&local125) = $tmp2639;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:607
org$frostlang$frostc$FixedArray* $tmp2641 = *(&local124);
ITable* $tmp2642 = ((frost$collections$CollectionView*) $tmp2641)->$class->itable;
while ($tmp2642->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2642 = $tmp2642->next;
}
$fn2644 $tmp2643 = $tmp2642->methods[3];
frost$core$String* $tmp2645 = $tmp2643(((frost$collections$CollectionView*) $tmp2641), &$s2646);
frost$core$String* $tmp2647 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2648, $tmp2645);
frost$core$String* $tmp2649 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2647, &$s2650);
org$frostlang$frostc$ASTNode* $tmp2651 = *(&local125);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:607:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2653 $tmp2652 = ($fn2653) ((frost$core$Object*) $tmp2651)->$class->vtable[0];
frost$core$String* $tmp2654 = $tmp2652(((frost$core$Object*) $tmp2651));
frost$core$String* $tmp2655 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2649, $tmp2654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
frost$core$String* $tmp2656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2655, &$s2657);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
org$frostlang$frostc$ASTNode* $tmp2658 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2659 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
*(&local124) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2656;
block332:;
frost$core$Int $tmp2660 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:609:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2661 = $tmp727.value;
int64_t $tmp2662 = $tmp2660.value;
bool $tmp2663 = $tmp2661 == $tmp2662;
frost$core$Bit $tmp2664 = (frost$core$Bit) {$tmp2663};
bool $tmp2665 = $tmp2664.value;
if ($tmp2665) goto block335; else goto block336;
block335:;
org$frostlang$frostc$Position* $tmp2666 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2667 = *$tmp2666;
org$frostlang$frostc$expression$Unary$Operator* $tmp2668 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp2669 = *$tmp2668;
*(&local126) = $tmp2669;
org$frostlang$frostc$ASTNode** $tmp2670 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2671 = *$tmp2670;
*(&local127) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
org$frostlang$frostc$ASTNode* $tmp2672 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
*(&local127) = $tmp2671;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:610
org$frostlang$frostc$expression$Unary$Operator $tmp2673 = *(&local126);
// begin inline call to function org.frostlang.frostc.expression.Unary.Operator.get_asString():frost.core.String from ASTNode.frost:610:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:26
frost$core$Int $tmp2674 = $tmp2673.$rawValue;
frost$core$Int $tmp2675 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:27:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2676 = $tmp2674.value;
int64_t $tmp2677 = $tmp2675.value;
bool $tmp2678 = $tmp2676 == $tmp2677;
frost$core$Bit $tmp2679 = (frost$core$Bit) {$tmp2678};
bool $tmp2680 = $tmp2679.value;
if ($tmp2680) goto block340; else goto block341;
block340:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2681));
*(&local128) = &$s2682;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2683));
goto block338;
block341:;
frost$core$Int $tmp2684 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:28:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2685 = $tmp2674.value;
int64_t $tmp2686 = $tmp2684.value;
bool $tmp2687 = $tmp2685 == $tmp2686;
frost$core$Bit $tmp2688 = (frost$core$Bit) {$tmp2687};
bool $tmp2689 = $tmp2688.value;
if ($tmp2689) goto block343; else goto block344;
block343:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2690));
*(&local128) = &$s2691;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2692));
goto block338;
block344:;
frost$core$Int $tmp2693 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:29:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2694 = $tmp2674.value;
int64_t $tmp2695 = $tmp2693.value;
bool $tmp2696 = $tmp2694 == $tmp2695;
frost$core$Bit $tmp2697 = (frost$core$Bit) {$tmp2696};
bool $tmp2698 = $tmp2697.value;
if ($tmp2698) goto block346; else goto block347;
block346:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2699));
*(&local128) = &$s2700;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2701));
goto block338;
block347:;
frost$core$Int $tmp2702 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:30:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2703 = $tmp2674.value;
int64_t $tmp2704 = $tmp2702.value;
bool $tmp2705 = $tmp2703 == $tmp2704;
frost$core$Bit $tmp2706 = (frost$core$Bit) {$tmp2705};
bool $tmp2707 = $tmp2706.value;
if ($tmp2707) goto block349; else goto block350;
block349:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2708));
*(&local128) = &$s2709;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2710));
goto block338;
block350:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:31
frost$core$Int $tmp2711 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2712, $tmp2711);
abort(); // unreachable
block339:;
goto block338;
block338:;
frost$core$String* $tmp2713 = *(&local128);
frost$core$String* $tmp2714 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2713, &$s2715);
org$frostlang$frostc$ASTNode* $tmp2716 = *(&local127);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:610:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2718 $tmp2717 = ($fn2718) ((frost$core$Object*) $tmp2716)->$class->vtable[0];
frost$core$String* $tmp2719 = $tmp2717(((frost$core$Object*) $tmp2716));
frost$core$String* $tmp2720 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2714, $tmp2719);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
frost$core$String* $tmp2721 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2720, &$s2722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
frost$core$String* $tmp2723 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local128) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2724 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local127) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2721;
block336:;
frost$core$Int $tmp2725 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:612:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2726 = $tmp727.value;
int64_t $tmp2727 = $tmp2725.value;
bool $tmp2728 = $tmp2726 == $tmp2727;
frost$core$Bit $tmp2729 = (frost$core$Bit) {$tmp2728};
bool $tmp2730 = $tmp2729.value;
if ($tmp2730) goto block353; else goto block354;
block353:;
org$frostlang$frostc$Position* $tmp2731 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2732 = *$tmp2731;
org$frostlang$frostc$ASTNode** $tmp2733 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2734 = *$tmp2733;
*(&local129) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
org$frostlang$frostc$ASTNode* $tmp2735 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
*(&local129) = $tmp2734;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:613
org$frostlang$frostc$ASTNode* $tmp2736 = *(&local129);
frost$core$Bit $tmp2737 = (frost$core$Bit) {$tmp2736 != NULL};
bool $tmp2738 = $tmp2737.value;
if ($tmp2738) goto block356; else goto block357;
block356:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:614
org$frostlang$frostc$ASTNode* $tmp2739 = *(&local129);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:614:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2741 $tmp2740 = ($fn2741) ((frost$core$Object*) $tmp2739)->$class->vtable[0];
frost$core$String* $tmp2742 = $tmp2740(((frost$core$Object*) $tmp2739));
frost$core$String* $tmp2743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2744, $tmp2742);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
frost$core$String* $tmp2745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2743, &$s2746);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
org$frostlang$frostc$ASTNode* $tmp2747 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
*(&local129) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2745;
block357:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:616
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2748));
org$frostlang$frostc$ASTNode* $tmp2749 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
*(&local129) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2750;
block354:;
frost$core$Int $tmp2751 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:618:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2752 = $tmp727.value;
int64_t $tmp2753 = $tmp2751.value;
bool $tmp2754 = $tmp2752 == $tmp2753;
frost$core$Bit $tmp2755 = (frost$core$Bit) {$tmp2754};
bool $tmp2756 = $tmp2755.value;
if ($tmp2756) goto block359; else goto block360;
block359:;
org$frostlang$frostc$Position* $tmp2757 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2758 = *$tmp2757;
org$frostlang$frostc$FixedArray** $tmp2759 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2760 = *$tmp2759;
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
org$frostlang$frostc$FixedArray* $tmp2761 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
*(&local130) = $tmp2760;
org$frostlang$frostc$ASTNode** $tmp2762 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2763 = *$tmp2762;
*(&local131) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
org$frostlang$frostc$ASTNode* $tmp2764 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
*(&local131) = $tmp2763;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:619
org$frostlang$frostc$FixedArray* $tmp2765 = *(&local130);
ITable* $tmp2766 = ((frost$collections$CollectionView*) $tmp2765)->$class->itable;
while ($tmp2766->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2766 = $tmp2766->next;
}
$fn2768 $tmp2767 = $tmp2766->methods[3];
frost$core$String* $tmp2769 = $tmp2767(((frost$collections$CollectionView*) $tmp2765), &$s2770);
frost$core$String* $tmp2771 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2772, $tmp2769);
frost$core$String* $tmp2773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2771, &$s2774);
org$frostlang$frostc$ASTNode* $tmp2775 = *(&local131);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:619:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2777 $tmp2776 = ($fn2777) ((frost$core$Object*) $tmp2775)->$class->vtable[0];
frost$core$String* $tmp2778 = $tmp2776(((frost$core$Object*) $tmp2775));
frost$core$String* $tmp2779 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2773, $tmp2778);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
frost$core$String* $tmp2780 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2779, &$s2781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
org$frostlang$frostc$ASTNode* $tmp2782 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
*(&local131) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2783 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2780;
block360:;
frost$core$Int $tmp2784 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:621:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2785 = $tmp727.value;
int64_t $tmp2786 = $tmp2784.value;
bool $tmp2787 = $tmp2785 == $tmp2786;
frost$core$Bit $tmp2788 = (frost$core$Bit) {$tmp2787};
bool $tmp2789 = $tmp2788.value;
if ($tmp2789) goto block363; else goto block364;
block363:;
org$frostlang$frostc$Position* $tmp2790 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2791 = *$tmp2790;
frost$core$String** $tmp2792 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2793 = *$tmp2792;
*(&local132) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
frost$core$String* $tmp2794 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local132) = $tmp2793;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:622
frost$core$String* $tmp2795 = *(&local132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
frost$core$String* $tmp2796 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
*(&local132) = ((frost$core$String*) NULL);
return $tmp2795;
block364:;
frost$core$Int $tmp2797 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:624:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2798 = $tmp727.value;
int64_t $tmp2799 = $tmp2797.value;
bool $tmp2800 = $tmp2798 == $tmp2799;
frost$core$Bit $tmp2801 = (frost$core$Bit) {$tmp2800};
bool $tmp2802 = $tmp2801.value;
if ($tmp2802) goto block366; else goto block367;
block366:;
org$frostlang$frostc$Position* $tmp2803 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2804 = *$tmp2803;
org$frostlang$frostc$Variable$Kind* $tmp2805 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp2806 = *$tmp2805;
*(&local133) = $tmp2806;
org$frostlang$frostc$FixedArray** $tmp2807 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2808 = *$tmp2807;
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$FixedArray* $tmp2809 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local134) = $tmp2808;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:625
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2810 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2810);
*(&local135) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
frost$core$MutableString* $tmp2811 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
*(&local135) = $tmp2810;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:626
org$frostlang$frostc$Variable$Kind $tmp2812 = *(&local133);
frost$core$Int $tmp2813 = $tmp2812.$rawValue;
frost$core$Int $tmp2814 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:627:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2815 = $tmp2813.value;
int64_t $tmp2816 = $tmp2814.value;
bool $tmp2817 = $tmp2815 == $tmp2816;
frost$core$Bit $tmp2818 = (frost$core$Bit) {$tmp2817};
bool $tmp2819 = $tmp2818.value;
if ($tmp2819) goto block370; else goto block371;
block370:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:627
frost$core$MutableString* $tmp2820 = *(&local135);
frost$core$MutableString$append$frost$core$String($tmp2820, &$s2821);
goto block369;
block371:;
frost$core$Int $tmp2822 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:628:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2823 = $tmp2813.value;
int64_t $tmp2824 = $tmp2822.value;
bool $tmp2825 = $tmp2823 == $tmp2824;
frost$core$Bit $tmp2826 = (frost$core$Bit) {$tmp2825};
bool $tmp2827 = $tmp2826.value;
if ($tmp2827) goto block373; else goto block374;
block373:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:628
frost$core$MutableString* $tmp2828 = *(&local135);
frost$core$MutableString$append$frost$core$String($tmp2828, &$s2829);
goto block369;
block374:;
frost$core$Int $tmp2830 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:629:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2831 = $tmp2813.value;
int64_t $tmp2832 = $tmp2830.value;
bool $tmp2833 = $tmp2831 == $tmp2832;
frost$core$Bit $tmp2834 = (frost$core$Bit) {$tmp2833};
bool $tmp2835 = $tmp2834.value;
if ($tmp2835) goto block376; else goto block377;
block376:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:629
frost$core$MutableString* $tmp2836 = *(&local135);
frost$core$MutableString$append$frost$core$String($tmp2836, &$s2837);
goto block369;
block377:;
frost$core$Int $tmp2838 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:630:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2839 = $tmp2813.value;
int64_t $tmp2840 = $tmp2838.value;
bool $tmp2841 = $tmp2839 == $tmp2840;
frost$core$Bit $tmp2842 = (frost$core$Bit) {$tmp2841};
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block379; else goto block369;
block379:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:630
frost$core$MutableString* $tmp2844 = *(&local135);
frost$core$MutableString$append$frost$core$String($tmp2844, &$s2845);
goto block369;
block369:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:632
frost$core$MutableString* $tmp2846 = *(&local135);
org$frostlang$frostc$FixedArray* $tmp2847 = *(&local134);
ITable* $tmp2848 = ((frost$collections$CollectionView*) $tmp2847)->$class->itable;
while ($tmp2848->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2848 = $tmp2848->next;
}
$fn2850 $tmp2849 = $tmp2848->methods[3];
frost$core$String* $tmp2851 = $tmp2849(((frost$collections$CollectionView*) $tmp2847), &$s2852);
frost$core$MutableString$append$frost$core$String($tmp2846, $tmp2851);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:633
frost$core$MutableString* $tmp2853 = *(&local135);
frost$core$String* $tmp2854 = frost$core$MutableString$finish$R$frost$core$String($tmp2853);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
frost$core$MutableString* $tmp2855 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
*(&local135) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2856 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2854;
block367:;
frost$core$Int $tmp2857 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:635:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2858 = $tmp727.value;
int64_t $tmp2859 = $tmp2857.value;
bool $tmp2860 = $tmp2858 == $tmp2859;
frost$core$Bit $tmp2861 = (frost$core$Bit) {$tmp2860};
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block381; else goto block382;
block381:;
org$frostlang$frostc$Position* $tmp2863 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2864 = *$tmp2863;
org$frostlang$frostc$FixedArray** $tmp2865 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2866 = *$tmp2865;
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
org$frostlang$frostc$FixedArray* $tmp2867 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local136) = $tmp2866;
org$frostlang$frostc$FixedArray** $tmp2868 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2869 = *$tmp2868;
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
org$frostlang$frostc$FixedArray* $tmp2870 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
*(&local137) = $tmp2869;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:636
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2871 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2871, &$s2872);
*(&local138) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
frost$core$MutableString* $tmp2873 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
*(&local138) = $tmp2871;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:637
*(&local139) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2874));
frost$core$String* $tmp2875 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
*(&local139) = &$s2876;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:638
org$frostlang$frostc$FixedArray* $tmp2877 = *(&local136);
ITable* $tmp2878 = ((frost$collections$Iterable*) $tmp2877)->$class->itable;
while ($tmp2878->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2878 = $tmp2878->next;
}
$fn2880 $tmp2879 = $tmp2878->methods[0];
frost$collections$Iterator* $tmp2881 = $tmp2879(((frost$collections$Iterable*) $tmp2877));
goto block384;
block384:;
ITable* $tmp2882 = $tmp2881->$class->itable;
while ($tmp2882->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2882 = $tmp2882->next;
}
$fn2884 $tmp2883 = $tmp2882->methods[0];
frost$core$Bit $tmp2885 = $tmp2883($tmp2881);
bool $tmp2886 = $tmp2885.value;
if ($tmp2886) goto block386; else goto block385;
block385:;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2887 = $tmp2881->$class->itable;
while ($tmp2887->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2887 = $tmp2887->next;
}
$fn2889 $tmp2888 = $tmp2887->methods[1];
frost$core$Object* $tmp2890 = $tmp2888($tmp2881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2890)));
org$frostlang$frostc$ASTNode* $tmp2891 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
*(&local140) = ((org$frostlang$frostc$ASTNode*) $tmp2890);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:639
frost$core$MutableString* $tmp2892 = *(&local138);
frost$core$String* $tmp2893 = *(&local139);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:639:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$String* $tmp2894 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2893, &$s2895);
org$frostlang$frostc$ASTNode* $tmp2896 = *(&local140);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:639:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2898 $tmp2897 = ($fn2898) ((frost$core$Object*) $tmp2896)->$class->vtable[0];
frost$core$String* $tmp2899 = $tmp2897(((frost$core$Object*) $tmp2896));
frost$core$String* $tmp2900 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2894, $tmp2899);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
frost$core$String* $tmp2901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2900, &$s2902);
frost$core$MutableString$append$frost$core$String($tmp2892, $tmp2901);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:640
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2903));
frost$core$String* $tmp2904 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
*(&local139) = &$s2905;
frost$core$Frost$unref$frost$core$Object$Q($tmp2890);
org$frostlang$frostc$ASTNode* $tmp2906 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block384;
block386:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:642
frost$core$MutableString* $tmp2907 = *(&local138);
frost$core$MutableString$append$frost$core$String($tmp2907, &$s2908);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:643
org$frostlang$frostc$FixedArray* $tmp2909 = *(&local137);
ITable* $tmp2910 = ((frost$collections$Iterable*) $tmp2909)->$class->itable;
while ($tmp2910->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2910 = $tmp2910->next;
}
$fn2912 $tmp2911 = $tmp2910->methods[0];
frost$collections$Iterator* $tmp2913 = $tmp2911(((frost$collections$Iterable*) $tmp2909));
goto block389;
block389:;
ITable* $tmp2914 = $tmp2913->$class->itable;
while ($tmp2914->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2914 = $tmp2914->next;
}
$fn2916 $tmp2915 = $tmp2914->methods[0];
frost$core$Bit $tmp2917 = $tmp2915($tmp2913);
bool $tmp2918 = $tmp2917.value;
if ($tmp2918) goto block391; else goto block390;
block390:;
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2919 = $tmp2913->$class->itable;
while ($tmp2919->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2919 = $tmp2919->next;
}
$fn2921 $tmp2920 = $tmp2919->methods[1];
frost$core$Object* $tmp2922 = $tmp2920($tmp2913);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2922)));
org$frostlang$frostc$ASTNode* $tmp2923 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local141) = ((org$frostlang$frostc$ASTNode*) $tmp2922);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:644
frost$core$MutableString* $tmp2924 = *(&local138);
org$frostlang$frostc$ASTNode* $tmp2925 = *(&local141);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:644:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2927 $tmp2926 = ($fn2927) ((frost$core$Object*) $tmp2925)->$class->vtable[0];
frost$core$String* $tmp2928 = $tmp2926(((frost$core$Object*) $tmp2925));
frost$core$String* $tmp2929 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2930, $tmp2928);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
frost$core$MutableString$append$frost$core$String($tmp2924, $tmp2929);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
frost$core$Frost$unref$frost$core$Object$Q($tmp2922);
org$frostlang$frostc$ASTNode* $tmp2931 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block389;
block391:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:646
frost$core$MutableString* $tmp2932 = *(&local138);
frost$core$MutableString$append$frost$core$String($tmp2932, &$s2933);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:647
frost$core$MutableString* $tmp2934 = *(&local138);
frost$core$String* $tmp2935 = frost$core$MutableString$finish$R$frost$core$String($tmp2934);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
frost$core$String* $tmp2936 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
*(&local139) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2937 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
*(&local138) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2938 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2939 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2935;
block382:;
frost$core$Int $tmp2940 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:649:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2941 = $tmp727.value;
int64_t $tmp2942 = $tmp2940.value;
bool $tmp2943 = $tmp2941 == $tmp2942;
frost$core$Bit $tmp2944 = (frost$core$Bit) {$tmp2943};
bool $tmp2945 = $tmp2944.value;
if ($tmp2945) goto block393; else goto block394;
block393:;
org$frostlang$frostc$Position* $tmp2946 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2947 = *$tmp2946;
frost$core$String** $tmp2948 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2949 = *$tmp2948;
*(&local142) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
frost$core$String* $tmp2950 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
*(&local142) = $tmp2949;
org$frostlang$frostc$ASTNode** $tmp2951 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2952 = *$tmp2951;
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2952));
org$frostlang$frostc$ASTNode* $tmp2953 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
*(&local143) = $tmp2952;
org$frostlang$frostc$FixedArray** $tmp2954 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2955 = *$tmp2954;
*(&local144) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
org$frostlang$frostc$FixedArray* $tmp2956 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local144) = $tmp2955;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:650
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2957 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2957);
*(&local145) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
frost$core$MutableString* $tmp2958 = *(&local145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
*(&local145) = $tmp2957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:651
frost$core$String* $tmp2959 = *(&local142);
frost$core$Bit $tmp2960 = (frost$core$Bit) {$tmp2959 != NULL};
bool $tmp2961 = $tmp2960.value;
if ($tmp2961) goto block396; else goto block397;
block396:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:652
frost$core$MutableString* $tmp2962 = *(&local145);
frost$core$String* $tmp2963 = *(&local142);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ASTNode.frost:652:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
frost$core$String* $tmp2964 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2963, &$s2965);
frost$core$MutableString$append$frost$core$String($tmp2962, $tmp2964);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
goto block397;
block397:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:654
frost$core$MutableString* $tmp2966 = *(&local145);
org$frostlang$frostc$ASTNode* $tmp2967 = *(&local143);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ASTNode.frost:654:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2969 $tmp2968 = ($fn2969) ((frost$core$Object*) $tmp2967)->$class->vtable[0];
frost$core$String* $tmp2970 = $tmp2968(((frost$core$Object*) $tmp2967));
frost$core$String* $tmp2971 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2972, $tmp2970);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
frost$core$String* $tmp2973 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2971, &$s2974);
frost$core$MutableString$append$frost$core$String($tmp2966, $tmp2973);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:655
org$frostlang$frostc$FixedArray* $tmp2975 = *(&local144);
ITable* $tmp2976 = ((frost$collections$Iterable*) $tmp2975)->$class->itable;
while ($tmp2976->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2976 = $tmp2976->next;
}
$fn2978 $tmp2977 = $tmp2976->methods[0];
frost$collections$Iterator* $tmp2979 = $tmp2977(((frost$collections$Iterable*) $tmp2975));
goto block400;
block400:;
ITable* $tmp2980 = $tmp2979->$class->itable;
while ($tmp2980->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2980 = $tmp2980->next;
}
$fn2982 $tmp2981 = $tmp2980->methods[0];
frost$core$Bit $tmp2983 = $tmp2981($tmp2979);
bool $tmp2984 = $tmp2983.value;
if ($tmp2984) goto block402; else goto block401;
block401:;
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2985 = $tmp2979->$class->itable;
while ($tmp2985->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2985 = $tmp2985->next;
}
$fn2987 $tmp2986 = $tmp2985->methods[1];
frost$core$Object* $tmp2988 = $tmp2986($tmp2979);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2988)));
org$frostlang$frostc$ASTNode* $tmp2989 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local146) = ((org$frostlang$frostc$ASTNode*) $tmp2988);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:656
frost$core$MutableString* $tmp2990 = *(&local145);
org$frostlang$frostc$ASTNode* $tmp2991 = *(&local146);
// begin inline call to function frost.core.String.+(o:frost.core.Object, s:frost.core.String):frost.core.String from ASTNode.frost:656:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn2993 $tmp2992 = ($fn2993) ((frost$core$Object*) $tmp2991)->$class->vtable[0];
frost$core$String* $tmp2994 = $tmp2992(((frost$core$Object*) $tmp2991));
frost$core$String* $tmp2995 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2994, &$s2996);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
frost$core$MutableString$append$frost$core$String($tmp2990, $tmp2995);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
frost$core$Frost$unref$frost$core$Object$Q($tmp2988);
org$frostlang$frostc$ASTNode* $tmp2997 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block400;
block402:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:658
frost$core$MutableString* $tmp2998 = *(&local145);
frost$core$MutableString$append$frost$core$String($tmp2998, &$s2999);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:659
frost$core$MutableString* $tmp3000 = *(&local145);
frost$core$String* $tmp3001 = frost$core$MutableString$finish$R$frost$core$String($tmp3000);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
frost$core$MutableString* $tmp3002 = *(&local145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
*(&local145) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp3003 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
*(&local144) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3004 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3005 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
*(&local142) = ((frost$core$String*) NULL);
return $tmp3001;
block394:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:662
frost$core$Int $tmp3006 = (frost$core$Int) {662u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3007, $tmp3006);
abort(); // unreachable
block1:;
goto block404;
block404:;

}
void org$frostlang$frostc$ASTNode$cleanup(org$frostlang$frostc$ASTNode* param0) {

org$frostlang$frostc$Position local0;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$FixedArray* local5 = NULL;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$ASTNode* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$Position local9;
org$frostlang$frostc$ASTNode* local10 = NULL;
org$frostlang$frostc$Position local11;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$expression$Binary$Operator local14;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$Position local16;
frost$core$Bit local17;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$FixedArray* local19 = NULL;
org$frostlang$frostc$Position local20;
frost$core$String* local21 = NULL;
org$frostlang$frostc$Position local22;
org$frostlang$frostc$ASTNode* local23 = NULL;
org$frostlang$frostc$FixedArray* local24 = NULL;
org$frostlang$frostc$Position local25;
org$frostlang$frostc$ASTNode* local26 = NULL;
frost$core$String* local27 = NULL;
org$frostlang$frostc$FixedArray* local28 = NULL;
org$frostlang$frostc$Position local29;
org$frostlang$frostc$ASTNode* local30 = NULL;
org$frostlang$frostc$ChoiceCase* local31 = NULL;
frost$core$Int local32;
org$frostlang$frostc$Position local33;
org$frostlang$frostc$ASTNode* local34 = NULL;
org$frostlang$frostc$FixedArray* local35 = NULL;
org$frostlang$frostc$ClassDecl$Kind local36;
frost$core$String* local37 = NULL;
org$frostlang$frostc$FixedArray* local38 = NULL;
org$frostlang$frostc$FixedArray* local39 = NULL;
org$frostlang$frostc$FixedArray* local40 = NULL;
org$frostlang$frostc$Position local41;
frost$core$String* local42 = NULL;
org$frostlang$frostc$Position local43;
org$frostlang$frostc$ASTNode* local44 = NULL;
org$frostlang$frostc$ASTNode* local45 = NULL;
org$frostlang$frostc$Position local46;
frost$core$String* local47 = NULL;
org$frostlang$frostc$FixedArray* local48 = NULL;
org$frostlang$frostc$ASTNode* local49 = NULL;
org$frostlang$frostc$Position local50;
org$frostlang$frostc$ASTNode* local51 = NULL;
frost$core$String* local52 = NULL;
org$frostlang$frostc$Position local53;
org$frostlang$frostc$ASTNode* local54 = NULL;
frost$core$String* local55 = NULL;
org$frostlang$frostc$FixedArray* local56 = NULL;
org$frostlang$frostc$Position local57;
org$frostlang$frostc$ASTNode* local58 = NULL;
org$frostlang$frostc$FixedArray* local59 = NULL;
org$frostlang$frostc$ASTNode* local60 = NULL;
org$frostlang$frostc$FixedArray* local61 = NULL;
org$frostlang$frostc$Position local62;
frost$core$String* local63 = NULL;
org$frostlang$frostc$ASTNode* local64 = NULL;
org$frostlang$frostc$ASTNode* local65 = NULL;
org$frostlang$frostc$FixedArray* local66 = NULL;
org$frostlang$frostc$Position local67;
frost$core$String* local68 = NULL;
org$frostlang$frostc$FixedArray* local69 = NULL;
org$frostlang$frostc$Position local70;
frost$core$String* local71 = NULL;
org$frostlang$frostc$Position local72;
frost$core$String* local73 = NULL;
org$frostlang$frostc$FixedArray* local74 = NULL;
org$frostlang$frostc$Position local75;
org$frostlang$frostc$ASTNode* local76 = NULL;
org$frostlang$frostc$FixedArray* local77 = NULL;
org$frostlang$frostc$ASTNode* local78 = NULL;
org$frostlang$frostc$Position local79;
frost$core$UInt64 local80;
org$frostlang$frostc$Position local81;
org$frostlang$frostc$IR$Value* local82 = NULL;
org$frostlang$frostc$Position local83;
frost$core$String* local84 = NULL;
org$frostlang$frostc$FixedArray* local85 = NULL;
org$frostlang$frostc$Position local86;
org$frostlang$frostc$ASTNode* local87 = NULL;
org$frostlang$frostc$FixedArray* local88 = NULL;
org$frostlang$frostc$FixedArray* local89 = NULL;
org$frostlang$frostc$Position local90;
org$frostlang$frostc$ASTNode* local91 = NULL;
org$frostlang$frostc$FixedArray* local92 = NULL;
org$frostlang$frostc$MethodDecl$Kind local93;
frost$core$String* local94 = NULL;
org$frostlang$frostc$FixedArray* local95 = NULL;
org$frostlang$frostc$FixedArray* local96 = NULL;
org$frostlang$frostc$ASTNode* local97 = NULL;
org$frostlang$frostc$FixedArray* local98 = NULL;
org$frostlang$frostc$Position local99;
org$frostlang$frostc$parser$Token$Kind local100;
org$frostlang$frostc$FixedArray* local101 = NULL;
org$frostlang$frostc$ASTNode* local102 = NULL;
org$frostlang$frostc$Position local103;
org$frostlang$frostc$Position local104;
org$frostlang$frostc$ASTNode* local105 = NULL;
org$frostlang$frostc$Position local106;
frost$core$String* local107 = NULL;
org$frostlang$frostc$Position local108;
frost$core$String* local109 = NULL;
org$frostlang$frostc$ASTNode* local110 = NULL;
org$frostlang$frostc$Position local111;
org$frostlang$frostc$ASTNode* local112 = NULL;
frost$core$Bit local113;
org$frostlang$frostc$ASTNode* local114 = NULL;
org$frostlang$frostc$ASTNode* local115 = NULL;
org$frostlang$frostc$Position local116;
frost$core$Real64 local117;
org$frostlang$frostc$Position local118;
frost$core$String* local119 = NULL;
org$frostlang$frostc$Position local120;
org$frostlang$frostc$ASTNode* local121 = NULL;
org$frostlang$frostc$Position local122;
org$frostlang$frostc$Position local123;
frost$core$String* local124 = NULL;
org$frostlang$frostc$Position local125;
org$frostlang$frostc$Position local126;
org$frostlang$frostc$FixedArray* local127 = NULL;
org$frostlang$frostc$ASTNode* local128 = NULL;
org$frostlang$frostc$FixedArray* local129 = NULL;
org$frostlang$frostc$Position local130;
org$frostlang$frostc$FixedArray* local131 = NULL;
org$frostlang$frostc$Position local132;
org$frostlang$frostc$FixedArray* local133 = NULL;
org$frostlang$frostc$Position local134;
org$frostlang$frostc$FixedArray* local135 = NULL;
org$frostlang$frostc$Position local136;
frost$core$String* local137 = NULL;
org$frostlang$frostc$Position local138;
org$frostlang$frostc$FixedArray* local139 = NULL;
org$frostlang$frostc$ASTNode* local140 = NULL;
org$frostlang$frostc$Position local141;
frost$core$String* local142 = NULL;
org$frostlang$frostc$ASTNode* local143 = NULL;
org$frostlang$frostc$Position local144;
org$frostlang$frostc$expression$Unary$Operator local145;
org$frostlang$frostc$ASTNode* local146 = NULL;
org$frostlang$frostc$Position local147;
org$frostlang$frostc$ASTNode* local148 = NULL;
org$frostlang$frostc$Position local149;
org$frostlang$frostc$FixedArray* local150 = NULL;
org$frostlang$frostc$ASTNode* local151 = NULL;
org$frostlang$frostc$Position local152;
frost$core$String* local153 = NULL;
org$frostlang$frostc$Position local154;
org$frostlang$frostc$Variable$Kind local155;
org$frostlang$frostc$FixedArray* local156 = NULL;
org$frostlang$frostc$Position local157;
org$frostlang$frostc$FixedArray* local158 = NULL;
org$frostlang$frostc$FixedArray* local159 = NULL;
org$frostlang$frostc$Position local160;
frost$core$String* local161 = NULL;
org$frostlang$frostc$ASTNode* local162 = NULL;
org$frostlang$frostc$FixedArray* local163 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3008 = &param0->$rawValue;
frost$core$Int $tmp3009 = *$tmp3008;
frost$core$Int $tmp3010 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3011 = $tmp3009.value;
int64_t $tmp3012 = $tmp3010.value;
bool $tmp3013 = $tmp3011 == $tmp3012;
frost$core$Bit $tmp3014 = (frost$core$Bit) {$tmp3013};
bool $tmp3015 = $tmp3014.value;
if ($tmp3015) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp3016 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3017 = *$tmp3016;
*(&local0) = $tmp3017;
frost$core$String** $tmp3018 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3019 = *$tmp3018;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
frost$core$String* $tmp3020 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
*(&local1) = $tmp3019;
frost$core$String** $tmp3021 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp3022 = *$tmp3021;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
frost$core$String* $tmp3023 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
*(&local2) = $tmp3022;
org$frostlang$frostc$ASTNode** $tmp3024 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3025 = *$tmp3024;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
org$frostlang$frostc$ASTNode* $tmp3026 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
*(&local3) = $tmp3025;
// <no location>
frost$core$String* $tmp3027 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
// <no location>
frost$core$String* $tmp3028 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3029 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
org$frostlang$frostc$ASTNode* $tmp3030 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3031 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3032 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int $tmp3033 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3034 = $tmp3009.value;
int64_t $tmp3035 = $tmp3033.value;
bool $tmp3036 = $tmp3034 == $tmp3035;
frost$core$Bit $tmp3037 = (frost$core$Bit) {$tmp3036};
bool $tmp3038 = $tmp3037.value;
if ($tmp3038) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp3039 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3040 = *$tmp3039;
*(&local4) = $tmp3040;
org$frostlang$frostc$FixedArray** $tmp3041 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3042 = *$tmp3041;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
org$frostlang$frostc$FixedArray* $tmp3043 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
*(&local5) = $tmp3042;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3044 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
org$frostlang$frostc$FixedArray* $tmp3045 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block6:;
frost$core$Int $tmp3046 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3047 = $tmp3009.value;
int64_t $tmp3048 = $tmp3046.value;
bool $tmp3049 = $tmp3047 == $tmp3048;
frost$core$Bit $tmp3050 = (frost$core$Bit) {$tmp3049};
bool $tmp3051 = $tmp3050.value;
if ($tmp3051) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp3052 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3053 = *$tmp3052;
*(&local6) = $tmp3053;
org$frostlang$frostc$ASTNode** $tmp3054 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3055 = *$tmp3054;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
org$frostlang$frostc$ASTNode* $tmp3056 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
*(&local7) = $tmp3055;
org$frostlang$frostc$ASTNode** $tmp3057 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3058 = *$tmp3057;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
org$frostlang$frostc$ASTNode* $tmp3059 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
*(&local8) = $tmp3058;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3060 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3061 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
org$frostlang$frostc$ASTNode* $tmp3062 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3063 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int $tmp3064 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3065 = $tmp3009.value;
int64_t $tmp3066 = $tmp3064.value;
bool $tmp3067 = $tmp3065 == $tmp3066;
frost$core$Bit $tmp3068 = (frost$core$Bit) {$tmp3067};
bool $tmp3069 = $tmp3068.value;
if ($tmp3069) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp3070 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3071 = *$tmp3070;
*(&local9) = $tmp3071;
org$frostlang$frostc$ASTNode** $tmp3072 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3073 = *$tmp3072;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
org$frostlang$frostc$ASTNode* $tmp3074 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
*(&local10) = $tmp3073;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3075 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
org$frostlang$frostc$ASTNode* $tmp3076 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block12:;
frost$core$Int $tmp3077 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3078 = $tmp3009.value;
int64_t $tmp3079 = $tmp3077.value;
bool $tmp3080 = $tmp3078 == $tmp3079;
frost$core$Bit $tmp3081 = (frost$core$Bit) {$tmp3080};
bool $tmp3082 = $tmp3081.value;
if ($tmp3082) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp3083 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3084 = *$tmp3083;
*(&local11) = $tmp3084;
goto block1;
block15:;
frost$core$Int $tmp3085 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3086 = $tmp3009.value;
int64_t $tmp3087 = $tmp3085.value;
bool $tmp3088 = $tmp3086 == $tmp3087;
frost$core$Bit $tmp3089 = (frost$core$Bit) {$tmp3088};
bool $tmp3090 = $tmp3089.value;
if ($tmp3090) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp3091 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3092 = *$tmp3091;
*(&local12) = $tmp3092;
org$frostlang$frostc$ASTNode** $tmp3093 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3094 = *$tmp3093;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
org$frostlang$frostc$ASTNode* $tmp3095 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
*(&local13) = $tmp3094;
org$frostlang$frostc$expression$Binary$Operator* $tmp3096 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp3097 = *$tmp3096;
*(&local14) = $tmp3097;
org$frostlang$frostc$ASTNode** $tmp3098 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3099 = *$tmp3098;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
org$frostlang$frostc$ASTNode* $tmp3100 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
*(&local15) = $tmp3099;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3101 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3102 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
org$frostlang$frostc$ASTNode* $tmp3103 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3104 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block18:;
frost$core$Int $tmp3105 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3106 = $tmp3009.value;
int64_t $tmp3107 = $tmp3105.value;
bool $tmp3108 = $tmp3106 == $tmp3107;
frost$core$Bit $tmp3109 = (frost$core$Bit) {$tmp3108};
bool $tmp3110 = $tmp3109.value;
if ($tmp3110) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp3111 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3112 = *$tmp3111;
*(&local16) = $tmp3112;
frost$core$Bit* $tmp3113 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp3114 = *$tmp3113;
*(&local17) = $tmp3114;
goto block1;
block21:;
frost$core$Int $tmp3115 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3116 = $tmp3009.value;
int64_t $tmp3117 = $tmp3115.value;
bool $tmp3118 = $tmp3116 == $tmp3117;
frost$core$Bit $tmp3119 = (frost$core$Bit) {$tmp3118};
bool $tmp3120 = $tmp3119.value;
if ($tmp3120) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp3121 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3122 = *$tmp3121;
*(&local18) = $tmp3122;
org$frostlang$frostc$FixedArray** $tmp3123 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3124 = *$tmp3123;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
org$frostlang$frostc$FixedArray* $tmp3125 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
*(&local19) = $tmp3124;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3126 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
org$frostlang$frostc$FixedArray* $tmp3127 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block24:;
frost$core$Int $tmp3128 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3129 = $tmp3009.value;
int64_t $tmp3130 = $tmp3128.value;
bool $tmp3131 = $tmp3129 == $tmp3130;
frost$core$Bit $tmp3132 = (frost$core$Bit) {$tmp3131};
bool $tmp3133 = $tmp3132.value;
if ($tmp3133) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp3134 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3135 = *$tmp3134;
*(&local20) = $tmp3135;
frost$core$String** $tmp3136 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3137 = *$tmp3136;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$String* $tmp3138 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
*(&local21) = $tmp3137;
// <no location>
frost$core$String* $tmp3139 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
frost$core$String* $tmp3140 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Int $tmp3141 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3142 = $tmp3009.value;
int64_t $tmp3143 = $tmp3141.value;
bool $tmp3144 = $tmp3142 == $tmp3143;
frost$core$Bit $tmp3145 = (frost$core$Bit) {$tmp3144};
bool $tmp3146 = $tmp3145.value;
if ($tmp3146) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp3147 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3148 = *$tmp3147;
*(&local22) = $tmp3148;
org$frostlang$frostc$ASTNode** $tmp3149 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3150 = *$tmp3149;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
org$frostlang$frostc$ASTNode* $tmp3151 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3151));
*(&local23) = $tmp3150;
org$frostlang$frostc$FixedArray** $tmp3152 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3153 = *$tmp3152;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3153));
org$frostlang$frostc$FixedArray* $tmp3154 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
*(&local24) = $tmp3153;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3155 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3156 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
org$frostlang$frostc$FixedArray* $tmp3157 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3158 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block30:;
frost$core$Int $tmp3159 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3160 = $tmp3009.value;
int64_t $tmp3161 = $tmp3159.value;
bool $tmp3162 = $tmp3160 == $tmp3161;
frost$core$Bit $tmp3163 = (frost$core$Bit) {$tmp3162};
bool $tmp3164 = $tmp3163.value;
if ($tmp3164) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp3165 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3166 = *$tmp3165;
*(&local25) = $tmp3166;
org$frostlang$frostc$ASTNode** $tmp3167 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3168 = *$tmp3167;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
org$frostlang$frostc$ASTNode* $tmp3169 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
*(&local26) = $tmp3168;
frost$core$String** $tmp3170 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp3171 = *$tmp3170;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
frost$core$String* $tmp3172 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
*(&local27) = $tmp3171;
org$frostlang$frostc$FixedArray** $tmp3173 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3174 = *$tmp3173;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
org$frostlang$frostc$FixedArray* $tmp3175 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3175));
*(&local28) = $tmp3174;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3176 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
// <no location>
frost$core$String* $tmp3177 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3178 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
org$frostlang$frostc$FixedArray* $tmp3179 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3180 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp3181 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block33:;
frost$core$Int $tmp3182 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3183 = $tmp3009.value;
int64_t $tmp3184 = $tmp3182.value;
bool $tmp3185 = $tmp3183 == $tmp3184;
frost$core$Bit $tmp3186 = (frost$core$Bit) {$tmp3185};
bool $tmp3187 = $tmp3186.value;
if ($tmp3187) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp3188 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3189 = *$tmp3188;
*(&local29) = $tmp3189;
org$frostlang$frostc$ASTNode** $tmp3190 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3191 = *$tmp3190;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
org$frostlang$frostc$ASTNode* $tmp3192 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local30) = $tmp3191;
org$frostlang$frostc$ChoiceCase** $tmp3193 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp3194 = *$tmp3193;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
org$frostlang$frostc$ChoiceCase* $tmp3195 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
*(&local31) = $tmp3194;
frost$core$Int* $tmp3196 = (frost$core$Int*) (param0->$data + 40);
frost$core$Int $tmp3197 = *$tmp3196;
*(&local32) = $tmp3197;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3198 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
// <no location>
org$frostlang$frostc$ChoiceCase* $tmp3199 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
org$frostlang$frostc$ChoiceCase* $tmp3200 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp3201 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block36:;
frost$core$Int $tmp3202 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3203 = $tmp3009.value;
int64_t $tmp3204 = $tmp3202.value;
bool $tmp3205 = $tmp3203 == $tmp3204;
frost$core$Bit $tmp3206 = (frost$core$Bit) {$tmp3205};
bool $tmp3207 = $tmp3206.value;
if ($tmp3207) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp3208 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3209 = *$tmp3208;
*(&local33) = $tmp3209;
org$frostlang$frostc$ASTNode** $tmp3210 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3211 = *$tmp3210;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
org$frostlang$frostc$ASTNode* $tmp3212 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
*(&local34) = $tmp3211;
org$frostlang$frostc$FixedArray** $tmp3213 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3214 = *$tmp3213;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
org$frostlang$frostc$FixedArray* $tmp3215 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
*(&local35) = $tmp3214;
org$frostlang$frostc$ClassDecl$Kind* $tmp3216 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp3217 = *$tmp3216;
*(&local36) = $tmp3217;
frost$core$String** $tmp3218 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp3219 = *$tmp3218;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
frost$core$String* $tmp3220 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
*(&local37) = $tmp3219;
org$frostlang$frostc$FixedArray** $tmp3221 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3222 = *$tmp3221;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
org$frostlang$frostc$FixedArray* $tmp3223 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local38) = $tmp3222;
org$frostlang$frostc$FixedArray** $tmp3224 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3225 = *$tmp3224;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
org$frostlang$frostc$FixedArray* $tmp3226 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
*(&local39) = $tmp3225;
org$frostlang$frostc$FixedArray** $tmp3227 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp3228 = *$tmp3227;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3228));
org$frostlang$frostc$FixedArray* $tmp3229 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3229));
*(&local40) = $tmp3228;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3230 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3231 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3231));
// <no location>
frost$core$String* $tmp3232 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3233 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3233));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3234 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3235 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
org$frostlang$frostc$FixedArray* $tmp3236 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3237 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3238 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3239 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3240 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3241 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int $tmp3242 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3243 = $tmp3009.value;
int64_t $tmp3244 = $tmp3242.value;
bool $tmp3245 = $tmp3243 == $tmp3244;
frost$core$Bit $tmp3246 = (frost$core$Bit) {$tmp3245};
bool $tmp3247 = $tmp3246.value;
if ($tmp3247) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp3248 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3249 = *$tmp3248;
*(&local41) = $tmp3249;
frost$core$String** $tmp3250 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3251 = *$tmp3250;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3251));
frost$core$String* $tmp3252 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
*(&local42) = $tmp3251;
// <no location>
frost$core$String* $tmp3253 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
frost$core$String* $tmp3254 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block42:;
frost$core$Int $tmp3255 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3256 = $tmp3009.value;
int64_t $tmp3257 = $tmp3255.value;
bool $tmp3258 = $tmp3256 == $tmp3257;
frost$core$Bit $tmp3259 = (frost$core$Bit) {$tmp3258};
bool $tmp3260 = $tmp3259.value;
if ($tmp3260) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp3261 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3262 = *$tmp3261;
*(&local43) = $tmp3262;
org$frostlang$frostc$ASTNode** $tmp3263 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3264 = *$tmp3263;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
org$frostlang$frostc$ASTNode* $tmp3265 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
*(&local44) = $tmp3264;
org$frostlang$frostc$ASTNode** $tmp3266 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3267 = *$tmp3266;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
org$frostlang$frostc$ASTNode* $tmp3268 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
*(&local45) = $tmp3267;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3269 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3270 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3270));
org$frostlang$frostc$ASTNode* $tmp3271 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3272 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block45:;
frost$core$Int $tmp3273 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3274 = $tmp3009.value;
int64_t $tmp3275 = $tmp3273.value;
bool $tmp3276 = $tmp3274 == $tmp3275;
frost$core$Bit $tmp3277 = (frost$core$Bit) {$tmp3276};
bool $tmp3278 = $tmp3277.value;
if ($tmp3278) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp3279 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3280 = *$tmp3279;
*(&local46) = $tmp3280;
frost$core$String** $tmp3281 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3282 = *$tmp3281;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
frost$core$String* $tmp3283 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
*(&local47) = $tmp3282;
org$frostlang$frostc$FixedArray** $tmp3284 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3285 = *$tmp3284;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
org$frostlang$frostc$FixedArray* $tmp3286 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
*(&local48) = $tmp3285;
org$frostlang$frostc$ASTNode** $tmp3287 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3288 = *$tmp3287;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3288));
org$frostlang$frostc$ASTNode* $tmp3289 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
*(&local49) = $tmp3288;
// <no location>
frost$core$String* $tmp3290 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3291 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3291));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3292 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3292));
org$frostlang$frostc$ASTNode* $tmp3293 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3293));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3294 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3294));
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3295 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3295));
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Int $tmp3296 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3297 = $tmp3009.value;
int64_t $tmp3298 = $tmp3296.value;
bool $tmp3299 = $tmp3297 == $tmp3298;
frost$core$Bit $tmp3300 = (frost$core$Bit) {$tmp3299};
bool $tmp3301 = $tmp3300.value;
if ($tmp3301) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp3302 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3303 = *$tmp3302;
*(&local50) = $tmp3303;
org$frostlang$frostc$ASTNode** $tmp3304 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3305 = *$tmp3304;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3305));
org$frostlang$frostc$ASTNode* $tmp3306 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
*(&local51) = $tmp3305;
frost$core$String** $tmp3307 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp3308 = *$tmp3307;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
frost$core$String* $tmp3309 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3309));
*(&local52) = $tmp3308;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3310 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
// <no location>
frost$core$String* $tmp3311 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
frost$core$String* $tmp3312 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3312));
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp3313 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int $tmp3314 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3315 = $tmp3009.value;
int64_t $tmp3316 = $tmp3314.value;
bool $tmp3317 = $tmp3315 == $tmp3316;
frost$core$Bit $tmp3318 = (frost$core$Bit) {$tmp3317};
bool $tmp3319 = $tmp3318.value;
if ($tmp3319) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Position* $tmp3320 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3321 = *$tmp3320;
*(&local53) = $tmp3321;
org$frostlang$frostc$ASTNode** $tmp3322 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3323 = *$tmp3322;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
org$frostlang$frostc$ASTNode* $tmp3324 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
*(&local54) = $tmp3323;
frost$core$String** $tmp3325 = (frost$core$String**) (param0->$data + 32);
frost$core$String* $tmp3326 = *$tmp3325;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3326));
frost$core$String* $tmp3327 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
*(&local55) = $tmp3326;
org$frostlang$frostc$FixedArray** $tmp3328 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3329 = *$tmp3328;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
org$frostlang$frostc$FixedArray* $tmp3330 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
*(&local56) = $tmp3329;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3331 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3331));
// <no location>
frost$core$String* $tmp3332 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3333 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3333));
org$frostlang$frostc$FixedArray* $tmp3334 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3335 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp3336 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block54:;
frost$core$Int $tmp3337 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3338 = $tmp3009.value;
int64_t $tmp3339 = $tmp3337.value;
bool $tmp3340 = $tmp3338 == $tmp3339;
frost$core$Bit $tmp3341 = (frost$core$Bit) {$tmp3340};
bool $tmp3342 = $tmp3341.value;
if ($tmp3342) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp3343 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3344 = *$tmp3343;
*(&local57) = $tmp3344;
org$frostlang$frostc$ASTNode** $tmp3345 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3346 = *$tmp3345;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3346));
org$frostlang$frostc$ASTNode* $tmp3347 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
*(&local58) = $tmp3346;
org$frostlang$frostc$FixedArray** $tmp3348 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3349 = *$tmp3348;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3349));
org$frostlang$frostc$FixedArray* $tmp3350 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
*(&local59) = $tmp3349;
org$frostlang$frostc$ASTNode** $tmp3351 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3352 = *$tmp3351;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
org$frostlang$frostc$ASTNode* $tmp3353 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3353));
*(&local60) = $tmp3352;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3354 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3355 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3356 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
org$frostlang$frostc$ASTNode* $tmp3357 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3358 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3358));
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3359 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block57:;
frost$core$Int $tmp3360 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3361 = $tmp3009.value;
int64_t $tmp3362 = $tmp3360.value;
bool $tmp3363 = $tmp3361 == $tmp3362;
frost$core$Bit $tmp3364 = (frost$core$Bit) {$tmp3363};
bool $tmp3365 = $tmp3364.value;
if ($tmp3365) goto block59; else goto block60;
block59:;
org$frostlang$frostc$FixedArray** $tmp3366 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp3367 = *$tmp3366;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
org$frostlang$frostc$FixedArray* $tmp3368 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
*(&local61) = $tmp3367;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3369 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3369));
org$frostlang$frostc$FixedArray* $tmp3370 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block60:;
frost$core$Int $tmp3371 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3372 = $tmp3009.value;
int64_t $tmp3373 = $tmp3371.value;
bool $tmp3374 = $tmp3372 == $tmp3373;
frost$core$Bit $tmp3375 = (frost$core$Bit) {$tmp3374};
bool $tmp3376 = $tmp3375.value;
if ($tmp3376) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp3377 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3378 = *$tmp3377;
*(&local62) = $tmp3378;
frost$core$String** $tmp3379 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3380 = *$tmp3379;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3380));
frost$core$String* $tmp3381 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
*(&local63) = $tmp3380;
org$frostlang$frostc$ASTNode** $tmp3382 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3383 = *$tmp3382;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
org$frostlang$frostc$ASTNode* $tmp3384 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3384));
*(&local64) = $tmp3383;
org$frostlang$frostc$ASTNode** $tmp3385 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3386 = *$tmp3385;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3386));
org$frostlang$frostc$ASTNode* $tmp3387 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3387));
*(&local65) = $tmp3386;
org$frostlang$frostc$FixedArray** $tmp3388 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp3389 = *$tmp3388;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
org$frostlang$frostc$FixedArray* $tmp3390 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
*(&local66) = $tmp3389;
// <no location>
frost$core$String* $tmp3391 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3392 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3392));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3393 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3393));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3394 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
org$frostlang$frostc$FixedArray* $tmp3395 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3396 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3397 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3398 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block63:;
frost$core$Int $tmp3399 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3400 = $tmp3009.value;
int64_t $tmp3401 = $tmp3399.value;
bool $tmp3402 = $tmp3400 == $tmp3401;
frost$core$Bit $tmp3403 = (frost$core$Bit) {$tmp3402};
bool $tmp3404 = $tmp3403.value;
if ($tmp3404) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Position* $tmp3405 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3406 = *$tmp3405;
*(&local67) = $tmp3406;
frost$core$String** $tmp3407 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3408 = *$tmp3407;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
frost$core$String* $tmp3409 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
*(&local68) = $tmp3408;
org$frostlang$frostc$FixedArray** $tmp3410 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3411 = *$tmp3410;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
org$frostlang$frostc$FixedArray* $tmp3412 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3412));
*(&local69) = $tmp3411;
// <no location>
frost$core$String* $tmp3413 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3413));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3414 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
org$frostlang$frostc$FixedArray* $tmp3415 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3416 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block66:;
frost$core$Int $tmp3417 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3418 = $tmp3009.value;
int64_t $tmp3419 = $tmp3417.value;
bool $tmp3420 = $tmp3418 == $tmp3419;
frost$core$Bit $tmp3421 = (frost$core$Bit) {$tmp3420};
bool $tmp3422 = $tmp3421.value;
if ($tmp3422) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp3423 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3424 = *$tmp3423;
*(&local70) = $tmp3424;
frost$core$String** $tmp3425 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3426 = *$tmp3425;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3426));
frost$core$String* $tmp3427 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
*(&local71) = $tmp3426;
// <no location>
frost$core$String* $tmp3428 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3428));
frost$core$String* $tmp3429 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int $tmp3430 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3431 = $tmp3009.value;
int64_t $tmp3432 = $tmp3430.value;
bool $tmp3433 = $tmp3431 == $tmp3432;
frost$core$Bit $tmp3434 = (frost$core$Bit) {$tmp3433};
bool $tmp3435 = $tmp3434.value;
if ($tmp3435) goto block71; else goto block72;
block71:;
org$frostlang$frostc$Position* $tmp3436 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3437 = *$tmp3436;
*(&local72) = $tmp3437;
frost$core$String** $tmp3438 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3439 = *$tmp3438;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
frost$core$String* $tmp3440 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
*(&local73) = $tmp3439;
org$frostlang$frostc$FixedArray** $tmp3441 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3442 = *$tmp3441;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3442));
org$frostlang$frostc$FixedArray* $tmp3443 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3443));
*(&local74) = $tmp3442;
// <no location>
frost$core$String* $tmp3444 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3445 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3445));
org$frostlang$frostc$FixedArray* $tmp3446 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3447 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3447));
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block72:;
frost$core$Int $tmp3448 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3449 = $tmp3009.value;
int64_t $tmp3450 = $tmp3448.value;
bool $tmp3451 = $tmp3449 == $tmp3450;
frost$core$Bit $tmp3452 = (frost$core$Bit) {$tmp3451};
bool $tmp3453 = $tmp3452.value;
if ($tmp3453) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp3454 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3455 = *$tmp3454;
*(&local75) = $tmp3455;
org$frostlang$frostc$ASTNode** $tmp3456 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3457 = *$tmp3456;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
org$frostlang$frostc$ASTNode* $tmp3458 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
*(&local76) = $tmp3457;
org$frostlang$frostc$FixedArray** $tmp3459 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3460 = *$tmp3459;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3460));
org$frostlang$frostc$FixedArray* $tmp3461 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3461));
*(&local77) = $tmp3460;
org$frostlang$frostc$ASTNode** $tmp3462 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3463 = *$tmp3462;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
org$frostlang$frostc$ASTNode* $tmp3464 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3464));
*(&local78) = $tmp3463;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3465 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3465));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3466 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3466));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3467 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
org$frostlang$frostc$ASTNode* $tmp3468 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3468));
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3469 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3470 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block75:;
frost$core$Int $tmp3471 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3472 = $tmp3009.value;
int64_t $tmp3473 = $tmp3471.value;
bool $tmp3474 = $tmp3472 == $tmp3473;
frost$core$Bit $tmp3475 = (frost$core$Bit) {$tmp3474};
bool $tmp3476 = $tmp3475.value;
if ($tmp3476) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Position* $tmp3477 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3478 = *$tmp3477;
*(&local79) = $tmp3478;
frost$core$UInt64* $tmp3479 = (frost$core$UInt64*) (param0->$data + 24);
frost$core$UInt64 $tmp3480 = *$tmp3479;
*(&local80) = $tmp3480;
goto block1;
block78:;
frost$core$Int $tmp3481 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3482 = $tmp3009.value;
int64_t $tmp3483 = $tmp3481.value;
bool $tmp3484 = $tmp3482 == $tmp3483;
frost$core$Bit $tmp3485 = (frost$core$Bit) {$tmp3484};
bool $tmp3486 = $tmp3485.value;
if ($tmp3486) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp3487 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3488 = *$tmp3487;
*(&local81) = $tmp3488;
org$frostlang$frostc$IR$Value** $tmp3489 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
org$frostlang$frostc$IR$Value* $tmp3490 = *$tmp3489;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
org$frostlang$frostc$IR$Value* $tmp3491 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3491));
*(&local82) = $tmp3490;
// <no location>
org$frostlang$frostc$IR$Value* $tmp3492 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3492));
org$frostlang$frostc$IR$Value* $tmp3493 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3493));
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block81:;
frost$core$Int $tmp3494 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3495 = $tmp3009.value;
int64_t $tmp3496 = $tmp3494.value;
bool $tmp3497 = $tmp3495 == $tmp3496;
frost$core$Bit $tmp3498 = (frost$core$Bit) {$tmp3497};
bool $tmp3499 = $tmp3498.value;
if ($tmp3499) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Position* $tmp3500 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3501 = *$tmp3500;
*(&local83) = $tmp3501;
frost$core$String** $tmp3502 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3503 = *$tmp3502;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3503));
frost$core$String* $tmp3504 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3504));
*(&local84) = $tmp3503;
org$frostlang$frostc$FixedArray** $tmp3505 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3506 = *$tmp3505;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3506));
org$frostlang$frostc$FixedArray* $tmp3507 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3507));
*(&local85) = $tmp3506;
// <no location>
frost$core$String* $tmp3508 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3509 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3509));
org$frostlang$frostc$FixedArray* $tmp3510 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3511 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block84:;
frost$core$Int $tmp3512 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3513 = $tmp3009.value;
int64_t $tmp3514 = $tmp3512.value;
bool $tmp3515 = $tmp3513 == $tmp3514;
frost$core$Bit $tmp3516 = (frost$core$Bit) {$tmp3515};
bool $tmp3517 = $tmp3516.value;
if ($tmp3517) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp3518 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3519 = *$tmp3518;
*(&local86) = $tmp3519;
org$frostlang$frostc$ASTNode** $tmp3520 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3521 = *$tmp3520;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3521));
org$frostlang$frostc$ASTNode* $tmp3522 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
*(&local87) = $tmp3521;
org$frostlang$frostc$FixedArray** $tmp3523 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3524 = *$tmp3523;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
org$frostlang$frostc$FixedArray* $tmp3525 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
*(&local88) = $tmp3524;
org$frostlang$frostc$FixedArray** $tmp3526 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3527 = *$tmp3526;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3527));
org$frostlang$frostc$FixedArray* $tmp3528 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3528));
*(&local89) = $tmp3527;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3529 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3530 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3531 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
org$frostlang$frostc$FixedArray* $tmp3532 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3533 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3534 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block87:;
frost$core$Int $tmp3535 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3536 = $tmp3009.value;
int64_t $tmp3537 = $tmp3535.value;
bool $tmp3538 = $tmp3536 == $tmp3537;
frost$core$Bit $tmp3539 = (frost$core$Bit) {$tmp3538};
bool $tmp3540 = $tmp3539.value;
if ($tmp3540) goto block89; else goto block90;
block89:;
org$frostlang$frostc$Position* $tmp3541 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3542 = *$tmp3541;
*(&local90) = $tmp3542;
org$frostlang$frostc$ASTNode** $tmp3543 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3544 = *$tmp3543;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3544));
org$frostlang$frostc$ASTNode* $tmp3545 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3545));
*(&local91) = $tmp3544;
org$frostlang$frostc$FixedArray** $tmp3546 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3547 = *$tmp3546;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3547));
org$frostlang$frostc$FixedArray* $tmp3548 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
*(&local92) = $tmp3547;
org$frostlang$frostc$MethodDecl$Kind* $tmp3549 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3550 = *$tmp3549;
*(&local93) = $tmp3550;
frost$core$String** $tmp3551 = (frost$core$String**) (param0->$data + 48);
frost$core$String* $tmp3552 = *$tmp3551;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3552));
frost$core$String* $tmp3553 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
*(&local94) = $tmp3552;
org$frostlang$frostc$FixedArray** $tmp3554 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3555 = *$tmp3554;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3555));
org$frostlang$frostc$FixedArray* $tmp3556 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
*(&local95) = $tmp3555;
org$frostlang$frostc$FixedArray** $tmp3557 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3558 = *$tmp3557;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
org$frostlang$frostc$FixedArray* $tmp3559 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3559));
*(&local96) = $tmp3558;
org$frostlang$frostc$ASTNode** $tmp3560 = (org$frostlang$frostc$ASTNode**) (param0->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3561 = *$tmp3560;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3561));
org$frostlang$frostc$ASTNode* $tmp3562 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
*(&local97) = $tmp3561;
org$frostlang$frostc$FixedArray** $tmp3563 = (org$frostlang$frostc$FixedArray**) (param0->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3564 = *$tmp3563;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
org$frostlang$frostc$FixedArray* $tmp3565 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
*(&local98) = $tmp3564;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3566 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3566));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3567 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
// <no location>
frost$core$String* $tmp3568 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3568));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3569 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3569));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3570 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3570));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3571 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3572 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
org$frostlang$frostc$FixedArray* $tmp3573 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3574 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3574));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3575 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3576 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3576));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3577 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3578 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3579 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block90:;
frost$core$Int $tmp3580 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3581 = $tmp3009.value;
int64_t $tmp3582 = $tmp3580.value;
bool $tmp3583 = $tmp3581 == $tmp3582;
frost$core$Bit $tmp3584 = (frost$core$Bit) {$tmp3583};
bool $tmp3585 = $tmp3584.value;
if ($tmp3585) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp3586 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3587 = *$tmp3586;
*(&local99) = $tmp3587;
org$frostlang$frostc$parser$Token$Kind* $tmp3588 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp3589 = *$tmp3588;
*(&local100) = $tmp3589;
org$frostlang$frostc$FixedArray** $tmp3590 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3591 = *$tmp3590;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3591));
org$frostlang$frostc$FixedArray* $tmp3592 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
*(&local101) = $tmp3591;
org$frostlang$frostc$ASTNode** $tmp3593 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
org$frostlang$frostc$ASTNode* $tmp3594 = *$tmp3593;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3594));
org$frostlang$frostc$ASTNode* $tmp3595 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
*(&local102) = $tmp3594;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3596 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3597 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3597));
org$frostlang$frostc$ASTNode* $tmp3598 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3598));
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3599 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block93:;
frost$core$Int $tmp3600 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3601 = $tmp3009.value;
int64_t $tmp3602 = $tmp3600.value;
bool $tmp3603 = $tmp3601 == $tmp3602;
frost$core$Bit $tmp3604 = (frost$core$Bit) {$tmp3603};
bool $tmp3605 = $tmp3604.value;
if ($tmp3605) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Position* $tmp3606 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3607 = *$tmp3606;
*(&local103) = $tmp3607;
goto block1;
block96:;
frost$core$Int $tmp3608 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3609 = $tmp3009.value;
int64_t $tmp3610 = $tmp3608.value;
bool $tmp3611 = $tmp3609 == $tmp3610;
frost$core$Bit $tmp3612 = (frost$core$Bit) {$tmp3611};
bool $tmp3613 = $tmp3612.value;
if ($tmp3613) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3614 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3615 = *$tmp3614;
*(&local104) = $tmp3615;
org$frostlang$frostc$ASTNode** $tmp3616 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3617 = *$tmp3616;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3617));
org$frostlang$frostc$ASTNode* $tmp3618 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
*(&local105) = $tmp3617;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3619 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
org$frostlang$frostc$ASTNode* $tmp3620 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3620));
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block99:;
frost$core$Int $tmp3621 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3622 = $tmp3009.value;
int64_t $tmp3623 = $tmp3621.value;
bool $tmp3624 = $tmp3622 == $tmp3623;
frost$core$Bit $tmp3625 = (frost$core$Bit) {$tmp3624};
bool $tmp3626 = $tmp3625.value;
if ($tmp3626) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp3627 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3628 = *$tmp3627;
*(&local106) = $tmp3628;
frost$core$String** $tmp3629 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3630 = *$tmp3629;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
frost$core$String* $tmp3631 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
*(&local107) = $tmp3630;
// <no location>
frost$core$String* $tmp3632 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3632));
frost$core$String* $tmp3633 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block102:;
frost$core$Int $tmp3634 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3635 = $tmp3009.value;
int64_t $tmp3636 = $tmp3634.value;
bool $tmp3637 = $tmp3635 == $tmp3636;
frost$core$Bit $tmp3638 = (frost$core$Bit) {$tmp3637};
bool $tmp3639 = $tmp3638.value;
if ($tmp3639) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3640 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3641 = *$tmp3640;
*(&local108) = $tmp3641;
frost$core$String** $tmp3642 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3643 = *$tmp3642;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
frost$core$String* $tmp3644 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3644));
*(&local109) = $tmp3643;
org$frostlang$frostc$ASTNode** $tmp3645 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3646 = *$tmp3645;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3646));
org$frostlang$frostc$ASTNode* $tmp3647 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3647));
*(&local110) = $tmp3646;
// <no location>
frost$core$String* $tmp3648 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3649 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3649));
org$frostlang$frostc$ASTNode* $tmp3650 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3650));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3651 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3651));
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block105:;
frost$core$Int $tmp3652 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3653 = $tmp3009.value;
int64_t $tmp3654 = $tmp3652.value;
bool $tmp3655 = $tmp3653 == $tmp3654;
frost$core$Bit $tmp3656 = (frost$core$Bit) {$tmp3655};
bool $tmp3657 = $tmp3656.value;
if ($tmp3657) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Position* $tmp3658 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3659 = *$tmp3658;
*(&local111) = $tmp3659;
org$frostlang$frostc$ASTNode** $tmp3660 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3661 = *$tmp3660;
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
org$frostlang$frostc$ASTNode* $tmp3662 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
*(&local112) = $tmp3661;
frost$core$Bit* $tmp3663 = (frost$core$Bit*) (param0->$data + 32);
frost$core$Bit $tmp3664 = *$tmp3663;
*(&local113) = $tmp3664;
org$frostlang$frostc$ASTNode** $tmp3665 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp3666 = *$tmp3665;
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3666));
org$frostlang$frostc$ASTNode* $tmp3667 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
*(&local114) = $tmp3666;
org$frostlang$frostc$ASTNode** $tmp3668 = (org$frostlang$frostc$ASTNode**) (param0->$data + 41);
org$frostlang$frostc$ASTNode* $tmp3669 = *$tmp3668;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
org$frostlang$frostc$ASTNode* $tmp3670 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
*(&local115) = $tmp3669;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3671 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3671));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3672 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3673 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
org$frostlang$frostc$ASTNode* $tmp3674 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3675 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3676 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block108:;
frost$core$Int $tmp3677 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3678 = $tmp3009.value;
int64_t $tmp3679 = $tmp3677.value;
bool $tmp3680 = $tmp3678 == $tmp3679;
frost$core$Bit $tmp3681 = (frost$core$Bit) {$tmp3680};
bool $tmp3682 = $tmp3681.value;
if ($tmp3682) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp3683 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3684 = *$tmp3683;
*(&local116) = $tmp3684;
frost$core$Real64* $tmp3685 = (frost$core$Real64*) (param0->$data + 24);
frost$core$Real64 $tmp3686 = *$tmp3685;
*(&local117) = $tmp3686;
goto block1;
block111:;
frost$core$Int $tmp3687 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3688 = $tmp3009.value;
int64_t $tmp3689 = $tmp3687.value;
bool $tmp3690 = $tmp3688 == $tmp3689;
frost$core$Bit $tmp3691 = (frost$core$Bit) {$tmp3690};
bool $tmp3692 = $tmp3691.value;
if ($tmp3692) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp3693 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3694 = *$tmp3693;
*(&local118) = $tmp3694;
frost$core$String** $tmp3695 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3696 = *$tmp3695;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
frost$core$String* $tmp3697 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
*(&local119) = $tmp3696;
// <no location>
frost$core$String* $tmp3698 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3698));
frost$core$String* $tmp3699 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3699));
*(&local119) = ((frost$core$String*) NULL);
goto block1;
block114:;
frost$core$Int $tmp3700 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3701 = $tmp3009.value;
int64_t $tmp3702 = $tmp3700.value;
bool $tmp3703 = $tmp3701 == $tmp3702;
frost$core$Bit $tmp3704 = (frost$core$Bit) {$tmp3703};
bool $tmp3705 = $tmp3704.value;
if ($tmp3705) goto block116; else goto block117;
block116:;
org$frostlang$frostc$Position* $tmp3706 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3707 = *$tmp3706;
*(&local120) = $tmp3707;
org$frostlang$frostc$ASTNode** $tmp3708 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3709 = *$tmp3708;
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
org$frostlang$frostc$ASTNode* $tmp3710 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
*(&local121) = $tmp3709;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3711 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
org$frostlang$frostc$ASTNode* $tmp3712 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block117:;
frost$core$Int $tmp3713 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3714 = $tmp3009.value;
int64_t $tmp3715 = $tmp3713.value;
bool $tmp3716 = $tmp3714 == $tmp3715;
frost$core$Bit $tmp3717 = (frost$core$Bit) {$tmp3716};
bool $tmp3718 = $tmp3717.value;
if ($tmp3718) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp3719 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3720 = *$tmp3719;
*(&local122) = $tmp3720;
goto block1;
block120:;
frost$core$Int $tmp3721 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3722 = $tmp3009.value;
int64_t $tmp3723 = $tmp3721.value;
bool $tmp3724 = $tmp3722 == $tmp3723;
frost$core$Bit $tmp3725 = (frost$core$Bit) {$tmp3724};
bool $tmp3726 = $tmp3725.value;
if ($tmp3726) goto block122; else goto block123;
block122:;
org$frostlang$frostc$Position* $tmp3727 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3728 = *$tmp3727;
*(&local123) = $tmp3728;
frost$core$String** $tmp3729 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3730 = *$tmp3729;
*(&local124) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
frost$core$String* $tmp3731 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3731));
*(&local124) = $tmp3730;
// <no location>
frost$core$String* $tmp3732 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3732));
frost$core$String* $tmp3733 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
*(&local124) = ((frost$core$String*) NULL);
goto block1;
block123:;
frost$core$Int $tmp3734 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3735 = $tmp3009.value;
int64_t $tmp3736 = $tmp3734.value;
bool $tmp3737 = $tmp3735 == $tmp3736;
frost$core$Bit $tmp3738 = (frost$core$Bit) {$tmp3737};
bool $tmp3739 = $tmp3738.value;
if ($tmp3739) goto block125; else goto block126;
block125:;
org$frostlang$frostc$Position* $tmp3740 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3741 = *$tmp3740;
*(&local125) = $tmp3741;
goto block1;
block126:;
frost$core$Int $tmp3742 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3743 = $tmp3009.value;
int64_t $tmp3744 = $tmp3742.value;
bool $tmp3745 = $tmp3743 == $tmp3744;
frost$core$Bit $tmp3746 = (frost$core$Bit) {$tmp3745};
bool $tmp3747 = $tmp3746.value;
if ($tmp3747) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Position* $tmp3748 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3749 = *$tmp3748;
*(&local126) = $tmp3749;
org$frostlang$frostc$FixedArray** $tmp3750 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3751 = *$tmp3750;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3751));
org$frostlang$frostc$FixedArray* $tmp3752 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3752));
*(&local127) = $tmp3751;
org$frostlang$frostc$ASTNode** $tmp3753 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3754 = *$tmp3753;
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
org$frostlang$frostc$ASTNode* $tmp3755 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
*(&local128) = $tmp3754;
org$frostlang$frostc$FixedArray** $tmp3756 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3757 = *$tmp3756;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3757));
org$frostlang$frostc$FixedArray* $tmp3758 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3758));
*(&local129) = $tmp3757;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3759 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3760 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3760));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3761 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
org$frostlang$frostc$FixedArray* $tmp3762 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3763 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3764 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3764));
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block129:;
frost$core$Int $tmp3765 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3766 = $tmp3009.value;
int64_t $tmp3767 = $tmp3765.value;
bool $tmp3768 = $tmp3766 == $tmp3767;
frost$core$Bit $tmp3769 = (frost$core$Bit) {$tmp3768};
bool $tmp3770 = $tmp3769.value;
if ($tmp3770) goto block131; else goto block132;
block131:;
org$frostlang$frostc$Position* $tmp3771 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3772 = *$tmp3771;
*(&local130) = $tmp3772;
org$frostlang$frostc$FixedArray** $tmp3773 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3774 = *$tmp3773;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
org$frostlang$frostc$FixedArray* $tmp3775 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
*(&local131) = $tmp3774;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3776 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
org$frostlang$frostc$FixedArray* $tmp3777 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block132:;
frost$core$Int $tmp3778 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3779 = $tmp3009.value;
int64_t $tmp3780 = $tmp3778.value;
bool $tmp3781 = $tmp3779 == $tmp3780;
frost$core$Bit $tmp3782 = (frost$core$Bit) {$tmp3781};
bool $tmp3783 = $tmp3782.value;
if ($tmp3783) goto block134; else goto block135;
block134:;
org$frostlang$frostc$Position* $tmp3784 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3785 = *$tmp3784;
*(&local132) = $tmp3785;
org$frostlang$frostc$FixedArray** $tmp3786 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3787 = *$tmp3786;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3787));
org$frostlang$frostc$FixedArray* $tmp3788 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3788));
*(&local133) = $tmp3787;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3789 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3789));
org$frostlang$frostc$FixedArray* $tmp3790 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3790));
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block135:;
frost$core$Int $tmp3791 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3792 = $tmp3009.value;
int64_t $tmp3793 = $tmp3791.value;
bool $tmp3794 = $tmp3792 == $tmp3793;
frost$core$Bit $tmp3795 = (frost$core$Bit) {$tmp3794};
bool $tmp3796 = $tmp3795.value;
if ($tmp3796) goto block137; else goto block138;
block137:;
org$frostlang$frostc$Position* $tmp3797 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3798 = *$tmp3797;
*(&local134) = $tmp3798;
org$frostlang$frostc$FixedArray** $tmp3799 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3800 = *$tmp3799;
*(&local135) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3800));
org$frostlang$frostc$FixedArray* $tmp3801 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3801));
*(&local135) = $tmp3800;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3802 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3802));
org$frostlang$frostc$FixedArray* $tmp3803 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3803));
*(&local135) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block138:;
frost$core$Int $tmp3804 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3805 = $tmp3009.value;
int64_t $tmp3806 = $tmp3804.value;
bool $tmp3807 = $tmp3805 == $tmp3806;
frost$core$Bit $tmp3808 = (frost$core$Bit) {$tmp3807};
bool $tmp3809 = $tmp3808.value;
if ($tmp3809) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp3810 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3811 = *$tmp3810;
*(&local136) = $tmp3811;
frost$core$String** $tmp3812 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3813 = *$tmp3812;
*(&local137) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
frost$core$String* $tmp3814 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3814));
*(&local137) = $tmp3813;
// <no location>
frost$core$String* $tmp3815 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3815));
frost$core$String* $tmp3816 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
*(&local137) = ((frost$core$String*) NULL);
goto block1;
block141:;
frost$core$Int $tmp3817 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3818 = $tmp3009.value;
int64_t $tmp3819 = $tmp3817.value;
bool $tmp3820 = $tmp3818 == $tmp3819;
frost$core$Bit $tmp3821 = (frost$core$Bit) {$tmp3820};
bool $tmp3822 = $tmp3821.value;
if ($tmp3822) goto block143; else goto block144;
block143:;
org$frostlang$frostc$Position* $tmp3823 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3824 = *$tmp3823;
*(&local138) = $tmp3824;
org$frostlang$frostc$FixedArray** $tmp3825 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3826 = *$tmp3825;
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3826));
org$frostlang$frostc$FixedArray* $tmp3827 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3827));
*(&local139) = $tmp3826;
org$frostlang$frostc$ASTNode** $tmp3828 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3829 = *$tmp3828;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
org$frostlang$frostc$ASTNode* $tmp3830 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
*(&local140) = $tmp3829;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3831 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3832 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3832));
org$frostlang$frostc$ASTNode* $tmp3833 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3833));
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3834 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block144:;
frost$core$Int $tmp3835 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3836 = $tmp3009.value;
int64_t $tmp3837 = $tmp3835.value;
bool $tmp3838 = $tmp3836 == $tmp3837;
frost$core$Bit $tmp3839 = (frost$core$Bit) {$tmp3838};
bool $tmp3840 = $tmp3839.value;
if ($tmp3840) goto block146; else goto block147;
block146:;
org$frostlang$frostc$Position* $tmp3841 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3842 = *$tmp3841;
*(&local141) = $tmp3842;
frost$core$String** $tmp3843 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3844 = *$tmp3843;
*(&local142) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3844));
frost$core$String* $tmp3845 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3845));
*(&local142) = $tmp3844;
org$frostlang$frostc$ASTNode** $tmp3846 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3847 = *$tmp3846;
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
org$frostlang$frostc$ASTNode* $tmp3848 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
*(&local143) = $tmp3847;
// <no location>
frost$core$String* $tmp3849 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3849));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3850 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3850));
org$frostlang$frostc$ASTNode* $tmp3851 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3851));
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3852 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
*(&local142) = ((frost$core$String*) NULL);
goto block1;
block147:;
frost$core$Int $tmp3853 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3854 = $tmp3009.value;
int64_t $tmp3855 = $tmp3853.value;
bool $tmp3856 = $tmp3854 == $tmp3855;
frost$core$Bit $tmp3857 = (frost$core$Bit) {$tmp3856};
bool $tmp3858 = $tmp3857.value;
if ($tmp3858) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Position* $tmp3859 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3860 = *$tmp3859;
*(&local144) = $tmp3860;
org$frostlang$frostc$expression$Unary$Operator* $tmp3861 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp3862 = *$tmp3861;
*(&local145) = $tmp3862;
org$frostlang$frostc$ASTNode** $tmp3863 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3864 = *$tmp3863;
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3864));
org$frostlang$frostc$ASTNode* $tmp3865 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
*(&local146) = $tmp3864;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3866 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3866));
org$frostlang$frostc$ASTNode* $tmp3867 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3867));
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block150:;
frost$core$Int $tmp3868 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3869 = $tmp3009.value;
int64_t $tmp3870 = $tmp3868.value;
bool $tmp3871 = $tmp3869 == $tmp3870;
frost$core$Bit $tmp3872 = (frost$core$Bit) {$tmp3871};
bool $tmp3873 = $tmp3872.value;
if ($tmp3873) goto block152; else goto block153;
block152:;
org$frostlang$frostc$Position* $tmp3874 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3875 = *$tmp3874;
*(&local147) = $tmp3875;
org$frostlang$frostc$ASTNode** $tmp3876 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3877 = *$tmp3876;
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
org$frostlang$frostc$ASTNode* $tmp3878 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
*(&local148) = $tmp3877;
// <no location>
org$frostlang$frostc$ASTNode* $tmp3879 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3879));
org$frostlang$frostc$ASTNode* $tmp3880 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block153:;
frost$core$Int $tmp3881 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3882 = $tmp3009.value;
int64_t $tmp3883 = $tmp3881.value;
bool $tmp3884 = $tmp3882 == $tmp3883;
frost$core$Bit $tmp3885 = (frost$core$Bit) {$tmp3884};
bool $tmp3886 = $tmp3885.value;
if ($tmp3886) goto block155; else goto block156;
block155:;
org$frostlang$frostc$Position* $tmp3887 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3888 = *$tmp3887;
*(&local149) = $tmp3888;
org$frostlang$frostc$FixedArray** $tmp3889 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3890 = *$tmp3889;
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3890));
org$frostlang$frostc$FixedArray* $tmp3891 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3891));
*(&local150) = $tmp3890;
org$frostlang$frostc$ASTNode** $tmp3892 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3893 = *$tmp3892;
*(&local151) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3893));
org$frostlang$frostc$ASTNode* $tmp3894 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
*(&local151) = $tmp3893;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3895 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3895));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3896 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3896));
org$frostlang$frostc$ASTNode* $tmp3897 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3897));
*(&local151) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3898 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3898));
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block156:;
frost$core$Int $tmp3899 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3900 = $tmp3009.value;
int64_t $tmp3901 = $tmp3899.value;
bool $tmp3902 = $tmp3900 == $tmp3901;
frost$core$Bit $tmp3903 = (frost$core$Bit) {$tmp3902};
bool $tmp3904 = $tmp3903.value;
if ($tmp3904) goto block158; else goto block159;
block158:;
org$frostlang$frostc$Position* $tmp3905 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3906 = *$tmp3905;
*(&local152) = $tmp3906;
frost$core$String** $tmp3907 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3908 = *$tmp3907;
*(&local153) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
frost$core$String* $tmp3909 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3909));
*(&local153) = $tmp3908;
// <no location>
frost$core$String* $tmp3910 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3910));
frost$core$String* $tmp3911 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
*(&local153) = ((frost$core$String*) NULL);
goto block1;
block159:;
frost$core$Int $tmp3912 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3913 = $tmp3009.value;
int64_t $tmp3914 = $tmp3912.value;
bool $tmp3915 = $tmp3913 == $tmp3914;
frost$core$Bit $tmp3916 = (frost$core$Bit) {$tmp3915};
bool $tmp3917 = $tmp3916.value;
if ($tmp3917) goto block161; else goto block162;
block161:;
org$frostlang$frostc$Position* $tmp3918 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3919 = *$tmp3918;
*(&local154) = $tmp3919;
org$frostlang$frostc$Variable$Kind* $tmp3920 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp3921 = *$tmp3920;
*(&local155) = $tmp3921;
org$frostlang$frostc$FixedArray** $tmp3922 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3923 = *$tmp3922;
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3923));
org$frostlang$frostc$FixedArray* $tmp3924 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3924));
*(&local156) = $tmp3923;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3925 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3925));
org$frostlang$frostc$FixedArray* $tmp3926 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3926));
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block162:;
frost$core$Int $tmp3927 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3928 = $tmp3009.value;
int64_t $tmp3929 = $tmp3927.value;
bool $tmp3930 = $tmp3928 == $tmp3929;
frost$core$Bit $tmp3931 = (frost$core$Bit) {$tmp3930};
bool $tmp3932 = $tmp3931.value;
if ($tmp3932) goto block164; else goto block165;
block164:;
org$frostlang$frostc$Position* $tmp3933 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3934 = *$tmp3933;
*(&local157) = $tmp3934;
org$frostlang$frostc$FixedArray** $tmp3935 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3936 = *$tmp3935;
*(&local158) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3936));
org$frostlang$frostc$FixedArray* $tmp3937 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3937));
*(&local158) = $tmp3936;
org$frostlang$frostc$FixedArray** $tmp3938 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3939 = *$tmp3938;
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
org$frostlang$frostc$FixedArray* $tmp3940 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3940));
*(&local159) = $tmp3939;
// <no location>
org$frostlang$frostc$FixedArray* $tmp3941 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3941));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3942 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3942));
org$frostlang$frostc$FixedArray* $tmp3943 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3943));
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3944 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3944));
*(&local158) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block165:;
frost$core$Int $tmp3945 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ASTNode.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3946 = $tmp3009.value;
int64_t $tmp3947 = $tmp3945.value;
bool $tmp3948 = $tmp3946 == $tmp3947;
frost$core$Bit $tmp3949 = (frost$core$Bit) {$tmp3948};
bool $tmp3950 = $tmp3949.value;
if ($tmp3950) goto block167; else goto block1;
block167:;
org$frostlang$frostc$Position* $tmp3951 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3952 = *$tmp3951;
*(&local160) = $tmp3952;
frost$core$String** $tmp3953 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp3954 = *$tmp3953;
*(&local161) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
frost$core$String* $tmp3955 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3955));
*(&local161) = $tmp3954;
org$frostlang$frostc$ASTNode** $tmp3956 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3957 = *$tmp3956;
*(&local162) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3957));
org$frostlang$frostc$ASTNode* $tmp3958 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
*(&local162) = $tmp3957;
org$frostlang$frostc$FixedArray** $tmp3959 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp3960 = *$tmp3959;
*(&local163) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3960));
org$frostlang$frostc$FixedArray* $tmp3961 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3961));
*(&local163) = $tmp3960;
// <no location>
frost$core$String* $tmp3962 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3962));
// <no location>
org$frostlang$frostc$ASTNode* $tmp3963 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3963));
// <no location>
org$frostlang$frostc$FixedArray* $tmp3964 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
org$frostlang$frostc$FixedArray* $tmp3965 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
*(&local163) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3966 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
*(&local162) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3967 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3967));
*(&local161) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3968 = &param0->$rawValue;
*$tmp3968 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp3969 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3969 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3970 = (frost$core$String**) (param0->$data + 24);
*$tmp3970 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3971 = (frost$core$String**) (param0->$data + 32);
*$tmp3971 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3972 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp3972 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3973 = &param0->$rawValue;
*$tmp3973 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp3974 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3974 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3975 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3975 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3976 = &param0->$rawValue;
*$tmp3976 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp3977 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3977 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3978 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3978 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3979 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3979 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3980 = &param0->$rawValue;
*$tmp3980 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp3981 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3981 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3982 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3982 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3983 = &param0->$rawValue;
*$tmp3983 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp3984 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3984 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3985 = &param0->$rawValue;
*$tmp3985 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp3986 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3986 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3987 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3987 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$expression$Binary$Operator* $tmp3988 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 32);
*$tmp3988 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3989 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp3989 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3990 = &param0->$rawValue;
*$tmp3990 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp3991 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3991 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Bit* $tmp3992 = (frost$core$Bit*) (param0->$data + 24);
*$tmp3992 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3993 = &param0->$rawValue;
*$tmp3993 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp3994 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3994 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3995 = (frost$core$String**) (param0->$data + 24);
*$tmp3995 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp3996 = &param0->$rawValue;
*$tmp3996 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp3997 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3997 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3998 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3998 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3999 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3999 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4000 = &param0->$rawValue;
*$tmp4000 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4001 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4001 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4002 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4002 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp4003 = (frost$core$String**) (param0->$data + 32);
*$tmp4003 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4004 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4004 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4005 = &param0->$rawValue;
*$tmp4005 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4006 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4006 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4007 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4007 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp4008 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 32);
*$tmp4008 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4009 = (frost$core$Int*) (param0->$data + 40);
*$tmp4009 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4010 = &param0->$rawValue;
*$tmp4010 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4011 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4011 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4012 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4012 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4013 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4013 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$ClassDecl$Kind* $tmp4014 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 40);
*$tmp4014 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp4015 = (frost$core$String**) (param0->$data + 48);
*$tmp4015 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp4016 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp4016 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp4017 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp4017 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp4018 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp4018 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4019 = &param0->$rawValue;
*$tmp4019 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4020 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4020 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4021 = (frost$core$String**) (param0->$data + 24);
*$tmp4021 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4022 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4022 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4023 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4023 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4024 = &param0->$rawValue;
*$tmp4024 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4025 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4025 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4026 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4026 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp4027 = (frost$core$String**) (param0->$data + 32);
*$tmp4027 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4028 = &param0->$rawValue;
*$tmp4028 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4029 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4029 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4030 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4030 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp4031 = (frost$core$String**) (param0->$data + 32);
*$tmp4031 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4032 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4032 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4033 = &param0->$rawValue;
*$tmp4033 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4034 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4034 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4035 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4035 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4036 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4036 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4037 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4037 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$FixedArray* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4038 = &param0->$rawValue;
*$tmp4038 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp4039 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp4039 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4040 = &param0->$rawValue;
*$tmp4040 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4041 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4041 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4042 = (frost$core$String**) (param0->$data + 24);
*$tmp4042 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4043 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4043 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4044 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4044 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp4045 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp4045 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4046 = &param0->$rawValue;
*$tmp4046 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4047 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4047 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4048 = (frost$core$String**) (param0->$data + 24);
*$tmp4048 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4049 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4049 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4050 = &param0->$rawValue;
*$tmp4050 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4051 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4051 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4052 = (frost$core$String**) (param0->$data + 24);
*$tmp4052 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4053 = &param0->$rawValue;
*$tmp4053 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4054 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4054 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4055 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4055 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4056 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4056 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4057 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4057 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4058 = &param0->$rawValue;
*$tmp4058 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4059 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4059 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$UInt64* $tmp4060 = (frost$core$UInt64*) (param0->$data + 24);
*$tmp4060 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4061 = &param0->$rawValue;
*$tmp4061 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4062 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4062 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp4063 = (org$frostlang$frostc$IR$Value**) (param0->$data + 24);
*$tmp4063 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4064 = &param0->$rawValue;
*$tmp4064 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4065 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4065 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4066 = (frost$core$String**) (param0->$data + 24);
*$tmp4066 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4067 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4067 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4068 = &param0->$rawValue;
*$tmp4068 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4069 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4069 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4070 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4070 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4071 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4071 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4072 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4072 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4073 = &param0->$rawValue;
*$tmp4073 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4074 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4074 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4075 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4075 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4076 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4076 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$MethodDecl$Kind* $tmp4077 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 40);
*$tmp4077 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp4078 = (frost$core$String**) (param0->$data + 48);
*$tmp4078 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp4079 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp4079 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp4080 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp4080 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp4081 = (org$frostlang$frostc$ASTNode**) (param0->$data + 72);
*$tmp4081 = param9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp4082 = (org$frostlang$frostc$FixedArray**) (param0->$data + 80);
*$tmp4082 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4083 = &param0->$rawValue;
*$tmp4083 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4084 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4084 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$parser$Token$Kind* $tmp4085 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
*$tmp4085 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4086 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4086 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4087 = (org$frostlang$frostc$ASTNode**) (param0->$data + 40);
*$tmp4087 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4088 = &param0->$rawValue;
*$tmp4088 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4089 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4089 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4090 = (frost$core$String**) (param0->$data + 24);
*$tmp4090 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4091 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4091 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4092 = &param0->$rawValue;
*$tmp4092 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4093 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4093 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4094 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4094 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Bit* $tmp4095 = (frost$core$Bit*) (param0->$data + 32);
*$tmp4095 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp4096 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp4096 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp4097 = (org$frostlang$frostc$ASTNode**) (param0->$data + 41);
*$tmp4097 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4098 = &param0->$rawValue;
*$tmp4098 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4099 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4099 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Real64* $tmp4100 = (frost$core$Real64*) (param0->$data + 24);
*$tmp4100 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4101 = &param0->$rawValue;
*$tmp4101 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4102 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4102 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp4103 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp4103 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4104 = &param0->$rawValue;
*$tmp4104 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4105 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4105 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp4106 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp4106 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4107 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4107 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4108 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4108 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4109 = &param0->$rawValue;
*$tmp4109 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4110 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4110 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp4111 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp4111 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4112 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4112 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4113 = &param0->$rawValue;
*$tmp4113 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4114 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4114 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4115 = (frost$core$String**) (param0->$data + 24);
*$tmp4115 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4116 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4116 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$expression$Unary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4117 = &param0->$rawValue;
*$tmp4117 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4118 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4118 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$expression$Unary$Operator* $tmp4119 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 24);
*$tmp4119 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4120 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4120 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4121 = &param0->$rawValue;
*$tmp4121 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4122 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4122 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Variable$Kind* $tmp4123 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 24);
*$tmp4123 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4124 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4124 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4125 = &param0->$rawValue;
*$tmp4125 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4126 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4126 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp4127 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp4127 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp4128 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp4128 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Int* $tmp4129 = &param0->$rawValue;
*$tmp4129 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
org$frostlang$frostc$Position* $tmp4130 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp4130 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp4131 = (frost$core$String**) (param0->$data + 24);
*$tmp4131 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp4132 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp4132 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp4133 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp4133 = param5;
return;

}

